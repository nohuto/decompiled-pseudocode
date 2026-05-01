/*
 * XREFs of ??$make_event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@U?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@6@PEBU?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@01@PEBU?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1801A96D4
 * Callers:
 *     ?TakeFocusRequested@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800FB998 (-TakeFocusRequested@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXa.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall ___make_event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__U__event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_6_PEBU__consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___86__impl_winrt__YA_AU__event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_01_PEBU__consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *),
        __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp+20h]

  v8 = (__int64)a1;
  v10 = a1;
  *a1 = 0LL;
  v5 = *a2;
  if ( *a2 )
  {
    v8 = 0LL;
    (**v5)(v5, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, &v8);
    v9 = v8;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, a1);
    if ( v6 < 0 )
      winrt::throw_hresult((unsigned int)v6);
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v9);
  }
  a1[1] = a3;
  return a1;
}
