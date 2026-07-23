/*
 * XREFs of TpWaitForTimer @ 0x18002F9A0
 * Callers:
 *     RtlDeleteTimer @ 0x18004D210 (RtlDeleteTimer.c)
 * Callees:
 *     TppWorkWait @ 0x18002FA78 (TppWorkWait.c)
 *     TppCancelTimer @ 0x180032B28 (TppCancelTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x1800349B8 (TppTimerpValidateTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
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
