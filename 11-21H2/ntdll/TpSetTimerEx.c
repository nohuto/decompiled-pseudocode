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

__int64 __fastcall TpSetTimerEx(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // r15
  bool v12; // di
  __int64 v13; // r8
  unsigned int v14; // ebp

  if ( (unsigned int)TppTimerpValidateTimer((_PEB_LDR_DATA *)a1, 0LL, a2 != 0) )
  {
    v11 = *(_QWORD *)(a1 + 144);
    v12 = a2 != 0;
    RtlAcquireSRWLockExclusive(a1 + 240, v8, v9, v10);
    LOBYTE(v13) = a2 != 0;
    v14 = (unsigned __int8)TppCancelTimer(a1, v11 + 112, v13);
    if ( a2 && *(_BYTE *)(a1 + 355) )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      v12 = 0;
    }
    if ( (_BYTE)v14 )
    {
      if ( !v12 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
        return v14;
      }
    }
    else
    {
      if ( !v12 )
        return v14;
      if ( (unsigned int)TpIsTimerSet(a1) )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
        return v14;
      }
      _InterlockedIncrement((volatile signed __int32 *)a1);
    }
    TppSetTimer(a1, v11 + 112, a2, a3, a4);
    goto LABEL_11;
  }
  return 0LL;
}
