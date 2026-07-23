/*
 * XREFs of CcCreatePrivateVolumeCacheMap @ 0x140341C94
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     CcAddExternalCacheToVolume @ 0x1403D7004 (CcAddExternalCacheToVolume.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementPrivateVolumeUseCount @ 0x14029A86C (CcDecrementPrivateVolumeUseCount.c)
 *     CcFindPrivateVolumeCacheMap @ 0x140341D88 (CcFindPrivateVolumeCacheMap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403C0C88 (CcInitializePrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C2254 (CcDeletePrivateVolumeCacheMap.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403C3E18 (CcInsertPrivateVolumeCacheMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcCreatePrivateVolumeCacheMap(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 PrivateVolumeCacheMap; // rax
  PVOID v8; // rsi
  PVOID PoolWithTag; // rax
  void *v10; // rbx
  PVOID v11; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  PVOID P; // [rsp+78h] [rbp+38h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  v20 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    PrivateVolumeCacheMap = CcFindPrivateVolumeCacheMap(a1, *(_QWORD *)(*(_QWORD *)(a2 + 512) + 8LL));
    if ( PrivateVolumeCacheMap )
    {
      *(_QWORD *)(a2 + 600) = PrivateVolumeCacheMap;
      return 0LL;
    }
  }
  P = ExAllocatePoolWithTag((POOL_TYPE)1536, 440LL * (unsigned int)CcNumberNumaNodes, 0x754E6343u);
  v8 = P;
  if ( P )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x680uLL, 0x6D566343u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v11 = v8;
LABEL_12:
      ExFreePoolWithTag(v11, 0x754E6343u);
      return 3221225626LL;
    }
    if ( (unsigned __int8)CcInitializePrivateVolumeCacheMap(
                            a1,
                            PoolWithTag,
                            &P,
                            a2,
                            LockHandle.LockQueue.Next,
                            LockHandle.LockQueue.Lock) )
    {
      if ( (unsigned __int8)CcInsertPrivateVolumeCacheMap(a1, v10, &v20) )
      {
        *a3 = v10;
      }
      else
      {
        *a3 = v20;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
        CcDecrementPrivateVolumeUseCount((__int64)v10);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && LockHandle.OldIrql <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        CcDeletePrivateVolumeCacheMap(v10);
      }
      return 0LL;
    }
    CcDeletePrivateVolumeCacheMap(v10);
    v11 = P;
    if ( P )
      goto LABEL_12;
  }
  return 3221225626LL;
}
