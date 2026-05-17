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

__int64 __fastcall RtlpTpRevertCapture(HANDLE *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0LL;
  LOBYTE(a3) = 1;
  result = NtOpenThreadToken(-2LL, a2 != 0 ? 6 : 4, a3, a1);
  if ( (int)result >= 0 )
  {
    v6 = 0LL;
    v5 = NtSetInformationThread(-2LL, 5LL, &v6);
    if ( v5 < 0 )
    {
      NtClose(*a1);
      *a1 = 0LL;
      return (unsigned int)v5;
    }
    return 0LL;
  }
  return result;
}
