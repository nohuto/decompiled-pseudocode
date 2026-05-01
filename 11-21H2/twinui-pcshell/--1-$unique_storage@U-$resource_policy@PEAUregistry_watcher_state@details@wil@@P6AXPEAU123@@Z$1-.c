/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5130
 * Callers:
 *     ?RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ @ 0x18005BE64 (-RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800B5A5C (-RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ??1AcrylicPolicyManager@@UEAA@XZ @ 0x1800E252C (--1AcrylicPolicyManager@@UEAA@XZ.c)
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800E2A70 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E3788 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18011EE80 (-RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x18012D2AC (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     _CScreenClippingExperienceManager::RegisterForHotKeyHandling_::_1_::dtor$4 @ 0x18021B7A9 (_CScreenClippingExperienceManager--RegisterForHotKeyHandling_--_1_--dtor$4.c)
 *     ??1?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x1802DB2B0 (--1-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watche.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x18032C344 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18045B060 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ??1REGKEYINFO@@QEAA@XZ @ 0x18057EFF0 (--1REGKEYINFO@@QEAA@XZ.c)
 *     ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18057FDC8 (-ParentRegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKin.c)
 *     _StartupAppMonitor::ParentRegKeyCallback_::_1_::dtor$13 @ 0x18057FF4A (_StartupAppMonitor--ParentRegKeyCallback_--_1_--dtor$13.c)
 *     ?RegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18058008C (-RegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@.c)
 *     _StartupAppMonitor::RegKeyCallback_::_1_::dtor$8 @ 0x1805801DE (_StartupAppMonitor--RegKeyCallback_--_1_--dtor$8.c)
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1805803E4 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$48 @ 0x180580B0D (_StartupAppMonitor--StartMonitor_--_1_--dtor$48.c)
 *     ?swap@?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1805827D8 (-swap@-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_wat.c)
 * Callees:
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x1800E5334 (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>(
        wil::details **a1,
        struct wil::details::registry_watcher_state *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::delete_registry_watcher_state(v2, a2);
}
