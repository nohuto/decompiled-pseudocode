/*
 * XREFs of HamUpdateActivityProperties @ 0x180008880
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_2 @ 0x180015130 (unknown_libname_2.c)
 */

CLIENT_CALL_RETURN __fastcall HamUpdateActivityProperties(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  __int64 v3; // r8

  if ( !(unsigned int)unknown_libname_2(a1) )
    return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 0xAu, 0LL, *v2, v1, v3);
  return (CLIENT_CALL_RETURN)HampInProcUpdateActivityProperties(v2[1]);
}
