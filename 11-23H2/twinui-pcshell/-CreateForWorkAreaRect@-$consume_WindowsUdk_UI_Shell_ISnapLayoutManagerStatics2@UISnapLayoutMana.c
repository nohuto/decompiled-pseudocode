/*
 * XREFs of ?CreateForWorkAreaRect@?$consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics2@UISnapLayoutManagerStatics2@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x18068EDC8
 * Callers:
 *     ??$call@AEAV_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@@?$factory_cache_entry@USnapLayoutManager@Shell@UI@WindowsUdk@winrt@@UISnapLayoutManagerStatics2@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@@Z @ 0x18068D8D8 (--$call@AEAV_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@@-$factory_cache_entry@USnapLayoutManager.c)
 *     ??R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18068EA18 (--R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@Windo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics2<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2>::CreateForWorkAreaRect(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 *v3; // rcx
  __int128 v5; // xmm0
  __int64 v6; // rax
  signed int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = *a3;
  v10 = 0LL;
  v6 = *v3;
  v9 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v6 + 48))(v3, &v9, &v10);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  *a2 = v10;
  return a2;
}
