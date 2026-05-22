/*
 * XREFs of ??_EMPCGestureHandler@@UEAAPEAXI@Z @ 0x1800BAB30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800BA974 (--1MPCGestureHandler@@UEAA@XZ.c)
 */

MPCGestureHandler *__fastcall MPCGestureHandler::`vector deleting destructor'(MPCGestureHandler *this, char a2)
{
  MPCGestureHandler::~MPCGestureHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
