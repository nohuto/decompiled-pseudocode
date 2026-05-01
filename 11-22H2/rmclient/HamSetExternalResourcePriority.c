/*
 * XREFs of HamSetExternalResourcePriority @ 0x18001E660
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_2 @ 0x180015130 (unknown_libname_2.c)
 */

CLIENT_CALL_RETURN __fastcall HamSetExternalResourcePriority(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  __int64 v3; // r8
  CLIENT_CALL_RETURN result; // rax

  if ( unknown_libname_2(a1) )
    result.Simple = HampInProcSetExternalResourcePriority(v2[1]);
  else
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 0xDu, 0LL, *v2, v1, v3).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
