/*
 * XREFs of PfpServiceMainThreadBoost @ 0x140582E60
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x140A883D8 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     KeSetActualBasePriorityThread @ 0x1402B9630 (KeSetActualBasePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfpServiceMainThreadBoost(__int64 a1, ULONG_PTR *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  KIRQL v6; // al
  unsigned __int64 v7; // rbp
  ULONG_PTR v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  v2 = a2[1];
  v3 = 0;
  if ( *a2 )
  {
    *(_DWORD *)(v2 + 160) = 1;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    ++*(_DWORD *)(a1 + 112);
    v7 = v6;
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(a1 + 112);
    if ( !*(_QWORD *)(a1 + 88) )
    {
      v8 = *a2;
      *(_QWORD *)(a1 + 88) = *a2;
      *a2 = 0LL;
      *(_DWORD *)(a1 + 96) = KeSetActualBasePriorityThread(v8, 12);
    }
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 104));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v7 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v7);
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v2 + 80) = v2 + 72;
    *(_QWORD *)(v2 + 72) = v2 + 72;
    *(_BYTE *)(v2 + 64) = 8;
    *(_QWORD *)(v2 + 88) = 0LL;
    *(_DWORD *)(v2 + 124) = 0;
    *(_WORD *)(v2 + 120) = 0;
    *(_QWORD *)(v2 + 24) = PfpPowerActionDpcRoutine;
    *(_DWORD *)v2 = 275;
    *(_QWORD *)(v2 + 32) = v2;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    KiSetTimerEx(v2 + 64, -200000000LL, 0, 0, v2);
    a2[1] = 0LL;
  }
  else
  {
    return (unsigned int)-2147483614;
  }
  return v3;
}
