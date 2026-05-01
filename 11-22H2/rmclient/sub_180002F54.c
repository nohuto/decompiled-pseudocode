/*
 * XREFs of sub_180002F54 @ 0x180002F54
 * Callers:
 *     RmAccessCheck @ 0x180002EA0 (RmAccessCheck.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall sub_180002F54(__int64 a1, int a2, int a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020770, 3u, 0LL, *(_QWORD *)(a1 + 8), a2, a3);
}
