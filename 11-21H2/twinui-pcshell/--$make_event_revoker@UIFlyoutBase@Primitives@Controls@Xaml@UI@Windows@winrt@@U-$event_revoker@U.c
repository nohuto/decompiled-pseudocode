/*
 * XREFs of ??$make_event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@U?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@impl@7@PEBU?$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@97@@impl@winrt@@YA?AU?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@01@PEBU?$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1801C1020
 * Callers:
 *     ?Closed@?$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x1805B8A54 (-Closed@-$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase@UIFlyoutBase@Primitives@Contro.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall ___make_event_revoker_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt__U__event_revoker_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BFI_AA_impl_7_PEBU__consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt___97__impl_winrt__YA_AU__event_revoker_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BFI_AA_01_PEBU__consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
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
