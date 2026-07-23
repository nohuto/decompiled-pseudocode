/*
 * XREFs of sub_14053F110 @ 0x14053F110
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_14053F110(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange(&dword_140D01824, 1, 0) )
    ExQueueWorkItem(&stru_140C492E0, DelayedWorkQueue);
}
