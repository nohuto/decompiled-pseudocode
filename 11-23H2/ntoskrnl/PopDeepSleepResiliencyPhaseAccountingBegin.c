/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1405985E0
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14028E938 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x1405997B0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopDeepSleepResiliencyPhaseAccountingBegin(unsigned int a1, char a2)
{
  KIRQL v2; // di
  bool i; // zf
  int v6; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax

  v2 = 0;
  if ( !a2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    KxAcquireSpinLock(&PopCsResiliencyStatsLock);
  }
  dword_140C3CB3C |= a1;
  for ( i = !_BitScanForward((unsigned int *)&v6, a1); !i; i = !_BitScanForward((unsigned int *)&v6, a1) )
  {
    a1 &= a1 - 1;
    if ( ((1 << v6) & PopDeepSleepDisengageReasonMask) != 0 )
      stru_140C3CB40[v6] = KeQueryPerformanceCounter(0LL);
  }
  if ( !a2 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
    KxReleaseSpinLock((volatile signed __int64 *)&PopDeepSleepDisengageReasonLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (v2 + 1));
        i = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( i )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
}
