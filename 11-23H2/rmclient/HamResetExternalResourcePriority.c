/*
 * XREFs of HamResetExternalResourcePriority @ 0x18001E360
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_2 @ 0x180015130 (unknown_libname_2.c)
 */

CLIENT_CALL_RETURN __fastcall HamResetExternalResourcePriority(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  unsigned __int8 v3; // r8
  CLIENT_CALL_RETURN result; // rax
  int v5; // [rsp+28h] [rbp-20h]

  if ( unknown_libname_2(a1) )
  {
    result.Simple = HampInProcResetExternalResourcePriority(v2[1]);
  }
  else
  {
    v5 = v3;
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 0xEu, 0LL, *v2, v1, v5).Pointer;
  }
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
