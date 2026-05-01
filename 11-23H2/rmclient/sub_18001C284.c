/*
 * XREFs of sub_18001C284 @ 0x18001C284
 * Callers:
 *     sub_18001C0A0 @ 0x18001C0A0 (sub_18001C0A0.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall sub_18001C284(__int64 a1, __int64 a2, __int64 a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020770, 1u, 0LL, *(_QWORD *)(a1 + 16), a2, a3);
}
