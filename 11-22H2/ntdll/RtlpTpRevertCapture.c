/*
 * XREFs of RtlpTpRevertCapture @ 0x18004D9D0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18004C9D0 (RtlDeregisterWaitEx.c)
 *     RtlQueueWorkItem @ 0x18004CB70 (RtlQueueWorkItem.c)
 *     RtlDeleteTimer @ 0x18004D370 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18004D510 (RtlCreateTimer.c)
 *     RtlRegisterWait @ 0x18004D780 (RtlRegisterWait.c)
 *     RtlUpdateTimer @ 0x1800506C0 (RtlUpdateTimer.c)
 *     RtlCreateTimerQueue @ 0x1800507B0 (RtlCreateTimerQueue.c)
 *     RtlDeleteTimerQueueEx @ 0x180051E20 (RtlDeleteTimerQueueEx.c)
 *     RtlSetIoCompletionCallback @ 0x180126920 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenThreadToken @ 0x18009F270 (NtOpenThreadToken.c)
 */

NTSTATUS __fastcall RtlpTpRevertCapture(PHANDLE TokenHandle, int a2)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // edi
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  *TokenHandle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0;
  result = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, a2 != 0 ? 6 : 4, 1u, TokenHandle);
  if ( result >= 0 )
  {
    ThreadInformation = 0LL;
    v4 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    if ( v4 < 0 )
    {
      NtClose(*TokenHandle);
      *TokenHandle = 0LL;
      return v4;
    }
    return 0;
  }
  return result;
}
