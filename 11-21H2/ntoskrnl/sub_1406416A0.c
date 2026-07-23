/*
 * XREFs of sub_1406416A0 @ 0x1406416A0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1406416A0(__int64 a1, unsigned int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(qword_140C11460 + 104LL * a2), HyperCriticalWorkQueue);
}
