/*
 * XREFs of KiResetForceIdle @ 0x14057D63C
 * Callers:
 *     KeClockInterruptNotify @ 0x1402C4930 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C72F0 (KeResumeClockTimerFromIdle.c)
 *     KiCallInterruptServiceRoutine @ 0x140324BE0 (KiCallInterruptServiceRoutine.c)
 *     KeClearForceIdle @ 0x14057D090 (KeClearForceIdle.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x1402501FC (KeIsForceIdleEngaged.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x14057D784 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x140591590 (PoTraceForceIdleReset.c)
 */

char __fastcall KiResetForceIdle(unsigned int a1, char a2)
{
  bool v2; // bl
  volatile signed __int32 *SchedulerAssist; // r8
  signed __int32 v6; // eax
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v9; // r8
  signed __int32 v10; // ett
  __int16 v12; // [rsp+40h] [rbp-8h]
  int v13; // [rsp+58h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp+18h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  v2 = 0;
  if ( !a2 )
  {
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    v2 = (v12 & 0x200) != 0;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( KiForceIdleLock );
    }
  }
  LOBYTE(v6) = KeIsForceIdleEngaged();
  if ( (_BYTE)v6 )
  {
    KiSetForceIdleState(3LL);
    if ( a1 == 3 )
      v7 = 0LL;
    else
      v7 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
         + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiForceIdleStartTime = v7;
    if ( !*(&KiForceIdleStopDpc + 7) )
      WORD1(KiForceIdleStopDpc) = KiClockTimerOwner + 2048;
    KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStopDpc, 0LL, 0LL, 0LL, 0);
    LOBYTE(v6) = PoTraceForceIdleReset(a1);
  }
  if ( !a2 )
  {
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    if ( v2 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        _m_prefetchw(v9);
        v6 = *v9;
        do
        {
          v10 = v6;
          v6 = _InterlockedCompareExchange(v9, v6 & 0xFFDFFFFF, v6);
        }
        while ( v10 != v6 );
        if ( (v6 & 0x200000) != 0 )
          LOBYTE(v6) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return v6;
}
