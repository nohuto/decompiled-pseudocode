/*
 * XREFs of KiAbProcessThreadLocks @ 0x1402BC350
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x14023F3F0 (KiSwapThread.c)
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     KiDispatchInterrupt @ 0x140249530 (KiDispatchInterrupt.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E70 (KiProcessDeferredReadyList.c)
 *     KeSetBasePriorityThread @ 0x1402B9DA0 (KeSetBasePriorityThread.c)
 *     KiAbDeferredProcessingWorker @ 0x1402BBAF0 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessContextSwitch @ 0x1402BBE18 (KiAbProcessContextSwitch.c)
 *     KiAbPropagateBoosts @ 0x1402BBED0 (KiAbPropagateBoosts.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA78 (KiCheckForThreadDispatch.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140317EC0 (KiAbThreadUnboostCpuPriority.c)
 *     KiReadyOutSwappedThreads @ 0x14034D1F4 (KiReadyOutSwappedThreads.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C118 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CB74 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039CB24 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14039E0E8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AADAC (KeSetUserGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575254 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575B30 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A0C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C750 (KiAbEntryGetLockedHeadEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x140260360 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402A8470 (KiAbTryIncrementIoWaiterCounts.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8CE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x1402BC720 (KiAbDetermineMaxWaiterPriority.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3650 (ObReferenceObjectSafeWithTag.c)
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     KiAbIoBoostOwners @ 0x140318C24 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140318D28 (KiAbCpuBoostOwners.c)
 *     KiAbSetMinimumThreadPriority @ 0x140318E28 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1403190C4 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1403191A0 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1403191F0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1403192AC (KiAbOwnerComputeCpuPriorityKey.c)
 *     IoBoostThreadIoPriority @ 0x14031B320 (IoBoostThreadIoPriority.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessThreadLocks(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // r12d
  int v8; // r13d
  char v9; // al
  __int64 v11; // r14
  unsigned int v12; // ebx
  bool i; // zf
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // r15d
  __int128 *LockedHeadEntry; // rax
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  char v22; // r12
  int v23; // r10d
  char CpuPriorityKey; // r13
  _DWORD *v25; // rdi
  char v26; // al
  char v27; // cl
  __int64 ExtensionTable; // rax
  int v29; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+38h] [rbp-50h] BYREF
  int v31; // [rsp+90h] [rbp+8h] BYREF
  int v32; // [rsp+A0h] [rbp+18h]
  int v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v7 = a4;
  v8 = a3;
  v9 = *(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 870);
  v31 = 0;
  v11 = a1;
  if ( v9 != 63 )
  {
    v12 = (*(unsigned __int8 *)(a1 + 792) | *(unsigned __int8 *)(a1 + 870)) ^ 0x3F;
    for ( i = !_BitScanForward((unsigned int *)&a1, v12); !i; i = !_BitScanForward((unsigned int *)&a1, v12) )
    {
      v12 &= v12 - 1;
      v14 = 96 * a1;
      v15 = v14 + v11 + 1696;
      v16 = *(_QWORD *)v15;
      if ( !*(_QWORD *)v15 || (v16 & 2) != 0 || a2 && (v16 & 1) != 0 )
        continue;
      if ( v16 < 0 )
      {
        if ( a2 )
        {
          if ( (*(_BYTE *)(v15 + 19) & 1) != 0 )
            continue;
          if ( *(_BYTE *)(v15 + 17) )
          {
            v27 = *(_BYTE *)(v15 - 96LL * *(unsigned __int8 *)(v15 + 16) - 1501);
            if ( v27 > 30 )
              v27 = 30;
            if ( v27 == *(_BYTE *)(v15 + 48) )
              continue;
          }
          else if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v14 + v11 + 1696) == *(_BYTE *)(v15 + 48) )
          {
            continue;
          }
        }
        else if ( *(_BYTE *)(v15 + 17) )
        {
          if ( !v8 )
            continue;
        }
        else if ( !v7 )
        {
          continue;
        }
      }
      else if ( !a2 )
      {
        continue;
      }
      v17 = 0;
      v31 = 0;
      v29 = 0;
      memset(&v30, 0, sizeof(v30));
      LockedHeadEntry = KiAbEntryGetLockedHeadEntry((__int128 *)v15, a2, &v30);
      v20 = (__int64)LockedHeadEntry;
      if ( LockedHeadEntry )
      {
        if ( *(_BYTE *)(v15 + 17) )
        {
          if ( !v8 )
            goto LABEL_41;
          if ( (__int128 *)v15 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition(v15, LockedHeadEntry);
          v21 = *(_QWORD *)(v20 + 56);
          if ( v21 )
            v22 = *(_BYTE *)(v21 + 24);
          else
            v22 = 30;
          if ( !*(_BYTE *)(v20 + 17) )
          {
            v26 = KiAbOwnerComputeCpuPriorityKey(v20);
            if ( v26 < v22 )
              v22 = v26;
          }
          KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)v15, v20, v19);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v15);
          if ( v22 < CpuPriorityKey )
          {
            if ( v23 )
LABEL_52:
              KiAbIoBoostOwners(v20, v23, a5, a6, a7);
            KiAbCpuBoostOwners(v20, (unsigned __int8)CpuPriorityKey, a5, a6, a7);
            v7 = v33;
            v8 = v32;
LABEL_41:
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&v30);
            if ( v17 )
            {
              v25 = (_DWORD *)(v15 - 96LL * *(unsigned __int8 *)(v15 + 16) - 1696);
              if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v25, 1953261124LL) )
              {
                if ( (v17 & 1) != 0 )
                  IoBoostThreadIoPriority(v25, 2LL, 0x80000000LL);
                if ( (v17 & 2) != 0 && v25[362] )
                {
                  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                  if ( ExtensionTable )
                  {
                    (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v25);
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                  }
                }
                ObDereferenceObjectDeferDeleteWithTag(v25, 0x746C6644u);
              }
            }
            continue;
          }
          if ( v23 )
            goto LABEL_52;
          v7 = v33;
          v8 = v32;
        }
        else
        {
          if ( !v7 )
            goto LABEL_41;
          if ( (__int128 *)v15 != LockedHeadEntry )
            KiAbEntryUpdateOwnerTreePosition(v15, LockedHeadEntry);
          KiAbDetermineMaxWaiterPriority(v20, &v31);
          if ( v31 )
          {
            if ( (unsigned int)KiAbSetMinimumThreadPriority(v15, (unsigned int)&v31, a5, a6, a7, (__int64)&v29)
              && v15 != v20 )
            {
              KiAbEntryUpdateOwnerTreePosition(v15, v20);
            }
            v17 = v29;
            goto LABEL_41;
          }
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&v30);
      }
    }
  }
}
