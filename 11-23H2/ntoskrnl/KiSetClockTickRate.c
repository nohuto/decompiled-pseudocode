/*
 * XREFs of KiSetClockTickRate @ 0x1402C2B20
 * Callers:
 *     KiSetNextClockTickDueTime @ 0x1402C87A0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14057058C (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     KiSetPendingTick @ 0x1402C2AF0 (KiSetPendingTick.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     KiEventClockStateChange @ 0x1403478F0 (KiEventClockStateChange.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiSetClockTickRate(unsigned int a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int32 v4; // r15d
  _KCLOCK_TIMER_STATE *p_ClockTimerState; // rsi
  int v7; // r14d
  LARGE_INTEGER InterruptTimePrecise; // r14
  ULONG v9; // edx
  LARGE_INTEGER *v10; // rbx
  LARGE_INTEGER *v12; // rbx
  int v13; // eax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = KiClockState;
  p_ClockTimerState = &CurrentPrcb->ClockTimerState;
  v16 = a1;
  if ( a2 )
  {
    v7 = 1;
    ((void (__fastcall *)(__int64, _QWORD, __int64 *))off_140C01CA0[0])(1LL, a1, &v15);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_140C01CA0[0])(0LL, a1, &v15);
    v7 = 0;
  }
  CurrentPrcb->ClockTimerState.OneShotState = v7;
  KiSetPendingTick(1);
  if ( CurrentPrcb->ClockOwner )
  {
    KeTimeIncrement = v15;
    KiLastRequestedTimeIncrement = a1;
    if ( KiClockTimerPerCpuTickScheduling )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    else
      InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
    KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + (unsigned int)KeTimeIncrement;
    KiClockOwnerOneShotRequestState = a2 != 0;
    if ( v4 == 2 )
      v4 = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0LL, v4, &v15, &v16);
  }
  else
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  }
  CurrentPrcb->ClockTimerState.TimeIncrement = v15;
  CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = a1;
  if ( KeTimeIncrement < (unsigned int)dword_140C41B54 )
    dword_140C41B54 = KeTimeIncrement;
  if ( KeTimeIncrement > (unsigned int)dword_140C41B50 )
    dword_140C41B50 = KeTimeIncrement;
  if ( a1 < dword_140C41B5C )
    dword_140C41B5C = a1;
  if ( a1 > dword_140C41B58 )
    dword_140C41B58 = a1;
  if ( CurrentPrcb->ClockOwner )
  {
    v12 = (LARGE_INTEGER *)((char *)&KiClockIncrementTrace + 32 * (unsigned int)KiClockIncrementTraceCount);
    KiClockIncrementTraceCount = ((_BYTE)KiClockIncrementTraceCount + 1) & 0xF;
    v13 = KiLastRequestedTimeIncrement;
    v12->LowPart = KeTimeIncrement;
    v12->HighPart = v13;
    v12[1] = InterruptTimePrecise;
    v12[2] = KeQueryPerformanceCounter(0LL);
    LOBYTE(v12[3].LowPart) = a2;
  }
  v9 = v15;
  v10 = (LARGE_INTEGER *)((char *)p_ClockTimerState + 32 * p_ClockTimerState->ClockIncrementTraceIndex);
  p_ClockTimerState->ClockIncrementTraceIndex = ((unsigned __int8)p_ClockTimerState->ClockIncrementTraceIndex + 1) & 0xF;
  v10[99].LowPart = v9;
  v10[99].HighPart = a1;
  v10[100] = InterruptTimePrecise;
  v10[101] = KeQueryPerformanceCounter(0LL);
  LOBYTE(v10[102].LowPart) = a2;
  return (unsigned int)v15;
}
