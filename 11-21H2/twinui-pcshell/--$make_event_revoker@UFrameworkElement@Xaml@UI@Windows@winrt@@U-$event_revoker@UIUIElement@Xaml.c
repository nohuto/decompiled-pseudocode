/*
 * XREFs of ??$make_event_revoker@UFrameworkElement@Xaml@UI@Windows@winrt@@U?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@impl@5@PEBU?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@01@PEBU?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1806070FC
 * Callers:
 *     ?GotFocus@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@23@Uauto_revoke_t@3@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x180609F94 (-GotFocus@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     ?LostFocus@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@23@Uauto_revoke_t@3@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x18060A514 (-LostFocus@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@w.c)
 *     ?PointerEntered@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@23@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x18060A6D0 (-PointerEntered@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@i.c)
 *     ?PointerExited@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@23@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x18060A7C0 (-PointerExited@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@im.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEAA@AEBUIUIElement@Xaml@UI@Windows@1@@Z @ 0x1805B8280 (--0-$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEAA@AEBUIUIElement@Xaml@UI@Windows@1@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___make_event_revoker_UFrameworkElement_Xaml_UI_Windows_winrt__U__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBIA_AA_impl_5_PEBU__consume_Windows_UI_Xaml_IUIElement_UFrameworkElement_Xaml_UI_Windows_winrt___75__impl_winrt__YA_AU__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBIA_AA_01_PEBU__consume_Windows_UI_Xaml_IUIElement_UFrameworkElement_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, void *, _QWORD *),
        __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, void *, _QWORD *); // rcx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rbx
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+38h] [rbp+10h] BYREF

  v8 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1;
  v5 = *a2;
  if ( *a2 )
  {
    v9 = 0LL;
    (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>, &v9);
    v6 = v9;
  }
  else
  {
    v6 = 0LL;
  }
  v8 = v6;
  winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement>::weak_ref<winrt::Windows::UI::Xaml::IUIElement>(
    (_QWORD *)a1,
    &v8);
  *(_QWORD *)(a1 + 8) = a3;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a1;
}
