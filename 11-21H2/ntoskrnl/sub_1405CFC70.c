/*
 * XREFs of sub_1405CFC70 @ 0x1405CFC70
 * Callers:
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_1408083DC @ 0x1408083DC (sub_1408083DC.c)
 *     sub_14098F180 @ 0x14098F180 (sub_14098F180.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_1405CFC70()
{
  if ( (byte_140C23908 & 8) == 0 )
  {
    byte_140C23908 |= 8u;
    ExQueueWorkItem(&stru_140C23840, DelayedWorkQueue);
  }
}
