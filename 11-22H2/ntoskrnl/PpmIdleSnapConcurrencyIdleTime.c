/*
 * XREFs of PpmIdleSnapConcurrencyIdleTime @ 0x1405855EC
 * Callers:
 *     PpmParkSnapNodeIdleTime @ 0x14059D488 (PpmParkSnapNodeIdleTime.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PpmIdleSnapConcurrencyIdleTime(PKSPIN_LOCK SpinLock, _QWORD *a2, _QWORD *a3)
{
  LARGE_INTEGER PerformanceCounter; // rsi
  volatile signed __int32 *SchedulerAssist; // rcx
  KSPIN_LOCK v8; // rax
  KSPIN_LOCK v9; // rdx
  __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v12; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int16 v15; // [rsp+30h] [rbp-8h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  KxAcquireSpinLock(SpinLock);
  v8 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v8 )
  {
    SpinLock[2] = PerformanceCounter.QuadPart;
    v9 = PerformanceCounter.QuadPart - v8;
    v10 = *((unsigned int *)SpinLock + 3);
    SpinLock[3] += v9;
    SpinLock[v10 + 41] += v9;
  }
  *a2 = SpinLock[3];
  *a3 = SpinLock[41];
  KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
  if ( (v15 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      _m_prefetchw(v12);
      v13 = *v12;
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(v12, v13 & 0xFFDFFFFF, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
}
