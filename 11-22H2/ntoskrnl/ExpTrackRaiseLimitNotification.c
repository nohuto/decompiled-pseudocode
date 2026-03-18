/*
 * XREFs of ExpTrackRaiseLimitNotification @ 0x140608AF4
 * Callers:
 *     ExpLimitDpcInsertEntry @ 0x140608240 (ExpLimitDpcInsertEntry.c)
 *     ExpTrackTableGetMoreLimit @ 0x140608B60 (ExpTrackTableGetMoreLimit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall ExpTrackRaiseLimitNotification(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
  {
    RtlpInterlockedPushEntrySList(&stru_140CF8260, (PSLIST_ENTRY)(a1 + 80));
    if ( !_InterlockedCompareExchange(&dword_140CF8270, 1, 0) )
    {
      stru_140CF8278.Parameter = 0LL;
      stru_140CF8278.List.Flink = 0LL;
      stru_140CF8278.WorkerRoutine = (void (__fastcall *)(void *))ExpPlProcessNotifications;
      ExQueueWorkItem(&stru_140CF8278, NormalWorkQueue);
    }
  }
}
