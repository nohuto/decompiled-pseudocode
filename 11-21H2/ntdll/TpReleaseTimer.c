/*
 * XREFs of TpReleaseTimer @ 0x180070A70
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x18006F8B0 (RtlDeleteTimerQueueEx.c)
 *     RtlDeleteTimer @ 0x18006FC50 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x180083980 (RtlpInitializeWnf.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x18001B710 (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18001C7D8 (TppCancelTimer.c)
 *     TppCleanupGroupMemberRelease @ 0x1800214A0 (TppCleanupGroupMemberRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  int v2; // edi
  int v3; // eax
  _RTL_SRWLOCK *v4; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( (unsigned int)TppTimerpValidateTimer((_PEB_LDR_DATA *)Timer, 1LL, 0LL) )
  {
    LOBYTE(v3) = TppCleanupGroupMemberRelease((__int64)Timer, 1LL);
    if ( v3 )
    {
      *((_QWORD *)Timer + 23) = retaddr;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      v4 = (_RTL_SRWLOCK *)*((_QWORD *)Timer + 18);
      ++*((_BYTE *)Timer + 355);
      if ( TppCancelTimer((__int64)Timer, v4 + 14, 0) )
        v2 = 2;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, -v2) == v2 )
        (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
    }
  }
}
