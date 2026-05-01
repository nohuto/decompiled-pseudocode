/*
 * XREFs of ?PointerEntered@?$consume_Windows_UI_Xaml_IUIElement@UIUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@23@Uauto_revoke_t@3@AEBUPointerEventHandler@Input@Xaml@UI@Windows@3@@Z @ 0x1805BA330
 * Callers:
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1805B9AB0 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0?$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEAA@AEBUIUIElement@Xaml@UI@Windows@1@@Z @ 0x1805B8280 (--0-$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEAA@AEBUIUIElement@Xaml@UI@Windows@1@@.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement<winrt::Windows::UI::Xaml::IUIElement>::PointerEntered(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed int v6; // eax
  __int64 v7; // rbx
  _QWORD *result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[63])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  v7 = v9;
  winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement>::weak_ref<winrt::Windows::UI::Xaml::IUIElement>(a2, a1);
  result = a2;
  a2[1] = v7;
  return result;
}
