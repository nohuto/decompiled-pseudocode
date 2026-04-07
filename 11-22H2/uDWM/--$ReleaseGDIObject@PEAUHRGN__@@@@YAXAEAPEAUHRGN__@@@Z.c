/*
 * XREFs of ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x1800B3A9C
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001ACB4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800C9654 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800C9B58 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReleaseGDIObject<HRGN__ *>(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = DeleteObject(v2);
    *a1 = 0LL;
  }
  return result;
}
