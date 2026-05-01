/*
 * XREFs of ??1?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@impl@winrt@@QEAA@XZ @ 0x180679D34
 * Callers:
 *     ??1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180679E48 (--1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??4?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18068E970 (--4-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xa_ea_18068E970.c)
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1806906B0 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 *     _VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor$12 @ 0x180771AF4 (_VirtualDesktopSwitcherHost--VirtualDesktopSwitcherHost_--_1_--dtor$12.c)
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180771E10 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1807733A8 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18067E15C (-get@-$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@impl@winrt@@AEAAXUIUIElement@Xaml@UI@Windows@3@@Z @ 0x18067EAE8 (-revoke_impl@-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUI_ea_18067EAE8.c)
 */

void __fastcall __1__event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BCBA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement>::get(a1, &v3);
    _revoke_impl___event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BCBA_AA_impl_winrt__AEAAXUIUIElement_Xaml_UI_Windows_3__Z(
      a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
