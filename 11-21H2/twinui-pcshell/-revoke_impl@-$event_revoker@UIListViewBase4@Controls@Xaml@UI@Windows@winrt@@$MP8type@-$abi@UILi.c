/*
 * XREFs of ?revoke_impl@?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUIListViewBase4@Controls@Xaml@UI@Windows@3@@Z @ 0x18060CDF4
 * Callers:
 *     ??1?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x180607CCC (--1-$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIListViewBase.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x18060CFC0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BFA@AA @ 0x180211530 (--_9type@-$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BFA@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UIListViewBase4_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase4_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUIListViewBase4_Controls_Xaml_UI_Windows_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
  {
     winrt::impl::abi<winrt::Windows::UI::Xaml::Controls::IListViewBase4,void>::type::`vcall'{80,{flat}}(*a2);
    if ( *a2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
  }
}
