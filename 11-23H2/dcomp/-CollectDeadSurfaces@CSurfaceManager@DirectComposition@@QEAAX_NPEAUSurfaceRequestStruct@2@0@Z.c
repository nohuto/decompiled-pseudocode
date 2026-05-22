/*
 * XREFs of ?CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z @ 0x180019440
 * Callers:
 *     ?OfferSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJXZ @ 0x180019670 (-OfferSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJXZ.c)
 *     ?RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z @ 0x1800FBB88 (-RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z.c)
 * Callees:
 *     ?RecordUtilizationInfo@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x1800194B8 (-RecordUtilizationInfo@CSurfaceManager@DirectComposition@@QEAAXXZ.c)
 *     ?DiscardAgedPools@CDynamicPoolSet@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@@Z @ 0x18001FD40 (-DiscardAgedPools@CDynamicPoolSet@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@@Z.c)
 *     ?CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z @ 0x1800214A8 (-CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z.c)
 *     ?CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x180024398 (-CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CSurfaceManager::CollectDeadSurfaces(
        DirectComposition::CDynamicPoolSet **this,
        bool a2,
        struct DirectComposition::SurfaceRequestStruct *a3,
        bool a4)
{
  DirectComposition::CDynamicPoolSet *v8; // rcx

  DirectComposition::CSurfaceManager::RecordUtilizationInfo((DirectComposition::CSurfaceManager *)this);
  if ( a4 )
  {
    v8 = this[2];
    if ( v8 )
    {
      DirectComposition::CDynamicPoolSet::CollectDeadSurfaces(v8);
      DirectComposition::CDynamicPoolSet::DiscardAgedPools(this[2], a2, a3);
    }
  }
  DirectComposition::CSurfaceManager::CollectLargeSurfaces((DirectComposition::CSurfaceManager *)this, 0, a2, a3, a4);
}
