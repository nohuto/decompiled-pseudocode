/*
 * XREFs of sub_14025E250 @ 0x14025E250
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_14025E250()
{
  ExQueueWorkItem(&qword_140C48FA0, DelayedWorkQueue);
}
