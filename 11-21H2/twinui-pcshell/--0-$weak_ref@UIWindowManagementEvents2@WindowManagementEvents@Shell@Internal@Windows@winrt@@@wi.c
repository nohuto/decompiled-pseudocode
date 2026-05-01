/*
 * XREFs of ??0?$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@winrt@@QEAA@AEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@1@@Z @ 0x1800F7C44
 * Callers:
 *     ?WindowMigrationEvent@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowMigrationEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800AA1C0 (-WindowMigrationEvent@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementE.c)
 *     ?ArrangedWindowJointResizeCompleted@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UArrangedWindowJointResizeCompletedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18017838C (-ArrangedWindowJointResizeCompleted@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWin.c)
 *     ?ArrangedWindowResizeStarted@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UArrangedWindowResizeStartedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180178404 (-ArrangedWindowResizeStarted@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMana.c)
 *     ?WindowArrangementEvent@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowArrangementEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18017847C (-WindowArrangementEvent@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagemen.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::weak_ref<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v3 = *a2;
  if ( *a2 )
  {
    v6 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, &v6);
    v7 = v6;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, a1);
    if ( v4 < 0 )
      winrt::throw_hresult((unsigned int)v4);
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v7);
  }
  return a1;
}
