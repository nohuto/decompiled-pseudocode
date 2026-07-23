/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x14057058C
 * Callers:
 *     KeClockInterruptNotify @ 0x1402C4930 (KeClockInterruptNotify.c)
 *     KiResetClockIntervalOneShot @ 0x140340D78 (KiResetClockIntervalOneShot.c)
 *     KiSetClockIntervalOneShot @ 0x140340DD8 (KiSetClockIntervalOneShot.c)
 *     KiSetClockInterval @ 0x1403B2184 (KiSetClockInterval.c)
 *     KiResetClockInterval @ 0x140570324 (KiResetClockInterval.c)
 * Callees:
 *     KiSetClockTickRate @ 0x1402C2B20 (KiSetClockTickRate.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     KiGetClockIntervalOneShot @ 0x140340E50 (KiGetClockIntervalOneShot.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140340E84 (PoTraceSystemTimerResolutionKernel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KiSetClockIntervalToMinimumRequested()
{
  unsigned __int64 Min; // rax
  unsigned int v1; // esi
  volatile signed __int32 *SchedulerAssist; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned int v4; // r11d
  unsigned __int64 QuadPart; // rbx
  unsigned int ClockIntervalOneShot; // r10d
  unsigned __int64 v7; // r14
  unsigned int v8; // r8d
  __int64 v9; // rdx
  char v10; // dl
  char v11; // bp
  unsigned int v12; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v14; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int16 v18; // [rsp+30h] [rbp-8h]
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
  {
    if ( KiClockIntervalRequests.Min == (_RTL_BALANCED_NODE *)1 )
      Min = 0LL;
    else
      Min = (unsigned __int64)KiClockIntervalRequests.Min ^ ((unsigned __int64)&KiClockIntervalRequests.Root + 1);
  }
  else
  {
    Min = (unsigned __int64)KiClockIntervalRequests.Min;
  }
  v1 = *(_DWORD *)(Min + 28);
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v4 = -1;
  QuadPart = InterruptTimePrecise.QuadPart;
  ClockIntervalOneShot = -1;
  if ( KiClockOwnerOneShotRequest )
    ClockIntervalOneShot = KiGetClockIntervalOneShot(KiClockOwnerOneShotRequest, InterruptTimePrecise.QuadPart);
  v7 = KiClockOwnerOneShotCorrectiveRequest;
  if ( KiClockOwnerOneShotCorrectiveRequest > QuadPart
    || KiClockOwnerOneShotRequestState == 2 && !KiClockOwnerOneShotCorrectiveRequest )
  {
    v8 = KePseudoHrTimeIncrement;
    v9 = KiLastPseudoHrTimerExpiration;
    if ( KiLastPseudoHrTimerExpiration + (unsigned __int64)(unsigned int)KePseudoHrTimeIncrement > KiLastNonHrTimerExpiration
                                                                                                 + (unsigned __int64)(unsigned int)KeNonHrTimeIncrement )
    {
      v9 = KiLastNonHrTimerExpiration;
      v8 = KeNonHrTimeIncrement;
    }
    v7 = QuadPart + v8 - (QuadPart - v9) % v8;
    v4 = KiGetClockIntervalOneShot(v7, QuadPart);
  }
  v10 = 0;
  v11 = 0;
  if ( ClockIntervalOneShot > v1 || ClockIntervalOneShot > v4 )
  {
    if ( v4 >= v1 )
    {
      ClockIntervalOneShot = v1;
      KiClockOwnerOneShotCorrectiveRequest = QuadPart;
    }
    else
    {
      v10 = 1;
      KiClockOwnerOneShotCorrectiveRequest = v7;
      v11 = 1;
      ClockIntervalOneShot = v4;
    }
  }
  else
  {
    KiClockOwnerOneShotCorrectiveRequest = 0LL;
    v10 = 1;
  }
  if ( KiClockOwnerOneShotRequestState != 2
    && (ClockIntervalOneShot == KiLastRequestedTimeIncrement || ClockIntervalOneShot == KeTimeIncrement) )
  {
    v12 = KeTimeIncrement;
  }
  else
  {
    v12 = KiSetClockTickRate(ClockIntervalOneShot, v10);
  }
  if ( v11 )
    PoTraceSystemTimerResolutionKernel(v12, 1129271880, 1);
  if ( (v18 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      _m_prefetchw(v14);
      v15 = *v14;
      do
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange(v14, v15 & 0xFFDFFFFF, v15);
      }
      while ( v16 != v15 );
      if ( (v15 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return v12;
}
