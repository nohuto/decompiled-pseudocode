/*
 * XREFs of RaidUnitPauseTimerDpcRoutine @ 0x1C0061C50
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0012630 (RaidResumeUnitQueue.c)
 *     RaidRestartIoQueue @ 0x1C00194E0 (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitPauseTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( (unsigned int)RaidResumeUnitQueue(v4) )
    RaidRestartIoQueue(v4, 0);
}
