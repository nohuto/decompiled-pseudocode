/*
 * XREFs of KeInvalidateAllCaches @ 0x14036D4F0
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14021A6C0 (MiChangePageAttributeContiguous.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14021AE40 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiChangePageAttributeBatch @ 0x14021C9D4 (MiChangePageAttributeBatch.c)
 *     KeFlushIoBuffers @ 0x140346DC0 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x140460040 (KeInvalidateRangeAllCaches.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x14061BFF4 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiInsertPartitionPages @ 0x14065A4F0 (MiInsertPartitionPages.c)
 *     MiFlushCacheMdl @ 0x140660F10 (MiFlushCacheMdl.c)
 *     MiFlushCacheRange @ 0x140660F6C (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140B6B46C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1402EB5F0 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x1403461A4 (KxSetTimeStampBusy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // rdx
  unsigned __int8 v5; // al
  struct _KPRCB *v6; // r10
  _DWORD *v7; // r9
  int v8; // edx
  bool v9; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v4) = 4096;
    else
      v4 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    KiIpiSendRequestEx((__int64)CurrentPrcb, 1, 0LL, 0LL, 6LL, (void (__fastcall *)(__int64))KeSweepLocalCaches, 0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v5 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
    {
      v6 = KeGetCurrentPrcb();
      v7 = v6->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v9 = (v8 & v7[5]) == 0;
      v7[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(v6);
    }
  }
  __writecr8(CurrentIrql);
  return 1;
}
