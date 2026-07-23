/*
 * XREFs of CcSetDirtyInMask @ 0x1402C8FC0
 * Callers:
 *     CcReleaseByteRangeFromWrite @ 0x14025D5E0 (CcReleaseByteRangeFromWrite.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F12D4 (CcPurgeAndClearCacheSection.c)
 *     CcSetDirtyPinnedData @ 0x1402FC580 (CcSetDirtyPinnedData.c)
 *     CcPrepareMdlWrite @ 0x140368B40 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14036B23C (CcMdlWriteComplete2.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140299784 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1402998D8 (CcScheduleLazyWriteScan.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExpReleaseFastMutexContended @ 0x1402BBF30 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCD4C (ExpAcquireFastMutexContended.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     CcAllocateInitializeMbcb @ 0x14035C6E8 (CcAllocateInitializeMbcb.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140535D04 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     ExAllocatePoolWithTag @ 0x140AAFC80 (ExAllocatePoolWithTag.c)
 */

int __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v7; // rax
  _SLIST_ENTRY *v8; // rsi
  int v9; // r12d
  int v10; // r8d
  volatile signed __int64 *SchedulerSubNode; // rcx
  __int64 InitializeMbcb; // rax
  int v13; // r8d
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  signed __int64 v17; // r14
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v19; // r13
  unsigned int AbEntrySummary; // eax
  unsigned int v21; // ecx
  struct _KPRCB *v22; // rcx
  signed __int32 *v23; // r8
  int SessionId; // eax
  unsigned __int8 v25; // si
  __int64 v26; // rbx
  __int64 v27; // rdx
  signed __int64 v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rsi
  signed __int64 v31; // rcx
  __int64 v32; // rcx
  _BYTE *v33; // rbx
  volatile __int64 *v34; // r8
  unsigned __int8 v35; // dl
  signed __int64 *v36; // rdx
  __int64 v37; // r8
  _DWORD *v38; // rdx
  int v39; // ebx
  unsigned int v40; // r8d
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // r15
  _QWORD *v44; // rsi
  _BYTE *v45; // r14
  _BYTE *v46; // r9
  _QWORD *v47; // r11
  _QWORD *v48; // r8
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 v52; // rsi
  ULONG_PTR v53; // rbx
  __int64 v54; // rcx
  bool v55; // zf
  unsigned __int64 v56; // rdi
  signed __int32 v57; // eax
  signed __int32 v58; // eax
  signed __int32 v59; // ett
  _DWORD *v60; // r11
  __int64 v61; // r9
  __int64 v62; // rcx
  __int64 v63; // rcx
  PSLIST_ENTRY v64; // rbx
  struct _KTHREAD *v65; // r10
  PSLIST_ENTRY v66; // rsi
  _SLIST_ENTRY *v67; // rax
  __int64 v68; // rax
  __int64 **v69; // rdx
  __int64 *v70; // rcx
  __int64 *v71; // rdx
  __int64 **v72; // r8
  struct _KPRCB *v73; // r10
  _DWORD *v74; // r9
  int v75; // eax
  _BYTE *v76; // r14
  int v77; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v82; // eax
  unsigned __int64 v83; // rdi
  struct _KPRCB *v84; // r10
  _DWORD *v85; // r9
  unsigned __int8 v86; // cl
  struct _KPRCB *v87; // r9
  int v88; // eax
  _DWORD *v89; // r8
  signed __int32 v91[8]; // [rsp+0h] [rbp-69h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  __int64 v94; // [rsp+50h] [rbp-19h]
  unsigned int v95; // [rsp+58h] [rbp-11h]
  int v96; // [rsp+5Ch] [rbp-Dh]
  __int64 v97; // [rsp+60h] [rbp-9h]
  __int64 v98; // [rsp+68h] [rbp-1h]
  signed __int64 v99; // [rsp+70h] [rbp+7h]
  signed __int64 v100; // [rsp+78h] [rbp+Fh]
  __int64 v101; // [rsp+88h] [rbp+1Fh]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v104; // [rsp+E0h] [rbp+77h]

  v4 = 0LL;
  v5 = a3;
  ListEntry = 0LL;
  v7 = *a2;
  v104 = 0;
  v101 = a3;
  v8 = 0LL;
  v9 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( ((v7 ^ (v7 + a3 - 1LL)) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xCECuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = *(_DWORD *)(a1 + 152);
  SchedulerSubNode = (volatile signed __int64 *)KeGetCurrentPrcb()->SchedulerSubNode;
  LODWORD(InitializeMbcb) = *((unsigned __int16 *)SchedulerSubNode + 69);
  *(_DWORD *)(a1 + 556) = InitializeMbcb;
  v13 = v10 & 0x40000000;
  if ( v13 )
  {
    SchedulerSubNode = (volatile signed __int64 *)(v5 + *a2);
    if ( (__int64)SchedulerSubNode <= *(_QWORD *)(a1 + 48) )
      return InitializeMbcb;
  }
  v14 = *a2 >> 12;
  v15 = *a2 - 1;
  v99 = v14;
  v16 = *(_QWORD *)(a1 + 32);
  v17 = (v5 + v15) >> 12;
  v100 = v17;
  if ( v16 / 4096 <= v17 )
    KeBugCheckEx(0x34u, 0xD15uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v98 = *(_QWORD *)(a1 + 536);
  if ( CcEnablePerVolumeLazyWriter )
    v97 = *(_QWORD *)(a1 + 600);
  else
    v97 = 0LL;
  if ( v13 )
  {
    v19 = a1 + 288;
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 288));
LABEL_71:
    v53 = v19;
    v54 = *a2 + v101;
    if ( v54 > *(_QWORD *)(a1 + 48) )
    {
      v55 = (*(_DWORD *)(a1 + 152) & 0x40000000) == 0;
      *(_QWORD *)(a1 + 48) = v54;
      if ( !v55 )
      {
        v76 = (_BYTE *)v98;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v98 + 768), &LockHandle);
        v77 = *(_DWORD *)(a1 + 152);
        if ( (v77 & 0x400) == 0 )
          *(_DWORD *)(a1 + 152) = v77 | 0x400;
        CcInsertIntoDirtySharedCacheMapList(a1);
        CcScheduleLazyWriteScan(v76, v97, 0LL, 0);
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
            v82 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v55 = (v82 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v82;
            if ( v55 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        v53 = v19;
      }
    }
    goto LABEL_73;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 32) > 0x300000uLL )
      {
        ++dword_140CF87D4;
        InitializeMbcb = (__int64)RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
        if ( !InitializeMbcb )
        {
          ++dword_140CF87D8;
          InitializeMbcb = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140CF87F0)(
                             (unsigned int)dword_140CF87E4,
                             (unsigned int)dword_140CF87EC,
                             (unsigned int)dword_140CF87E8);
          if ( !InitializeMbcb )
          {
            ++CcDbgNumberOfFailedBitmapAllocations;
            v19 = a1 + 288;
            goto LABEL_163;
          }
        }
        ListEntry = (PSLIST_ENTRY)InitializeMbcb;
      }
      CurrentThread = KeGetCurrentThread();
      v9 = 1;
      v96 = 1;
      v19 = a1 + 288;
      v95 = 0;
      _disable();
      AbEntrySummary = CurrentThread->AbEntrySummary;
      if ( CurrentThread->AbEntrySummary
        || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(SchedulerSubNode, CurrentThread)) != 0 )
      {
        _BitScanForward(&v21, AbEntrySummary);
        v95 = v21;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v21);
        v22 = KeGetCurrentPrcb();
        v23 = (signed __int32 *)v22->SchedulerAssist;
        if ( v23 )
        {
          _m_prefetchw(v23);
          v58 = *v23;
          do
          {
            v59 = v58;
            v58 = _InterlockedCompareExchange(v23, v58 & 0xFFDFFFFF, v58);
          }
          while ( v59 != v58 );
          if ( (v58 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
        _enable();
        v4 = (__int64)(&CurrentThread[1].Process + 12 * v95);
        if ( v19 - qword_140C65AE8 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v4 + 8) = SessionId;
        *(_QWORD *)v4 = v19 & 0x7FFFFFFFFFFFFFFCLL;
      }
      v25 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v19, 0) )
        ExpAcquireFastMutexContended(a1 + 288, v4);
      if ( v4 )
        *(_BYTE *)(v4 + 18) = 1;
      *(_QWORD *)(a1 + 296) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 336) = v25;
      v26 = *(_QWORD *)(a1 + 168);
      v94 = v26;
      if ( !v26 )
      {
        InitializeMbcb = CcAllocateInitializeMbcb();
        v94 = InitializeMbcb;
        v26 = InitializeMbcb;
        if ( !InitializeMbcb )
          goto LABEL_163;
        *(_QWORD *)(a1 + 168) = InitializeMbcb;
      }
      if ( v14 == v17 && v14 == *(_QWORD *)(v26 + 40) )
        goto LABEL_70;
      if ( (unsigned __int64)v17 < 0x300 || *(_WORD *)v26 == 761 )
        break;
      v66 = ListEntry;
      memset(ListEntry, 0, 0x400uLL);
      if ( *(_DWORD *)(v26 + 80) )
      {
        v67 = *(_SLIST_ENTRY **)(v26 + 88);
        *v66 = *v67;
        v66[1] = v67[1];
        v66[2] = v67[2];
        v66[3] = v67[3];
        v66[4] = v67[4];
        v66[5] = v67[5];
        memset(*(void **)(v26 + 88), 0, 0x60uLL);
      }
      v68 = v26 + 16;
      *(_QWORD *)(v26 + 88) = v66;
      v69 = *(__int64 ***)(v26 + 24);
      v70 = (__int64 *)(v26 + 96);
      ListEntry = 0LL;
      if ( *v69 != (__int64 *)(v26 + 16) )
        goto LABEL_151;
      *(_QWORD *)(v26 + 104) = v69;
      *v70 = v68;
      *v69 = v70;
      v71 = (__int64 *)(v26 + 144);
      *(_QWORD *)(v26 + 24) = v70;
      *(_QWORD *)(v26 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v26 + 120) = -1;
      v72 = *(__int64 ***)(v26 + 24);
      if ( *v72 != (__int64 *)v68 )
        goto LABEL_151;
      *v71 = v68;
      *(_QWORD *)(v26 + 152) = v72;
      *v72 = v71;
      *(_QWORD *)(v26 + 24) = v71;
      *(_QWORD *)(v26 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v26 + 168) = -1;
      *(_WORD *)v26 = 761;
      ExReleaseFastMutex((PFAST_MUTEX)(a1 + 288));
      v4 = 0LL;
      v9 = 0;
    }
    InitializeMbcb = *(_QWORD *)(v26 + 16);
    v27 = v26 + 16;
    v28 = v14 & 0xFFFFFFFFFFFFE000uLL;
    v29 = 0LL;
    v30 = v27;
    while ( 1 )
    {
      v31 = *(_QWORD *)(InitializeMbcb + 16);
      if ( v28 == v31 )
      {
        v29 = InitializeMbcb;
        goto LABEL_27;
      }
      if ( *(_DWORD *)(InitializeMbcb + 32) || v29 )
      {
        if ( v28 > v31 )
          v30 = InitializeMbcb;
      }
      else
      {
        v29 = InitializeMbcb;
      }
      InitializeMbcb = *(_QWORD *)InitializeMbcb;
      if ( InitializeMbcb == v27 )
        break;
      if ( v28 < *(_QWORD *)(InitializeMbcb + 16) && v29 )
        goto LABEL_95;
    }
    if ( v29 )
    {
LABEL_95:
      v62 = *(_QWORD *)v29;
      InitializeMbcb = *(_QWORD *)(v29 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v29 + 8LL) == v29 && *(_QWORD *)InitializeMbcb == v29 )
      {
        *(_QWORD *)InitializeMbcb = v62;
        *(_QWORD *)(v62 + 8) = InitializeMbcb;
        goto LABEL_98;
      }
LABEL_151:
      __fastfail(3u);
    }
    InitializeMbcb = (__int64)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x30uLL, 0x72426343u);
    v29 = InitializeMbcb;
    if ( !InitializeMbcb )
      break;
LABEL_98:
    v63 = *(_QWORD *)v30;
    if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
      goto LABEL_151;
    *(_QWORD *)v29 = v63;
    *(_QWORD *)(v29 + 8) = v30;
    *(_QWORD *)(v63 + 8) = v29;
    *(_QWORD *)v30 = v29;
    v55 = *(_QWORD *)(v29 + 40) == 0LL;
    *(_QWORD *)(v29 + 16) = v28;
    *(_DWORD *)(v29 + 24) = -1;
    *(_DWORD *)(v29 + 28) = 0;
    if ( v55 )
    {
      v64 = ListEntry;
      LODWORD(InitializeMbcb) = (unsigned int)memset(ListEntry, 0, 0x400uLL);
      *(_QWORD *)(v29 + 40) = v64;
      ListEntry = 0LL;
    }
LABEL_27:
    if ( !v29 )
      break;
    v32 = *(_QWORD *)(v29 + 16);
    if ( v14 < v32 + *(unsigned int *)(v29 + 24) )
      *(_DWORD *)(v29 + 24) = v14 - v32;
    if ( v17 > v32 + *(unsigned int *)(v29 + 28) )
      *(_DWORD *)(v29 + 28) = v17 - v32;
    v33 = (_BYTE *)v98;
    LockHandle.LockQueue.Next = 0LL;
    v34 = (volatile __int64 *)(v98 + 768);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v98 + 768);
    v35 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v35 <= 0xFu )
    {
      v60 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v35 == 2 )
        LODWORD(v61) = 4;
      else
        v61 = (-1LL << (v35 + 1)) & 4;
      v60[5] |= v61;
    }
    LockHandle.OldIrql = v35;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v34);
    }
    else
    {
      v36 = (signed __int64 *)_InterlockedExchange64(v34, (__int64)&LockHandle);
      if ( v36 )
        KxWaitForLockOwnerShip((signed __int64)&LockHandle, v36);
    }
    if ( *(_DWORD *)(a1 + 112) || (*(_DWORD *)(a1 + 152) & 2) != 0 )
    {
      v37 = v94;
    }
    else
    {
      CcScheduleLazyWriteScan(v33, v97, 0LL, 0);
      CcInsertIntoDirtySharedCacheMapList(a1);
      v37 = v94;
      *(_QWORD *)(v94 + 32) = v14;
    }
    v38 = (_DWORD *)(*(_QWORD *)(v29 + 40) + 4 * ((unsigned __int64)(unsigned int)(v14 - *(_DWORD *)(v29 + 16)) >> 5));
    v39 = 1 << (v14 & 0x1F);
    if ( v14 <= v17 )
    {
      v40 = v104;
      v41 = v17 - v14 + 1;
      v99 = v17 + 1;
      do
      {
        if ( (*v38 & v39) == 0 )
        {
          *v38 |= v39;
          ++v40;
        }
        v42 = 2 * v39;
        if ( !(2 * v39) )
          ++v38;
        v39 = 1;
        if ( v42 )
          v39 = v42;
        --v41;
      }
      while ( v41 );
      v104 = v40;
      v37 = v94;
    }
    v43 = *(_QWORD *)(a1 + 536);
    if ( CcEnablePerVolumeLazyWriter )
    {
      v44 = *(_QWORD **)(a1 + 600);
      *(_QWORD *)(v43 + 1056) += v104;
      v45 = (char *)v44 + 708;
      v46 = (char *)v44 + 1172;
      v47 = v44 + 124;
      if ( v44 )
        v44[124] += v104;
    }
    else
    {
      v44 = 0LL;
      v47 = (_QWORD *)(v43 + 1056);
      *(_QWORD *)(v43 + 1056) += v104;
      v45 = (_BYTE *)(v43 + 780);
      v46 = (_BYTE *)(v43 + 1292);
    }
    if ( v37 )
      *(_DWORD *)(v37 + 8) += v104;
    *(_DWORD *)(v29 + 32) += v104;
    *(_DWORD *)(a1 + 112) += v104;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 512) + 32LL), v104);
    v48 = *(_QWORD **)(a1 + 512);
    v48[30] += v48[4];
    v49 = v48[31];
    v50 = *(_QWORD *)(a1 + 512);
    if ( v49 <= *(_QWORD *)(v50 + 32) )
      v49 = *(_QWORD *)(v50 + 32);
    v48[31] = v49;
    if ( v44 )
    {
      v48[32] += v44[127];
      v48[33] = v44[128];
      v48[34] = v44[129];
    }
    ++v48[35];
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 248) + 24LL), v104);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 248) + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)(a1 + 248) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
    if ( *v46 && *v47 >= 0x2000uLL )
    {
      LOBYTE(v48) = 1;
      CcScheduleLazyWriteScan((_BYTE *)v43, (__int64)v44, (__int64)v48, 0);
    }
    if ( *v45 )
    {
      CcScheduleLazyWriteScan((_BYTE *)v43, (__int64)v44, 0LL, 0);
      *v45 = 0;
    }
    if ( !CcEnablePerVolumeLazyWriter )
      CcAdjustWriteBehindThreadPoolIfNeeded(v43, 0LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_66;
    }
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      SchedulerSubNode = (volatile signed __int64 *)&LockHandle;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_66;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    SchedulerSubNode = (volatile signed __int64 *)LockHandle.LockQueue.Lock;
    if ( (((unsigned __int8)SchedulerSubNode ^ (unsigned __int8)_InterlockedExchange64(
                                                                  (volatile __int64 *)&Next->Lock,
                                                                  (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
    {
      _InterlockedOr(v91, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)&Next->Lock >> 5) & 0x7F], 0LL));
    }
LABEL_66:
    v52 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      SchedulerSubNode = (volatile signed __int64 *)KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)SchedulerSubNode <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)SchedulerSubNode >= 2u )
      {
        v73 = KeGetCurrentPrcb();
        v74 = v73->SchedulerAssist;
        SchedulerSubNode = (volatile signed __int64 *)((unsigned int)LockHandle.OldIrql + 1);
        v75 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v55 = (v75 & v74[5]) == 0;
        v74[5] &= v75;
        if ( v55 )
          KiRemoveSystemWorkPriorityKick(v73);
      }
    }
    __writecr8(v52);
    if ( (*(_DWORD *)(a1 + 152) & 0x10000000) != 0 && v104 )
    {
      v65 = a4;
      if ( !a4 )
      {
        v65 = KeGetCurrentThread();
        a4 = v65;
      }
      SchedulerSubNode = (volatile signed __int64 *)v65->Process[2].DeepFreezeStartTime;
      if ( SchedulerSubNode )
      {
        if ( v104 << 12 )
          _InterlockedExchangeAdd64(SchedulerSubNode + 1, v104 << 12);
        _InterlockedExchangeAdd64(SchedulerSubNode + 3, 1uLL);
      }
    }
    if ( v39 )
    {
      *(_QWORD *)(v94 + 40) = v100;
LABEL_70:
      v8 = ListEntry;
      goto LABEL_71;
    }
    v17 = v100;
    v4 = 0LL;
    v14 = v99;
    v9 = v96;
  }
  v9 = v96;
LABEL_163:
  v53 = v19;
  if ( (*(_DWORD *)(a1 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v98 + 768), &LockHandle);
    *(_DWORD *)(a1 + 152) |= 0x20000u;
    LODWORD(InitializeMbcb) = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v83 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      LODWORD(InitializeMbcb) = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)InitializeMbcb <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)InitializeMbcb >= 2u )
      {
        v84 = KeGetCurrentPrcb();
        v85 = v84->SchedulerAssist;
        LODWORD(InitializeMbcb) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v55 = ((unsigned int)InitializeMbcb & v85[5]) == 0;
        v85[5] &= InitializeMbcb;
        if ( v55 )
          LODWORD(InitializeMbcb) = KiRemoveSystemWorkPriorityKick(v84);
      }
    }
    __writecr8(v83);
  }
  v8 = ListEntry;
  if ( v9 )
  {
LABEL_73:
    v56 = *(unsigned __int8 *)(v53 + 48);
    *(_QWORD *)(v53 + 8) = 0LL;
    v57 = _InterlockedCompareExchange((volatile signed __int32 *)v53, 1, 0);
    if ( v57 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v53, v57);
    if ( (_DWORD)KiIrqlFlags )
    {
      v86 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v86 <= 0xFu && (unsigned __int8)v56 <= 0xFu && v86 >= 2u )
      {
        v87 = KeGetCurrentPrcb();
        v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v56 + 1));
        v89 = v87->SchedulerAssist;
        v55 = (v88 & v89[5]) == 0;
        v89[5] &= v88;
        if ( v55 )
          KiRemoveSystemWorkPriorityKick(v87);
      }
    }
    __writecr8(v56);
    LODWORD(InitializeMbcb) = KeAbPostRelease(v53);
  }
  if ( v8 )
  {
    ++dword_140CF87DC;
    if ( LOWORD(CcBitmapLookasideList.Alignment) >= (unsigned __int16)word_140CF87D0 )
    {
      ++dword_140CF87E0;
      LODWORD(InitializeMbcb) = ((__int64 (__fastcall *)(_SLIST_ENTRY *))qword_140CF87F8)(v8);
    }
    else
    {
      LODWORD(InitializeMbcb) = (unsigned int)RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, v8);
    }
  }
  return InitializeMbcb;
}
