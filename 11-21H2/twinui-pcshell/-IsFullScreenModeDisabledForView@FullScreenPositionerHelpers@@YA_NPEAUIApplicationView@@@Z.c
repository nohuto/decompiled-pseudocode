/*
 * XREFs of ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180321534
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FD200 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180322110 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180098CEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@detail.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180098D74 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

bool __fastcall FullScreenPositionerHelpers::IsFullScreenModeDisabledForView(
        FullScreenPositionerHelpers *this,
        struct IApplicationView *a2,
        __int64 a3,
        __int64 a4)
{
  struct IApplicationView *v5; // rdx
  HWND CoreWindowForView; // rax

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  CoreWindowForView = (HWND)ApplicationViewHelpers::GetCoreWindowForView(this, v5);
  return GetPropW(CoreWindowForView, L"Windows.ImmersiveShell.DisableFullScreenMode") != 0LL;
}
