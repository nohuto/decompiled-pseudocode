/*
 * XREFs of sub_1405D02A0 @ 0x1405D02A0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1405D02A0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  if ( !_InterlockedExchange(&dword_140C235C0, 1) )
    ExQueueWorkItem(&stru_140C235A0, DelayedWorkQueue);
}
