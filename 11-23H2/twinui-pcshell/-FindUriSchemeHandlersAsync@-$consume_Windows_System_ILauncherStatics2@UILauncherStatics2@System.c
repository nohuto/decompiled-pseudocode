/*
 * XREFs of ?FindUriSchemeHandlersAsync@?$consume_Windows_System_ILauncherStatics2@UILauncherStatics2@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18070604C
 * Callers:
 *     ??$call@AEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@?$factory_cache_entry@ULauncher@System@Windows@winrt@@UILauncherStatics2@234@@impl@winrt@@QEAA?A_PAEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@Z @ 0x18070234C (--$call@AEAV_lambda_adc4b1de82694fc8d054373ced810589_@@@-$factory_cache_entry@ULauncher@System@W.c)
 *     ??R_lambda_adc4b1de82694fc8d054373ced810589_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@Z @ 0x180705724 (--R_lambda_adc4b1de82694fc8d054373ced810589_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_System_ILauncherStatics2<winrt::Windows::System::ILauncherStatics2>::FindUriSchemeHandlersAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 104LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
