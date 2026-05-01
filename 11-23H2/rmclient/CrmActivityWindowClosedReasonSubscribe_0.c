/*
 * XREFs of CrmActivityWindowClosedReasonSubscribe_0 @ 0x180009A5C
 * Callers:
 *     CrmActivityWindowClosedReasonSubscribe @ 0x180009A50 (CrmActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     CrmActivityWindowClosedReasonUnsubscribe_0 @ 0x1800087B8 (CrmActivityWindowClosedReasonUnsubscribe_0.c)
 *     sub_1800153DC @ 0x1800153DC (sub_1800153DC.c)
 */

__int64 __fastcall CrmActivityWindowClosedReasonSubscribe_0(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v6; // esi
  __int64 v7; // rbx
  int Pointer; // ebx
  _QWORD *v9; // r14

  v6 = 1;
  v7 = a1[2];
  if ( (unsigned int)sub_1800153DC(v7) )
  {
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_1800209B0,
                              8u,
                              0LL,
                              a1[1],
                              *(_QWORD *)(v7 + 8),
                              a1 + 11).Pointer;
    v9 = a1 + 11;
  }
  else
  {
    v9 = a1 + 11;
    Pointer = CrmpInProcActivityWindowClosedReasonSubscribe(a1[1], *(_QWORD *)(v7 + 16), a1 + 11);
  }
  if ( Pointer >= 0 )
  {
    a1[9] = a2;
    a1[10] = a3;
    Pointer = RtlSubscribeWnfStateChangeNotification(a1 + 12, *v9, 0LL, sub_180009BF0, a1, 0LL, 0, 0);
    if ( Pointer >= 0 )
    {
      v6 = 0;
      Pointer = 0;
    }
  }
  if ( v6 )
    CrmActivityWindowClosedReasonUnsubscribe_0((__int64)a1);
  return (unsigned int)Pointer;
}
