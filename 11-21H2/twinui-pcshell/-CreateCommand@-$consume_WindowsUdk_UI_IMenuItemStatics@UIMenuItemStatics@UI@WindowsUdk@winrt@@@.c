/*
 * XREFs of ?CreateCommand@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUMenuItem@UI@WindowsUdk@3@AEBUhstring@param@3@0AEBUFontIconInfo@563@AEBU?$TypedEventHandler@UMenuItem@UI@WindowsUdk@winrt@@UMenuItemInvokedArgs@234@@Foundation@Windows@3@@Z @ 0x1805D89F4
 * Callers:
 *     ??R_lambda_7c04563311270235dbf91af2d25c417e_@@QEBA?AUMenuItem@UI@WindowsUdk@winrt@@AEBUIMenuItemStatics@234@@Z @ 0x1805D85AC (--R_lambda_7c04563311270235dbf91af2d25c417e_@@QEBA-AUMenuItem@UI@WindowsUdk@winrt@@AEBUIMenuItem.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateCommand(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rcx
  signed int v8; // eax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v6 = *a1;
  v10 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v6 + 48LL))(
         v6,
         *a3,
         *a4,
         *a5,
         *a6,
         &v10);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  *a2 = v10;
  return a2;
}
