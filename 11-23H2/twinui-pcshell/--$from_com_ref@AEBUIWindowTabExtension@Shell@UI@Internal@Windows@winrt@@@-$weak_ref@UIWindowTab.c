/*
 * XREFs of ??$from_com_ref@AEBUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@?$weak_ref@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@winrt@@AEAAXAEBUIWindowTabExtension@Shell@UI@Internal@Windows@1@@Z @ 0x18078DFF8
 * Callers:
 *     ?ActiveTabChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabExtension@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18078E42C (-ActiveTabChanged@-$consume_Windows_Internal_UI_Shell_IWindowTabExtension@UIWindowTabExtension@S.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::weak_ref<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::from_com_ref<winrt::Windows::Internal::UI::Shell::IWindowTabExtension const &>(
        __int64 *a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rsi
  signed int v6; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v7 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, &v7);
    v4 = v7;
    v8 = v7;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 24LL);
    if ( *a1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
    v6 = v5(v4, a1);
    if ( v6 < 0 )
      winrt::throw_hresult(v6);
    if ( v4 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
  }
}
