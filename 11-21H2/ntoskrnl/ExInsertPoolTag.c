/*
 * XREFs of ExInsertPoolTag @ 0x140214A58
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140214244 (MiAllocateContiguousMemory.c)
 * Callees:
 *     ExpInsertPoolTrackerExpansion @ 0x140212E00 (ExpInsertPoolTrackerExpansion.c)
 *     ExpAddTagForBigPages @ 0x140214C50 (ExpAddTagForBigPages.c)
 *     ExpPoolTrackerReturnLimit @ 0x140216928 (ExpPoolTrackerReturnLimit.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140221790 (ExpRemovePoolTrackerExpansion.c)
 *     ExpPlFindLimitEntry @ 0x1402501E8 (ExpPlFindLimitEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTracePool @ 0x14062DEE4 (EtwTracePool.c)
 *     ExpCleanupBigTag @ 0x14063B348 (ExpCleanupBigTag.c)
 *     ExpTrackTableGetMoreLimit @ 0x14063BDD0 (ExpTrackTableGetMoreLimit.c)
 */

__int64 __fastcall ExInsertPoolTag(unsigned int a1, ULONG_PTR a2, unsigned __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // edi
  __int64 v6; // r14
  char v9; // bl
  unsigned __int16 v10; // r15
  unsigned __int64 v11; // rbp
  int v12; // r12d
  __int64 v13; // r9
  __int64 v14; // rsi
  unsigned int v15; // r15d
  unsigned int v16; // r8d
  __int64 v17; // rbx
  int v18; // eax
  signed __int64 v19; // r12
  bool v20; // zf
  int v22; // edx
  __int64 LimitEntry; // rax
  __int64 v24; // rcx
  void *v25; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  signed __int64 v31; // r15
  unsigned __int64 MoreLimit; // rax
  __int64 v33; // rax
  int v34; // r10d
  __int64 v35; // rbx
  unsigned int v36; // ecx
  unsigned int v37; // r11d
  __int64 v38; // r8
  int v39; // r9d
  __int64 v40; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  __int64 v42; // [rsp+A0h] [rbp+18h]
  unsigned int v43; // [rsp+A8h] [rbp+20h]

  v5 = 0;
  v6 = a1;
  v9 = 0;
  v10 = 0;
  if ( (a5 & 1) != 0 )
  {
    v25 = (void *)(a3 + a2);
    if ( (((_DWORD)a3 + (_DWORD)a2) & 0xFFF) != 0 )
    {
      v9 = MEMORY[0xFFFFF78000000320] | 1;
      v10 = 4096 - ((unsigned __int16)v25 & 0xFFF);
      memset(v25, MEMORY[0xFFFFF78000000320] | 1, v10);
    }
  }
  if ( a3 >= a3 + 4095 )
    return v5;
  v11 = (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)ExpAddTagForBigPages(a2, v6, (a3 + 4095) & 0xFFFFF000, 4, v10, v9) )
    return v5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_DWORD)v6 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, 4, v6, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v12 = PoolTrackTableMask;
  v13 = PoolTrackTableSize;
  v42 = PoolTrackTableSize;
  v14 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  v15 = PoolTrackTableMask & ((40543 * v6) ^ ((unsigned __int64)(40543 * v6) >> 32));
  v16 = v15;
  v43 = v15;
  while ( 1 )
  {
    v17 = 10LL * v15;
    v18 = *(_DWORD *)(v14 + 80LL * v15);
    if ( v18 == (_DWORD)v6 )
      break;
    if ( v18 )
    {
LABEL_11:
      v15 = v12 & (v15 + 1);
      if ( v15 == v16 )
      {
        ExpInsertPoolTrackerExpansion(v6, v11, 4u);
        return 1;
      }
    }
    else
    {
      v22 = *(_DWORD *)(PoolTrackTable + 80LL * v15);
      if ( v22 )
      {
        *(_DWORD *)(v14 + 80LL * v15) = v22;
        v24 = *(_QWORD *)(PoolTrackTable + 80LL * v15 + 72);
        if ( v24 )
          *(_QWORD *)(v14 + 80LL * v15 + 72) = v24;
      }
      else
      {
        if ( v15 == v13 - 1 )
          goto LABEL_11;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 80LL * v15) )
        {
          LimitEntry = ExpPlFindLimitEntry((unsigned int)v6);
          *(_QWORD *)(PoolTrackTable + 80LL * v15 + 72) = LimitEntry;
          *(_QWORD *)(v14 + 80LL * v15 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80LL * v15) = v6;
          *(_DWORD *)(v14 + 80LL * v15) = v6;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v20 = (v30 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v30;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        v16 = v43;
        v13 = v42;
      }
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(v14 + 80LL * v15 + 16), 1uLL);
  v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 80LL * v15 + 8), v11);
  v20 = *(_QWORD *)(v14 + 80LL * v15 + 72) == 0LL;
LABEL_14:
  if ( !v20 )
  {
    v31 = *(_QWORD *)(v14 + 8 * v17 + 64);
    while ( (v31 & 1) == 0 && v31 < v19 )
    {
      MoreLimit = ExpTrackTableGetMoreLimit(*(_QWORD *)(v14 + 8 * v17 + 72), v11, 1LL);
      if ( !MoreLimit )
      {
        if ( (_DWORD)v6 == PoolHitTag )
          __debugbreak();
        v33 = DWORD1(PerfGlobalGroupMask);
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
          v33 = EtwTracePool(3618, 4, v6, a2, v11);
        LODWORD(v33) = KeGetPcr()->Prcb.Number;
        v34 = PoolTrackTableMask;
        v35 = (__int64)*(&ExPoolTagTables + v33);
        v36 = PoolTrackTableMask & ((40543 * v6) ^ ((unsigned __int64)(40543 * v6) >> 32));
        v37 = v36;
        while ( 1 )
        {
          v38 = v35 + 80LL * v36;
          if ( *(_DWORD *)v38 == (_DWORD)v6 )
            break;
          if ( *(_DWORD *)v38 || (v39 = *(_DWORD *)(PoolTrackTable + 80LL * v36)) == 0 )
          {
            v36 = v34 & (v36 + 1);
            if ( v36 == v37 )
            {
              ExpRemovePoolTrackerExpansion((unsigned int)v6, v11, 4LL);
              goto LABEL_54;
            }
          }
          else
          {
            *(_DWORD *)v38 = v39;
            v40 = *(_QWORD *)(PoolTrackTable + 80LL * v36 + 72);
            if ( v40 )
              *(_QWORD *)(v38 + 72) = v40;
          }
        }
        ExpPoolTrackerReturnLimit(1LL, v11);
LABEL_54:
        ExpCleanupBigTag(a2);
        return v5;
      }
      if ( MoreLimit == 1 )
      {
        v20 = v31 == _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8 * v17 + 64), 1LL, v31);
        goto LABEL_14;
      }
      v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 8 * v17 + 64), MoreLimit);
      v19 = *(_QWORD *)(v14 + 8 * v17 + 8);
    }
  }
  return 1;
}
