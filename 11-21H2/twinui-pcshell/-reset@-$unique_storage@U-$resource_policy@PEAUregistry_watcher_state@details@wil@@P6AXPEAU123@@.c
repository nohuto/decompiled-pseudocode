/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1800E50C8
 * Callers:
 *     ?RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ @ 0x18005BE64 (-RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800B5A5C (-RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800B8320 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E2590 (-UnsubscribeFromServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E26C0 (-UnsubscribeFromServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800E2A70 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E3788 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18011EE80 (-RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ??1StartupAppMonitor@@UEAA@XZ @ 0x18057F030 (--1StartupAppMonitor@@UEAA@XZ.c)
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1805803E4 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 *     ?swap@?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1805827D8 (-swap@-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_wat.c)
 * Callees:
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x1800E5334 (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v4; // rsi
  DWORD LastError; // ebx
  struct wil::details::registry_watcher_state *v6; // rdx

  v4 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::delete_registry_watcher_state(v4, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
