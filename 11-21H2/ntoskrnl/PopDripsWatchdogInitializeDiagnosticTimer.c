/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x140B531EC
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1408534E0 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140C209C8 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140C20918,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140C209CC |= 1u;
  }
  return 0LL;
}
