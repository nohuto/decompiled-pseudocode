/*
 * XREFs of sub_14025CB00 @ 0x14025CB00
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_14025CB00()
{
  ExQueueWorkItem(&stru_140C166A0, DelayedWorkQueue);
}
