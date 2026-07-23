/*
 * XREFs of NtSetInformationThread @ 0x1800A4210
 * Callers:
 *     EtwpLogger @ 0x1800041C0 (EtwpLogger.c)
 *     TppCritSetThread @ 0x180014EE8 (TppCritSetThread.c)
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180017958 (TppCallbackCheckThreadAfterCallback.c)
 *     TppWorkerSwitchNode @ 0x18001B15C (TppWorkerSwitchNode.c)
 *     RtlpTpTimerCallback @ 0x180020130 (RtlpTpTimerCallback.c)
 *     TppAlpcpExecuteCallback @ 0x180021EE0 (TppAlpcpExecuteCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180022458 (TppCleanupGroupMemberCallbackProlog.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x180054214 (LdrpThreadTokenSetImpersonationToken.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x18006D4D0 (RtlSetThreadWorkOnBehalfTicket.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x18006D540 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlpTpResumeImpersonation @ 0x1800707A0 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180070858 (RtlpTpRevertCapture.c)
 *     RtlpTpWorkCallback @ 0x180070EB0 (RtlpTpWorkCallback.c)
 *     RtlpTpImpersonate @ 0x1800714A0 (RtlpTpImpersonate.c)
 *     RtlpTpWaitCallback @ 0x18007F040 (RtlpTpWaitCallback.c)
 *     RtlAcquirePrivilege @ 0x18007F810 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007FA90 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x180086900 (RtlReleasePrivilege.c)
 *     TppCritResetThread @ 0x180086CA8 (TppCritResetThread.c)
 *     RtlSetThreadIsCritical @ 0x18008D310 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800D6E60 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800D6ED0 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800E7A10 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800E8C40 (WerReportExceptionWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  NTSTATUS result; // eax

  result = 13;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
