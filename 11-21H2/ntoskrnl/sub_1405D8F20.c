/*
 * XREFs of sub_1405D8F20 @ 0x1405D8F20
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

__int64 __fastcall sub_1405D8F20(__int64 a1, __int64 a2, __int64 a3)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 368), DelayedWorkQueue);
  return 3221225494LL;
}
