/*
 * XREFs of ExpResizeBigPageTable @ 0x1402129C0
 * Callers:
 *     ExpResizeBigPageTable @ 0x1402129C0 (ExpResizeBigPageTable.c)
 *     ExpAddTagForBigPages @ 0x140214C50 (ExpAddTagForBigPages.c)
 * Callees:
 *     ExpResizeBigPageTable @ 0x1402129C0 (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140212E00 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapPages @ 0x140213318 (ExAllocateHeapPages.c)
 *     ExpPlFindLimitEntry @ 0x1402501E8 (ExpPlFindLimitEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlpHpFreeHeap @ 0x140364128 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x140366C48 (ExGetHeapFromVA.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTracePool @ 0x14062DEE4 (EtwTracePool.c)
 *     ExpTrackTableGetMoreLimit @ 0x14063BDD0 (ExpTrackTableGetMoreLimit.c)
 */

__int64 __fastcall ExpResizeBigPageTable(__int64 Process, __int64 a2, _QWORD *a3)
{
  int v3; // r12d
  _QWORD *v4; // r15
  int *v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r14
  void *HeapPages; // rax
  ULONG_PTR v11; // rbx
  _QWORD *v12; // rax
  unsigned int v13; // r10d
  _QWORD *v14; // rsi
  _QWORD *i; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rax
  int v23; // ebp
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // r12d
  __int64 v28; // rbx
  int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rax
  signed __int64 v32; // rbp
  bool v33; // zf
  __int64 result; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  int v38; // edx
  __int64 LimitEntry; // rax
  __int64 v40; // rcx
  __int64 HeapFromVA; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v46; // eax
  signed __int64 v47; // rsi
  unsigned __int64 MoreLimit; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v51; // [rsp+A8h] [rbp+20h] BYREF

  v51 = 0LL;
  *a3 = 0LL;
  v3 = Process & 0x20;
  if ( (Process & 0x20) != 0 )
  {
    Process = (__int64)KeGetCurrentThread()->ApcState.Process;
    v35 = *(_QWORD *)(Process + 1368);
    v4 = *(_QWORD **)(v35 + 824);
    v5 = (int *)(v35 + 792);
    v6 = *(_QWORD *)(v35 + 832);
    if ( !PoolBigPageTableSize )
      return 0LL;
  }
  else
  {
    v4 = (_QWORD *)PoolBigPageTable;
    v5 = &ExpPoolBigEntriesInUse;
    v6 = PoolBigPageTableSize;
  }
  if ( v6 )
  {
    v7 = 2 * v6;
    if ( 2 * v6 <= v6 )
      return 0LL;
    Process = 0x7FFFFFFFFFFFFFFLL;
    if ( v7 > 0x7FFFFFFFFFFFFFFLL )
      return 0LL;
    v8 = (v6 << 6) + 4095;
    if ( v6 << 6 >= v8 )
      return 0LL;
  }
  else
  {
    v7 = 512LL;
    v8 = 20479LL;
  }
  v9 = v8 & 0xFFFFFFFFFFFFF000uLL;
  HeapPages = (void *)ExAllocateHeapPages(Process, v9);
  v11 = (ULONG_PTR)HeapPages;
  if ( !HeapPages )
    return 0LL;
  memset(HeapPages, 0, v9);
  v12 = (_QWORD *)v11;
  do
  {
    *v12 = 1LL;
    v12 += 4;
  }
  while ( v12 != (_QWORD *)(v11 + 32 * v7) );
  v13 = v7 - 1;
  v14 = &v4[4 * v6];
  for ( i = v4; i != v14; i += 4 )
  {
    if ( (*i & 1) == 0 )
    {
      v16 = v13 & (((40543 * (unsigned __int64)(unsigned int)(*i >> 12)) >> 32) ^ (40543 * (*i >> 12)));
      if ( (*(_BYTE *)(32LL * v16 + v11) & 1) == 0 )
      {
        do
        {
          v30 = v16 + 1;
          v31 = 0LL;
          if ( v30 <= v13 )
            v31 = v30;
          v16 = v31;
        }
        while ( (*(_BYTE *)(32 * v31 + v11) & 1) == 0 );
        v16 = v31;
      }
      v17 = 32LL * v16;
      *(_OWORD *)(v17 + v11) = *(_OWORD *)i;
      *(_OWORD *)(v17 + v11 + 16) = *((_OWORD *)i + 1);
    }
  }
  if ( v5 != &ExpPoolBigEntriesInUse )
  {
    if ( ExpPoolBigEntriesInUse != PoolBigPageTableSize || (unsigned int)ExpResizeBigPageTable(512LL, 1LL, &v51) )
    {
      v18 = PoolBigPageTable;
      v13 = PoolBigPageTableSize - 1;
      goto LABEL_17;
    }
    HeapFromVA = ExGetHeapFromVA(v11);
    RtlpHpFreeHeap(HeapFromVA, v11, 0LL, 0LL, 0LL);
    return 0LL;
  }
  v18 = v11;
LABEL_17:
  v19 = v13 & (((40543 * (unsigned __int64)(unsigned int)(v11 >> 12)) >> 32) ^ (40543 * (unsigned int)(v11 >> 12)));
  if ( (*(_QWORD *)(32 * v19 + v18) & 1) == 0 )
  {
    do
    {
      v37 = 0LL;
      if ( (int)v19 + 1 <= v13 )
        v37 = (unsigned int)(v19 + 1);
      LODWORD(v19) = v37;
    }
    while ( (*(_QWORD *)(32 * v37 + v18) & 1) == 0 );
    v19 = (unsigned int)v37;
  }
  v20 = 32 * v19;
  strcpy((char *)(v20 + v18 + 8), "Pool");
  *(_QWORD *)(v20 + v18) = v11;
  v21 = (unsigned __int8)*(_DWORD *)(v20 + v18 + 12) | 0x20000;
  *(_QWORD *)(v20 + v18 + 16) = v9;
  *(_DWORD *)(v20 + v18 + 12) = v21;
  _InterlockedAdd(&ExpPoolBigEntriesInUse, 1u);
  if ( v3 )
  {
    v36 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    *(_QWORD *)(v36 + 824) = v11;
    *(_QWORD *)(v36 + 832) = v7;
  }
  else
  {
    PoolBigPageTable = v11;
    PoolBigPageTableSize = v7;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v22 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v22 = EtwTracePool(3616, 512, 1819242320, v11, v9);
  LODWORD(v22) = KeGetPcr()->Prcb.Number;
  v23 = PoolTrackTableMask;
  v24 = PoolTrackTableSize;
  v25 = PoolTrackTableMask & 0x40DEDA5;
  v26 = (__int64)*(&ExPoolTagTables + v22);
  v27 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v28 = 10 * v25;
    v29 = *(_DWORD *)(v26 + 80 * v25);
    if ( v29 == 1819242320 )
      break;
    if ( v29 )
    {
LABEL_27:
      v25 = v23 & (unsigned int)(v25 + 1);
      if ( (_DWORD)v25 == v27 )
      {
        ExpInsertPoolTrackerExpansion(1819242320LL, v9, 512LL);
        goto LABEL_35;
      }
    }
    else
    {
      v38 = *(_DWORD *)(PoolTrackTable + 80 * v25);
      if ( v38 )
      {
        *(_DWORD *)(v26 + 80 * v25) = v38;
        v40 = *(_QWORD *)(PoolTrackTable + 80 * v25 + 72);
        if ( v40 )
          *(_QWORD *)(v26 + 80 * v25 + 72) = v40;
      }
      else
      {
        if ( (unsigned int)v25 == v24 - 1 )
          goto LABEL_27;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 80 * v25) )
        {
          LimitEntry = ExpPlFindLimitEntry(1819242320LL);
          *(_QWORD *)(PoolTrackTable + 80 * v25 + 72) = LimitEntry;
          *(_QWORD *)(v26 + 80 * v25 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80 * v25) = 1819242320;
          *(_DWORD *)(v26 + 80 * v25) = 1819242320;
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
              v46 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v33 = (v46 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v46;
              if ( v33 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
      }
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(v26 + 80 * v25 + 16), 1uLL);
  v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 80 * v25 + 8), v9);
  v33 = *(_QWORD *)(v26 + 80 * v25 + 72) == 0LL;
LABEL_34:
  if ( !v33 )
  {
    v47 = *(_QWORD *)(v26 + 8 * v28 + 64);
    while ( (v47 & 1) == 0 )
    {
      if ( v47 >= v32 )
        break;
      MoreLimit = ExpTrackTableGetMoreLimit(*(_QWORD *)(v26 + 8 * v28 + 72), v9, 1LL);
      if ( !MoreLimit )
        break;
      if ( MoreLimit == 1 )
      {
        v33 = v47 == _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 8 * v28 + 64), 1LL, v47);
        goto LABEL_34;
      }
      v47 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 8 * v28 + 64), MoreLimit);
      v32 = *(_QWORD *)(v26 + 8 * v28 + 8);
    }
  }
LABEL_35:
  if ( v4 )
    *v4 = v51;
  else
    v4 = v51;
  result = 1LL;
  *a3 = v4;
  return result;
}
