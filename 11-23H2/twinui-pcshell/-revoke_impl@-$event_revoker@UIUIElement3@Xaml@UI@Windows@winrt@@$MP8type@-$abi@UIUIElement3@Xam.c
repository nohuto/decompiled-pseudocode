/*
 * XREFs of ?revoke_impl@?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@AEAAXUIUIElement3@Xaml@UI@Windows@3@@Z @ 0x180777844
 * Callers:
 *     ??1?$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180771CDC (--1-$event_revoker@UIUIElement3@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement3@Xaml@UI@Windo.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1807779D0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BFI@AA @ 0x1802AE950 (--_9type@-$abi@UIUIElement3@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BFI@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UIUIElement3_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement3_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__AEAAXUIUIElement3_Xaml_UI_Windows_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
     winrt::impl::abi<winrt::Windows::UI::Xaml::IUIElement3,void>::type::`vcall'{88,{flat}}(*a2);
  if ( *a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
}
