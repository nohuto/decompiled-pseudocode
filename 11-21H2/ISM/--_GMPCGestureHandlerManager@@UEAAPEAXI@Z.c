/*
 * XREFs of ??_GMPCGestureHandlerManager@@UEAAPEAXI@Z @ 0x180091F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x180091E50 (--1MPCGestureHandlerManager@@UEAA@XZ.c)
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
