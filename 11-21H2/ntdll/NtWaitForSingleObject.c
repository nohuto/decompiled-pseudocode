/*
 * XREFs of NtWaitForSingleObject @ 0x1800A40F0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800013C0 (RtlQueryProcessDebugInformation.c)
 *     RtlpWow64SuspendThread @ 0x180001A20 (RtlpWow64SuspendThread.c)
 *     EtwpLogger @ 0x1800041C0 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180005B64 (EtwpStopUmLogger.c)
 *     RtlpWaitOnCriticalSection @ 0x18001D420 (RtlpWaitOnCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     RtlReportSilentProcessExit @ 0x1800548C0 (RtlReportSilentProcessExit.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800596D0 (RtlWaitForWnfMetaNotification.c)
 *     RtlAcquireResourceShared @ 0x180069980 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180069AA0 (RtlAcquireResourceExclusive.c)
 *     LdrpWaitForInitializationComplete @ 0x18007B404 (LdrpWaitForInitializationComplete.c)
 *     EtwpSynchronizeWithLogger @ 0x180090FC8 (EtwpSynchronizeWithLogger.c)
 *     LdrHotPatchNotify @ 0x1800D9A20 (LdrHotPatchNotify.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DAD8C (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800E2080 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E2610 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7A68 (RtlpWow64SuspendProcess.c)
 *     WaitForWerSvc @ 0x1800E8B84 (WaitForWerSvc.c)
 *     LdrpResReadFile @ 0x1800EF728 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF558 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x18010EFB0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 4;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
