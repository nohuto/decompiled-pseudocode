/*
 * XREFs of WheapWorkQueueAddItem @ 0x140613EE0
 * Callers:
 *     WheapReportBootError @ 0x140610918 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x1406109E0 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x140610B80 (WheaReportHwError.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x14028C530 (ExInterlockedInsertTailList.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, _LIST_ENTRY *a2)
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
