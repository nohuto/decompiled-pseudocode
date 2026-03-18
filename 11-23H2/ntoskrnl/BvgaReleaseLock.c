/*
 * XREFs of BvgaReleaseLock @ 0x14054F430
 * Callers:
 *     BvgaBitBlt @ 0x14054F1D0 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x14054F250 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x14054F2C0 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14054F3C0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x14054F570 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x14054F630 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

char BvgaReleaseLock()
{
  unsigned __int64 v0; // rbx
  int v1; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v4; // zf

  v0 = (unsigned __int8)BvgaOldIrql;
  LOBYTE(v1) = KxReleaseSpinLock((volatile signed __int64 *)&BootDriverLock);
  if ( (unsigned __int8)v0 <= 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v1) = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v1) = v1 - 2;
        if ( (unsigned __int8)v1 <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v1 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
          v4 = (v1 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v1;
          if ( v4 )
            LOBYTE(v1) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v0);
  }
  return v1;
}
