/*
 * XREFs of RaidPauseTimerDpcRoutine @ 0x1C003CF70
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeAdapterQueue @ 0x1C00190A0 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C001921C (RaidAdapterRestartQueues.c)
 */

void __fastcall RaidPauseTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( !(unsigned int)RaidResumeAdapterQueue(v4) )
    RaidAdapterRestartQueues(v4, 0LL);
}
