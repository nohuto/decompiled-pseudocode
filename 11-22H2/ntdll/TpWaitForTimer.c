/*
 * XREFs of TpWaitForTimer @ 0x18002FB70
 * Callers:
 *     RtlDeleteTimer @ 0x18004D370 (RtlDeleteTimer.c)
 * Callees:
 *     TppWorkWait @ 0x18002FC48 (TppWorkWait.c)
 *     TppCancelTimer @ 0x180032C88 (TppCancelTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x180034B18 (TppTimerpValidateTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __cdecl TpWaitForTimer(PTP_TIMER Timer, LOGICAL CancelPendingCallbacks)
{
  char v4; // r14
  char v5; // bp
  _BYTE *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8

  if ( (unsigned int)TppTimerpValidateTimer(Timer, 0LL, 0LL) )
  {
    v4 = 0;
    v5 = 0;
    v6 = (char *)Timer + 355;
    if ( CancelPendingCallbacks )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      v7 = *((_QWORD *)Timer + 18);
      LOBYTE(v8) = 1;
      ++*v6;
      v4 = TppCancelTimer(Timer, v7 + 112, v8);
      if ( *((_DWORD *)Timer + 14) )
        v5 = 1;
      else
        --*v6;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    }
    TppWorkWait(Timer, CancelPendingCallbacks);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      --*v6;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
    }
  }
}
