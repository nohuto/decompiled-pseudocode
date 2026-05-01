/*
 * XREFs of ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@XZ @ 0x18013B8B0
 * Callers:
 *     ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x180063090 (-FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18013B5B0 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     _VirtualDesktop::CalculateDesktopIndex_::_1_::dtor$3 @ 0x1802B3892 (_VirtualDesktop--CalculateDesktopIndex_--_1_--dtor$3.c)
 *     _CApplicationManager::_GetLastActiveModernApp_::_1_::dtor$1 @ 0x1802B38C2 (_CApplicationManager--_GetLastActiveModernApp_--_1_--dtor$1.c)
 *     _VirtualDesktop::CalculateDesktopIndex_::_1_::dtor$4 @ 0x1802B3C72 (_VirtualDesktop--CalculateDesktopIndex_--_1_--dtor$4.c)
 *     _VirtualDesktopCollection::Initialize_::_1_::dtor$5 @ 0x1802B3CB0 (_VirtualDesktopCollection--Initialize_--_1_--dtor$5.c)
 *     _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$9 @ 0x1802B3D95 (_CApplicationManager--_HandleViewPropertyChanged_--_1_--dtor$9.c)
 *     _CApplicationManager::_HandleTaskWindowDestruction_::_1_::dtor$3 @ 0x1802B3E25 (_CApplicationManager--_HandleTaskWindowDestruction_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$10 @ 0x1802B3F85 (_CApplicationManager--_HandleViewPropertyChanged_--_1_--dtor$10.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$5 @ 0x1802BA4F0 (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$5.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$6 @ 0x1802BA510 (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$6.c)
 *     _CApplicationManager::TerminateApplication_::_1_::dtor$4 @ 0x1802BB44C (_CApplicationManager--TerminateApplication_--_1_--dtor$4.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::_FindWindow_::_1_::dtor$0 @ 0x1802BBE4F (_CImmersiveApp--CImmersiveWindowCollection--_FindWindow_--_1_--dtor$0.c)
 *     _VirtualDesktopCollection::GetVirtualDesktops_::_1_::dtor$5 @ 0x1802BECD3 (_VirtualDesktopCollection--GetVirtualDesktops_--_1_--dtor$5.c)
 *     _VirtualDesktopCollection::GetVirtualDesktops_::_1_::dtor$6 @ 0x1802BECE5 (_VirtualDesktopCollection--GetVirtualDesktops_--_1_--dtor$6.c)
 *     _CApplicationManager::CreateNewGlom_::_1_::dtor$5 @ 0x180398D2C (_CApplicationManager--CreateNewGlom_--_1_--dtor$5.c)
 *     _CApplicationManager::RefreshMonitorMappings_::_1_::dtor$3 @ 0x18039EAFC (_CApplicationManager--RefreshMonitorMappings_--_1_--dtor$3.c)
 *     _CApplicationManager::TransferAllWindowsBetweenGloms_::_1_::dtor$1 @ 0x1803A15A3 (_CApplicationManager--TransferAllWindowsBetweenGloms_--_1_--dtor$1.c)
 *     _CApplicationManager::TransferWindowBetweenGloms_::_1_::dtor$0 @ 0x1803A1607 (_CApplicationManager--TransferWindowBetweenGloms_--_1_--dtor$0.c)
 *     _CApplicationManager::_CreatePresentationRequestedArgs_::_1_::dtor$6 @ 0x1803A201E (_CApplicationManager--_CreatePresentationRequestedArgs_--_1_--dtor$6.c)
 *     _CApplicationManager::_CreatePresentationRequestedArgs_::_1_::dtor$7 @ 0x1803A202A (_CApplicationManager--_CreatePresentationRequestedArgs_--_1_--dtor$7.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForApp_::_1_::dtor$8 @ 0x1803B6768 (_CAppViewManager--_GetMostRecentlyUsedViewForApp_--_1_--dtor$8.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForApp_::_1_::dtor$9 @ 0x1803B6774 (_CAppViewManager--_GetMostRecentlyUsedViewForApp_--_1_--dtor$9.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForAppInstance_::_1_::dtor$8 @ 0x1803B6C88 (_CAppViewManager--_GetMostRecentlyUsedViewForAppInstance_--_1_--dtor$8.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForAppInstance_::_1_::dtor$9 @ 0x1803B6C94 (_CAppViewManager--_GetMostRecentlyUsedViewForAppInstance_--_1_--dtor$9.c)
 *     _VirtualDesktopDataSource::GetVirtualDesktops_::_1_::dtor$4 @ 0x18053FDD4 (_VirtualDesktopDataSource--GetVirtualDesktops_--_1_--dtor$4.c)
 *     _VirtualDesktopDataSource::GetVirtualDesktops_::_1_::dtor$5 @ 0x18053FDE0 (_VirtualDesktopDataSource--GetVirtualDesktops_--_1_--dtor$5.c)
 *     _CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2_IVirtualDesktopNotification_IVirtualDesktop___unsigned_int_unsigned_int__::_1_::dtor$0 @ 0x1805F90AB (_CVirtualDesktopNotifications--_ForwardVirtualDesktopNotification2_IVirtualDesktopN_ea_1805F90AB.c)
 *     _CVirtualDesktopNotifications::_QueueNotification2_IVirtualDesktopNotification_IVirtualDesktop___unsigned_int_unsigned_int_Microsoft::WRL::ComPtr_IVirtualDesktop__unsigned_int_unsigned_int__::_1_::dtor$0 @ 0x1805F943F (_CVirtualDesktopNotifications--_QueueNotification2_IVirtualDesktopNotification_IVir_ea_1805F943F.c)
 *     _CVirtualDesktopNotifications::_QueueNotification2_IVirtualDesktopNotification_IVirtualDesktop___enum_VirtualDesktopSwitchType_Microsoft::WRL::ComPtr_IVirtualDesktop__enum_VirtualDesktopSwitchType__::_1_::dtor$0 @ 0x1805F97B3 (_CVirtualDesktopNotifications--_QueueNotification2_IVirtualDesktopNotification_IVir_ea_1805F97B3.c)
 *     _VirtualDesktopNotificationForwarderHelper_CVirtualDesktopNotifications_::VirtualDesktopSwitched_::_1_::dtor$0 @ 0x1805FA273 (_VirtualDesktopNotificationForwarderHelper_CVirtualDesktopNotifications_--VirtualDesktopSwitched.c)
 *     ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@@Z @ 0x180617CE0 (-VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@.c)
 *     _VirtualDesktopPersistence::VirtualDesktopCollectionChanged_::_1_::dtor$3 @ 0x180617FF3 (_VirtualDesktopPersistence--VirtualDesktopCollectionChanged_--_1_--dtor$3.c)
 *     _VirtualDesktopPersistence::VirtualDesktopCollectionChanged_::_1_::dtor$4 @ 0x180617FFF (_VirtualDesktopPersistence--VirtualDesktopCollectionChanged_--_1_--dtor$4.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowValidForGroupInclusion_::_1_::dtor$5 @ 0x18064914D (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_18064914D.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowValidForGroupInclusion_::_1_::dtor$6 @ 0x180649159 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_180649159.c)
 *     __lambda_f3af541e54fed362ec31214e5f0f3de2_::operator()_::_1_::dtor$1 @ 0x18068909F (__lambda_f3af541e54fed362ec31214e5f0f3de2_--operator()_--_1_--dtor$1.c)
 *     __lambda_f3af541e54fed362ec31214e5f0f3de2_::operator()_::_1_::dtor$2 @ 0x1806890AB (__lambda_f3af541e54fed362ec31214e5f0f3de2_--operator()_--_1_--dtor$2.c)
 *     ?Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x180701220 (-Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler::Execute_::_1_::dtor$6 @ 0x1807016DE (_winrt--Windows--Internal--Shell--implementation--LaunchRemoteDesktopUriHandler--Ex_ea_1807016DE.c)
 *     _winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler::Execute_::_1_::dtor$7 @ 0x1807016EA (_winrt--Windows--Internal--Shell--implementation--LaunchRemoteDesktopUriHandler--Ex_ea_1807016EA.c)
 * Callees:
 *     <none>
 */

void __fastcall std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 1);
}
