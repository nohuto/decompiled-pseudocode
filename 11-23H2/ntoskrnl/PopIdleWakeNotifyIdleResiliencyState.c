/*
 * XREFs of PopIdleWakeNotifyIdleResiliencyState @ 0x14059DE84
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x14099827C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopIdleWakeInsertTimeInterval @ 0x14059DD30 (PopIdleWakeInsertTimeInterval.c)
 */

__int64 __fastcall PopIdleWakeNotifyIdleResiliencyState(char a1)
{
  KIRQL v2; // al
  LARGE_INTEGER *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned int v5; // ecx
  BOOL v6; // edx
  LARGE_INTEGER v7; // r14
  ULONG LowPart; // eax
  LONGLONG v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp+10h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v3 = (LARGE_INTEGER *)PopIdleWakeContext;
  v4 = v2;
  if ( PopIdleWakeContext )
  {
    v5 = *(_DWORD *)PopIdleWakeContext;
    if ( (*(_DWORD *)PopIdleWakeContext & 0x10) != 0 )
    {
      v6 = a1 == 0;
      if ( ((v5 >> 1) & 1) != v6 )
      {
        *(_DWORD *)PopIdleWakeContext = v5 & 0xFFFFFFFD | (2 * v6);
        RtlGetInterruptTimePrecise(&PerformanceCounter);
        v7 = PerformanceCounter;
        LowPart = v3->LowPart;
        v9 = PerformanceCounter.QuadPart - v3[1].QuadPart;
        if ( (v3->LowPart & 8) == 0 )
        {
          v10 = PerformanceCounter.QuadPart - v3[6].QuadPart;
          if ( v10 > PopIdleWakeSourceSpuriousThresholdQpc )
            v3->LowPart = LowPart | 4;
          PopIdleWakeInsertTimeInterval(
            v10,
            6u,
            (__int64)PopIdleWakeContext + 72,
            (__int64)PopIdleWakeContext + 96,
            PopIdleSpuriousWakeBucketLimitsQpc);
          v3->LowPart |= 8u;
          LowPart = v3->LowPart;
        }
        if ( a1 )
        {
          v3[2].QuadPart += v9;
        }
        else if ( (LowPart & 1) != 0 )
        {
          v3[3].QuadPart += v9;
        }
        else
        {
          v3[4].QuadPart += v9;
        }
        v3[1] = v7;
      }
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopIdleWakeContextLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v14 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
