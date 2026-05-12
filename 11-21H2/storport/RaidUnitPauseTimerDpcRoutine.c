/*
 * XREFs of RaidUnitPauseTimerDpcRoutine @ 0x1C0054F40
 * Callers:
 *     <none>
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0009220 (RaidRestartIoQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0014698 (RaidResumeUnitQueue.c)
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
