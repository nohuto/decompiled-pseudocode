/*
 * XREFs of ??1?$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@QEAA@XZ @ 0x180771C9C
 * Callers:
 *     _VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor$16 @ 0x180771B40 (_VirtualDesktopSwitcherHost--VirtualDesktopSwitcherHost_--_1_--dtor$16.c)
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180771E10 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 *     ??4?$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1807720C8 (--4-$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIListViewBase@.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x180776AD0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1807774EC (-get@-$weak_ref@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@AEAAXUIListViewBase@Controls@Xaml@UI@Windows@3@@Z @ 0x18077780C (-revoke_impl@-$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UILis.c)
 */

void __fastcall __1__event_revoker_UIListViewBase_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::IListViewBase>::get(a1, &v3);
    _revoke_impl___event_revoker_UIListViewBase_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNA_AA_impl_winrt__AEAAXUIListViewBase_Controls_Xaml_UI_Windows_3__Z(
      a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
