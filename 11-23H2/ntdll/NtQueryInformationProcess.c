/*
 * XREFs of NtQueryInformationProcess @ 0x1800A11D0
 * Callers:
 *     RtlWow64GetSharedInfoProcess @ 0x180001DD0 (RtlWow64GetSharedInfoProcess.c)
 *     LdrpQueryInformationCurrentProcess @ 0x180002D40 (LdrpQueryInformationCurrentProcess.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180041C90 (RtlpHeapGenerateRandomValue32.c)
 *     WerpProcessId @ 0x18005198C (WerpProcessId.c)
 *     WerpGlobalFlagsForProcess @ 0x1800519C4 (WerpGlobalFlagsForProcess.c)
 *     RtlUserThreadStart @ 0x18005AF90 (RtlUserThreadStart.c)
 *     RtlDecodePointer @ 0x18006DEE0 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x180073E20 (RtlEncodePointer.c)
 *     RtlpCallVectoredHandlers @ 0x180078068 (RtlpCallVectoredHandlers.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081FDC (LdrpLogLoadFailureEtwEvent.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180082600 (RtlSetUnhandledExceptionFilter.c)
 *     RtlpAddVectoredHandler @ 0x180084C10 (RtlpAddVectoredHandler.c)
 *     RtlSetProcessIsCritical @ 0x18008E580 (RtlSetProcessIsCritical.c)
 *     RtlpInitRandomExVector @ 0x1800B0EF0 (RtlpInitRandomExVector.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800B0FC8 (RtlpGetModifiedProcessCookie.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DB7A0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 *     LdrpMapCleanModuleView @ 0x1800E148C (LdrpMapCleanModuleView.c)
 *     LdrpFatalExceptionFilter @ 0x1800E18C0 (LdrpFatalExceptionFilter.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800E7E30 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800E7EA0 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800E8040 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x1800E9200 (WerpIsDebugPortPresent.c)
 *     SetAssertBufferPtrinPeb @ 0x1800E94A0 (SetAssertBufferPtrinPeb.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800F4EB4 (RtlpPossibleDeadlock.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1801196A0 (RtlpCreateExecutionRequiredRequest.c)
 *     TppExceptionFilter @ 0x1801270FC (TppExceptionFilter.c)
 *     PsspCaptureHandleTrace @ 0x1801296A8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureProcessInformation @ 0x1801299F8 (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x18012A714 (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x18012AA90 (PsspDumpObject_Process.c)
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
