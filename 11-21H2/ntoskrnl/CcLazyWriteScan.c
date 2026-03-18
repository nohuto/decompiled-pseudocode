/*
 * XREFs of CcLazyWriteScan @ 0x140275670
 * Callers:
 *     CcWorkerThread @ 0x14035D970 (CcWorkerThread.c)
 * Callees:
 *     CcScanLogHandleList @ 0x1402390A4 (CcScanLogHandleList.c)
 *     CcCalculatePagesToWrite @ 0x1402392D8 (CcCalculatePagesToWrite.c)
 *     CcAdjustThrottleForPartition @ 0x140242A2C (CcAdjustThrottleForPartition.c)
 *     CcRescheduleLazyWriteScan @ 0x140248B24 (CcRescheduleLazyWriteScan.c)
 *     CcUpdateTimeOnLogHandles @ 0x1402492E0 (CcUpdateTimeOnLogHandles.c)
 *     CcSetLazyWriteScanQueuedInternal @ 0x14024D09C (CcSetLazyWriteScanQueuedInternal.c)
 *     CcComputeNextScanTime @ 0x140258774 (CcComputeNextScanTime.c)
 *     CcShouldLazyWriteCacheMap @ 0x140275E40 (CcShouldLazyWriteCacheMap.c)
 *     CcPostWorkQueue @ 0x140275F94 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1402768E4 (CcAllocateWorkQueueEntry.c)
 *     CcGetNodeForLazyWrite @ 0x1402769F8 (CcGetNodeForLazyWrite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     CcIncrementWriteBehindPriority @ 0x140376BFC (CcIncrementWriteBehindPriority.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1403B4380 (CcPerfLogLoggedStreamsStats.c)
 *     CcPerfLogLazyWriteScan @ 0x1403B4798 (CcPerfLogLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     CcPostDeferredWrites @ 0x14053A100 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcLazyWriteScan(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  int v4; // r12d
  char v5; // r13
  unsigned __int64 v10; // r9
  __int64 *v11; // rdi
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rtt
  unsigned __int64 v14; // r11
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD **v20; // rax
  _QWORD *v21; // rcx
  __int64 *v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 *v25; // rdx
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rdi
  __int64 *v30; // r14
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rax
  int v35; // ecx
  _QWORD *v36; // rcx
  char v37; // bl
  unsigned __int64 v38; // rbx
  __int64 result; // rax
  __int64 v40; // r15
  int v41; // eax
  unsigned int v42; // edx
  unsigned int v43; // eax
  unsigned __int64 v44; // r14
  int v45; // eax
  KSPIN_LOCK *v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rdx
  unsigned __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r9
  unsigned int v53; // r8d
  __int64 v54; // rcx
  __int64 **v55; // rax
  __int64 **v56; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v58; // rcx
  __int64 **v59; // rax
  __int64 v60; // rax
  unsigned int v61; // eax
  _QWORD *v62; // rdx
  _QWORD *v63; // rdx
  _QWORD *v64; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v67; // zf
  unsigned __int64 v68; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v70; // r9
  _DWORD *v71; // r8
  int v72; // eax
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r10
  _DWORD *v79; // r9
  int v80; // eax
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r9
  _DWORD *v83; // r8
  int v84; // eax
  char v85; // [rsp+60h] [rbp-39h]
  char v86; // [rsp+61h] [rbp-38h]
  char v87; // [rsp+62h] [rbp-37h]
  unsigned int v88; // [rsp+64h] [rbp-35h] BYREF
  _QWORD *v89; // [rsp+68h] [rbp-31h] BYREF
  _QWORD **v90; // [rsp+70h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-21h] BYREF
  __int64 v92; // [rsp+90h] [rbp-9h] BYREF
  __int64 v93; // [rsp+98h] [rbp-1h] BYREF
  __int64 *v94; // [rsp+A0h] [rbp+7h]
  PKSPIN_LOCK SpinLock; // [rsp+A8h] [rbp+Fh]
  __int64 v96[8]; // [rsp+B0h] [rbp+17h] BYREF

  v85 = 0;
  v4 = 0;
  v88 = 0;
  v87 = 0;
  v5 = 0;
  v86 = 0;
  v92 = 0LL;
  v96[0] = 0x7FFFFFFFFFFFFFFFLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(a1, &v88, a4, v96);
  SpinLock = (PKSPIN_LOCK)(a1 + 704);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
  CcSetLazyWriteScanQueuedInternal((_BYTE *)(a1 + 920), a4, 0);
  v10 = *(unsigned int *)(a1 + 1064);
  v11 = (__int64 *)(a1 + 992);
  v12 = *(_QWORD *)(a1 + 1048) / v10;
  *(_QWORD *)(a1 + 1080) = v12;
  v13 = *(_QWORD *)(a1 + 1056);
  *(_QWORD *)(a1 + 1088) = v13 / v10;
  v14 = v13 / v10;
  v15 = *(__int64 **)(a1 + 8);
  if ( (unsigned int)v10 <= 1 )
  {
    v18 = *(_QWORD *)(*v15 + 16896);
    v17 = *v11;
    v19 = *v11;
  }
  else
  {
    v16 = *v15;
    v17 = *v11;
    v18 = *(_QWORD *)(v16 + 16896) + v12 * (unsigned int)(v10 - 1);
    v19 = *v11 + v14 * (unsigned int)(v10 - 1);
  }
  *(_QWORD *)(a1 + 1048) = v18;
  *(_QWORD *)(a1 + 1056) = v19;
  if ( !v17 && !*(_BYTE *)(a1 + 986) )
  {
    if ( *(_QWORD *)(a1 + 1104) == a1 + 1104 )
    {
      *(_BYTE *)(a1 + 985) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = (unsigned int)KiIrqlFlags;
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v67 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v67 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    else
    {
      CcRescheduleLazyWriteScan(a1, 0LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v68 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            v70 = KeGetCurrentPrcb();
            v71 = v70->SchedulerAssist;
            v72 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v67 = (v72 & v71[5]) == 0;
            v71[5] &= v72;
            if ( v67 )
              KiRemoveSystemWorkPriorityKick(v70);
          }
        }
      }
      __writecr8(v68);
      return CcPostDeferredWrites(a1, 0LL);
    }
    return result;
  }
  v90 = &v89;
  v89 = &v89;
  v20 = (_QWORD **)(a1 + 784);
  while ( 1 )
  {
    v21 = *v20;
    if ( *v20 == v20 )
      break;
    v62 = (_QWORD *)*v21;
    if ( (_QWORD **)v21[1] != v20 || (_QWORD *)v62[1] != v21 || (*v20 = v62, v62[1] = v20, v63 = v90, *v90 != &v89) )
LABEL_91:
      __fastfail(3u);
    v21[1] = v90;
    *v21 = &v89;
    *v63 = v21;
    v90 = (_QWORD **)v21;
  }
  v22 = (__int64 *)(a1 + 1016);
  *(_BYTE *)(a1 + 986) = 0;
  v23 = CcCalculatePagesToWrite(a1, a4, a1 + 992, (unsigned __int64 *)(a1 + 1016), 0);
  v24 = a1 + 1016;
  v25 = (__int64 *)(a1 + 992);
  v88 = v23;
  v26 = v23;
  CcAdjustThrottleForPartition((_QWORD *)a1, v25, v24, *(unsigned int *)(a1 + 912));
  *(_QWORD *)(a1 + 1000) = *v11;
  v27 = *(_QWORD *)(a1 + 1072);
  *(_DWORD *)(a1 + 1008) = v26;
  *(_DWORD *)(a1 + 912) = v26;
  *(_DWORD *)(v27 + 8LL * *(unsigned int *)(a2 + 152)) = v26;
  *(_QWORD *)(a2 + 216) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140D06910 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a3,
      a4,
      *(_DWORD *)(a1 + 912),
      *v11,
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 16896LL),
      *v22,
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 1024),
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 1080),
      *(_QWORD *)(a1 + 1088),
      *(unsigned int *)(a1 + 712));
  v28 = a1;
  v29 = 0LL;
  v30 = (__int64 *)(a1 + 648);
  v31 = *(_QWORD *)(a1 + 648);
  v94 = (__int64 *)(a1 + 648);
  v32 = v31 - 136;
  if ( v32 )
  {
    while ( 1 )
    {
      v33 = v32 + 136;
      v34 = v29;
      if ( (__int64 *)(v32 + 136) == v30 )
        goto LABEL_19;
      v29 = v32;
      if ( v34 )
        v29 = v34;
      if ( (unsigned __int8)CcShouldLazyWriteCacheMap(
                              v32,
                              v28,
                              0,
                              v88,
                              *(_QWORD *)(v32 + 96) & 0xFFFFFFFFFFFFFFF0uLL,
                              a4) )
        break;
      v35 = *(_DWORD *)(v32 + 152);
      if ( (v35 & 0x10020) == 0x10020 )
      {
        CcIncrementWriteBehindPriority(v32);
      }
      else if ( (unsigned int)++v4 >= 0x14 && (v35 & 0x820) == 0 )
      {
        ++*(_DWORD *)(v32 + 112);
        *(_DWORD *)(v32 + 152) = v35 | 0x20;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v49 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v77 = KeGetCurrentIrql();
            if ( v77 <= 0xFu && LockHandle.OldIrql <= 0xFu && v77 >= 2u )
            {
              v78 = KeGetCurrentPrcb();
              v79 = v78->SchedulerAssist;
              v80 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v67 = (v80 & v79[5]) == 0;
              v79[5] &= v80;
              if ( v67 )
                KiRemoveSystemWorkPriorityKick(v78);
            }
          }
        }
        __writecr8(v49);
        v4 = 0;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v28 + 704), &LockHandle);
        *(_DWORD *)(v32 + 152) &= ~0x20u;
        --*(_DWORD *)(v32 + 112);
LABEL_46:
        v30 = v94;
      }
      v32 = *(_QWORD *)v33 - 136LL;
      if ( v5 )
      {
        v58 = *v30;
        v59 = (__int64 **)v30[1];
        if ( *(__int64 **)(*v30 + 8) != v30 )
          goto LABEL_91;
        if ( *v59 != v30 )
          goto LABEL_91;
        *v59 = (__int64 *)v58;
        *(_QWORD *)(v58 + 8) = v59;
        v60 = *(_QWORD *)v33;
        if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 )
          goto LABEL_91;
        *v30 = v60;
        v5 = 0;
        v30[1] = v33;
        *(_QWORD *)(v60 + 8) = v30;
        *(_QWORD *)v33 = v30;
      }
      if ( v32 == v29 )
        goto LABEL_19;
    }
    v4 = 0;
    v93 = 0LL;
    v40 = CcGetNodeForLazyWrite(v32);
    if ( (*(_DWORD *)(v32 + 152) & 0x1000000) != 0 )
    {
      v87 = 1;
      *(_DWORD *)(*(_QWORD *)(v32 + 240) + 144LL) |= 1u;
      v50 = *(_QWORD *)(v32 + 240);
      v51 = *(_QWORD *)(v32 + 256);
      if ( v51 > *(_QWORD *)(v50 + 112) )
      {
        *(_QWORD *)(v50 + 112) = v51;
        if ( (xmmword_140D06910 & 0x20000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v32 + 240) + 128LL) = *(_QWORD *)((*(_QWORD *)(v32 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                  + 0x18);
      }
    }
    v41 = *(_DWORD *)(v32 + 152);
    v42 = *(_DWORD *)(v32 + 112);
    *(_DWORD *)(v32 + 192) = v42;
    if ( (v41 & 0x200) != 0 && v42 >= 0x40 )
    {
      if ( (v41 & 0x1000000) != 0 && (v52 = *(_QWORD *)(v32 + 240), (v53 = *(_DWORD *)(v52 + 104)) != 0) )
      {
        v61 = 0;
        if ( v42 <= v53 )
          v61 = v53 - v42;
        *(_DWORD *)(v52 + 104) = v61;
        ++CcDbgSkippedReductions;
      }
      else
      {
        *(_DWORD *)(v32 + 192) = v42 >> 3;
      }
    }
    if ( !v85 )
    {
      v43 = *(_DWORD *)(v32 + 192);
      if ( v43 >= v88 )
      {
        if ( (*(_DWORD *)(v32 + 152) & 0x200) != 0 || v29 == v32 && (*(_DWORD *)(v32 + 268) & 0xF) == 0 )
        {
          v5 = 1;
        }
        else
        {
          v54 = *v30;
          v55 = (__int64 **)v30[1];
          if ( *(__int64 **)(*v30 + 8) != v30 )
            goto LABEL_91;
          if ( *v55 != v30 )
            goto LABEL_91;
          *v55 = (__int64 *)v54;
          *(_QWORD *)(v54 + 8) = v55;
          v56 = *(__int64 ***)(v32 + 144);
          if ( *v56 != (__int64 *)v33 )
            goto LABEL_91;
          *v30 = v33;
          v30[1] = (__int64)v56;
          *v56 = v30;
          *(_QWORD *)(v32 + 144) = v30;
        }
        v88 = 0;
        v85 = 1;
      }
      else
      {
        v88 -= v43;
      }
    }
    *(_DWORD *)(v32 + 152) |= 0x20u;
    ++*(_DWORD *)(v32 + 112);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v44 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v73 = KeGetCurrentIrql();
        if ( v73 <= 0xFu && LockHandle.OldIrql <= 0xFu && v73 >= 2u )
        {
          v74 = KeGetCurrentPrcb();
          v75 = v74->SchedulerAssist;
          v76 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v67 = (v76 & v75[5]) == 0;
          v75[5] &= v76;
          if ( v67 )
            KiRemoveSystemWorkPriorityKick(v74);
        }
      }
    }
    __writecr8(v44);
    v45 = CcAllocateWorkQueueEntry(a1, 0LL, v40, &v93);
    v46 = SpinLock;
    if ( v45 < 0 )
    {
      KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
      *(_DWORD *)(v32 + 152) &= ~0x20u;
      --*(_DWORD *)(v32 + 112);
      v28 = a1;
      goto LABEL_19;
    }
    v47 = v93;
    *(_BYTE *)(v93 + 128) = 2;
    *(_QWORD *)(v47 + 16) = v32;
    KeAcquireInStackQueuedSpinLock(v46, &LockHandle);
    --*(_DWORD *)(v32 + 112);
    if ( (*(_DWORD *)(v32 + 152) & 0x10000) != 0 )
    {
      v48 = v40 + 72;
      *(_QWORD *)(v32 + 496) = v47 | 1;
    }
    else
    {
      if ( *(_DWORD *)(v32 + 4) || *(_DWORD *)(v32 + 112) )
        v48 = v40 + 104;
      else
        v48 = v40 + 120;
      *(_QWORD *)(v32 + 496) = v47;
    }
    CcPostWorkQueue(v47, v48);
    v28 = a1;
    v86 = 1;
    goto LABEL_46;
  }
LABEL_19:
  v36 = v89;
  if ( v89 == &v89 )
    v37 = v86;
  else
    v37 = 1;
  while ( v36 != &v89 )
  {
    v64 = (_QWORD *)*v36;
    if ( (_QWORD **)v36[1] != &v89 || (_QWORD *)v64[1] != v36 )
      goto LABEL_91;
    v89 = (_QWORD *)*v36;
    v64[1] = &v89;
    CcPostWorkQueue(v36, v36[19] + 104LL);
    v36 = v89;
  }
  if ( (_BYTE)dword_140D051DC
    || v37
    || *(_QWORD *)(v28 + 1104) != v28 + 1104
    || (CcComputeNextScanTime(v28, 0LL, v96, &v92), v92 != 0x7FFFFFFFFFFFFFFFLL) )
  {
    CcRescheduleLazyWriteScan(v28, &v92);
    if ( *(_BYTE *)(v28 + 716) )
      *(_BYTE *)(v28 + 716) = 0;
  }
  else
  {
    *(_BYTE *)(v28 + 716) = 1;
    *(_BYTE *)(v28 + 985) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v38 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v81 = KeGetCurrentIrql();
      if ( v81 <= 0xFu && LockHandle.OldIrql <= 0xFu && v81 >= 2u )
      {
        v82 = KeGetCurrentPrcb();
        v83 = v82->SchedulerAssist;
        v84 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v67 = (v84 & v83[5]) == 0;
        v83[5] &= v84;
        if ( v67 )
          KiRemoveSystemWorkPriorityKick(v82);
      }
    }
  }
  __writecr8(v38);
  if ( v87 )
    CcUpdateTimeOnLogHandles(v28);
  if ( (xmmword_140D06910 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(a4, *(unsigned int *)(v28 + 912));
  result = v28 + 1104;
  if ( *(_QWORD *)result != result )
    return CcPostDeferredWrites(v28, 0LL);
  return result;
}
