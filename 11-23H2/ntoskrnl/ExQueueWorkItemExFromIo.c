/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x14060D0FC
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140558950 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402B7930 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x1402B8110 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1402B97DC (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 1);
}
