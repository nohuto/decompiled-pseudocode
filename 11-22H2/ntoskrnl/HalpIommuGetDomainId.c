/*
 * XREFs of HalpIommuGetDomainId @ 0x1403A9120
 * Callers:
 *     HalpIommuAcquireNewDomain @ 0x1403A90A4 (HalpIommuAcquireNewDomain.c)
 *     IommupDeviceEnableSvm @ 0x140933D04 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlFindClearBitsAndSet @ 0x140295D80 (RtlFindClearBitsAndSet.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpIommuGetDomainId(__int64 a1, ULONG *a2)
{
  volatile signed __int64 *v3; // rdi
  _RTL_BITMAP *v4; // rbx
  unsigned __int64 v5; // rsi
  ULONG ClearBitsAndSet; // eax
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf

  if ( HalpHvIommu )
    return 3221225659LL;
  v3 = (volatile signed __int64 *)(a1 + 464);
  v4 = (_RTL_BITMAP *)(a1 + 472);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 464));
  ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
  v7 = 0;
  if ( ClearBitsAndSet == -1 )
    v7 = -1073741670;
  *a2 = ClearBitsAndSet;
  KxReleaseSpinLock(v3);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return v7;
}
