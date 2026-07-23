/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x140B969A4
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x140848B88 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140C39AA8 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140C399F8,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140C39AAC |= 1u;
  }
  return 0LL;
}
