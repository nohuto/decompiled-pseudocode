/*
 * XREFs of ??1?$event_revoker@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x18004EFB0
 * Callers:
 *     ??1AppViewDataSourceAdapter@@UEAA@XZ @ 0x18004EF54 (--1AppViewDataSourceAdapter@@UEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@winrt@@QEBA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@2@XZ @ 0x180455838 (-get@-$weak_ref@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@win.c)
 *     ?revoke_impl@?$event_revoker@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180455890 (-revoke_impl@-$event_revoker@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Window.c)
 */

void __fastcall __1__event_revoker_UISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAA_XZ(
        _QWORD *a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>::get(a1, &v3);
    _revoke_impl___event_revoker_UISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows_3__Z(
      a1,
      v2);
    if ( *a1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
  }
}
