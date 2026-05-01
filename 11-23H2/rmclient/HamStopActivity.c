/*
 * XREFs of HamStopActivity @ 0x180009710
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_2 @ 0x180015130 (unknown_libname_2.c)
 */

CLIENT_CALL_RETURN __fastcall HamStopActivity(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx

  if ( !(unsigned int)unknown_libname_2(a1) )
    return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 9u, 0LL, *v2, v1);
  return (CLIENT_CALL_RETURN)HampInProcStopActivity(v2[1]);
}
