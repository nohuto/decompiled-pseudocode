/*
 * XREFs of ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x18031E33C
 * Callers:
 *     _CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured_::_1_::dtor$0 @ 0x18021DC98 (_CDesktopPositioner--CreateAppViewOperationWithTitleBarAndChromeConfigured_--_1_--dtor$0.c)
 *     _FullScreenPositioner::ApplyPendingPositioningOperations_::_1_::dtor$0 @ 0x18031EA95 (_FullScreenPositioner--ApplyPendingPositioningOperations_--_1_--dtor$0.c)
 *     _FullScreenPositioner::PositionView_::_1_::dtor$1 @ 0x180320425 (_FullScreenPositioner--PositionView_--_1_--dtor$1.c)
 *     _FullScreenPositioner::SetViewStateForDesiredAppState_::_1_::dtor$1 @ 0x180320A95 (_FullScreenPositioner--SetViewStateForDesiredAppState_--_1_--dtor$1.c)
 *     _HolographicPositioner::_EnsureHolographicViewConfiguration_::_1_::dtor$1 @ 0x1803D161F (_HolographicPositioner--_EnsureHolographicViewConfiguration_--_1_--dtor$1.c)
 *     _HolographicPositioner::_TransitionViewFromHolographic_::_1_::dtor$2 @ 0x1803D3928 (_HolographicPositioner--_TransitionViewFromHolographic_--_1_--dtor$2.c)
 *     _SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange_::_1_::dtor$0 @ 0x1804EE322 (_SurfaceHubPositioner--_RepositionAppViewsOnWorkAreaChange_--_1_--dtor$0.c)
 *     _SurfaceHubPositioner::_SetDefaultLayout_::_1_::dtor$1 @ 0x1804EE5E0 (_SurfaceHubPositioner--_SetDefaultLayout_--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x1804EECCF (_wil--MakeAndInitializeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     __lambda_530794d7bfa81a060c48b0654fb85d7f_::operator()_::_1_::dtor$0 @ 0x1804EF5E1 (__lambda_530794d7bfa81a060c48b0654fb85d7f_--operator()_--_1_--dtor$0.c)
 *     _KioskPositioner::CreateApplicationViewOperation_::_1_::dtor$1 @ 0x1804EFF2A (_KioskPositioner--CreateApplicationViewOperation_--_1_--dtor$1.c)
 *     _VoiceAssistantPositioner::SetViewStateForDesiredAppState_::_1_::dtor$2 @ 0x1804F65E9 (_VoiceAssistantPositioner--SetViewStateForDesiredAppState_--_1_--dtor$2.c)
 *     _CDesktopPositioner::DragCompleted_::_1_::dtor$4 @ 0x1804FB4AB (_CDesktopPositioner--DragCompleted_--_1_--dtor$4.c)
 *     _CDesktopPositioner::PositionViewWithOptions_::_1_::dtor$0_0 @ 0x1804FBF51 (_CDesktopPositioner--PositionViewWithOptions_--_1_--dtor$0_0.c)
 *     _CDesktopPositioner::PresentationChangedForView_::_1_::dtor$3 @ 0x1804FC210 (_CDesktopPositioner--PresentationChangedForView_--_1_--dtor$3.c)
 *     _CDesktopPositioner::ResizeView_::_1_::dtor$0 @ 0x1804FC4F7 (_CDesktopPositioner--ResizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_MinimizeView_::_1_::dtor$0 @ 0x1804FD2A7 (_CDesktopPositioner--_MinimizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_RestoreView_::_1_::dtor$0 @ 0x1804FD4BB (_CDesktopPositioner--_RestoreView_--_1_--dtor$0.c)
 *     _TabletModePositioner::CreateAndInitApplicationViewOperation_::_1_::dtor$0 @ 0x180502A79 (_TabletModePositioner--CreateAndInitApplicationViewOperation_--_1_--dtor$0.c)
 *     _SnapServiceProvider::HandleDesktopModeSnapping_::_1_::dtor$0 @ 0x18059F93C (_SnapServiceProvider--HandleDesktopModeSnapping_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
}
