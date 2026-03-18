/*
 * XREFs of IopAcquireGlobalPassiveInterruptListLock @ 0x1403A35BC
 * Callers:
 *     IopInsertPassiveInterruptBlock @ 0x1403A2DC0 (IopInsertPassiveInterruptBlock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1403A328C (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1403A3528 (IopFindPassiveInterruptBlock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 */

void __fastcall IopAcquireGlobalPassiveInterruptListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v3; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v3) = 4096;
    else
      v3 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v3;
  }
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&PassiveInterruptListLock);
}
