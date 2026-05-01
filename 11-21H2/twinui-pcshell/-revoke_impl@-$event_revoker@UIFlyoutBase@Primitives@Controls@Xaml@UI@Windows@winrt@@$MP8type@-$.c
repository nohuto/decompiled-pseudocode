/*
 * XREFs of ?revoke_impl@?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@impl@winrt@@AEAAXUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@3@@Z @ 0x1805B231C
 * Callers:
 *     ??1?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x1805AE7B0 (--1-$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIFlyo.c)
 *     ?OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1805B9F80 (-OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BFI@AA @ 0x18020F920 (--_9type@-$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BFI@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BFI_AA_impl_winrt__AEAAXUIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
  {
     winrt::impl::abi<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase,void>::type::`vcall'{88,{flat}}(*a2);
    if ( *a2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
  }
}
