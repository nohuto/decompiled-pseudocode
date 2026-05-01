/*
 * XREFs of ??1?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@QEAA@XZ @ 0x1805970E4
 * Callers:
 *     _ActivateApplicationForExperienceWithPropertySet_::_1_::dtor$1 @ 0x1802BB4A3 (_ActivateApplicationForExperienceWithPropertySet_--_1_--dtor$1.c)
 *     _TabletModePositioner::ApplyLayoutOperationHelper_::_1_::dtor$7 @ 0x1805B9978 (_TabletModePositioner--ApplyLayoutOperationHelper_--_1_--dtor$7.c)
 *     _TabletModeViewManager::StartSwipeHelper_::_1_::dtor$6 @ 0x1805C4E71 (_TabletModeViewManager--StartSwipeHelper_--_1_--dtor$6.c)
 *     _TabletModeViewManager::UpdateLayoutItemsSizeConstraints_::_1_::dtor$1 @ 0x1805C5229 (_TabletModeViewManager--UpdateLayoutItemsSizeConstraints_--_1_--dtor$1.c)
 *     _TabletModePositionerOperation::SwitchToCustomLayout_::_1_::dtor$1 @ 0x1805CBF06 (_TabletModePositionerOperation--SwitchToCustomLayout_--_1_--dtor$1.c)
 *     _PPILayoutOperation::FindLeastRecentlyActivatedItem_::_1_::dtor$0 @ 0x1805CC6C2 (_PPILayoutOperation--FindLeastRecentlyActivatedItem_--_1_--dtor$0.c)
 *     _PPIWin32VtcLayoutOperation::_EnumerateAppsInLayout_::_1_::dtor$1 @ 0x1805CEA59 (_PPIWin32VtcLayoutOperation--_EnumerateAppsInLayout_--_1_--dtor$1.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$3 @ 0x1805D1241 (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$3.c)
 *     _WindowArrangementView::EnablePlaceModeDropFeedback_::_1_::dtor$2 @ 0x1805D1AF1 (_WindowArrangementView--EnablePlaceModeDropFeedback_--_1_--dtor$2.c)
 *     _WindowArrangementView::InitDropFeedback_::_1_::dtor$3 @ 0x1805D2CD2 (_WindowArrangementView--InitDropFeedback_--_1_--dtor$3.c)
 *     _WindowArrangementView::UpdateDropFeedback_::_1_::dtor$1 @ 0x1805D5A90 (_WindowArrangementView--UpdateDropFeedback_--_1_--dtor$1.c)
 *     _WindowArrangementView::UpdateDropFeedback_::_1_::dtor$5 @ 0x1805D5AC0 (_WindowArrangementView--UpdateDropFeedback_--_1_--dtor$5.c)
 *     _AppResizeView::InitDropFeedback_::_1_::dtor$3 @ 0x1805D757B (_AppResizeView--InitDropFeedback_--_1_--dtor$3.c)
 *     _AppResizeView::UpdateDropFeedback_::_1_::dtor$3 @ 0x1805D8BAC (_AppResizeView--UpdateDropFeedback_--_1_--dtor$3.c)
 *     _VirtualDesktopTabletModePolicy::TransitionToDesktopMode_::_1_::dtor$1 @ 0x180608512 (_VirtualDesktopTabletModePolicy--TransitionToDesktopMode_--_1_--dtor$1.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$5 @ 0x18075366D (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::~ComPtr<IAppLayoutOperationItem>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a1);
}
