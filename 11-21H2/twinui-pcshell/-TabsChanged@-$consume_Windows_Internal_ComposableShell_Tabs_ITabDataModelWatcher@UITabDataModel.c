/*
 * XREFs of ?TabsChanged@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18055BE04
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18055B848 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     ??$make_event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@U?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@impl@6@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@01@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1801B7330 (--$make_event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@U-$even.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::TabsChanged(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[17])(*a1, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  ___make_event_revoker_UITabDataModelWatcher_Tabs_ComposableShell_Internal_Windows_winrt__U__event_revoker_UITabDataModelWatcher_Tabs_ComposableShell_Internal_Windows_winrt___MP8type___abi_UITabDataModelWatcher_Tabs_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJA_AA_impl_6_PEBU__consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher_UITabDataModelWatcher_Tabs_ComposableShell_Internal_Windows_winrt___86__impl_winrt__YA_AU__event_revoker_UITabDataModelWatcher_Tabs_ComposableShell_Internal_Windows_winrt___MP8type___abi_UITabDataModelWatcher_Tabs_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJA_AA_01_PEBU__consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher_UITabDataModelWatcher_Tabs_ComposableShell_Internal_Windows_winrt___01_Uevent_token_1__Z(
    a2,
    a1,
    v8);
  return a2;
}
