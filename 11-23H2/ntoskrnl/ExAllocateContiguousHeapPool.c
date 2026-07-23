/*
 * XREFs of ExAllocateContiguousHeapPool @ 0x1403BA2F4
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1403B9EB4 (MiAllocateContiguousMemory.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14024DC10 (RtlpHpSegAlloc.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlpHpFreeHeap @ 0x1402AC750 (RtlpHpFreeHeap.c)
 *     ExFreeHeapPool @ 0x140323340 (ExFreeHeapPool.c)
 *     ExpAddTagForBigPages @ 0x140331DC0 (ExpAddTagForBigPages.c)
 *     ExpPlFindLimitEntry @ 0x14035D0D8 (ExpPlFindLimitEntry.c)
 *     ExGetHeapFromType @ 0x1403BA59C (ExGetHeapFromType.c)
 *     ExpPoolTrackerChargeEntry @ 0x1403BA8DC (ExpPoolTrackerChargeEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1405FD700 (EtwTracePool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140608088 (ExpInsertPoolTrackerExpansion.c)
 */

unsigned __int64 __fastcall ExAllocateContiguousHeapPool(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 HeapFromType; // rsi
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdi
  int v13; // r14d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // r10
  __int64 v21; // rdx
  unsigned int v22; // r13d
  unsigned int v23; // r9d
  __int64 v24; // r15
  int v25; // edx
  __int64 v26; // rcx
  _QWORD *LimitEntry; // rax
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  __int64 v34; // [rsp+30h] [rbp-68h]
  __int64 v35; // [rsp+38h] [rbp-60h]
  int v36; // [rsp+40h] [rbp-58h]
  __int64 v37; // [rsp+48h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+A0h] [rbp+8h]

  HeapFromType = ExGetHeapFromType(512LL, a5, 0LL);
  if ( v10 > *(_QWORD *)(*(_QWORD *)qword_140C673C8 + 17024LL) )
    return 0LL;
  if ( a2 < *(_QWORD *)(*(_QWORD *)qword_140C673C8 + 17032LL) )
    return 0LL;
  if ( (unsigned __int64)(a3 - 1) <= 0x1FE )
    return 0LL;
  v13 = 1;
  if ( (*(_BYTE *)(HeapFromType + 333) & 7) == 0 || a4 >= *(unsigned int *)(HeapFromType + 528) )
    return 0LL;
  v14 = HeapFromType + 320;
  v15 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v15 > *(unsigned int *)(HeapFromType + 336) )
    v14 = HeapFromType + 512;
  v16 = RtlpHpSegAlloc(v14, v15, v15, v15, 0x800000u);
  v17 = v16;
  if ( !v16 )
    return 0LL;
  if ( !(unsigned int)ExpAddTagForBigPages(v16, a6, v15, 512, 0, 0) )
  {
    v11 = 0LL;
    RtlpHpFreeHeap((_DWORD *)HeapFromType, v17, 0);
    return v11;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a6 == PoolHitTag )
    __debugbreak();
  v18 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v18 = EtwTracePool(3616, 512, a6, v17, v15);
  LODWORD(v18) = KeGetPcr()->Prcb.Number;
  v19 = PoolTrackTableMask;
  v20 = PoolTrackTableSize;
  v21 = (__int64)*(&ExPoolTagTables + v18);
  v34 = v21;
  v36 = PoolTrackTableMask;
  v22 = PoolTrackTableMask & ((40543 * a6) ^ ((40543 * (unsigned __int64)a6) >> 32));
  v37 = PoolTrackTableSize;
  v23 = v22;
  v39 = v22;
  do
  {
    while ( 1 )
    {
      v24 = v21 + 80LL * v22;
      if ( *(_DWORD *)v24 == a6 )
      {
        v13 = ExpPoolTrackerChargeEntry(1LL, v15, v21 + 80LL * v22);
        goto LABEL_19;
      }
      if ( *(_DWORD *)v24 )
        break;
      v25 = *(_DWORD *)(PoolTrackTable + 80LL * v22);
      if ( v25 )
      {
        *(_DWORD *)v24 = v25;
        v21 = v34;
        v26 = *(_QWORD *)(PoolTrackTable + 80LL * v22 + 72);
        if ( v26 )
          *(_QWORD *)(v24 + 72) = v26;
      }
      else
      {
        if ( v22 == v20 - 1 )
        {
          v21 = v34;
          break;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        v35 = PoolTrackTable;
        if ( !*(_DWORD *)(PoolTrackTable + 80LL * v22) )
        {
          LimitEntry = ExpPlFindLimitEntry(a6);
          *(_QWORD *)(v35 + 80LL * v22 + 72) = LimitEntry;
          *(_QWORD *)(v24 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80LL * v22) = a6;
          *(_DWORD *)v24 = a6;
        }
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
            v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v33 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        v19 = v36;
        v23 = v39;
        v20 = v37;
        v21 = v34;
      }
    }
    v22 = v19 & (v22 + 1);
  }
  while ( v22 != v23 );
  ExpInsertPoolTrackerExpansion(a6, v15, 512LL);
LABEL_19:
  v11 = v17;
  if ( !v13 )
  {
    ExFreeHeapPool(v17);
    return 0LL;
  }
  return v11;
}
