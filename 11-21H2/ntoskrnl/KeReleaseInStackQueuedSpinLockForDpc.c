/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x140257B80
 * Callers:
 *     KeInsertDeviceQueue @ 0x140257A00 (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x140257A90 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x14045A4A0 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140570810 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1405708F0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     sub_140614550 @ 0x140614550 (sub_140614550.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockForDpc(PKLOCK_QUEUE_HANDLE LockHandle)
{
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf

  if ( (*((_DWORD *)KeGetCurrentPrcb() + 3311) & 0x10000) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
    OldIrql = LockHandle->OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = *((_QWORD *)CurrentPrcb + 4375);
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
          v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
          *(_DWORD *)(v5 + 20) &= v6;
          if ( v7 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
  }
}
