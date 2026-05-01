/*
 * XREFs of ?ContextRequested@?$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UContextRequestedEventArgs@Input@2345@@Foundation@Windows@3@@Z @ 0x180608AF4
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1806090C4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??$make_event_revoker@UFrameworkElement@Xaml@UI@Windows@winrt@@U?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@5@PEBU?$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@01@PEBU?$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x180606FEC (--$make_event_revoker@UFrameworkElement@Xaml@UI@Windows@winrt@@U-$event_revoker@UIUIElement4@Xam.c)
 *     ?ContextRequested@?$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UUIElement@Xaml@UI@Windows@winrt@@UContextRequestedEventArgs@Input@2345@@Foundation@Windows@3@@Z @ 0x180608B3C (-ContextRequested@-$consume_Windows_UI_Xaml_IUIElement4@UFrameworkElement@Xaml@UI@W_ea_180608B3C.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement4<winrt::Windows::UI::Xaml::FrameworkElement>::ContextRequested(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rax
  _QWORD *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v6 = (__int64 *)winrt::impl::consume_Windows_UI_Xaml_IUIElement4<winrt::Windows::UI::Xaml::FrameworkElement>::ContextRequested(
                    a1,
                    &v8,
                    a4);
  ___make_event_revoker_UFrameworkElement_Xaml_UI_Windows_winrt__U__event_revoker_UIUIElement4_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement4_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BII_AA_impl_5_PEBU__consume_Windows_UI_Xaml_IUIElement4_UFrameworkElement_Xaml_UI_Windows_winrt___75__impl_winrt__YA_AU__event_revoker_UIUIElement4_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement4_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BII_AA_01_PEBU__consume_Windows_UI_Xaml_IUIElement4_UFrameworkElement_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
    a2,
    a1,
    *v6);
  return a2;
}
