/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x180051CC0
 * Callers:
 *     RtlDeleteTimerQueue @ 0x180127DB0 (RtlDeleteTimerQueue.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TpTimerOutstandingCallbackCount @ 0x18004D360 (TpTimerOutstandingCallbackCount.c)
 *     RtlpTpRevertCapture @ 0x18004D870 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18004DB1C (RtlpTpResumeImpersonation.c)
 *     TpReleaseTimer @ 0x18004E360 (TpReleaseTimer.c)
 *     RtlpTpTimerRundown @ 0x18004F84C (RtlpTpTimerRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x180051E40 (RtlpTpTimerQueueRundown.c)
 *     NtWaitForAlertByThreadId @ 0x1800A4AA0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlDeleteTimerQueueEx(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 i; // rsi
  int v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+30h] [rbp-48h]
  HANDLE v10; // [rsp+98h] [rbp+20h] BYREF

  v8 = 0;
  v10 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( a1 )
  {
    v5 = RtlpTpRevertCapture(&v10, 0, a3);
    if ( v5 >= 0 )
    {
      if ( a2 )
      {
        if ( a2 == -1 )
          *(_QWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *(_QWORD *)(a1 + 16) = a2;
      }
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      for ( i = *(_QWORD *)(a1 + 24); i != a1 + 24; i = v9 )
      {
        v9 = *(_QWORD *)i;
        _InterlockedOr((volatile signed __int32 *)(i + 48), 1u);
        v8 += TpTimerOutstandingCallbackCount(*(_QWORD *)(i + 64));
        TpReleaseTimer(*(_QWORD *)(i + 64));
        _m_prefetchw((const void *)(i + 48));
        if ( (_InterlockedAnd((volatile signed __int32 *)(i + 48), 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown(i);
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      if ( _InterlockedDecrement((volatile signed __int32 *)a1) )
      {
        if ( a2 != -1 )
        {
          v5 = v8 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(a1, 0LL);
      }
      else
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        RtlpTpTimerQueueRundown(a1);
      }
      v5 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v10);
    return (unsigned int)v5;
  }
  return 3221225711LL;
}
