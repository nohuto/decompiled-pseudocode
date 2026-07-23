/*
 * XREFs of sub_14053F140 @ 0x14053F140
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_14053F140()
{
  if ( byte_140D01828 )
    ExQueueWorkItem(&stru_140C49160, DelayedWorkQueue);
}
