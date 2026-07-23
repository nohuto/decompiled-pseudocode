/*
 * XREFs of NtSetInformationThread @ 0x1800A1050
 * Callers:
 *     RtlClearThreadWorkOnBehalfTicket @ 0x180035590 (RtlClearThreadWorkOnBehalfTicket.c)
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18003652C (TppCallbackCheckThreadAfterCallback.c)
 *     TppWorkerFindTask @ 0x180037750 (TppWorkerFindTask.c)
 *     RtlpTpTimerCallback @ 0x18004BF00 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18004CE10 (RtlpTpWorkCallback.c)
 *     RtlpTpRevertCapture @ 0x18004D870 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18004DB1C (RtlpTpResumeImpersonation.c)
 *     RtlpTpWaitCallback @ 0x18004E410 (RtlpTpWaitCallback.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x18004EDF0 (RtlSetThreadWorkOnBehalfTicket.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004F51C (TppCleanupGroupMemberCallbackProlog.c)
 *     EtwpLogger @ 0x18005B0E0 (EtwpLogger.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x180077C48 (LdrpThreadTokenSetImpersonationToken.c)
 *     RtlAcquirePrivilege @ 0x180079430 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800796B0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x18007E584 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x180081B74 (TppCritResetThread.c)
 *     RtlReleasePrivilege @ 0x180082190 (RtlReleasePrivilege.c)
 *     RtlSetThreadIsCritical @ 0x180088920 (RtlSetThreadIsCritical.c)
 *     RtlpTpImpersonate @ 0x1800897D0 (RtlpTpImpersonate.c)
 *     RtlDisableThreadProfiling @ 0x1800D6830 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800D68A0 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800E7BB0 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800E8E00 (WerReportExceptionWorker.c)
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
