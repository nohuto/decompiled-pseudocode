/*
 * XREFs of ?revoke_impl@?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@impl@winrt@@AEAAXUIUIElement@Xaml@UI@Windows@3@@Z @ 0x1805B2434
 * Callers:
 *     ??1?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@impl@winrt@@QEAA@XZ @ 0x1805AEAD0 (--1-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xa_ea_1805AEAD0.c)
 *     ?revoke@?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@impl@winrt@@QEAAXXZ @ 0x1805BBA5C (-revoke@-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIEleme_ea_1805BBA5C.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BCBA@AA @ 0x18020FA60 (--_9type@-$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@winrt@@$BCBA@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BCBA_AA_impl_winrt__AEAAXUIUIElement_Xaml_UI_Windows_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
  {
     winrt::impl::abi<winrt::Windows::UI::Xaml::IUIElement,void>::type::`vcall'{528,{flat}}(*a2);
    if ( *a2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
  }
}
