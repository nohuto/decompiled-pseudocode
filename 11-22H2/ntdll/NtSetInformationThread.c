/*
 * XREFs of NtSetInformationThread @ 0x18009EF90
 * Callers:
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800356F0 (RtlClearThreadWorkOnBehalfTicket.c)
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18003668C (TppCallbackCheckThreadAfterCallback.c)
 *     TppWorkerFindTask @ 0x1800378B0 (TppWorkerFindTask.c)
 *     RtlpTpTimerCallback @ 0x18004C060 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18004CF70 (RtlpTpWorkCallback.c)
 *     RtlpTpRevertCapture @ 0x18004D9D0 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18004DC7C (RtlpTpResumeImpersonation.c)
 *     RtlpTpWaitCallback @ 0x18004E570 (RtlpTpWaitCallback.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x18004EF50 (RtlSetThreadWorkOnBehalfTicket.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004F67C (TppCleanupGroupMemberCallbackProlog.c)
 *     EtwpLogger @ 0x18005E0E0 (EtwpLogger.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x1800775D8 (LdrpThreadTokenSetImpersonationToken.c)
 *     RtlAcquirePrivilege @ 0x180078DC0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180079040 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x18007DF14 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x180081504 (TppCritResetThread.c)
 *     RtlReleasePrivilege @ 0x180081B20 (RtlReleasePrivilege.c)
 *     RtlSetThreadIsCritical @ 0x180088120 (RtlSetThreadIsCritical.c)
 *     RtlpTpImpersonate @ 0x180088FD0 (RtlpTpImpersonate.c)
 *     RtlDisableThreadProfiling @ 0x1800D6ED0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800D6F40 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800E6880 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800E7AD0 (WerReportExceptionWorker.c)
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
