/*
 * XREFs of ??1?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x180607CCC
 * Callers:
 *     _VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor$15 @ 0x180607B8C (_VirtualDesktopSwitcherHost--VirtualDesktopSwitcherHost_--_1_--dtor$15.c)
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180607F04 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 *     ??4?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1806080E4 (--4-$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIListViewBase.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x18060C2F0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA?AUIListViewBase4@Controls@Xaml@UI@Windows@2@XZ @ 0x18060CBDC (-get@-$weak_ref@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA-AUIListViewBase4@Co.c)
 *     ?revoke_impl@?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUIListViewBase4@Controls@Xaml@UI@Windows@3@@Z @ 0x18060CDF4 (-revoke_impl@-$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UILi.c)
 */

void __fastcall __1__event_revoker_UIListViewBase4_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase4_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::IListViewBase4>::get(a1, &v3);
    _revoke_impl___event_revoker_UIListViewBase4_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase4_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUIListViewBase4_Controls_Xaml_UI_Windows_3__Z(
      a1,
      v2);
    if ( *a1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
  }
}
