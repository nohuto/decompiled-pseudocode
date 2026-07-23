/*
 * XREFs of ExDisableAllLookasideLists @ 0x14060B2A8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140AC3CE8 (VfInitSystemNoRebootNeeded.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void ExDisableAllLookasideLists()
{
  KIRQL v0; // al
  __int64 *v1; // rdx
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf
  KIRQL v8; // al
  __int64 *v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  int v13; // eax
  _DWORD *v14; // r8

  ExMinimumLookasideDepth = 0;
  v0 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  v1 = (__int64 *)ExNPagedLookasideListHead;
  v2 = v0;
  while ( v1 != &ExNPagedLookasideListHead )
  {
    *((_DWORD *)v1 - 12) = -65536;
    v1 = (__int64 *)*v1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&ExNPagedLookasideLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  v8 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
  v9 = (__int64 *)ExPagedLookasideListHead;
  v10 = v8;
  while ( v9 != &ExPagedLookasideListHead )
  {
    *((_DWORD *)v9 - 12) = -65536;
    v9 = (__int64 *)*v9;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&ExPagedLookasideLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v11 >= 2u )
    {
      v12 = KeGetCurrentPrcb();
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v14 = v12->SchedulerAssist;
      v7 = (v13 & v14[5]) == 0;
      v14[5] &= v13;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
  }
  __writecr8(v10);
}
