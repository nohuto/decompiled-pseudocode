/*
 * XREFs of PsTerminateServerSilo @ 0x1409AC950
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AD150 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x1409B35F4 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x1409B3AD0 (PspCatchCriticalBreak.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB210 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020C040 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1407DD8B4 (PspTerminateAllProcessesInJobHierarchy.c)
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
