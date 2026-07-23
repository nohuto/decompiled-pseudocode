/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x14036E814
 * Callers:
 *     KiTimer2Expiration @ 0x1402516A0 (KiTimer2Expiration.c)
 *     KiCallInterruptServiceRoutine @ 0x140324BE0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     KeRemoveQueueDpcEx @ 0x14031F360 (KeRemoveQueueDpcEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x14057D784 (KiSetForceIdleState.c)
 */

void KiCheckAndRearmForceIdle()
{
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  int v4; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  if ( KiForceIdleDisabled )
    return;
  _disable();
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v4);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleState == 1 )
  {
    KeRemoveQueueDpcEx((__int64)&KiForceIdleStartDpc, 0);
    KiSetForceIdleState(2LL);
LABEL_9:
    KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
                         + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    goto LABEL_10;
  }
  if ( KiForceIdleState == 2 )
    goto LABEL_9;
LABEL_10:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v2 = *SchedulerAssist;
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange(SchedulerAssist, v2 & 0xFFDFFFFF, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
}
