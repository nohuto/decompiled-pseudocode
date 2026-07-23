/*
 * XREFs of NtWaitForSingleObject @ 0x1800A0F30
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlpWow64SuspendThread @ 0x180001CA0 (RtlpWow64SuspendThread.c)
 *     LdrpWaitForInitializationComplete @ 0x180002CDC (LdrpWaitForInitializationComplete.c)
 *     LdrpDrainWorkQueue @ 0x18002A48C (LdrpDrainWorkQueue.c)
 *     RtlpWaitOnCriticalSection @ 0x180033F90 (RtlpWaitOnCriticalSection.c)
 *     RtlReportSilentProcessExit @ 0x1800512A0 (RtlReportSilentProcessExit.c)
 *     EtwpLogger @ 0x18005B0E0 (EtwpLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x18005F3A4 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopUmLogger @ 0x18005F5F0 (EtwpStopUmLogger.c)
 *     RtlAcquireResourceShared @ 0x1800601A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800602C0 (RtlAcquireResourceExclusive.c)
 *     RtlWaitForWnfMetaNotification @ 0x180060B50 (RtlWaitForWnfMetaNotification.c)
 *     LdrHotPatchNotify @ 0x1800D9440 (LdrHotPatchNotify.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DAB20 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E25B0 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x1800E3ED0 (RtlSetProcessDebugInformation.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7C08 (RtlpWow64SuspendProcess.c)
 *     WaitForWerSvc @ 0x1800E8D44 (WaitForWerSvc.c)
 *     LdrpResReadFile @ 0x1800F0870 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180100668 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180110660 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
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
