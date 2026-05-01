/*
 * XREFs of _lambda_756743a1f4e6fd4d650836e16277e452_::operator() @ 0x1801C5138
 * Callers:
 *     wistd::__function::__func__lambda_756743a1f4e6fd4d650836e16277e452__long___cdecl(void)_::operator() @ 0x1801C59F0 (wistd--__function--__func__lambda_756743a1f4e6fd4d650836e16277e452__long___cdecl(void)_--operato.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_756743a1f4e6fd4d650836e16277e452_::operator()(int **a1)
{
  unsigned int v1; // eax
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)*a1 + 16) + 80LL))(
         *((_QWORD *)*a1 + 16),
         _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*a1[1]), (__m128)COERCE_UNSIGNED_INT((float)a1[1][1])).m128_u64[0]);
  try
  {
    winrt::check_hresult(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x312,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v2);
  }
  return result;
}
