/*
 * XREFs of ?CreateCommand@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBUFontIconInfo@UI@WindowsUdk@3@AEBU?$TypedEventHandler@UMenuItem@UI@WindowsUdk@winrt@@UMenuItemInvokedArgs@234@@Foundation@Windows@3@@Z @ 0x1802EA2CA
 * Callers:
 *     ??R_lambda_7c04563311270235dbf91af2d25c417e_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z @ 0x1806CC058 (--R_lambda_7c04563311270235dbf91af2d25c417e_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
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
  int v8; // eax
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

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
    winrt::throw_hresult((unsigned int)v8);
  *a2 = v10;
  return a2;
}
