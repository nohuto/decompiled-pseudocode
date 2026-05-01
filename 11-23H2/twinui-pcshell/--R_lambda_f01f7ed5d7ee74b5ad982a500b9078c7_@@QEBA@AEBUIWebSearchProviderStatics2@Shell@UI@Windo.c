/*
 * XREFs of ??R_lambda_f01f7ed5d7ee74b5ad982a500b9078c7_@@QEBA@AEBUIWebSearchProviderStatics2@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801E9C90
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_f01f7ed5d7ee74b5ad982a500b9078c7_@@CA@AEBUIWebSearchProviderStatics2@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801E5770 (-_lambda_invoker_cdecl_@_lambda_f01f7ed5d7ee74b5ad982a500b9078c7_@@CA@AEBUIWebSearchProviderStat.c)
 *     ?FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801EB2EC (-FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall _lambda_f01f7ed5d7ee74b5ad982a500b9078c7_::operator()(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  v3 = *a3;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}
