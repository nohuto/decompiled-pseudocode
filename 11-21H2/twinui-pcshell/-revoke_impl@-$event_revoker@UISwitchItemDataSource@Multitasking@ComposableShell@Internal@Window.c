/*
 * XREFs of ?revoke_impl@?$event_revoker@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180455890
 * Callers:
 *     ??1?$event_revoker@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x18004EFB0 (--1-$event_revoker@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@winrt@@$BFA@AA @ 0x180204DD0 (--_9type@-$abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@imp.c)
 */

void __fastcall _revoke_impl___event_revoker_UISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
  {
     winrt::impl::abi<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource,void>::type::`vcall'{80,{flat}}(*a2);
    if ( *a2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
  }
}
