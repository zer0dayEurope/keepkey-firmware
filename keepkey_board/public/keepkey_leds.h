/******************************************************************************
    Copyright (c) __20xx __Client_Name. All rights reserved.
    Developed for __Client_Name by Carbon Design Group.
******************************************************************************/

/// @file keepkey_leds.h


//============================= CONDITIONALS ==================================


#ifndef keepkey_leds_H
#define keepkey_leds_H

#ifdef __cplusplus
extern "C" {
#endif


//=============================== INCLUDES ====================================


#include <stdint.h>
#include "canvas.h"


//====================== CONSTANTS, TYPES, AND MACROS =========================


//=============================== VARIABLES ===================================


//=============================== FUNCTIONS ===================================


//-----------------------------------------------------------------------------
/// 
///
//-----------------------------------------------------------------------------
void keepkey_leds_init( void);


//-----------------------------------------------------------------------------
/// 
///
//-----------------------------------------------------------------------------
void set_green( void);


//-----------------------------------------------------------------------------
/// 
///
//-----------------------------------------------------------------------------
void clear_green( void);


//-----------------------------------------------------------------------------
/// 
///
//-----------------------------------------------------------------------------
void toggle_green( void); 

//-----------------------------------------------------------------------------
/// 
///
//-----------------------------------------------------------------------------
void set_red( void);


//-----------------------------------------------------------------------------
/// 
///
//-----------------------------------------------------------------------------
void clear_red( void);


//-----------------------------------------------------------------------------
/// 
///
//-----------------------------------------------------------------------------
void toggle_red( void);


#ifdef __cplusplus
}
#endif

#endif // keepkey_leds_H
