/*
 * XREFs of ExpTrackRaiseLimitNotification @ 0x140608FD4
 * Callers:
 *     ExpLimitDpcInsertEntry @ 0x140608720 (ExpLimitDpcInsertEntry.c)
 *     ExpTrackTableGetMoreLimit @ 0x140609040 (ExpTrackTableGetMoreLimit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall ExpTrackRaiseLimitNotification(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
  {
    RtlpInterlockedPushEntrySList(&stru_140CF81A0, (PSLIST_ENTRY)(a1 + 80));
    if ( !_InterlockedCompareExchange(&dword_140CF81B0, 1, 0) )
    {
      stru_140CF81B8.Parameter = 0LL;
      stru_140CF81B8.List.Flink = 0LL;
      stru_140CF81B8.WorkerRoutine = (void (__fastcall *)(void *))ExpPlProcessNotifications;
      ExQueueWorkItem(&stru_140CF81B8, NormalWorkQueue);
    }
  }
}
