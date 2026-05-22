/*
 * XREFs of ?IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ @ 0x18001FE50
 * Callers:
 *     ?RequestSurfaceOnPool@CDynamicPoolSet@DirectComposition@@AEAAJPEAVCDynamicPool@2@AEBVSizeU@2@11W4DXGI_FORMAT@@_N33PEAPEAVCAtlasSurface@2@@Z @ 0x18001FC94 (-RequestSurfaceOnPool@CDynamicPoolSet@DirectComposition@@AEAAJPEAVCDynamicPool@2@AEBVSizeU@2@11W.c)
 *     ?DiscardAgedPools@CDynamicPoolSet@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@@Z @ 0x18001FD40 (-DiscardAgedPools@CDynamicPoolSet@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@@Z.c)
 *     ?CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z @ 0x1800214A8 (-CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?ReleaseOldestAvailableDynamicPool@CDynamicPoolSet@DirectComposition@@QEAA_NXZ @ 0x180039708 (-ReleaseOldestAvailableDynamicPool@CDynamicPoolSet@DirectComposition@@QEAA_NXZ.c)
 *     ?HasAged@CAtlasSurfacePool@DirectComposition@@QEBA_NK@Z @ 0x1800E92C8 (-HasAged@CAtlasSurfacePool@DirectComposition@@QEBA_NK@Z.c)
 *     ?TrimPools@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x1800F7D60 (-TrimPools@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAtlasSurfacePool::IsAvailable(DirectComposition::CAtlasSurfacePool *this)
{
  if ( (*((_BYTE *)this + 172) & 1) != 0 )
    return *((_QWORD *)this + 23) == 0LL;
  else
    return *((_DWORD *)this + 34) == 0;
}
