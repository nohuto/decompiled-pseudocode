/*
 * XREFs of KeSetForceIdle @ 0x14057CD24
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x14028E63C (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x14057D324 (KiSetForceIdleState.c)
 */

void KeSetForceIdle()
{
  int v0; // edi
  LARGE_INTEGER v1; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v6; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  _disable();
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled )
  {
    v0 = KiForceIdleState;
    v1.QuadPart = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
                + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( !v0 )
    {
      KiSetForceIdleState(2LL);
LABEL_10:
      KiForceIdleStartTime = v1.QuadPart;
      goto LABEL_11;
    }
    if ( v0 == 3 )
      goto LABEL_10;
  }
LABEL_11:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v4 = *SchedulerAssist;
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(SchedulerAssist, v4 & 0xFFDFFFFF, v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
}
