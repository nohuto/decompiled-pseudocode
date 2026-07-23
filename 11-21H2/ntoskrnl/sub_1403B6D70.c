/*
 * XREFs of sub_1403B6D70 @ 0x1403B6D70
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1403B6D70(__int64 a1, int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&unk_140C1C288 + 6 * a2, DelayedWorkQueue);
}
