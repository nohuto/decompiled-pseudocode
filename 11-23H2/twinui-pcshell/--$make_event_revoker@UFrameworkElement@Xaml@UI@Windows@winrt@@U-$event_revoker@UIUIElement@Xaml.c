/*
 * XREFs of ??$make_event_revoker@UFrameworkElement@Xaml@UI@Windows@winrt@@U?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@impl@5@PEBU?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@01@PEBU?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1807710A4
 * Callers:
 *     ?GotFocus@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@23@Uauto_revoke_t@3@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x1807744F0 (-GotFocus@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     ?LostFocus@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@23@Uauto_revoke_t@3@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x180774C14 (-LostFocus@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@w.c)
 *     ?PointerEntered@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@23@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x180774E94 (-PointerEntered@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@i.c)
 *     ?PointerExited@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@23@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x180774F98 (-PointerExited@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@im.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0AEBUIUIElement@Xaml@UI@Windows@winrt@@X@?$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEAA@AEBUIUIElement@Xaml@UI@Windows@1@@Z @ 0x18068CCC4 (--$-0AEBUIUIElement@Xaml@UI@Windows@winrt@@X@-$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winr.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ___make_event_revoker_UFrameworkElement_Xaml_UI_Windows_winrt__U__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBIA_AA_impl_5_PEBU__consume_Windows_UI_Xaml_IUIElement_UFrameworkElement_Xaml_UI_Windows_winrt___75__impl_winrt__YA_AU__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBIA_AA_01_PEBU__consume_Windows_UI_Xaml_IUIElement_UFrameworkElement_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, void *, _QWORD **),
        __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, void *, _QWORD **); // rcx
  _QWORD *v6; // rsi
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v5 = *a2;
  if ( *a2 )
  {
    v9 = 0LL;
    (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>, &v9);
    v6 = v9;
    v8 = v9;
  }
  else
  {
    v8 = 0LL;
    v6 = 0LL;
  }
  winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement>::weak_ref<winrt::Windows::UI::Xaml::IUIElement>(a1);
  a1[1] = a3;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a1;
}
