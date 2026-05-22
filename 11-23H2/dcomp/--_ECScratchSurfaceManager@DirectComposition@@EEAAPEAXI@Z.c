/*
 * XREFs of ??_ECScratchSurfaceManager@DirectComposition@@EEAAPEAXI@Z @ 0x18001B2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CScratchSurfaceManager@DirectComposition@@EEAA@XZ @ 0x18001B434 (--1CScratchSurfaceManager@DirectComposition@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CScratchSurfaceManager *__fastcall DirectComposition::CScratchSurfaceManager::`vector deleting destructor'(
        DirectComposition::CScratchSurfaceManager *this,
        char a2)
{
  DirectComposition::CScratchSurfaceManager::~CScratchSurfaceManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x38uLL);
    else
      operator delete(this);
  }
  return this;
}
