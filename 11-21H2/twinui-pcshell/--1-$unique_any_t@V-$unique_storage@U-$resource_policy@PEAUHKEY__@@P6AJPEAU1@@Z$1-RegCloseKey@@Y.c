/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008EA54
 * Callers:
 *     _StartDocked::PreCreateVolatileRegkey_::_1_::dtor$1 @ 0x180217626 (_StartDocked--PreCreateVolatileRegkey_--_1_--dtor$1.c)
 *     _wil::registry_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::registry_watcher_state___void_(__cdecl_)(wil::details::registry_watcher_state__)_&wil::details::delete_registry_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::registry_watcher_state___wil::details::registry_watcher_state___0_std::nullptr_t____wil::err_exception_policy_::create_::_1_::dtor$0 @ 0x18021B92A (_wil--registry_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wil--details.c)
 *     __lambda_c1e1bf6016a03158d50952b4558ffdc8_::operator()_::_1_::dtor$1 @ 0x18021BA75 (__lambda_c1e1bf6016a03158d50952b4558ffdc8_--operator()_--_1_--dtor$1.c)
 *     _VirtualDesktopRegistryHelpers::EnumValues_::_1_::dtor$0 @ 0x18022305E (_VirtualDesktopRegistryHelpers--EnumValues_--_1_--dtor$0.c)
 *     _ForEachKey__lambda_57cfb88a9168c5b81c3cd8194129e25c____::_1_::dtor$0 @ 0x1803AF035 (_ForEachKey__lambda_57cfb88a9168c5b81c3cd8194129e25c____--_1_--dtor$0.c)
 *     _ImmersiveShellComponentsConfiguration::GetComponents_::_1_::dtor$2 @ 0x1803B055D (_ImmersiveShellComponentsConfiguration--GetComponents_--_1_--dtor$2.c)
 *     _VirtualDesktopRegistryHelpers::EnumKeys_::_1_::dtor$0 @ 0x1805408A0 (_VirtualDesktopRegistryHelpers--EnumKeys_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDragDropExtensionClsId_::_1_::dtor$0 @ 0x18056D0B5 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_18056D0B5.c)
 *     _ModifyUnpackagedApp_::_1_::dtor$1 @ 0x180576986 (_ModifyUnpackagedApp_--_1_--dtor$1.c)
 *     _ModifyUnpackagedApp_::_1_::dtor$2 @ 0x180576992 (_ModifyUnpackagedApp_--_1_--dtor$2.c)
 *     _StartupAppMonitor::ParentRegKeyCallback_::_1_::dtor$1 @ 0x18057FF26 (_StartupAppMonitor--ParentRegKeyCallback_--_1_--dtor$1.c)
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$0 @ 0x180580AA4 (_StartupAppMonitor--StartMonitor_--_1_--dtor$0.c)
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$12 @ 0x180580B5B (_StartupAppMonitor--StartMonitor_--_1_--dtor$12.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$0 @ 0x18058166D (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$0.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$10 @ 0x1805816F1 (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$10.c)
 *     _StartupNotification::StartupNotification_::_1_::dtor$1 @ 0x180584433 (_StartupNotification--StartupNotification_--_1_--dtor$1.c)
 *     _StartupRegKeyNotification::StartupRegKeyNotification_::_1_::dtor$4 @ 0x1805846CD (_StartupRegKeyNotification--StartupRegKeyNotification_--_1_--dtor$4.c)
 *     _api_alchemy_config::InitConfig_::_1_::dtor$4 @ 0x1805DDE3E (_api_alchemy_config--InitConfig_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(
        __int64 a1)
{
  return wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(a1);
}
