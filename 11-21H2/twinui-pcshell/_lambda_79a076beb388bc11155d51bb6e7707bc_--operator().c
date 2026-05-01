/*
 * XREFs of _lambda_79a076beb388bc11155d51bb6e7707bc_::operator() @ 0x1804C902C
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_79a076beb388bc11155d51bb6e7707bc_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x1804C8BD0 (--$LambdaEnumWindowsProc@V_lambda_79a076beb388bc11155d51bb6e7707bc_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_79a076beb388bc11155d51bb6e7707bc_::operator()(__int64 a1, HWND a2)
{
  HRESULT WindowAttribute; // eax
  __int128 pvAttribute; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  pvAttribute = 0LL;
  if ( IsIconic(a2) || GetWindow(a2, 4u) != **(HWND **)a1 )
    return 1LL;
  WindowAttribute = DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u);
  if ( WindowAttribute < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x101,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)WindowAttribute);
    return 1LL;
  }
  if ( (int)pvAttribute >= SDWORD2(pvAttribute) || SDWORD1(pvAttribute) >= SHIDWORD(pvAttribute) )
    return 1LL;
  *(_OWORD *)*(_QWORD *)(a1 + 8) = pvAttribute;
  return 0LL;
}
