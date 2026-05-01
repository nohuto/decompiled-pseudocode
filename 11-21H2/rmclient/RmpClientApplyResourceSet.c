/*
 * XREFs of RmpClientApplyResourceSet @ 0x18000996C
 * Callers:
 *     RmApplyResourceSet @ 0x180009960 (RmApplyResourceSet.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall RmpClientApplyResourceSet(__int64 a1, __int64 a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021F00, 5u, 0LL, *(_QWORD *)(a1 + 16), a2);
}
