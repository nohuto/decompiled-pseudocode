/*
 * XREFs of IopAcquirePassiveInterruptBlockLock @ 0x1403A3644
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x1403A346C (IopDereferencePassiveInterruptBlock.c)
 *     IopPassiveInterruptWorker @ 0x1403A3520 (IopPassiveInterruptWorker.c)
 *     IoProcessPassiveInterrupts @ 0x1403A3684 (IoProcessPassiveInterrupts.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 */

void __fastcall IopAcquirePassiveInterruptBlockLock(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v5; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v5) = 4096;
    else
      v5 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v5;
  }
  *a2 = CurrentIrql;
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 56));
}
