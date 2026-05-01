/*
 * XREFs of ?Closed@?$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x1805B8A54
 * Callers:
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1805B9AB0 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     ??$make_event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@U?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@impl@7@PEBU?$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@97@@impl@winrt@@YA?AU?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@01@PEBU?$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1801C1020 (--$make_event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@U-$event_revoker@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::Closed(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[10])(*a1, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  ___make_event_revoker_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt__U__event_revoker_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BFI_AA_impl_7_PEBU__consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt___97__impl_winrt__YA_AU__event_revoker_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BFI_AA_01_PEBU__consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase_UIFlyoutBase_Primitives_Controls_Xaml_UI_Windows_winrt___01_Uevent_token_1__Z(
    a2,
    a1,
    v8);
  return a2;
}
