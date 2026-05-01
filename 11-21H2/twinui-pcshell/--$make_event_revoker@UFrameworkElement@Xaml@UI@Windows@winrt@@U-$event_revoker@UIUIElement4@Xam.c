/*
 * XREFs of ??$make_event_revoker@UFrameworkElement@Xaml@UI@Windows@winrt@@U?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@5@PEBU?$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@01@PEBU?$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x180606FEC
 * Callers:
 *     ?ContextRequested@?$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UContextRequestedEventArgs@Input@2345@@Foundation@Windows@3@@Z @ 0x180608AF4 (-ContextRequested@-$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall ___make_event_revoker_UFrameworkElement_Xaml_UI_Windows_winrt__U__event_revoker_UIUIElement4_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement4_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BII_AA_impl_5_PEBU__consume_Windows_UI_Xaml_IUIElement4_UFrameworkElement_Xaml_UI_Windows_winrt___75__impl_winrt__YA_AU__event_revoker_UIUIElement4_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement4_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BII_AA_01_PEBU__consume_Windows_UI_Xaml_IUIElement4_UFrameworkElement_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *),
        __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rbx
  signed int v7; // eax
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF
  void (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp+28h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v9 = (__int64)a1;
  v5 = *a2;
  if ( *a2 )
  {
    v9 = 0LL;
    (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement4>, &v9);
    v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v9;
  }
  else
  {
    v6 = 0LL;
  }
  v10 = v6;
  *a1 = 0LL;
  if ( v6 )
  {
    v9 = 0LL;
    (**v6)(v6, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, &v9);
    v11 = v9;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 24LL))(v9, a1);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v11);
  }
  a1[1] = a3;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a1;
}
