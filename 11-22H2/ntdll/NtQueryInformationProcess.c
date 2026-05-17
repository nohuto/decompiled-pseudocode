/*
 * XREFs of NtQueryInformationProcess @ 0x18009F110
 * Callers:
 *     RtlWow64GetSharedInfoProcess @ 0x180001DA0 (RtlWow64GetSharedInfoProcess.c)
 *     LdrpQueryInformationCurrentProcess @ 0x180002D10 (LdrpQueryInformationCurrentProcess.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180041DF0 (RtlpHeapGenerateRandomValue32.c)
 *     WerpProcessId @ 0x180051AEC (WerpProcessId.c)
 *     WerpGlobalFlagsForProcess @ 0x180051B24 (WerpGlobalFlagsForProcess.c)
 *     RtlUserThreadStart @ 0x18005DF90 (RtlUserThreadStart.c)
 *     RtlDecodePointer @ 0x18006DEE0 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x1800737B0 (RtlEncodePointer.c)
 *     RtlpCallVectoredHandlers @ 0x1800779F8 (RtlpCallVectoredHandlers.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18008196C (LdrpLogLoadFailureEtwEvent.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180081F90 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180084410 (RtlpAddVectoredHandler.c)
 *     RtlSetProcessIsCritical @ 0x18008DD80 (RtlSetProcessIsCritical.c)
 *     RtlpInitRandomExVector @ 0x1800AEE20 (RtlpInitRandomExVector.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800AEEF8 (RtlpGetModifiedProcessCookie.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DBDF0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpMapCleanModuleView @ 0x1800E015C (LdrpMapCleanModuleView.c)
 *     LdrpFatalExceptionFilter @ 0x1800E0590 (LdrpFatalExceptionFilter.c)
 *     RtlCreateProcessReflection @ 0x1800E0CE0 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800E6B00 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800E6B70 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800E6D10 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x1800E7ED0 (WerpIsDebugPortPresent.c)
 *     SetAssertBufferPtrinPeb @ 0x1800E8170 (SetAssertBufferPtrinPeb.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800F3AA4 (RtlpPossibleDeadlock.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x180118220 (RtlpCreateExecutionRequiredRequest.c)
 *     TppExceptionFilter @ 0x180125C7C (TppExceptionFilter.c)
 *     PsspCaptureHandleTrace @ 0x180128228 (PsspCaptureHandleTrace.c)
 *     PsspCaptureProcessInformation @ 0x180128578 (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x180129294 (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x180129610 (PsspDumpObject_Process.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 25;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
