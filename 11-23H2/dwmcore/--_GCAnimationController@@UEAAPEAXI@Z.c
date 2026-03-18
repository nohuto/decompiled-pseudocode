/*
 * XREFs of ??_GCAnimationController@@UEAAPEAXI@Z @ 0x180022B60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAnimationController@@UEAA@XZ @ 0x180022BA4 (--1CAnimationController@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CAnimationController *__fastcall CAnimationController::`scalar deleting destructor'(
        CAnimationController *this,
        char a2)
{
  CAnimationController::~CAnimationController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x80uLL);
    else
      operator delete(this);
  }
  return this;
}
