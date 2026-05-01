/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180105DBC
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$5 @ 0x180218E40 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$5.c)
 *     _TouchKeyboardExperienceManager::GetAppIdFromWindow_::_1_::dtor$1 @ 0x18021906D (_TouchKeyboardExperienceManager--GetAppIdFromWindow_--_1_--dtor$1.c)
 *     _CStartExperienceManager::OnEventQueued_::_1_::dtor$5 @ 0x180219375 (_CStartExperienceManager--OnEventQueued_--_1_--dtor$5.c)
 *     _SnapFlyoutHost::SnapFlyoutHost_::_1_::dtor$6 @ 0x18021BF1A (_SnapFlyoutHost--SnapFlyoutHost_--_1_--dtor$6.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$2 @ 0x18021D71B (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$2.c)
 *     _CClassicWindow::GetApplicationId_::_1_::dtor$0 @ 0x18021F060 (_CClassicWindow--GetApplicationId_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$16 @ 0x18022178C (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$16.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$0 @ 0x1802227F3 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::GetForegroundAppId_::_1_::dtor$1 @ 0x18022E8AF (_TouchKeyboardExperienceManager--GetForegroundAppId_--_1_--dtor$1.c)
 *     _CApplicationManager::UncloakWindow_::_1_::dtor$0 @ 0x1802E8FC4 (_CApplicationManager--UncloakWindow_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GetPathProcessNameFromProcessId_::_1_::dtor$0 @ 0x180331BA8 (_GamingOverlayExperienceManager--GetPathProcessNameFromProcessId_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor$3 @ 0x180337228 (_GamingOverlayExperienceManager--PerfDataCollectionThread_--_1_--dtor$3.c)
 *     _GamingAudio::SessionInfoItem::Init_::_1_::dtor$1 @ 0x1803403E4 (_GamingAudio--SessionInfoItem--Init_--_1_--dtor$1.c)
 *     __lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator()_::_1_::dtor$2 @ 0x1803FC681 (__lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator()_--_1_--dtor$2.c)
 *     __lambda_b54eacfb88775a45f9bf3f20a89a8862_::operator()_::_1_::dtor$2 @ 0x1804058D5 (__lambda_b54eacfb88775a45f9bf3f20a89a8862_--operator()_--_1_--dtor$2.c)
 *     _TryGetProcessExePathAndAppId_::_1_::dtor$2 @ 0x18056A785 (_TryGetProcessExePathAndAppId_--_1_--dtor$2.c)
 *     _TryGetProcessCommandLine_::_1_::dtor$0 @ 0x18056AD03 (_TryGetProcessCommandLine_--_1_--dtor$0.c)
 *     _ApplicationContainerActivationPolicy::OnCreated_::_1_::dtor$0 @ 0x180573631 (_ApplicationContainerActivationPolicy--OnCreated_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        __int64 a1)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(a1);
}
