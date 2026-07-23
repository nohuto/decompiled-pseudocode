/*
 * XREFs of TtmpTerminalInactivityTimerDpcRoutine @ 0x1405A3BF0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void __fastcall TtmpTerminalInactivityTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedIncrement(&TtmpTerminalInactivityWorkCount) == 1 )
    ExQueueWorkItem(&TtmpTerminalInactivityWorkItem, DelayedWorkQueue);
}
