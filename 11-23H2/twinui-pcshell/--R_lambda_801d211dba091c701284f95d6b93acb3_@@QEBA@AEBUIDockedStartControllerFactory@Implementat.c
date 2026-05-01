/*
 * XREFs of ??R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementation@StartScreen@UI@WindowsUdk@winrt@@@Z @ 0x1801E1394
 * Callers:
 *     ??$call@AEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@?$factory_cache_entry@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIDockedStartControllerFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@Z @ 0x1801E0F9C (--$call@AEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@-$factory_cache_entry@UDockedStartContro.c)
 *     ??0DockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1801E117C (--0DockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??B?$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ @ 0x1800AF4A0 (--B-$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall _lambda_801d211dba091c701284f95d6b93acb3_::operator()(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rsi
  _QWORD *v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, __int64 *); // rdi
  __int64 v7; // rax
  int v8; // eax
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v3 = *a3;
  v10 = 0LL;
  v5 = (_QWORD *)*a1;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v3 + 48LL);
  v11 = a1[1];
  v7 = winrt::impl::bind_out<winrt::Windows::Foundation::IInspectable>::operator void * *(&v11);
  v8 = v6(v3, *v5, v7, &v10);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  *a2 = v10;
  return a2;
}
