/*
 * XREFs of TpSetTimerEx @ 0x18001C6D0
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x18001816C (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpScheduleCompaction @ 0x18001B788 (RtlpHpScheduleCompaction.c)
 *     TpSetTimer @ 0x18001C9F0 (TpSetTimer.c)
 *     RtlUpdateTimer @ 0x18006FA40 (RtlUpdateTimer.c)
 *     RtlDeleteTimer @ 0x18006FC50 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18006FDA0 (RtlCreateTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x1800925B4 (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x18001B710 (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18001C7D8 (TppCancelTimer.c)
 *     TpIsTimerSet @ 0x18001CA70 (TpIsTimerSet.c)
 *     TppSetTimer @ 0x18001E794 (TppSetTimer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl TpSetTimerEx(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  __int64 v8; // r15
  bool v9; // di
  __int64 v10; // r8
  NTSTATUS v11; // ebp

  if ( (unsigned int)TppTimerpValidateTimer((_PEB_LDR_DATA *)Timer, 0LL, DueTime != 0LL) )
  {
    v8 = *((_QWORD *)Timer + 18);
    v9 = DueTime != 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    LOBYTE(v10) = DueTime != 0LL;
    v11 = (unsigned __int8)TppCancelTimer(Timer, v8 + 112, v10);
    if ( DueTime && *((_BYTE *)Timer + 355) )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      v9 = 0;
    }
    if ( (_BYTE)v11 )
    {
      if ( !v9 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) == 1 )
          (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
        return v11;
      }
    }
    else
    {
      if ( !v9 )
        return v11;
      if ( TpIsTimerSet(Timer) )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
        return v11;
      }
      _InterlockedIncrement((volatile signed __int32 *)Timer);
    }
    TppSetTimer(Timer, v8 + 112, DueTime, Period, WindowLength);
    goto LABEL_11;
  }
  return 0;
}
