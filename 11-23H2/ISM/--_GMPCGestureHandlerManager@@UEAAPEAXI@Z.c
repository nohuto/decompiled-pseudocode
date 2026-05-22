/*
 * XREFs of ??_GMPCGestureHandlerManager@@UEAAPEAXI@Z @ 0x1800A85D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x1800A8520 (--1MPCGestureHandlerManager@@UEAA@XZ.c)
 */

MPCGestureHandlerManager *__fastcall MPCGestureHandlerManager::`scalar deleting destructor'(
        MPCGestureHandlerManager *this,
        char a2)
{
  MPCGestureHandlerManager::~MPCGestureHandlerManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
