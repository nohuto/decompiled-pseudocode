/*
 * XREFs of RtlpTpResumeImpersonation @ 0x1800707A0
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18006F8B0 (RtlDeleteTimerQueueEx.c)
 *     RtlUpdateTimer @ 0x18006FA40 (RtlUpdateTimer.c)
 *     RtlCreateTimerQueue @ 0x18006FB90 (RtlCreateTimerQueue.c)
 *     RtlDeleteTimer @ 0x18006FC50 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18006FDA0 (RtlCreateTimer.c)
 *     RtlDeregisterWaitEx @ 0x180070010 (RtlDeregisterWaitEx.c)
 *     RtlQueueWorkItem @ 0x180070160 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x180070540 (RtlRegisterWait.c)
 *     RtlSetIoCompletionCallback @ 0x180124ED0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

NTSTATUS __fastcall RtlpTpResumeImpersonation(void *a1)
{
  NTSTATUS result; // eax
  HANDLE ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    ThreadInformation = a1;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    return NtClose(ThreadInformation);
  }
  return result;
}
