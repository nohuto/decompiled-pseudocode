/*
 * XREFs of sub_140A6F0F0 @ 0x140A6F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_140A6F0F0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  if ( _InterlockedExchangeAdd(&dword_140C09800, 0xFFFFFFFF) > 1 )
    ExQueueWorkItem(&stru_140CF5F68, DelayedWorkQueue);
}
