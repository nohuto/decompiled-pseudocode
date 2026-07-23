/*
 * XREFs of BvgaAcquireLock @ 0x14054F7F0
 * Callers:
 *     BvgaBitBlt @ 0x14054F890 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x14054F910 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x14054F980 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14054FA80 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x14054FC30 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x14054FCF0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KeTestSpinLock @ 0x140227000 (KeTestSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
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
