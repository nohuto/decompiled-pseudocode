/*
 * XREFs of ?RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z @ 0x1800FBB88
 * Callers:
 *     ?RemoveDeadSurfaces@CDevice@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@@Z @ 0x1800F3FD0 (-RemoveDeadSurfaces@CDevice@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@@Z.c)
 * Callees:
 *     ?CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z @ 0x180019440 (-CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z.c)
 *     ?RecordUtilizationInfo@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x1800194B8 (-RecordUtilizationInfo@CSurfaceManager@DirectComposition@@QEAAXXZ.c)
 *     ?CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180021458 (-CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 *     ?CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x180024398 (-CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?TrimPools@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x1800F7D60 (-TrimPools@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?TrimLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAXXZ @ 0x1800FBD28 (-TrimLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CSurfaceFactory::RemoveDeadSurfaces(
        DirectComposition::CSurfaceFactory *this,
        struct DirectComposition::SurfaceRequestStruct *a2,
        bool a3)
{
  DirectComposition::CDynamicPoolSet **v6; // rbx
  DirectComposition::CDynamicPoolSet *v7; // rcx

  if ( !*((_BYTE *)this + 355) || a2 )
  {
    DirectComposition::CScratchSurfaceManager::CollectScratchSurfaces(
      *((DirectComposition::CScratchSurfaceManager **)this + 38),
      0);
    DirectComposition::CSurfaceManager::CollectDeadSurfaces(
      *((DirectComposition::CDynamicPoolSet ***)this + 39),
      1,
      a2,
      a3);
  }
  else
  {
    DirectComposition::CScratchSurfaceManager::CollectScratchSurfaces(
      *((DirectComposition::CScratchSurfaceManager **)this + 38),
      1);
    v6 = (DirectComposition::CDynamicPoolSet **)*((_QWORD *)this + 39);
    DirectComposition::CSurfaceManager::RecordUtilizationInfo((DirectComposition::CSurfaceManager *)v6);
    v7 = v6[2];
    if ( v7 )
    {
      DirectComposition::CDynamicPoolSet::CollectDeadSurfaces(v7);
      DirectComposition::CDynamicPoolSet::TrimPools(v6[2]);
    }
    DirectComposition::CSurfaceManager::TrimLargeSurfaces((DirectComposition::CSurfaceManager *)v6);
  }
}
