/*
 * XREFs of ?CreateInstance@?$consume_WindowsUdk_UI_Shell_IShellViewAnimationPropertiesFactory@UIShellViewAnimationPropertiesFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBUGestureAnimationData@Input@UI@WindowsUdk@3@@Z @ 0x180760190
 * Callers:
 *     ??R_lambda_048acaf127f395b888e969740535bc64_@@QEBA@AEBUIShellViewAnimationPropertiesFactory@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18075FD30 (--R_lambda_048acaf127f395b888e969740535bc64_@@QEBA@AEBUIShellViewAnimationPropertiesFactory@Shel.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationPropertiesFactory<winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory>::CreateInstance(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3,
        __int128 *a4)
{
  __int64 *v4; // rcx
  __int128 v5; // xmm0
  __int64 v7; // rax
  signed int v8; // eax
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *a4;
  v11 = 0LL;
  v7 = *v4;
  v10 = v5;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64 *))(v7 + 48))(v4, a3, &v10, &v11);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  *a2 = v11;
  return a2;
}
