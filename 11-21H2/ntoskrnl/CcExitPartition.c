/*
 * XREFs of CcExitPartition @ 0x14053E098
 * Callers:
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1405BE340 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     CcNotifyWriteBehindInternal @ 0x140389160 (CcNotifyWriteBehindInternal.c)
 *     CcWaitForCurrentLazyWriterActivityOnPartition @ 0x1403895EC (CcWaitForCurrentLazyWriterActivityOnPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     CcPostDeferredWrites @ 0x14053A100 (CcPostDeferredWrites.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x14053C3E4 (CcForEachPrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x14053DAFC (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x14053DDB8 (CcDeleteSectionsForPartition.c)
 */

void __fastcall CcExitPartition(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // r14
  unsigned __int8 v5; // cl
  struct _KPRCB *v6; // r10
  _DWORD *v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // r14
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  unsigned __int64 v15; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  int v26; // [rsp+70h] [rbp+20h] BYREF

  v26 = 0;
  v2 = a1[1];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 )
  {
    if ( a2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 704), &LockHandle);
      v15 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 1230) = 2;
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v9 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v15);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v9 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v22);
          }
        }
      }
      __writecr8(OldIrql);
      if ( CcEnablePerVolumeLazyWriter == 1 )
        CcForEachPrivateVolumeCacheMap(
          v2,
          (__int64 (__fastcall *)(__int64, _QWORD *, __int64))CcPostDeferredWritesOnVolumeHelper,
          0LL);
      else
        CcPostDeferredWrites(v2, 0LL);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcExitPartition: Partition Exited=%p, PartitionObject=%p now deleting Partition \n",
        (const void *)v2,
        a1);
      CcDeletePartition((char *)v2);
    }
    else
    {
      CcNotifyWriteBehindInternal(v2, 2);
      if ( CcEnablePerVolumeLazyWriter == 1 )
        CcForEachPrivateVolumeCacheMap(
          v2,
          (__int64 (__fastcall *)(__int64, _QWORD *, __int64))CcWaitForCurrentLazyWriterActivityHelper,
          (__int64)&v26);
      else
        v26 = CcWaitForCurrentLazyWriterActivityOnPartition(v2, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 704), &LockHandle);
      v4 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 1230) = 1;
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v5 = KeGetCurrentIrql();
          if ( v5 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v5 >= 2u )
          {
            v6 = KeGetCurrentPrcb();
            v7 = v6->SchedulerAssist;
            v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v9 = (v8 & v7[5]) == 0;
            v7[5] &= v8;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v6);
          }
        }
      }
      __writecr8(v4);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v10 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v11 = KeGetCurrentIrql();
          if ( v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
          {
            v12 = KeGetCurrentPrcb();
            v13 = v12->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v9 = (v14 & v13[5]) == 0;
            v13[5] &= v14;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick((__int64)v12);
          }
        }
      }
      __writecr8(v10);
      while ( *(_QWORD *)(v2 + 592) != v2 + 592
           || *(_QWORD *)(v2 + 624) != v2 + 648
           || *(_QWORD *)(v2 + 632) != v2 + 648 )
      {
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 624), v2);
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 592), v2);
      }
    }
  }
}
