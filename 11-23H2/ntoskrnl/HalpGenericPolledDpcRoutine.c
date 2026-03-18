/*
 * XREFs of HalpGenericPolledDpcRoutine @ 0x1403637D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void __fastcall HalpGenericPolledDpcRoutine(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedIncrement((volatile signed __int32 *)DeferredContext + 60) == 1 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 80), DelayedWorkQueue);
}
