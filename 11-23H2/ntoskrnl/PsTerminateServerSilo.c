/*
 * XREFs of PsTerminateServerSilo @ 0x1409AC8A0
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AD0A0 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x1409B3544 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x1409B3A20 (PspCatchCriticalBreak.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB150 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020C020 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1407DD334 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  unsigned int v1; // edx
  struct _KEVENT *v2; // rcx

  if ( a1 )
  {
    if ( PsIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v2, v1, 0);
  }
}
