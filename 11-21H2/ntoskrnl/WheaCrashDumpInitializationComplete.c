/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x1408642EC
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     WheapReportDeferredLiveDumps @ 0x140A09D2C (WheapReportDeferredLiveDumps.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  unsigned int v0; // edi
  bool v1; // bl

  v0 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
  WheapCrashDumpInitialized = 1;
  v1 = WheapDispatchPtr.Queue.ListEntry.Blink != (struct _LIST_ENTRY *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.AttachedDevice);
  if ( v1 )
    return (unsigned int)WheapReportDeferredLiveDumps();
  return v0;
}
