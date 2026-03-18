/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x140864A5C
 * Callers:
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     WheapReportDeferredLiveDumps @ 0x140A09174 (WheapReportDeferredLiveDumps.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  unsigned int v0; // edi
  bool v1; // bl

  v0 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
  WheapCrashDumpInitialized = 1;
  v1 = WheapDispatchPtr.DriverObject != (struct _DRIVER_OBJECT *)&WheapDispatchPtr.DriverObject;
  ExReleaseFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
  if ( v1 )
    return (unsigned int)WheapReportDeferredLiveDumps();
  return v0;
}
