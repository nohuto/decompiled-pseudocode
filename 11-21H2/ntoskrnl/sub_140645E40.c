/*
 * XREFs of sub_140645E40 @ 0x140645E40
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_140645E40()
{
  ExQueueWorkItem(&stru_140C0FAA0, DelayedWorkQueue);
}
