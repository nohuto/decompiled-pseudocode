/*
 * XREFs of PopGetIdleTimesCallback @ 0x140293600
 * Callers:
 *     PoGetIdleTimes @ 0x140293444 (PoGetIdleTimes.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 *     PpmContinueActiveTimeAccumulation @ 0x140293988 (PpmContinueActiveTimeAccumulation.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v4; // ebx
  BOOL v5; // r13d
  signed __int64 IdleSequenceNumber; // rax
  signed __int64 v10; // rtt
  _PPM_IDLE_STATES *IdleStates; // r14
  LARGE_INTEGER v12; // rbp
  ULONG SpareLong0; // r12d
  unsigned int v14; // r8d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  _PROC_IDLE_ACCOUNTING *v18; // r9
  _PPM_IDLE_STATES *v19; // r8
  unsigned int i; // r14d
  unsigned int StateCount; // ecx
  __int64 v22; // rdx
  _DWORD *v23; // rdx
  _QWORD *v24; // rbp
  unsigned __int64 TotalTime; // rcx
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // [rsp+20h] [rbp-68h]
  signed __int64 v27; // [rsp+28h] [rbp-60h]
  unsigned __int64 IdleTimeEntry; // [rsp+30h] [rbp-58h]
  _QWORD *v29; // [rsp+38h] [rbp-50h]
  _DWORD *v30; // [rsp+40h] [rbp-48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-40h]
  unsigned int KernelTime; // [rsp+90h] [rbp+8h]
  _PPM_IDLE_STATES *v33; // [rsp+A8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v27 = 0LL;
  IdleTimeEntry = 0LL;
  v5 = CurrentPrcb != a1;
  v30 = 0LL;
  v29 = 0LL;
  if ( CurrentPrcb != a1 )
  {
    _m_prefetchw((const void *)&a1->PowerState.IdleSequenceNumber);
    IdleSequenceNumber = a1->PowerState.IdleSequenceNumber;
    do
    {
      v10 = IdleSequenceNumber;
      IdleSequenceNumber = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&a1->PowerState.IdleSequenceNumber,
                             IdleSequenceNumber,
                             IdleSequenceNumber);
    }
    while ( v10 != IdleSequenceNumber );
    v27 = IdleSequenceNumber;
    if ( (IdleSequenceNumber & 1) == 0 )
      return (unsigned int)-1073741823;
    IdleTimeEntry = a1->PowerState.IdleTimeEntry;
  }
  IdleStates = a1->PowerState.IdleStates;
  IdleAccounting = a1->PowerState.IdleAccounting;
  v33 = IdleStates;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = PerformanceCounter;
  SpareLong0 = a1->IdleThread->SchedulerApc.SpareLong0;
  KernelTime = a1->KernelTime;
  if ( a2 )
  {
    v18 = IdleAccounting;
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    if ( IdleAccounting )
    {
      v19 = IdleStates;
      if ( IdleStates )
      {
        for ( i = 0; ; ++i )
        {
          StateCount = v18->StateCount;
          if ( v18->StateCount >= v19->ProcessorIdleCount )
            StateCount = v19->ProcessorIdleCount;
          if ( i >= StateCount )
          {
            v12 = PerformanceCounter;
            IdleStates = v33;
            *(_QWORD *)a2 = PpmConvertTime(v18->PriorIdleTime, PopQpcFrequency, 10000000LL);
            goto LABEL_8;
          }
          v22 = i;
          if ( v19->State[v22].StateType )
            break;
          if ( !v19->State[v22].ContextRetained )
            goto LABEL_53;
          if ( v19->State[v22].CacheCoherent != 0 )
          {
LABEL_31:
            v23 = (_DWORD *)(a2 + 32);
            v24 = (_QWORD *)(a2 + 8);
            goto LABEL_34;
          }
          if ( !v19->State[v22].CacheCoherent )
          {
LABEL_33:
            v23 = (_DWORD *)(a2 + 36);
            v24 = (_QWORD *)(a2 + 16);
            goto LABEL_34;
          }
          if ( -(v19->State[v22].CacheCoherent != 0) == 1 )
            goto LABEL_53;
          v23 = 0LL;
          v24 = 0LL;
LABEL_34:
          if ( i == v19->ActualState )
          {
            v29 = v24;
            v30 = v23;
          }
          if ( v23 && v24 )
          {
            *v23 += v18->State[i].FailureCount + v18->State[i].SuccessCount;
            TotalTime = v18->State[i].TotalTime;
            if ( v19->ActualState == i )
              TotalTime += a1->PowerState.IdleTimeLast;
            *v24 += PpmConvertTime(TotalTime, PopQpcFrequency, 10000000LL);
            v19 = v33;
            v18 = IdleAccounting;
          }
        }
        if ( v19->State[v22].StateType == 1 )
          goto LABEL_31;
        if ( v19->State[v22].StateType == 2 )
          goto LABEL_33;
LABEL_53:
        v23 = (_DWORD *)(a2 + 40);
        v24 = (_QWORD *)(a2 + 24);
        goto LABEL_34;
      }
      IdleStates = 0LL;
    }
  }
LABEL_8:
  if ( a3 )
  {
    if ( !v5 )
      ((void (__fastcall *)(_QWORD, _QWORD))PpmContinueActiveTimeAccumulation)(a1, (LARGE_INTEGER)v12.QuadPart);
    *(_QWORD *)(a3 + 8) = PpmConvertTime(a1->PowerState.PerfFeedback.StallTime, PopQpcFrequency, 10000000LL);
  }
  if ( !v5 )
    goto LABEL_13;
  _m_prefetchw((const void *)&a1->PowerState.IdleSequenceNumber);
  if ( v27 != _InterlockedOr64((volatile signed __int64 *)&a1->PowerState.IdleSequenceNumber, 0LL) )
    return (unsigned int)-1073741823;
  if ( v12.QuadPart > IdleTimeEntry )
  {
    v16 = PpmConvertTime(v12.QuadPart - IdleTimeEntry, PopQpcFrequency, 10000000LL);
    if ( v29 && v30 )
    {
      ++*v30;
      *v29 += v16;
    }
    v14 = KernelTime;
    if ( v16 > (unsigned int)KeMaximumIncrement )
    {
      v17 = v16 / (unsigned int)KeMaximumIncrement;
      SpareLong0 = v17 + SpareLong0 - 1;
      v14 = v17 + KernelTime - 1;
    }
  }
  else
  {
LABEL_13:
    v14 = KernelTime;
  }
  if ( a2 )
  {
    if ( IdleAccounting && IdleStates )
      *(_QWORD *)a2 += *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24);
    else
      *(_QWORD *)a2 = SpareLong0 * (unsigned __int64)(unsigned int)KeMaximumIncrement;
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = SpareLong0;
    *(_DWORD *)(a3 + 4) = v14;
  }
  return v4;
}
