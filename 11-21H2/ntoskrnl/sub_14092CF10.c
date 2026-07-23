/*
 * XREFs of sub_14092CF10 @ 0x14092CF10
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

__int64 __fastcall sub_14092CF10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5, int a6)
{
  int v6; // eax

  if ( !a5 || a6 != 1 )
    return 1LL;
  v6 = *a5;
  stru_140C48BE0.Parameter = 0LL;
  stru_140C48BE0.List.Flink = 0LL;
  dword_140C48C0C = v6;
  stru_140C48BE0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14092CFC0;
  ExQueueWorkItem(&stru_140C48BE0, DelayedWorkQueue);
  return 2LL;
}
