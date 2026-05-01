/*
 * XREFs of ?Closed@?$consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x18068EC20
 * Callers:
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1806906B0 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$from_com_ref@AEBUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@?$weak_ref@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@winrt@@AEAAXAEBUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@1@@Z @ 0x18068DD38 (--$from_com_ref@AEBUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@-$weak_ref@UIFlyoutB.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::Closed(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[10])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  v7 = v9;
  v10 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::from_com_ref<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase const &>(
    a2,
    a1);
  a2[1] = v7;
  return a2;
}
