/*
 * XREFs of ?revoke_impl@?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@winrt@@AEAAXUIUIElement4@Xaml@UI@Windows@3@@Z @ 0x18077787C
 * Callers:
 *     ??1?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@winrt@@QEAA@XZ @ 0x180771D1C (--1-$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement4@Xaml@UI@Windo.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1807779D0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BII@AA @ 0x1802AE970 (--_9type@-$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BII@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UIUIElement4_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement4_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BII_AA_impl_winrt__AEAAXUIUIElement4_Xaml_UI_Windows_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
     winrt::impl::abi<winrt::Windows::UI::Xaml::IUIElement4,void>::type::`vcall'{136,{flat}}(*a2);
  if ( *a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
}
