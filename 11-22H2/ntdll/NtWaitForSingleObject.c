/*
 * XREFs of NtWaitForSingleObject @ 0x18009EE70
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlpWow64SuspendThread @ 0x180001C70 (RtlpWow64SuspendThread.c)
 *     LdrpWaitForInitializationComplete @ 0x180002CAC (LdrpWaitForInitializationComplete.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     RtlpWaitOnCriticalSection @ 0x1800340F0 (RtlpWaitOnCriticalSection.c)
 *     RtlReportSilentProcessExit @ 0x180051400 (RtlReportSilentProcessExit.c)
 *     RtlAcquireResourceShared @ 0x18005A9D0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18005AAF0 (RtlAcquireResourceExclusive.c)
 *     RtlWaitForWnfMetaNotification @ 0x18005B380 (RtlWaitForWnfMetaNotification.c)
 *     EtwpLogger @ 0x18005E0E0 (EtwpLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x180062234 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopUmLogger @ 0x180062480 (EtwpStopUmLogger.c)
 *     LdrHotPatchNotify @ 0x1800D9A90 (LdrHotPatchNotify.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DB170 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800E0CE0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E1280 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x1800E2BA0 (RtlSetProcessDebugInformation.c)
 *     RtlpWow64SuspendProcess @ 0x1800E68D8 (RtlpWow64SuspendProcess.c)
 *     WaitForWerSvc @ 0x1800E7A14 (WaitForWerSvc.c)
 *     LdrpResReadFile @ 0x1800EF460 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF258 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x18010F1E0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
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
