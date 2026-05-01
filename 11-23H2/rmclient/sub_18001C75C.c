/*
 * XREFs of sub_18001C75C @ 0x18001C75C
 * Callers:
 *     RmAccessCheckOnSelf @ 0x18001CA90 (RmAccessCheckOnSelf.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall sub_18001C75C(__int64 a1, int a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020770, 4u, 0LL, *(_QWORD *)(a1 + 8), a2);
}
