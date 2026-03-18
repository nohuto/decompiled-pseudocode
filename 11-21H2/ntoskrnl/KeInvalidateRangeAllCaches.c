/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x140570E60
 * Callers:
 *     KiFlushRangeAllCaches @ 0x14056F780 (KiFlushRangeAllCaches.c)
 *     MiPersistMdl @ 0x14059FECC (MiPersistMdl.c)
 *     MiPersistPage @ 0x1405A02B8 (MiPersistPage.c)
 *     MiTransferFileExtent @ 0x1405A1128 (MiTransferFileExtent.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KiIpiSendRequestEx @ 0x1402F42D4 (KiIpiSendRequestEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf

  if ( Length < KiLargestCacheSize )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
    }
    KiIpiSendRequestEx((__int64)KeGetCurrentPrcb(), 1, 0LL, 0, 7LL, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & v8[5]) == 0;
          v8[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi((__int64)BaseAddress, Length);
  }
  else
  {
    KeInvalidateAllCaches();
  }
}
