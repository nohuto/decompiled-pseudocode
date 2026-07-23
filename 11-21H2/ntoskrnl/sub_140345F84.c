/*
 * XREFs of sub_140345F84 @ 0x140345F84
 * Callers:
 *     sub_1406FEB88 @ 0x1406FEB88 (sub_1406FEB88.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_140345F84()
{
  if ( !_InterlockedExchange(&dword_140CE1FC0, 1) )
    ExQueueWorkItem(&stru_140C49300, DelayedWorkQueue);
}
