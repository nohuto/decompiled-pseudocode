/*
 * XREFs of sub_1405F5B3C @ 0x1405F5B3C
 * Callers:
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 */

void __fastcall sub_1405F5B3C(__int64 a1)
{
  if ( byte_140C5B0D8 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      stru_140C1B320.List.Flink = 0LL;
      stru_140C1B320.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1409CF1A0;
      stru_140C1B320.Parameter = (PVOID)(int)a1;
      ExQueueWorkItem(&stru_140C1B320, HyperCriticalWorkQueue);
    }
    else
    {
      sub_1409CF1A0(a1);
    }
  }
}
