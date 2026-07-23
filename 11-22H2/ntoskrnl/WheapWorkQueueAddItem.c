/*
 * XREFs of WheapWorkQueueAddItem @ 0x140613A00
 * Callers:
 *     WheapReportBootError @ 0x140610438 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x140610500 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x1406106A0 (WheaReportHwError.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x14028C180 (ExInterlockedInsertTailList.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
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
