/*
 * XREFs of ?VirtualDesktopDataSourceChanged@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopDataSource@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@UIVirtualDesktopDataSourceChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180051F74
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1800507F8 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??$make_event_revoker@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@U?$event_revoker@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEI@AA@impl@6@PEBU?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopDataSource@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEI@AA@01@PEBU?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopDataSource@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1801E8E68 (--$make_event_revoker@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopDataSource<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource>::VirtualDesktopDataSourceChanged(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*a1 + 64LL))(*a1, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  ___make_event_revoker_UIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows_winrt__U__event_revoker_UIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEI_AA_impl_6_PEBU__consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopDataSource_UIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows_winrt___86__impl_winrt__YA_AU__event_revoker_UIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEI_AA_01_PEBU__consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopDataSource_UIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows_winrt___01_Uevent_token_1__Z(
    a2,
    a1,
    v8);
  return a2;
}
