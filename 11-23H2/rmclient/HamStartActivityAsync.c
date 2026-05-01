/*
 * XREFs of HamStartActivityAsync @ 0x180008900
 * Callers:
 *     sub_18001CFF4 @ 0x18001CFF4 (sub_18001CFF4.c)
 * Callees:
 *     unknown_libname_2 @ 0x180015130 (unknown_libname_2.c)
 */

CLIENT_CALL_RETURN __fastcall HamStartActivityAsync(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  int v3; // r8d
  __int64 v4; // r9
  int v6; // [rsp+28h] [rbp-30h]

  if ( (unsigned int)unknown_libname_2(a1) )
  {
    return (CLIENT_CALL_RETURN)HampInProcStartActivityAsync(v2[1]);
  }
  else
  {
    v6 = v3;
    return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 8u, 0LL, *v2, v1, v6, v4);
  }
}
