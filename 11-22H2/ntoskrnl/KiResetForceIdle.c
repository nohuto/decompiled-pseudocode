/*
 * XREFs of KiResetForceIdle @ 0x14057D1DC
 * Callers:
 *     KeClockInterruptNotify @ 0x1402C4670 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C7030 (KeResumeClockTimerFromIdle.c)
 *     KiCallInterruptServiceRoutine @ 0x140324770 (KiCallInterruptServiceRoutine.c)
 *     KeClearForceIdle @ 0x14057CC30 (KeClearForceIdle.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KeIsForceIdleEngaged @ 0x14025010C (KeIsForceIdleEngaged.c)
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x14057D324 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x140591130 (PoTraceForceIdleReset.c)
 */

void __fastcall KiResetForceIdle(unsigned int a1, char a2)
{
  bool v2; // bl
  volatile signed __int32 *SchedulerAssist; // r8
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int16 v11; // [rsp+40h] [rbp-8h]
  int v12; // [rsp+58h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp+18h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  v2 = 0;
  if ( !a2 )
  {
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    v2 = (v11 & 0x200) != 0;
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( KiForceIdleLock );
    }
  }
  if ( KeIsForceIdleEngaged() )
  {
    KiSetForceIdleState(3LL);
    if ( a1 == 3 )
      v6 = 0LL;
    else
      v6 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
         + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiForceIdleStartTime = v6;
    if ( !*(&KiForceIdleStopDpc + 7) )
      WORD1(KiForceIdleStopDpc) = KiClockTimerOwner + 2048;
    KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStopDpc, 0LL, 0LL, 0LL, 0);
    PoTraceForceIdleReset(a1);
  }
  if ( !a2 )
  {
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    if ( v2 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        _m_prefetchw(v8);
        v9 = *v8;
        do
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange(v8, v9 & 0xFFDFFFFF, v9);
        }
        while ( v10 != v9 );
        if ( (v9 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
}
