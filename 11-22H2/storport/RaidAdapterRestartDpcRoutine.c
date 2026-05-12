/*
 * XREFs of RaidAdapterRestartDpcRoutine @ 0x1C0037D90
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C001921C (RaidAdapterRestartQueues.c)
 */

void __fastcall RaidAdapterRestartDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  RaidAdapterRestartQueues(DeferredContext[8], 0LL);
}
