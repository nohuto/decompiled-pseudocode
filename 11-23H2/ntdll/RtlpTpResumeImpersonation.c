/*
 * XREFs of RtlpTpResumeImpersonation @ 0x18004DB1C
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18004C870 (RtlDeregisterWaitEx.c)
 *     RtlQueueWorkItem @ 0x18004CA10 (RtlQueueWorkItem.c)
 *     RtlDeleteTimer @ 0x18004D210 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18004D3B0 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x18004D620 (RtlRegisterWait.c)
 *     RtlUpdateTimer @ 0x180050560 (RtlUpdateTimer.c)
 *     RtlCreateTimerQueue @ 0x180050650 (RtlCreateTimerQueue.c)
 *     RtlDeleteTimerQueueEx @ 0x180051CC0 (RtlDeleteTimerQueueEx.c)
 *     RtlSetIoCompletionCallback @ 0x180127DA0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
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
