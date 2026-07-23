/*
 * XREFs of ViShutdownWatchdogExecuteDpc @ 0x140AD5120
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2A4 (VerifierBugCheckIfAppropriate.c)
 *     ViShutdownScheduleWatchdog @ 0x140AD50A4 (ViShutdownScheduleWatchdog.c)
 */

void __fastcall ViShutdownWatchdogExecuteDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // edx

  v4 = ++ViShutdownTimeoutCount;
  if ( VfZeroAllPagesRunning != 1 || v4 >= 4 )
  {
    if ( !EtwpStopTraceCount || EtwpStopTraceCount == ViEtwLastStopTraceCount )
    {
      if ( v4 <= 1 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x115uLL, VfShutdownThread, 0LL, 0LL);
      else
        _InterlockedExchange(&ViIrqlTrimAndLog, 0);
    }
    else
    {
      ViEtwLastStopTraceCount = EtwpStopTraceCount;
    }
  }
  ViShutdownScheduleWatchdog();
}
