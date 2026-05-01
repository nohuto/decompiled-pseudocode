/*
 * XREFs of ??1?$event_revoker@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x180011458
 * Callers:
 *     ??1TaskViewHost@@UEAA@XZ @ 0x18000F848 (--1TaskViewHost@@UEAA@XZ.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x180010AF8 (--1TaskViewFrame@@UEAA@XZ.c)
 *     ??4?$event_revoker@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800113E4 (--4-$event_revoker@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Wi.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1800507F8 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     _TaskViewHost::TaskViewHost_::_1_::dtor$21 @ 0x180213BB8 (_TaskViewHost--TaskViewHost_--_1_--dtor$21.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9type@?$abi@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@winrt@@$BFA@AA @ 0x180211260 (--_9type@-$abi@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Window.c)
 */

void __fastcall __1__event_revoker_UIVirtualDesktopPerMonitorCollection_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UIVirtualDesktopPerMonitorCollection_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>,
      &v3);
    v4 = v3;
    if ( v3 )
    {
       winrt::impl::abi<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection,void>::type::`vcall'{80,{flat}}(
        v3,
        a1[1]);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
    }
    if ( *a1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
  }
}
