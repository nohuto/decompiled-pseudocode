/*
 * XREFs of PopIdleWakeNotifyIdleResiliencyState @ 0x14059DA24
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x14099812C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIdleWakeInsertTimeInterval @ 0x14059D8D0 (PopIdleWakeInsertTimeInterval.c)
 */

void __fastcall PopIdleWakeNotifyIdleResiliencyState(char a1)
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
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
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
  KxReleaseSpinLock((volatile signed __int64 *)&PopIdleWakeContextLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
}
