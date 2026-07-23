/*
 * XREFs of TpSetTimerEx @ 0x180032DB0
 * Callers:
 *     TpSetTimer @ 0x180031C90 (TpSetTimer.c)
 *     RtlpHpScheduleCompaction @ 0x180034544 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800347C0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlDeleteTimer @ 0x18004D370 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18004D510 (RtlCreateTimer.c)
 *     RtlUpdateTimer @ 0x1800506C0 (RtlUpdateTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x1800E94A0 (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     TppSetTimer @ 0x180030BC8 (TppSetTimer.c)
 *     TpIsTimerSet @ 0x180031C50 (TpIsTimerSet.c)
 *     TppCancelTimer @ 0x180032C88 (TppCancelTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x180034B18 (TppTimerpValidateTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl TpSetTimerEx(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  _RTL_SRWLOCK *v8; // r15
  bool v9; // di
  NTSTATUS v10; // ebp

  if ( (unsigned int)TppTimerpValidateTimer(Timer, 0LL, DueTime != 0LL) )
  {
    v8 = (_RTL_SRWLOCK *)*((_QWORD *)Timer + 18);
    v9 = DueTime != 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    v10 = (unsigned __int8)TppCancelTimer((__int64)Timer, v8 + 14, DueTime != 0LL);
    if ( DueTime && *((_BYTE *)Timer + 355) )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      v9 = 0;
    }
    if ( (_BYTE)v10 )
    {
      if ( !v9 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) == 1 )
          (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
        return v10;
      }
    }
    else
    {
      if ( !v9 )
        return v10;
      if ( TpIsTimerSet(Timer) )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
        return v10;
      }
      _InterlockedIncrement((volatile signed __int32 *)Timer);
    }
    TppSetTimer((__int64)Timer, v8 + 14, (__int64 *)DueTime, Period, WindowLength);
    goto LABEL_11;
  }
  return 0;
}
