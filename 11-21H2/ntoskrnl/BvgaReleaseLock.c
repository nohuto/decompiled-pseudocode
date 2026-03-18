/*
 * XREFs of BvgaReleaseLock @ 0x140551AA0
 * Callers:
 *     BvgaBitBlt @ 0x140551840 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1405518C0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x140551930 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x140551A30 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x140551BE0 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x140551CA0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void BvgaReleaseLock()
{
  unsigned __int64 v0; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v3; // eax
  bool v4; // zf

  v0 = (unsigned __int8)BvgaOldIrql;
  KxReleaseSpinLock(&BootDriverLock);
  if ( (unsigned __int8)v0 <= 2u )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v3 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v4 = (v3 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v3;
      if ( v4 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v0);
  }
}
