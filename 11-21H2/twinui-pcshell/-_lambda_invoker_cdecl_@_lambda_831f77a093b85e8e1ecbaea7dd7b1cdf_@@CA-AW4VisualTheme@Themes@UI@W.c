/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_831f77a093b85e8e1ecbaea7dd7b1cdf_@@CA?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@3456@@Z @ 0x1800445A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall _lambda_831f77a093b85e8e1ecbaea7dd7b1cdf_::_lambda_invoker_cdecl_(__int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
