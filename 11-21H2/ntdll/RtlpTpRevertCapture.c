/*
 * XREFs of RtlpTpRevertCapture @ 0x180070858
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
 *     NtOpenThreadToken @ 0x1800A44F0 (NtOpenThreadToken.c)
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
    v5 = NtSetInformationThread(-2LL, 5LL, &v6, 8LL);
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
