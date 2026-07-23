/*
 * XREFs of sub_14083F5FC @ 0x14083F5FC
 * Callers:
 *     sub_14083F570 @ 0x14083F570 (sub_14083F570.c)
 * Callees:
 *     ExAllocateTimer @ 0x1402D5B50 (ExAllocateTimer.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14083F680 @ 0x14083F680 (sub_14083F680.c)
 */

__int64 sub_14083F5FC()
{
  if ( !byte_140C16690 )
  {
    byte_140C16690 = 1;
    sub_14083F680();
    qword_140C16670 = ExAllocateTimer((__int64)sub_14025CB00, 0LL, 8u);
    if ( qword_140C16670 )
    {
      qword_140C16680 = 0LL;
      qword_140C16688 = -1LL;
      stru_140C166A0.Parameter = 0LL;
      stru_140C166A0.List.Flink = 0LL;
      stru_140C166A0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406D9E90;
      ExQueueWorkItem(&stru_140C166A0, DelayedWorkQueue);
    }
  }
  return 0LL;
}
