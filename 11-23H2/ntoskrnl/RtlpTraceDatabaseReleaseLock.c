/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x1405B18B8
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1405B1220 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1405B1440 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1405B1500 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1405B1590 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1405B15B0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall RtlpTraceDatabaseReleaseLock(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf

  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
  {
    v1 = *(unsigned __int8 *)(a1 + 40);
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 56));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v6 = (v5 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v5;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v1);
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)(a1 + 56));
  }
  return 1;
}
