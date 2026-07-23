/*
 * XREFs of TpReleaseTimer @ 0x18004E360
 * Callers:
 *     RtlDeleteTimer @ 0x18004D210 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x1800501D0 (RtlpInitializeWnf.c)
 *     RtlDeleteTimerQueueEx @ 0x180051CC0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     TppCancelTimer @ 0x180032B28 (TppCancelTimer.c)
 *     TppTimerpValidateTimer @ 0x1800349B8 (TppTimerpValidateTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TppCleanupGroupMemberRelease @ 0x18004EEE0 (TppCleanupGroupMemberRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  int v2; // edi
  _RTL_SRWLOCK *v3; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( (unsigned int)TppTimerpValidateTimer((_PEB_LDR_DATA *)Timer, 1LL, 0LL)
    && (unsigned int)TppCleanupGroupMemberRelease(Timer, 1LL) )
  {
    *((_QWORD *)Timer + 23) = retaddr;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    v3 = (_RTL_SRWLOCK *)*((_QWORD *)Timer + 18);
    ++*((_BYTE *)Timer + 355);
    if ( TppCancelTimer((__int64)Timer, v3 + 14, 0) )
      v2 = 2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, -v2) == v2 )
      (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
  }
}
