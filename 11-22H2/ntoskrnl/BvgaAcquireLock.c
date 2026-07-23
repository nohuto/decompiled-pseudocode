/*
 * XREFs of BvgaAcquireLock @ 0x14054F1D0
 * Callers:
 *     BvgaBitBlt @ 0x14054F270 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x14054F2F0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x14054F360 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14054F460 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x14054F610 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x14054F6D0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KeTestSpinLock @ 0x140226F10 (KeTestSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
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
    if ( (_DWORD)KiIrqlFlags )
    {
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
