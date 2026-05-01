/*
 * XREFs of ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180044818
 * Callers:
 *     ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180044540 (-ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B8114 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1803EF780 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 * Callees:
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180044860 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800449EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@detail.c)
 */

bool __fastcall FullScreenPositionerHelpers::IsFullScreenModeDisabledForView(
        FullScreenPositionerHelpers *this,
        struct IApplicationView *a2)
{
  struct IApplicationView *v3; // rdx
  HWND CoreWindowForView; // rax

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetImpl'::`2'::impl,
    a2);
  CoreWindowForView = ApplicationViewHelpers::GetCoreWindowForView(this, v3);
  return GetPropW(CoreWindowForView, L"Windows.ImmersiveShell.DisableFullScreenMode") != 0LL;
}
