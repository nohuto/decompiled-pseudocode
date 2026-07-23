/*
 * XREFs of KeAcquireInterruptSpinLock @ 0x14033E140
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

KIRQL __stdcall KeAcquireInterruptSpinLock(PKINTERRUPT Interrupt)
{
  unsigned __int64 SynchronizeIrql; // r8
  KIRQL CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r11
  int v5; // edx

  SynchronizeIrql = Interrupt->SynchronizeIrql;
  if ( !(_BYTE)SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SynchronizeIrql);
  if ( (_DWORD)KiIrqlFlags
    && ((unsigned __int8)KiIrqlFlags & 1) != 0
    && CurrentIrql <= 0xFu
    && (unsigned __int8)(SynchronizeIrql - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == (_BYTE)SynchronizeIrql )
      v5 = 1 << SynchronizeIrql;
    else
      v5 = ((1LL << ((unsigned __int8)SynchronizeIrql + 1)) - 1) & (-1LL << (CurrentIrql + 1)) & 0xFFFFFFFC;
    SchedulerAssist[5] |= v5;
  }
  KxAcquireSpinLock(Interrupt->ActualLock);
  return CurrentIrql;
}
