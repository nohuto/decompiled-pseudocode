/*
 * XREFs of BvgaAcquireLock @ 0x14054F130
 * Callers:
 *     BvgaBitBlt @ 0x14054F1D0 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x14054F250 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x14054F2C0 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14054F3C0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x14054F570 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x14054F630 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KeTestSpinLock @ 0x140226EF0 (KeTestSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 */

void BvgaAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v2; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u )
  {
    while ( !KeTestSpinLock(&BootDriverLock) )
      ;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        LODWORD(v2) = 4;
        if ( CurrentIrql != 2 )
          v2 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v2;
      }
    }
  }
  KxAcquireSpinLock(&BootDriverLock);
  BvgaOldIrql = CurrentIrql;
}
