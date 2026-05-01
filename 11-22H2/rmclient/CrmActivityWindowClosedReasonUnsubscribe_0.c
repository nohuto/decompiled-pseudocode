/*
 * XREFs of CrmActivityWindowClosedReasonUnsubscribe_0 @ 0x1800087B8
 * Callers:
 *     sub_180008700 @ 0x180008700 (sub_180008700.c)
 *     CrmActivityWindowClosedReasonSubscribe_0 @ 0x180009A5C (CrmActivityWindowClosedReasonSubscribe_0.c)
 *     CrmActivityWindowClosedReasonUnsubscribe @ 0x18001EF10 (CrmActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     sub_1800153DC @ 0x1800153DC (sub_1800153DC.c)
 */

void __fastcall CrmActivityWindowClosedReasonUnsubscribe_0(__int64 a1)
{
  __int64 v2; // rsi

  if ( *(_QWORD *)(a1 + 96) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  if ( *(_DWORD *)(a1 + 88) || *(_DWORD *)(a1 + 92) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( (unsigned int)sub_1800153DC(v2) )
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800209B0, 9u, 0LL, *(_QWORD *)(a1 + 8), *(_QWORD *)(v2 + 8));
    else
      CrmpInProcActivityWindowClosedReasonUnsubscribe(*(_QWORD *)(a1 + 8), *(_QWORD *)(v2 + 16));
    *(_QWORD *)(a1 + 88) = 0LL;
  }
}
