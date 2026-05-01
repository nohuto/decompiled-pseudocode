/*
 * XREFs of ??1?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@winrt@@QEAA@XZ @ 0x180607D4C
 * Callers:
 *     _VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor$16 @ 0x180607B9F (_VirtualDesktopSwitcherHost--VirtualDesktopSwitcherHost_--_1_--dtor$16.c)
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180607F04 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 *     ??4?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1806081DC (--4-$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement4@Xaml@UI@Windo.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1806090C4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UIUIElement4@Xaml@UI@Windows@winrt@@@winrt@@QEBA?AUIUIElement4@Xaml@UI@Windows@2@XZ @ 0x18060CC8C (-get@-$weak_ref@UIUIElement4@Xaml@UI@Windows@winrt@@@winrt@@QEBA-AUIUIElement4@Xaml@UI@Windows@2.c)
 *     ?revoke_impl@?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@winrt@@AEAAXUIUIElement4@Xaml@UI@Windows@3@@Z @ 0x18060CE64 (-revoke_impl@-$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement4@Xam.c)
 */

void __fastcall __1__event_revoker_UIUIElement4_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement4_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BII_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement4>::get(a1, &v3);
    _revoke_impl___event_revoker_UIUIElement4_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement4_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BII_AA_impl_winrt__AEAAXUIUIElement4_Xaml_UI_Windows_3__Z(
      a1,
      v2);
    if ( *a1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
  }
}
