/*
 * XREFs of ?CreateContainer@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBUFontIconInfo@UI@WindowsUdk@3@AEBU?$vector@UMenuItem@UI@WindowsUdk@winrt@@@53@@Z @ 0x1806CCD34
 * Callers:
 *     ??R_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z @ 0x1806CC098 (--R_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateContainer(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rcx
  signed int v8; // eax
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v6 = *a1;
  v10 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v6 + 64LL))(
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
