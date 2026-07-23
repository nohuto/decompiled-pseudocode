/*
 * XREFs of PoExecutePerfCheck @ 0x1402C4190
 * Callers:
 *     KiUpdateTime @ 0x1402C3930 (KiUpdateTime.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void PoExecutePerfCheck()
{
  signed __int64 v0; // rbx
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned int v4; // r9d
  signed __int64 v5; // rcx
  unsigned __int64 v6; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int16 v11; // [rsp+40h] [rbp-8h]

  v0 = PpmCheckLastEffectiveExecutionTime;
  if ( PpmCheckLastEffectiveExecutionTime )
  {
    v1 = (unsigned int)KeTimeIncrement;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( PpmCheckPeriod > (unsigned __int64)(unsigned int)KeTimeIncrement )
      v1 = PpmCheckPeriod;
    if ( v1 + PpmCheckLastEffectiveExecutionTime <= MEMORY[0xFFFFF78000000008] )
    {
      _disable();
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x200000u);
      KxAcquireSpinLock(&PpmCheckExecutionLock);
      if ( PpmCheckLastActualExecutionTime + (v1 >> 1) <= v2 )
      {
        v4 = 0;
        v5 = v2;
        if ( v0 != 1 )
        {
          if ( v0 + KeMaximumIncrement + v1 > v2 )
            v5 = v1 + v0;
          v6 = v5 - v1 - v0;
          if ( v1 + KeMaximumIncrement + PpmCheckLastActualExecutionTime < v2 && v6 >= v1 )
          {
            v4 = 64;
            if ( (unsigned int)(v6 / v1) < 0x40 )
              v4 = v6 / v1;
          }
        }
        if ( v0 == _InterlockedCompareExchange64(&PpmCheckLastEffectiveExecutionTime, v5, v0) )
        {
          PpmCheckLastActualExecutionTime = v2;
          KiInsertQueueDpc((ULONG_PTR)&PpmCheckStartDpc, v4, 0LL, 0LL, 0);
        }
      }
      KxReleaseSpinLock((volatile signed __int64 *)&PpmCheckExecutionLock);
      if ( (v11 & 0x200) != 0 )
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
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
      }
    }
  }
}
