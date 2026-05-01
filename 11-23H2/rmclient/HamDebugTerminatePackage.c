/*
 * XREFs of HamDebugTerminatePackage @ 0x18001D720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamDebugTerminatePackage(_QWORD *a1, __int64 a2)
{
  int v3; // [rsp+28h] [rbp-30h]
  int v4; // [rsp+30h] [rbp-28h]

  v4 = 1536;
  v3 = 3;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800209E0, 5u, 0LL, *a1, a2, v3, v4);
}
