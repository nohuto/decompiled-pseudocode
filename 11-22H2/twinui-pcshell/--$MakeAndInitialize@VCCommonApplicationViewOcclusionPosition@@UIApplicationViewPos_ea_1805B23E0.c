/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1805B23E0
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180075858 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180075EAC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1805B51A0 (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
        __int64 *a1,
        unsigned int *a2,
        _OWORD *a3)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
           (void **)a1,
           a2,
           a3);
}
