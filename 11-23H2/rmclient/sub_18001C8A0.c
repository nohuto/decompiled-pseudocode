/*
 * XREFs of sub_18001C8A0 @ 0x18001C8A0
 * Callers:
 *     RmAvailabilityCheck @ 0x18001CB90 (RmAvailabilityCheck.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall sub_18001C8A0(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020770, 5u, 0LL, *(_QWORD *)(a1 + 8), a2, a3, a4, a5);
}
