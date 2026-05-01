/*
 * XREFs of ??1?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@impl@winrt@@QEAA@XZ @ 0x18055AE8C
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18055B848 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@X@impl@winrt@@$BJA@AA @ 0x18020D3A0 (--_9type@-$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@X@impl@winrt@@.c)
 *     ?get@?$weak_ref@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEBA?AUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@2@XZ @ 0x18055BF44 (-get@-$weak_ref@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEBA-.c)
 */

void __fastcall __1__event_revoker_UITabDataModelWatcher_Tabs_ComposableShell_Internal_Windows_winrt___MP8type___abi_UITabDataModelWatcher_Tabs_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 *v2; // rdi
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (__int64 *)winrt::weak_ref<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::get(a1, &v3);
    if ( *v2 )
    {
       winrt::impl::abi<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher,void>::type::`vcall'{144,{flat}}(*v2);
      if ( *v2 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v2);
    }
    if ( *a1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
  }
}
