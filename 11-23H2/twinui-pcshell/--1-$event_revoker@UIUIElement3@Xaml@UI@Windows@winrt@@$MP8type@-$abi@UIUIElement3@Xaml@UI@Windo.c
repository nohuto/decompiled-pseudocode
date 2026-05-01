/*
 * XREFs of ??1?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180771CDC
 * Callers:
 *     _VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor$14 @ 0x180771B1A (_VirtualDesktopSwitcherHost--VirtualDesktopSwitcherHost_--_1_--dtor$14.c)
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180771E10 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 *     ??4?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180772144 (--4-$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement3@Xaml@UI@Windo.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x180776AD0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UIUIElement3@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180777544 (-get@-$weak_ref@UIUIElement3@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@AEAAXUIUIElement3@Xaml@UI@Windows@3@@Z @ 0x180777844 (-revoke_impl@-$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement3@Xam.c)
 */

void __fastcall __1__event_revoker_UIUIElement3_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement3_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement3>::get(a1, &v3);
    _revoke_impl___event_revoker_UIUIElement3_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement3_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__AEAAXUIUIElement3_Xaml_UI_Windows_3__Z(
      a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
