/*
 * XREFs of StorPortPause @ 0x1C00463B0
 * Callers:
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 *     RaidpLinkDown @ 0x1C0044BB4 (RaidpLinkDown.c)
 *     StorPortPauseVrfy @ 0x1C00B1690 (StorPortPauseVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidQueueDeferredItem @ 0x1C0014380 (RaidQueueDeferredItem.c)
 *     RaidPauseAdapterQueue @ 0x1C0019048 (RaidPauseAdapterQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C00190A0 (RaidResumeAdapterQueue.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0043BF8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

char __fastcall StorPortPause(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  _DWORD *Adapter; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  Adapter = RaidpPortGetAdapter(a1);
  v5 = qword_1C0092468;
  v6 = (__int64)Adapter;
  if ( (qword_1C0092468 & 0x200) != 0 )
    DbgLogRequest((__int64)Adapter, 14, retaddr, (__int64)Adapter, v2, 0LL, 0LL);
  v7 = 255LL;
  if ( v6 )
    v7 = *(unsigned int *)(v6 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
  {
    LODWORD(v10) = v2;
    LODWORD(v9) = v7;
    McTemplateK0pqq_EtwWriteTransfer(v7, &EventPortPause, v5, a1, v9, v10);
  }
  if ( !v6 )
    return 0;
  ++*(_DWORD *)(v6 + 5288);
  *(_DWORD *)(v6 + 1312) = v2;
  _InterlockedExchange((volatile __int32 *)(v6 + 1316), 1);
  RaidPauseAdapterQueue(v6);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 1168), 134684676, 134684677) != 134684677
    || v6 == -1152 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0092468 & 0x800) != 0 )
      DbgLogRequest(v6, 22, retaddr, 306LL, 0LL, 0LL, 0LL);
    if ( !(unsigned int)RaidResumeAdapterQueue(v6) )
      KeInsertQueueDpc((PRKDPC)(v6 + 1648), 0LL, 0LL);
  }
  else
  {
    *(_DWORD *)(v6 + 1184) = 3;
    RaidQueueDeferredItem((char *)(v6 + 944), (struct _SLIST_ENTRY *)(v6 + 1152));
  }
  return 1;
}
