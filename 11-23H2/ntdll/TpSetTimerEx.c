/*
 * XREFs of TpSetTimerEx @ 0x180032C50
 * Callers:
 *     TpSetTimer @ 0x180031B30 (TpSetTimer.c)
 *     RtlpHpScheduleCompaction @ 0x1800343E4 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180034660 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlDeleteTimer @ 0x18004D210 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x18004D3B0 (RtlCreateTimer.c)
 *     RtlUpdateTimer @ 0x180050560 (RtlUpdateTimer.c)
 *     RtlpWnfSetRetryTimer @ 0x1800EA7D0 (RtlpWnfSetRetryTimer.c)
 * Callees:
 *     TppSetTimer @ 0x1800309F8 (TppSetTimer.c)
 *     TpIsTimerSet @ 0x180031AF0 (TpIsTimerSet.c)
 *     TppCancelTimer @ 0x180032B28 (TppCancelTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x1800349B8 (TppTimerpValidateTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TpSetTimerEx(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  __int64 v8; // r15
  bool v9; // di
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebp

  if ( (unsigned int)TppTimerpValidateTimer(a1, 0LL, a2 != 0LL) )
  {
    v8 = *(_QWORD *)(a1 + 144);
    v9 = a2 != 0LL;
    RtlAcquireSRWLockExclusive(a1 + 240);
    LOBYTE(v10) = a2 != 0LL;
    v12 = (unsigned __int8)TppCancelTimer(a1, v8 + 112, v10, v11);
    if ( a2 && *(_BYTE *)(a1 + 355) )
    {
      RtlReleaseSRWLockExclusive(a1 + 240);
      v9 = 0;
    }
    if ( (_BYTE)v12 )
    {
      if ( !v9 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
        return v12;
      }
    }
    else
    {
      if ( !v9 )
        return v12;
      if ( (unsigned int)TpIsTimerSet(a1) )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive(a1 + 240);
        return v12;
      }
      _InterlockedIncrement((volatile signed __int32 *)a1);
    }
    TppSetTimer(a1, v8 + 112, a2, a3, a4);
    goto LABEL_11;
  }
  return 0LL;
}
