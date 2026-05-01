/*
 * XREFs of ??4?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180772294
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1807733A8 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??$swap@U?$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@0@Z @ 0x1801E10D4 (--$swap@U-$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU-.c)
 *     ??1?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@impl@winrt@@QEAA@XZ @ 0x180771D9C (--1-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xa_ea_180771D9C.c)
 */

__int64 *__fastcall __4__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBIA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  *a2 = 0LL;
  v6 = v2;
  v7 = a2[1];
  std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITileCollection>,0>(&v6, a1);
  v4 = v7;
  v7 = a1[1];
  a1[1] = v4;
  __1__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBIA_AA_impl_winrt__QEAA_XZ(&v6);
  return a1;
}
