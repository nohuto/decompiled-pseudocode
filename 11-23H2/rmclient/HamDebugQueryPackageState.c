/*
 * XREFs of HamDebugQueryPackageState @ 0x180002A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800168DC @ 0x1800168DC (sub_1800168DC.c)
 */

CLIENT_CALL_RETURN __fastcall HamDebugQueryPackageState(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  if ( !a4 )
    return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800209E0, 6u, 0LL, *a1, a2, a3);
  *a4 = 0LL;
  *a5 = 0;
  return (CLIENT_CALL_RETURN)sub_1800168DC(*a1, a2, a3, (_DWORD)a4, (__int64)a5);
}
