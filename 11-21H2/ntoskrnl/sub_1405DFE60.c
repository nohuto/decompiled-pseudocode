/*
 * XREFs of sub_1405DFE60 @ 0x1405DFE60
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1405DFE60(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  if ( _InterlockedIncrement(&dword_140C1C110) == 1 )
    ExQueueWorkItem(&stru_140C1C120, DelayedWorkQueue);
}
