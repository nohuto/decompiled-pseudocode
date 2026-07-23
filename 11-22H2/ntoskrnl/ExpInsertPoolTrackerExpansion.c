/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x140607BA8
 * Callers:
 *     ExAllocateHeapPool @ 0x1402AD2B0 (ExAllocateHeapPool.c)
 *     ExpResizeBigPageTable @ 0x1403B91FC (ExpResizeBigPageTable.c)
 *     ExAllocateContiguousHeapPool @ 0x1403B9AB4 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1403B9E9C (ExInsertPoolTag.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140607BA8 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapSpecialPool @ 0x14060EDA0 (ExAllocateHeapSpecialPool.c)
 *     ExInitializePoolTracker @ 0x140B61AFC (ExInitializePoolTracker.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpPlFindLimitEntry @ 0x14035C8E8 (ExpPlFindLimitEntry.c)
 *     ExAllocateHeapPages @ 0x1403B955C (ExAllocateHeapPages.c)
 *     ExpPoolTrackerChargeEntry @ 0x1403BA09C (ExpPoolTrackerChargeEntry.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1405FD220 (EtwTracePool.c)
 *     ExPoolCleanupExpansionTable @ 0x140607318 (ExPoolCleanupExpansionTable.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140607BA8 (ExpInsertPoolTrackerExpansion.c)
 */

void __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  char v5; // r13
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // r12
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // r11
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int64 v22; // rbx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  volatile signed __int64 *v27; // rax
  volatile signed __int64 *v28; // rcx
  volatile signed __int64 *v29; // rax
  __int64 v30; // rdi
  char *HeapPages; // rax
  __int64 v32; // rbx
  int v33; // r8d
  __int64 v34; // r10
  __int64 Number; // rcx
  __int64 v36; // rbx
  int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // r13
  int v40; // edx
  __int64 v41; // rcx
  _QWORD *LimitEntry; // rax
  unsigned __int64 v43; // rsi
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rbx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  unsigned __int64 v54; // r12
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  __int64 v59; // [rsp+38h] [rbp-49h]
  __int64 v60; // [rsp+38h] [rbp-49h]
  unsigned __int64 Size; // [rsp+40h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-39h] BYREF
  __int64 v63; // [rsp+60h] [rbp-21h]
  __int64 v64; // [rsp+68h] [rbp-19h]
  __int64 v65; // [rsp+70h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE v66; // [rsp+78h] [rbp-9h] BYREF
  __int64 v67; // [rsp+90h] [rbp+Fh]
  int v70; // [rsp+100h] [rbp+7Fh]

  v4 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a3;
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  v6 = PoolTrackTableExpansionSize;
  v7 = 0LL;
  v8 = PoolTrackTableSize;
  v9 = PoolTrackTable;
  v10 = (_QWORD *)PoolTrackTableExpansion;
  v59 = PoolTrackTableSize;
  if ( PoolTrackTableExpansionSize )
  {
    v11 = 0LL;
    do
    {
      v12 = *(_DWORD *)(PoolTrackTableExpansion + 80 * v11);
      if ( v12 == (_DWORD)v4 )
        break;
      if ( !v12 )
      {
        *(_DWORD *)(80 * v7 + PoolTrackTableExpansion) = v4;
        v13 = v4 & (-1LL << (dword_140CF81C4 & 0x1F));
        if ( (unsigned int)dword_140CF81C4 >> 5 )
        {
          v67 = v4 & (-1LL << (dword_140CF81C4 & 0x1F));
          v14 = (char *)qword_140CF81C8
              + 8
              * ((37
                * (BYTE6(v13)
                 + 37
                 * (BYTE5(v13)
                  + 37
                  * (BYTE4(v13)
                   + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                + HIBYTE(v13)) & (((unsigned int)dword_140CF81C4 >> 5) - 1));
          while ( 1 )
          {
            v15 = (_QWORD *)*v14;
            v14 = v15;
            if ( ((unsigned __int8)v15 & 1) != 0 )
              break;
            if ( v13 == ((-1LL << (dword_140CF81C4 & 0x1F)) & v15[1]) )
            {
              if ( v15 )
                goto LABEL_13;
              break;
            }
          }
        }
        v15 = 0LL;
LABEL_13:
        v10[10 * v7 + 9] = v15;
        break;
      }
      v7 = (unsigned int)(v7 + 1);
      v11 = (unsigned int)v7;
    }
    while ( (unsigned int)v7 < (unsigned __int64)PoolTrackTableExpansionSize );
    v8 = v59;
  }
  if ( (unsigned int)v7 != v6 )
  {
    ExpPoolTrackerChargeEntry((v5 & 1) == 0, a2, (__int64)&v10[10 * v7]);
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
        v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return;
  }
  if ( *(_DWORD *)(v9 + 80 * v8 - 80) )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v22 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v23 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v23 <= 0xFu && LockHandle.OldIrql <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)v24);
      }
    }
    __writecr8(v22);
    v27 = (volatile signed __int64 *)(v9 + 80LL * (unsigned int)(v59 - 1));
    if ( (v5 & 1) != 0 )
    {
      v28 = v27 + 4;
      v29 = v27 + 5;
    }
    else
    {
      v28 = v27 + 1;
      v29 = v27 + 2;
    }
    _InterlockedIncrement64(v29);
    _InterlockedExchangeAdd64(v28, a2);
    return;
  }
  v30 = 80 * v6;
  Size = (80 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapPages = ExAllocateHeapPages();
  v32 = (__int64)HeapPages;
  if ( !HeapPages )
  {
    *(_DWORD *)(v9 + 80LL * (unsigned int)(v59 - 1)) = 1818654287;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v54 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v55 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v55 <= 0xFu && LockHandle.OldIrql <= 0xFu && v55 >= 2u )
      {
        v56 = KeGetCurrentPrcb();
        v57 = v56->SchedulerAssist;
        v58 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v58 & v57[5]) == 0;
        v57[5] &= v58;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)v56);
      }
    }
    __writecr8(v54);
    if ( (v5 & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 80LL * (unsigned int)(v59 - 1) + 40));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 80LL * (unsigned int)(v59 - 1) + 32), a2);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 80LL * (unsigned int)(v59 - 1) + 16));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 80LL * (unsigned int)(v59 - 1) + 8), a2);
    }
    return;
  }
  if ( v10 )
    memmove(HeapPages, v10, Size);
  memset((void *)(v30 + v32), 0, Size + 4096 - v30);
  PoolTrackTableExpansionSize = (Size + 4096) / 0x50;
  PoolTrackTableExpansion = v32;
  memset(&v66, 0, sizeof(v66));
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, 512, 1819242320, v32, Size + 4096);
  v33 = PoolTrackTableMask;
  v34 = PoolTrackTableSize;
  Number = KeGetPcr()->Prcb.Number;
  v36 = PoolTrackTableMask & 0x40DEDA5;
  v64 = PoolTrackTableMask;
  v65 = PoolTrackTableSize;
  v37 = PoolTrackTableMask & 0x40DEDA5;
  v70 = PoolTrackTableMask & 0x40DEDA5;
  v38 = (__int64)*(&ExPoolTagTables + Number);
  v60 = v38;
  while ( 1 )
  {
    v39 = v38 + 80 * v36;
    if ( *(_DWORD *)v39 == 1819242320 )
      break;
    if ( *(_DWORD *)v39 )
    {
LABEL_60:
      v38 = v60;
      v36 = v33 & (unsigned int)(v36 + 1);
      if ( (_DWORD)v36 == v37 )
      {
        v48 = Size;
        ExpInsertPoolTrackerExpansion(1819242320LL, Size + 4096, 512LL);
        goto LABEL_63;
      }
    }
    else
    {
      v40 = *(_DWORD *)(PoolTrackTable + 80 * v36);
      if ( v40 )
      {
        *(_DWORD *)v39 = v40;
        v41 = *(_QWORD *)(PoolTrackTable + 80 * v36 + 72);
        v38 = v60;
        if ( v41 )
          *(_QWORD *)(v39 + 72) = v41;
      }
      else
      {
        if ( (unsigned int)v36 == v34 - 1 )
          goto LABEL_60;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v66);
        v63 = PoolTrackTable;
        if ( !*(_DWORD *)(PoolTrackTable + 80 * v36) )
        {
          LimitEntry = ExpPlFindLimitEntry(1819242320);
          *(_QWORD *)(v63 + 80 * v36 + 72) = LimitEntry;
          *(_QWORD *)(v39 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80 * v36) = 1819242320;
          *(_DWORD *)v39 = 1819242320;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&v66);
        v43 = v66.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v44 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v44 <= 0xFu && v66.OldIrql <= 0xFu && v44 >= 2u )
          {
            v45 = KeGetCurrentPrcb();
            v46 = v45->SchedulerAssist;
            v47 = ~(unsigned __int16)(-1LL << (v66.OldIrql + 1));
            v21 = (v47 & v46[5]) == 0;
            v46[5] &= v47;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick((__int64)v45);
          }
        }
        __writecr8(v43);
        v33 = v64;
        v37 = v70;
        v34 = v65;
        v38 = v60;
      }
    }
  }
  v48 = Size;
  ExpPoolTrackerChargeEntry(1, Size + 4096, v39);
LABEL_63:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v49 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v50 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v50 <= 0xFu && LockHandle.OldIrql <= 0xFu && v50 >= 2u )
    {
      v51 = KeGetCurrentPrcb();
      v52 = v51->SchedulerAssist;
      v53 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v21 = (v53 & v52[5]) == 0;
      v52[5] &= v53;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick((__int64)v51);
    }
  }
  __writecr8(v49);
  if ( v10 )
    ExPoolCleanupExpansionTable((ULONG_PTR)v10, v48);
  ExpInsertPoolTrackerExpansion(a1, a2, a3);
}
