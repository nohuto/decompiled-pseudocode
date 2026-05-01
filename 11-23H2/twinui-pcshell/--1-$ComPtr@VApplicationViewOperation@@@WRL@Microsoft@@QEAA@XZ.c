/*
 * XREFs of ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x1803EC3EC
 * Callers:
 *     _CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured_::_1_::dtor$0 @ 0x1802BBF94 (_CDesktopPositioner--CreateAppViewOperationWithTitleBarAndChromeConfigured_--_1_--dtor$0.c)
 *     _FullScreenPositioner::PositionView_::_1_::dtor$1 @ 0x1803EDD32 (_FullScreenPositioner--PositionView_--_1_--dtor$1.c)
 *     _FullScreenPositioner::SetViewStateForDesiredAppState_::_1_::dtor$1 @ 0x1803EE2D5 (_FullScreenPositioner--SetViewStateForDesiredAppState_--_1_--dtor$1.c)
 *     _HolographicPositioner::_EnsureHolographicViewConfiguration_::_1_::dtor$1 @ 0x1804AE4FB (_HolographicPositioner--_EnsureHolographicViewConfiguration_--_1_--dtor$1.c)
 *     _HolographicPositioner::_TransitionViewFromHolographic_::_1_::dtor$2 @ 0x1804B07F4 (_HolographicPositioner--_TransitionViewFromHolographic_--_1_--dtor$2.c)
 *     _SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange_::_1_::dtor$0 @ 0x1805A6375 (_SurfaceHubPositioner--_RepositionAppViewsOnWorkAreaChange_--_1_--dtor$0.c)
 *     _SurfaceHubPositioner::_SetDefaultLayout_::_1_::dtor$1 @ 0x1805A6695 (_SurfaceHubPositioner--_SetDefaultLayout_--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x1805A6BBF (_wil--MakeAndInitializeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     __lambda_530794d7bfa81a060c48b0654fb85d7f_::operator()_::_1_::dtor$0 @ 0x1805A7511 (__lambda_530794d7bfa81a060c48b0654fb85d7f_--operator()_--_1_--dtor$0.c)
 *     _KioskPositioner::CreateApplicationViewOperation_::_1_::dtor$1 @ 0x1805A7D37 (_KioskPositioner--CreateApplicationViewOperation_--_1_--dtor$1.c)
 *     _VoiceAssistantPositioner::SetViewStateForDesiredAppState_::_1_::dtor$2 @ 0x1805AE2C9 (_VoiceAssistantPositioner--SetViewStateForDesiredAppState_--_1_--dtor$2.c)
 *     _CDesktopPositioner::DragCompleted_::_1_::dtor$4 @ 0x1805B36AC (_CDesktopPositioner--DragCompleted_--_1_--dtor$4.c)
 *     _CDesktopPositioner::PositionViewWithOptions_::_1_::dtor$0_0 @ 0x1805B4331 (_CDesktopPositioner--PositionViewWithOptions_--_1_--dtor$0_0.c)
 *     _CDesktopPositioner::PresentationChangedForView_::_1_::dtor$3 @ 0x1805B45F5 (_CDesktopPositioner--PresentationChangedForView_--_1_--dtor$3.c)
 *     _CDesktopPositioner::ResizeView_::_1_::dtor$0 @ 0x1805B48D7 (_CDesktopPositioner--ResizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_MinimizeView_::_1_::dtor$0 @ 0x1805B5AF3 (_CDesktopPositioner--_MinimizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_RestoreView_::_1_::dtor$0 @ 0x1805B5D07 (_CDesktopPositioner--_RestoreView_--_1_--dtor$0.c)
 *     _TabletModePositioner::CreateAndInitApplicationViewOperation_::_1_::dtor$0 @ 0x1805BB219 (_TabletModePositioner--CreateAndInitApplicationViewOperation_--_1_--dtor$0.c)
 *     _SnapServiceProvider::HandleDesktopModeSnapping_::_1_::dtor$0 @ 0x18066ED24 (_SnapServiceProvider--HandleDesktopModeSnapping_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
}
