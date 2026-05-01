/*
 * XREFs of ?GotFocus@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@23@Uauto_revoke_t@3@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x1807744F0
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1807733A8 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??$make_event_revoker@UFrameworkElement@Xaml@UI@Windows@winrt@@U?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@impl@5@PEBU?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@01@PEBU?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1807710A4 (--$make_event_revoker@UFrameworkElement@Xaml@UI@Windows@winrt@@U-$event_revoker@UIUIElement@Xaml.c)
 *     ?GotFocus@?$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBURoutedEventHandler@Xaml@UI@Windows@3@@Z @ 0x180774538 (-GotFocus@-$consume_Windows_UI_Xaml_IUIElement@UFrameworkElement@Xaml@UI@Windows@wi_ea_180774538.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement<winrt::Windows::UI::Xaml::FrameworkElement>::GotFocus(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rax
  _QWORD *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v6 = (__int64 *)winrt::impl::consume_Windows_UI_Xaml_IUIElement<winrt::Windows::UI::Xaml::FrameworkElement>::GotFocus(
                    a1,
                    &v8,
                    a4);
  ___make_event_revoker_UFrameworkElement_Xaml_UI_Windows_winrt__U__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBIA_AA_impl_5_PEBU__consume_Windows_UI_Xaml_IUIElement_UFrameworkElement_Xaml_UI_Windows_winrt___75__impl_winrt__YA_AU__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBIA_AA_01_PEBU__consume_Windows_UI_Xaml_IUIElement_UFrameworkElement_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
    a2,
    a1,
    *v6);
  return a2;
}
