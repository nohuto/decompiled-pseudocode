/*
 * XREFs of sub_14063BD64 @ 0x14063BD64
 * Callers:
 *     sub_14063B3D4 @ 0x14063B3D4 (sub_14063B3D4.c)
 *     sub_14063BDD0 @ 0x14063BDD0 (sub_14063BDD0.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

void __fastcall sub_14063BD64(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
  {
    ExpInterlockedPushEntrySList(&stru_140CE1EE0, (PSLIST_ENTRY)(a1 + 80));
    if ( !_InterlockedCompareExchange(&dword_140CE1EF0, 1, 0) )
    {
      stru_140CE1EF8.Parameter = 0LL;
      stru_140CE1EF8.List.Flink = 0LL;
      stru_140CE1EF8.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14063BB20;
      ExQueueWorkItem(&stru_140CE1EF8, NormalWorkQueue);
    }
  }
}
