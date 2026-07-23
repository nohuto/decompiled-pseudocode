/*
 * XREFs of sub_1403DD0E0 @ 0x1403DD0E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

__int64 __fastcall sub_1403DD0E0(__int64 a1, __int64 a2, __int64 a3)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 264), DelayedWorkQueue);
  return 3221225494LL;
}
