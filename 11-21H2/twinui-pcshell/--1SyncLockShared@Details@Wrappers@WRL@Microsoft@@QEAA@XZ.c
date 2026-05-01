/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1802D6ABC
 * Callers:
 *     _VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop_::_1_::dtor$0 @ 0x180214DF2 (_VirtualDesktopsApi--IsWindowOnCurrentVirtualDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopsApi::GetWindowDesktopId_::_1_::dtor$0 @ 0x180216391 (_VirtualDesktopsApi--GetWindowDesktopId_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$0 @ 0x1802204D0 (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$0.c)
 *     _CVirtualDesktop::IsViewVisible_::_1_::dtor$0 @ 0x180220506 (_CVirtualDesktop--IsViewVisible_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetSortedAppList_::_1_::dtor$0 @ 0x1802226BC (_PenWorkspace--Discover--RecentAppsCache--GetSortedAppList_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::FindFrameWrapper_::_1_::dtor$0 @ 0x18022E676 (_TouchKeyboardExperienceManager--FindFrameWrapper_--_1_--dtor$0.c)
 *     _CApplicationViewBase::GetEnterpriseId_::_1_::dtor$0 @ 0x180314EB7 (_CApplicationViewBase--GetEnterpriseId_--_1_--dtor$0.c)
 *     _XamlExplorerHost::SwitchItemDataSource::[WindowsInternal::ComposableShell::Desktop::IDesktopAppHost]::get_::_1_::dtor$1 @ 0x1804218F7 (_XamlExplorerHost--SwitchItemDataSource--[WindowsInternal--ComposableShell--Desktop_ea_1804218F7.c)
 *     _TouchKeyboardExperienceManager::FindViewInfo_::_1_::dtor$0 @ 0x18045D836 (_TouchKeyboardExperienceManager--FindViewInfo_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::HideAllInputViews_::_1_::dtor$1 @ 0x18045F890 (_TouchKeyboardExperienceManager--HideAllInputViews_--_1_--dtor$1.c)
 *     _VirtualDesktopDataSource::get_VirtualDesktops_::_1_::dtor$0 @ 0x18048C4F3 (_VirtualDesktopDataSource--get_VirtualDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CanSwitchItemMoveDesktops_::_1_::dtor$0 @ 0x18048CDF4 (_VirtualDesktopController--CanSwitchItemMoveDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CreateDesktopW_::_1_::dtor$0 @ 0x18048CF39 (_VirtualDesktopController--CreateDesktopW_--_1_--dtor$0.c)
 *     _VirtualDesktopController::GetAdjacentDesktop_::_1_::dtor$0 @ 0x18048D15A (_VirtualDesktopController--GetAdjacentDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::MoveSwitchItemToDesktop_::_1_::dtor$0 @ 0x18048D879 (_VirtualDesktopController--MoveSwitchItemToDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::RemoveDesktop_::_1_::dtor$0 @ 0x18048DD14 (_VirtualDesktopController--RemoveDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::SwitchToDesktop_::_1_::dtor$0 @ 0x18048E1D6 (_VirtualDesktopController--SwitchToDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::CanViewMoveDesktops_::_1_::dtor$0 @ 0x180544E58 (_CVirtualDesktopManager--CanViewMoveDesktops_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::FindDesktop_::_1_::dtor$0 @ 0x1805453D6 (_CVirtualDesktopManager--FindDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetAdjacentDesktop_::_1_::dtor$0 @ 0x180545490 (_CVirtualDesktopManager--GetAdjacentDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetCount_::_1_::dtor$0 @ 0x180545655 (_CVirtualDesktopManager--GetCount_--_1_--dtor$0.c)
 *     _VirtualPinnedAppsHandler::IsViewPinned_::_1_::dtor$0 @ 0x180557134 (_VirtualPinnedAppsHandler--IsViewPinned_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockShared(v2);
    *this = 0LL;
  }
}
