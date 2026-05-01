/*
 * XREFs of ??$?0AEBUIProcessTracker@Shell@Internal@Windows@winrt@@X@?$weak_ref@UIProcessTracker@Shell@Internal@Windows@winrt@@@winrt@@QEAA@AEBUIProcessTracker@Shell@Internal@Windows@1@@Z @ 0x18027A120
 * Callers:
 *     ?ProcessDestroyed@?$consume_Windows_Internal_Shell_IProcessTracker@UIProcessTracker@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIProcessTracker@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIProcessTracker@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFA@AA@23@Uauto_revoke_t@3@AEBU?$EventHandler@I@Foundation@Windows@3@@Z @ 0x18027C248 (-ProcessDestroyed@-$consume_Windows_Internal_Shell_IProcessTracker@UIProcessTracker@Shell@Intern.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$try_as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1801B82EC (--$try_as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::IProcessTracker>::weak_ref<winrt::Windows::Internal::Shell::IProcessTracker>(
        __int64 *a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  _QWORD *v3; // rax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rsi
  int v6; // eax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  if ( *a2 )
  {
    v3 = winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IWeakReferenceSource>(a2, &v8);
    v4 = *v3;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v3 + 24LL);
    if ( *a1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
    v6 = v5(v4, a1);
    if ( v6 < 0 )
      winrt::throw_hresult((unsigned int)v6);
    if ( v8 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
  }
  return a1;
}
