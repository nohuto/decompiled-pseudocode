/*
 * XREFs of RtlDeleteTimer @ 0x18004D210
 * Callers:
 *     RtlCancelTimer @ 0x180127D70 (RtlCancelTimer.c)
 * Callees:
 *     TpWaitForTimer @ 0x18002F9A0 (TpWaitForTimer.c)
 *     TpSetTimerEx @ 0x180032C50 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TpTimerOutstandingCallbackCount @ 0x18004D360 (TpTimerOutstandingCallbackCount.c)
 *     RtlpTpRevertCapture @ 0x18004D870 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18004DB1C (RtlpTpResumeImpersonation.c)
 *     TpReleaseTimer @ 0x18004E360 (TpReleaseTimer.c)
 *     RtlpTpTimerRundown @ 0x18004F84C (RtlpTpTimerRundown.c)
 */

NTSTATUS __cdecl RtlDeleteTimer(HANDLE TimerQueueHandle, HANDLE TimerToCancel, HANDLE Event)
{
  NTSTATUS v5; // edi
  _QWORD *v6; // rcx
  HANDLE *v7; // rax
  HANDLE v9; // [rsp+28h] [rbp-10h] BYREF
  int v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( !TimerQueueHandle )
    return -1073741585;
  if ( !TimerToCancel )
    return -1073741584;
  v5 = RtlpTpRevertCapture(&v9);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)TimerToCancel + 7) + 8LL));
    v6 = *(_QWORD **)TimerToCancel;
    v7 = (HANDLE *)*((_QWORD *)TimerToCancel + 1);
    if ( *(HANDLE *)(*(_QWORD *)TimerToCancel + 8LL) != TimerToCancel || *v7 != TimerToCancel )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)TimerToCancel + 7) + 8LL));
    _InterlockedOr((volatile signed __int32 *)TimerToCancel + 12, 1u);
    TpSetTimerEx(*((PTP_TIMER *)TimerToCancel + 8), 0LL, 0, 0);
    if ( Event == (HANDLE)-1LL )
    {
      TpWaitForTimer(*((PTP_TIMER *)TimerToCancel + 8), 1u);
    }
    else if ( Event )
    {
      *((_QWORD *)TimerToCancel + 9) = Event;
    }
    v10 = TpTimerOutstandingCallbackCount(*((_QWORD *)TimerToCancel + 8));
    TpReleaseTimer(*((PTP_TIMER *)TimerToCancel + 8));
    _m_prefetchw((char *)TimerToCancel + 48);
    if ( (_InterlockedAnd((volatile signed __int32 *)TimerToCancel + 12, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpTimerRundown(TimerToCancel);
      v10 = 0;
    }
    v5 = v10 != 0 ? 0x103 : 0;
  }
  RtlpTpResumeImpersonation(v9);
  return v5;
}
