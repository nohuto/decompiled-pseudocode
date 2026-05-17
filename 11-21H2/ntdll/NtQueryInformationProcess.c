/*
 * XREFs of NtQueryInformationProcess @ 0x1800A4390
 * Callers:
 *     RtlWow64GetSharedInfoProcess @ 0x180001B50 (RtlWow64GetSharedInfoProcess.c)
 *     LdrpQueryInformationCurrentProcess @ 0x180002650 (LdrpQueryInformationCurrentProcess.c)
 *     RtlUserThreadStart @ 0x180004830 (RtlUserThreadStart.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18002DAA0 (RtlpHeapGenerateRandomValue32.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180053DF8 (LdrpLogLoadFailureEtwEvent.c)
 *     PsspCaptureProcessInformation @ 0x18006091C (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleTrace @ 0x180060AC4 (PsspCaptureHandleTrace.c)
 *     PsspCaptureHandleInformation @ 0x1800616F0 (PsspCaptureHandleInformation.c)
 *     RtlDecodePointer @ 0x1800742C0 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x18007ABA0 (RtlEncodePointer.c)
 *     RtlpCallVectoredHandlers @ 0x18007C918 (RtlpCallVectoredHandlers.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180086BD0 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180087D70 (RtlpAddVectoredHandler.c)
 *     WerpGlobalFlagsForProcess @ 0x18008A834 (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x18008CD58 (WerpProcessId.c)
 *     PsspDumpObject_Process @ 0x18008E020 (PsspDumpObject_Process.c)
 *     RtlSetProcessIsCritical @ 0x180093010 (RtlSetProcessIsCritical.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DB8D0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     LdrpMapCleanModuleView @ 0x1800E194C (LdrpMapCleanModuleView.c)
 *     LdrpFatalExceptionFilter @ 0x1800E1D80 (LdrpFatalExceptionFilter.c)
 *     RtlCreateProcessReflection @ 0x1800E2080 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800E7C90 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800E7D00 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800E7EA0 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x1800E9040 (WerpIsDebugPortPresent.c)
 *     SetAssertBufferPtrinPeb @ 0x1800E92E0 (SetAssertBufferPtrinPeb.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800F3D74 (RtlpPossibleDeadlock.c)
 *     RtlpInitRandomExVector @ 0x18010EFF0 (RtlpInitRandomExVector.c)
 *     RtlpGetModifiedProcessCookie @ 0x180114E38 (RtlpGetModifiedProcessCookie.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x180117DA0 (RtlpCreateExecutionRequiredRequest.c)
 *     TppExceptionFilter @ 0x18012423C (TppExceptionFilter.c)
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
