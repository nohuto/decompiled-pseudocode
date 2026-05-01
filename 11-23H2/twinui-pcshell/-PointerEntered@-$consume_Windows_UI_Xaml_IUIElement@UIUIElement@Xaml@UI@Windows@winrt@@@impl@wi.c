/*
 * XREFs of ?PointerEntered@?$consume_Windows_UI_Xaml_IUIElement@UIUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@23@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x180690E54
 * Callers:
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1806906B0 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$?0AEBUIUIElement@Xaml@UI@Windows@winrt@@X@?$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEAA@AEBUIUIElement@Xaml@UI@Windows@1@@Z @ 0x18068CCC4 (--$-0AEBUIUIElement@Xaml@UI@Windows@winrt@@X@-$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winr.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement<winrt::Windows::UI::Xaml::IUIElement>::PointerEntered(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed int v5; // eax
  __int64 v6; // rbx
  _QWORD *result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*a1 + 504LL))(*a1, *a4, &v8);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  v6 = v8;
  winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement>::weak_ref<winrt::Windows::UI::Xaml::IUIElement>(a2);
  result = a2;
  a2[1] = v6;
  return result;
}
