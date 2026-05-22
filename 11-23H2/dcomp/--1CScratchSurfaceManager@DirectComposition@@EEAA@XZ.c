/*
 * XREFs of ??1CScratchSurfaceManager@DirectComposition@@EEAA@XZ @ 0x18001B434
 * Callers:
 *     ??_ECScratchSurfaceManager@DirectComposition@@EEAAPEAXI@Z @ 0x18001B2A0 (--_ECScratchSurfaceManager@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180021458 (-CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 */

void __fastcall DirectComposition::CScratchSurfaceManager::~CScratchSurfaceManager(
        DirectComposition::CScratchSurfaceManager *this)
{
  *(_QWORD *)this = &DirectComposition::CScratchSurfaceManager::`vftable';
  DirectComposition::CScratchSurfaceManager::CollectScratchSurfaces(this, 1);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 24);
}
