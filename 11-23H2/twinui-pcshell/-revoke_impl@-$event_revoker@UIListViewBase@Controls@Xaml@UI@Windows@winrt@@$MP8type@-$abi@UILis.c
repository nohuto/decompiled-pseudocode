/*
 * XREFs of ?revoke_impl@?$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@AEAAXUIListViewBase@Controls@Xaml@UI@Windows@3@@Z @ 0x18077780C
 * Callers:
 *     ??1?$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@QEAA@XZ @ 0x180771C9C (--1-$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIListViewBase@.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1807779D0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BNA@AA @ 0x1802AE930 (--_9type@-$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BNA@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UIListViewBase_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNA_AA_impl_winrt__AEAAXUIListViewBase_Controls_Xaml_UI_Windows_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
     winrt::impl::abi<winrt::Windows::UI::Xaml::Controls::IListViewBase,void>::type::`vcall'{208,{flat}}(*a2);
  if ( *a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
}
