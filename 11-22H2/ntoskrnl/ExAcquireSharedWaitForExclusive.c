/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x1403C82F0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x140349A9C (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14046AD00 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     DifExAcquireSharedWaitForExclusiveWrapper @ 0x1405D74A0 (DifExAcquireSharedWaitForExclusiveWrapper.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x1402600E0 (ExpFindCurrentThread.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPrewaitBoost @ 0x1402A7A00 (ExpApplyPrewaitBoost.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     ExpBoostIoAfterAcquire @ 0x14031ACD0 (ExpBoostIoAfterAcquire.c)
 *     ExpGetThreadResourceHint @ 0x140337910 (ExpGetThreadResourceHint.c)
 *     ExpWaitForResource @ 0x1403410D0 (ExpWaitForResource.c)
 *     ExpFindEmptyEntry @ 0x1403411A4 (ExpFindEmptyEntry.c)
 *     ExpExpandResourceOwnerTable @ 0x140341200 (ExpExpandResourceOwnerTable.c)
 *     RtlInsertHeadCircularList @ 0x14034F040 (RtlInsertHeadCircularList.c)
 *     ExpTryAcquireResourceShared @ 0x1403C918C (ExpTryAcquireResourceShared.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14060071C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140600BF4 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  __int16 v4; // ax
  KSPIN_LOCK *p_SpinLock; // r13
  ERESOURCE_THREAD CurrentThread; // r15
  int v7; // r14d
  unsigned int v8; // ebx
  OWNER_ENTRY *CurrentIrql; // r8
  __int64 v10; // r12
  _DWORD *SchedulerAssist; // r10
  __int64 v12; // rdx
  signed __int64 *v13; // rdx
  __int16 v14; // ax
  _QWORD *EmptyEntry; // rax
  _QWORD *v16; // r14
  unsigned int ThreadResourceHint; // eax
  __int64 v18; // r10
  OWNER_ENTRY *p_OwnerEntry; // rdx
  OWNER_ENTRY *v20; // r9
  unsigned __int64 v21; // rcx
  POWNER_ENTRY OwnerTable; // rax
  POWNER_ENTRY v23; // rdx
  unsigned __int64 v24; // r11
  POWNER_ENTRY v25; // r10
  OWNER_ENTRY *v26; // rcx
  ULONG v27; // ebx
  ULONG v28; // ebx
  unsigned __int64 v29; // rsi
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  bool v34; // zf
  BOOLEAN v35; // bl
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // r14d
  unsigned int v37; // r14d
  ULONG ActiveEntries; // edx
  unsigned int v39; // r14d
  __int64 Next; // rax
  unsigned __int8 Lock; // cl
  unsigned __int64 v42; // rbx
  unsigned __int8 v43; // cl
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  unsigned int v47; // r10d
  unsigned int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // rsi
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  int v55; // eax
  _QWORD *v56; // rax
  int v57; // ecx
  unsigned __int64 v58; // r14
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r9
  _DWORD *v61; // r8
  int v62; // eax
  unsigned __int64 v63; // rbx
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  ULONG v68; // ecx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v70; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v72; // r8
  int v73; // eax
  signed __int32 v75[8]; // [rsp+0h] [rbp-49h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-19h] BYREF
  __int128 v77; // [rsp+48h] [rbp-1h] BYREF
  __int128 v78; // [rsp+58h] [rbp+Fh]
  __int128 v79; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v80; // [rsp+78h] [rbp+2Fh]
  void *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v82; // [rsp+B8h] [rbp+6Fh]

  v80 = 0LL;
  v4 = Resource->Flag & 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  if ( !FeatureFastResource2 )
  {
    if ( !v4 )
      goto LABEL_3;
LABEL_125:
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( v4 )
    goto LABEL_125;
LABEL_3:
  p_SpinLock = &Resource->SpinLock;
  CurrentThread = (ERESOURCE_THREAD)KeGetCurrentThread();
  v7 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  __incgsdword(0x8ABCu);
  v8 = 0;
  LockHandle.LockQueue.Lock = &Resource->SpinLock;
  LockHandle.LockQueue.Next = 0LL;
  v82 = v7;
  CurrentIrql = (OWNER_ENTRY *)KeGetCurrentIrql();
  __writecr8(2uLL);
  v10 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v12) = 4;
    else
      v12 = (v10 << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  LockHandle.OldIrql = (unsigned __int8)CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, p_SpinLock);
  }
  else
  {
    v13 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
    if ( v13 )
      KxWaitForLockOwnerShip((signed __int64)&LockHandle, v13);
  }
  while ( 1 )
  {
LABEL_16:
    if ( !Resource->ActiveEntries )
    {
      v35 = ExpTryAcquireResourceShared(Resource);
      v68 = Resource->OwnerEntry.TableSize & 7;
      Resource->OwnerEntry.OwnerThread = CurrentThread;
      Resource->OwnerEntry.TableSize = v68 | 8;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v70 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v70 <= 0xFu && LockHandle.OldIrql <= 0xFu && v70 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v72 = CurrentPrcb->SchedulerAssist;
          v73 = ~(unsigned __int16)(v10 << (LockHandle.OldIrql + 1));
          v34 = (v73 & v72[5]) == 0;
          v72[5] &= v73;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      __incgsdword(0x8AC4u);
      __incgsdword(0x8A64u);
      if ( v82 )
        PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
      return v35;
    }
    v14 = Resource->Flag & 0x80;
    if ( v14 )
    {
      if ( Resource->OwnerEntry.OwnerThread == CurrentThread )
      {
        v27 = Resource->OwnerEntry.TableSize + 8;
        Resource->OwnerEntry.TableSize = v27;
        v28 = v27 >> 3;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v29 = LockHandle.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v30 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
          {
            v31 = KeGetCurrentPrcb();
            v32 = v31->SchedulerAssist;
            v33 = ~(unsigned __int16)(v10 << (LockHandle.OldIrql + 1));
            v34 = (v33 & v32[5]) == 0;
            v32[5] &= v33;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
        __writecr8(v29);
        __incgsdword(0x8AC0u);
        __incgsdword(0x8A64u);
        if ( v82 )
          PerfLogExecutiveResourceAcquire(65585LL, Resource, v28, Resource->ContentionCount);
        return 1;
      }
LABEL_19:
      if ( Wait )
      {
        if ( v14 )
        {
          EmptyEntry = ExpFindEmptyEntry((__int64)Resource, (__int64)&LockHandle, CurrentIrql);
          v16 = EmptyEntry;
          if ( !EmptyEntry )
            continue;
          *EmptyEntry = CurrentThread;
          *((_DWORD *)EmptyEntry + 2) = EmptyEntry[1] & 7 | 8;
        }
        else
        {
          v16 = 0LL;
        }
        ++Resource->NumberOfSharedWaiters;
        *((_QWORD *)&v79 + 1) = &v79;
        *((_QWORD *)&v77 + 1) = 0LL;
        *(_QWORD *)&v79 = &v79;
        *((_QWORD *)&v78 + 1) = 393217LL;
        *(_QWORD *)&v78 = CurrentThread;
        v80 = 0LL;
        RtlInsertHeadCircularList((__int64 *)&Resource->SharedWaiters, &v77);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v52 = LockHandle.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v53 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v53 <= 0xFu && LockHandle.OldIrql <= 0xFu && v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            v51 = (__int64)v54->SchedulerAssist;
            v49 = v10 << (LockHandle.OldIrql + 1);
            v55 = ~(unsigned __int16)v49;
            v34 = (v55 & *(_DWORD *)(v51 + 20)) == 0;
            v50 = (unsigned int)v55 & *(_DWORD *)(v51 + 20);
            *(_DWORD *)(v51 + 20) = v50;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(v54);
          }
        }
        __writecr8(v52);
        __incgsdword(0x8ACCu);
        if ( v82 )
          PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
        ExpApplyPrewaitBoost((__int64)Resource, v49, v50, v51);
        ExpWaitForResource(Resource, (__int64)&v77, 0x10244u, (void (__fastcall *)(_DWORD *))ExpApplyRewaitBoost);
        if ( !v16 )
        {
          KeAcquireInStackQueuedSpinLock(p_SpinLock, &LockHandle);
          do
            v56 = ExpFindCurrentThread((__int64)Resource, CurrentThread, (__int64)&LockHandle, 1, 1, 0);
          while ( !v56 );
          v57 = v56[1] & 7;
          *v56 = CurrentThread;
          *((_DWORD *)v56 + 2) = v57 | 8;
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          v58 = LockHandle.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            v59 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v59 <= 0xFu && LockHandle.OldIrql <= 0xFu && v59 >= 2u )
            {
              v60 = KeGetCurrentPrcb();
              v61 = v60->SchedulerAssist;
              v62 = ~(unsigned __int16)(v10 << (LockHandle.OldIrql + 1));
              v34 = (v62 & v61[5]) == 0;
              v61[5] &= v62;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v60);
            }
          }
          __writecr8(v58);
        }
        if ( (CurrentThread & 3) == 0 )
          v8 = *(unsigned __int8 *)(CurrentThread + 1120);
        ExpBoostIoAfterAcquire((__int64)Resource, CurrentThread, v8);
        __incgsdword(0x8AC4u);
        __incgsdword(0x8A64u);
        if ( !v82 )
          return 1;
        PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
        return 1;
      }
      else
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v63 = LockHandle.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v64 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v64 <= 0xFu && LockHandle.OldIrql <= 0xFu && v64 >= 2u )
          {
            v65 = KeGetCurrentPrcb();
            v66 = v65->SchedulerAssist;
            v67 = ~(unsigned __int16)(v10 << (LockHandle.OldIrql + 1));
            v34 = (v67 & v66[5]) == 0;
            v66[5] &= v67;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(v65);
          }
        }
        __writecr8(v63);
        __incgsdword(0x8AD0u);
        return 0;
      }
    }
    if ( Resource->NumberOfExclusiveWaiters )
      goto LABEL_19;
    ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
    p_OwnerEntry = &Resource->OwnerEntry;
    CurrentIrql = (OWNER_ENTRY *)ThreadResourceHint;
    if ( Resource->OwnerEntry.OwnerThread != CurrentThread )
    {
      v20 = 0LL;
      v21 = Resource->OwnerEntry.OwnerThread != 0;
      if ( !ThreadResourceHint )
        break;
      OwnerTable = Resource->OwnerTable;
      if ( !OwnerTable )
        break;
      if ( (unsigned int)CurrentIrql >= OwnerTable->TableSize )
        break;
      p_OwnerEntry = &OwnerTable[(unsigned int)CurrentIrql];
      if ( p_OwnerEntry->OwnerThread != CurrentThread )
        break;
    }
LABEL_44:
    v26 = p_OwnerEntry;
    if ( p_OwnerEntry )
      goto LABEL_57;
  }
  v23 = Resource->OwnerTable;
  v24 = v18 + Resource->NumberOfSharedWaiters;
  v25 = v23;
  if ( !v23 )
    goto LABEL_42;
  CurrentIrql = &v23[v23->TableSize];
  p_OwnerEntry = v23 + 1;
  if ( v21 >= v24 )
    goto LABEL_40;
  while ( 1 )
  {
    if ( p_OwnerEntry->OwnerThread == CurrentThread )
    {
      KeGetCurrentThread()->ResourceIndex = p_OwnerEntry - v25;
      goto LABEL_44;
    }
    if ( !p_OwnerEntry->OwnerThread )
    {
      if ( !v20 )
        v20 = p_OwnerEntry;
      goto LABEL_36;
    }
    if ( ++v21 == v24 )
      break;
LABEL_36:
    if ( ++p_OwnerEntry == CurrentIrql )
      goto LABEL_39;
  }
  ++p_OwnerEntry;
LABEL_39:
  if ( v20 )
    goto LABEL_56;
LABEL_40:
  if ( p_OwnerEntry >= CurrentIrql || (v20 = p_OwnerEntry) == 0LL )
  {
LABEL_42:
    ExpExpandResourceOwnerTable((__int64)Resource, (__int64)&LockHandle);
    goto LABEL_16;
  }
LABEL_56:
  p_OwnerEntry = v20;
  KeGetCurrentThread()->ResourceIndex = v20 - v25;
  v26 = v20;
LABEL_57:
  TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v26->TableSize;
  if ( p_OwnerEntry->OwnerThread )
  {
    v37 = *(_DWORD *)&TableSize + 8;
    v26->TableSize = v37;
  }
  else
  {
    p_OwnerEntry->OwnerThread = CurrentThread;
    v37 = *(_BYTE *)&TableSize & 7 | 8;
    v26->TableSize = v37;
    ActiveEntries = Resource->ActiveEntries;
    if ( !ActiveEntries || (Resource->ReservedLowFlags & 0x80u) == 0 && !Resource->NumberOfExclusiveWaiters )
    {
      Resource->ActiveCount = 1;
      Resource->ActiveEntries = ActiveEntries + 1;
      v37 = v26->TableSize;
    }
  }
  v39 = v37 >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_70;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
    if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                     (volatile __int64 *)(Next + 8),
                                     (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
    {
      _InterlockedOr(v75, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(Next + 8) >> 5) & 0x7F], 0LL));
    }
  }
LABEL_70:
  v42 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v43 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v43 <= 0xFu && LockHandle.OldIrql <= 0xFu && v43 >= 2u )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v46 = ~(unsigned __int16)(v10 << (LockHandle.OldIrql + 1));
      v34 = (v46 & v45[5]) == 0;
      v45[5] &= v46;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
  __writecr8(v42);
  v47 = 65617;
  v48 = 35528;
  if ( v39 == 1 )
  {
    v47 = 65601;
    v48 = 35524;
  }
  __incgsdword(v48);
  __incgsdword(0x8AC8u);
  if ( v82 )
    PerfLogExecutiveResourceAcquire(v47, Resource, 1LL, Resource->ContentionCount);
  return 1;
}
