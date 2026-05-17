/*
 * XREFs of RtlDeleteTimer @ 0x18004D210
 * Callers:
 *     RtlCancelTimer @ 0x180127DA0 (RtlCancelTimer.c)
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

__int64 __fastcall RtlDeleteTimer(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  int v5; // edi
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  int v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  v5 = RtlpTpRevertCapture(&v9, 0LL);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(*((_QWORD *)a2 + 7) + 8LL));
    v6 = *(__int64 **)a2;
    v7 = (__int64 **)*((_QWORD *)a2 + 1);
    if ( *(volatile signed __int32 **)(*(_QWORD *)a2 + 8LL) != a2 || *v7 != (__int64 *)a2 )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (__int64)v7;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*((_QWORD *)a2 + 7) + 8LL));
    _InterlockedOr(a2 + 12, 1u);
    TpSetTimerEx(*((_QWORD *)a2 + 8), 0LL, 0, 0);
    if ( a3 == -1 )
    {
      TpWaitForTimer(*((_QWORD *)a2 + 8), 1u);
    }
    else if ( a3 )
    {
      *((_QWORD *)a2 + 9) = a3;
    }
    v10 = TpTimerOutstandingCallbackCount(*((_QWORD *)a2 + 8));
    TpReleaseTimer(*((_QWORD *)a2 + 8));
    _m_prefetchw((const void *)(a2 + 12));
    if ( (_InterlockedAnd(a2 + 12, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpTimerRundown(a2);
      v10 = 0;
    }
    v5 = v10 != 0 ? 0x103 : 0;
  }
  RtlpTpResumeImpersonation(v9);
  return (unsigned int)v5;
}
