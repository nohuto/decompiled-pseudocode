/*
 * XREFs of WheapWorkQueueAddItem @ 0x140613990
 * Callers:
 *     WheapReportBootError @ 0x1406103C8 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x140610490 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x140610630 (WheaReportHwError.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x14028C2A0 (ExInterlockedInsertTailList.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, struct _LIST_ENTRY *a2)
{
  ExInterlockedInsertTailList((PLIST_ENTRY)a1, a2, (PKSPIN_LOCK)(a1 + 16));
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 24)) == 1 )
  {
    if ( KeGetCurrentIrql() > 2u )
      KiInsertQueueDpc(a1 + 32, 0LL, 0LL, 0LL, 0);
    else
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
  }
}
