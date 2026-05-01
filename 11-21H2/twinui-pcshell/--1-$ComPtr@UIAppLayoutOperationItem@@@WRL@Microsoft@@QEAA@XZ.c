/*
 * XREFs of ??1?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@QEAA@XZ @ 0x180448BD4
 * Callers:
 *     _CLauncherTipContextMenu::AddMissingLinksFromDefaultProfile_::_1_::dtor$4 @ 0x1801D85DC (_CLauncherTipContextMenu--AddMissingLinksFromDefaultProfile_--_1_--dtor$4.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$3 @ 0x1801D8901 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$5 @ 0x1801D8919 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$5.c)
 *     _CLauncherTipContextMenu::_AddFolderLinksToCommands_::_1_::dtor$1 @ 0x1801DA62A (_CLauncherTipContextMenu--_AddFolderLinksToCommands_--_1_--dtor$1.c)
 *     _ActivateApplicationForExperienceWithPropertySet_::_1_::dtor$1 @ 0x18021A32F (_ActivateApplicationForExperienceWithPropertySet_--_1_--dtor$1.c)
 *     _AllUpViewUriHandler::Execute_::_1_::dtor$1 @ 0x180493F17 (_AllUpViewUriHandler--Execute_--_1_--dtor$1.c)
 *     _TabletModePositioner::ApplyLayoutOperationHelper_::_1_::dtor$7 @ 0x1805011B4 (_TabletModePositioner--ApplyLayoutOperationHelper_--_1_--dtor$7.c)
 *     _TabletModeViewManager::StartSwipeHelper_::_1_::dtor$6 @ 0x18050C93F (_TabletModeViewManager--StartSwipeHelper_--_1_--dtor$6.c)
 *     _TabletModeViewManager::UpdateLayoutItemsSizeConstraints_::_1_::dtor$1 @ 0x18050CD01 (_TabletModeViewManager--UpdateLayoutItemsSizeConstraints_--_1_--dtor$1.c)
 *     _TabletModePositionerOperation::SwitchToCustomLayout_::_1_::dtor$1 @ 0x180513A56 (_TabletModePositionerOperation--SwitchToCustomLayout_--_1_--dtor$1.c)
 *     _PPILayoutOperation::FindLeastRecentlyActivatedItem_::_1_::dtor$0 @ 0x180514212 (_PPILayoutOperation--FindLeastRecentlyActivatedItem_--_1_--dtor$0.c)
 *     _PPIWin32VtcLayoutOperation::_EnumerateAppsInLayout_::_1_::dtor$1 @ 0x1805163C9 (_PPIWin32VtcLayoutOperation--_EnumerateAppsInLayout_--_1_--dtor$1.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$3 @ 0x180518B95 (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$3.c)
 *     _WindowArrangementView::EnablePlaceModeDropFeedback_::_1_::dtor$2 @ 0x18051944D (_WindowArrangementView--EnablePlaceModeDropFeedback_--_1_--dtor$2.c)
 *     _WindowArrangementView::InitDropFeedback_::_1_::dtor$3 @ 0x18051A629 (_WindowArrangementView--InitDropFeedback_--_1_--dtor$3.c)
 *     _WindowArrangementView::UpdateDropFeedback_::_1_::dtor$1 @ 0x18051D3F4 (_WindowArrangementView--UpdateDropFeedback_--_1_--dtor$1.c)
 *     _WindowArrangementView::UpdateDropFeedback_::_1_::dtor$5 @ 0x18051D424 (_WindowArrangementView--UpdateDropFeedback_--_1_--dtor$5.c)
 *     _AppResizeView::InitDropFeedback_::_1_::dtor$3 @ 0x18051EBAF (_AppResizeView--InitDropFeedback_--_1_--dtor$3.c)
 *     _AppResizeView::UpdateDropFeedback_::_1_::dtor$3 @ 0x1805201E4 (_AppResizeView--UpdateDropFeedback_--_1_--dtor$3.c)
 *     _VirtualDesktopTabletModePolicy::TransitionToDesktopMode_::_1_::dtor$1 @ 0x18054D344 (_VirtualDesktopTabletModePolicy--TransitionToDesktopMode_--_1_--dtor$1.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$8 @ 0x1805DB9B3 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::~ComPtr<IAppLayoutOperationItem>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a1);
}
