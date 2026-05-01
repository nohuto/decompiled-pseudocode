/*
 * XREFs of CrmActivityStop_0 @ 0x1800090F0
 * Callers:
 *     CrmActivityStop @ 0x1800090E0 (CrmActivityStop.c)
 * Callees:
 *     sub_1800153DC @ 0x1800153DC (sub_1800153DC.c)
 */

CLIENT_CALL_RETURN __fastcall CrmActivityStop_0(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned int)sub_1800153DC(v2) )
    return NdrClientCall3(
             (MIDL_STUBLESS_PROXY_INFO *)&stru_1800209B0,
             7u,
             0LL,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v2 + 8));
  return (CLIENT_CALL_RETURN)CrmpInProcActivityStop(*(_QWORD *)(a1 + 8), *(_QWORD *)(v2 + 16));
}
