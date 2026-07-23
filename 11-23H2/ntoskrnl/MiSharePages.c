/*
 * XREFs of MiSharePages @ 0x1402161B0
 * Callers:
 *     MiProcessCrcList @ 0x1406B0300 (MiProcessCrcList.c)
 * Callees:
 *     MiFlushTbListEarly @ 0x140216C24 (MiFlushTbListEarly.c)
 *     MiRelinkDeferredCrcEntries @ 0x140216CB4 (MiRelinkDeferredCrcEntries.c)
 *     MiProcessSuitableForCombining @ 0x140216D54 (MiProcessSuitableForCombining.c)
 *     MiReplenishCombineResources @ 0x140216DCC (MiReplenishCombineResources.c)
 *     MiActivePageCombineCandidate @ 0x140216F14 (MiActivePageCombineCandidate.c)
 *     MiVadSupportsCombine @ 0x1402171A0 (MiVadSupportsCombine.c)
 *     MiGetCombineDomain @ 0x140217408 (MiGetCombineDomain.c)
 *     MiCheckProcessCombineSequence @ 0x140217420 (MiCheckProcessCombineSequence.c)
 *     MiMakeCombineCandidateClean @ 0x14021743C (MiMakeCombineCandidateClean.c)
 *     MiConvertPrivateToProto @ 0x1402175A8 (MiConvertPrivateToProto.c)
 *     MiAllocateCombineBlock @ 0x140217640 (MiAllocateCombineBlock.c)
 *     MiPrepareAttachThread @ 0x1402178B0 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x140217924 (MiAttachThreadDone.c)
 *     MiFreeCombineBlock @ 0x1402194C8 (MiFreeCombineBlock.c)
 *     MiConfirmPageIsZero @ 0x140219CB0 (MiConfirmPageIsZero.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiTbFlushType @ 0x14025BD3C (MiTbFlushType.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 *     MiPageMightBeZero @ 0x140281A90 (MiPageMightBeZero.c)
 *     MiCombineCandidate @ 0x140282240 (MiCombineCandidate.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetUltraMapping @ 0x1402D1CA0 (MiGetUltraMapping.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6CC0 (MiPageTableLockIsContended.c)
 *     MiReplenishSlabAllocator @ 0x1402E6D54 (MiReplenishSlabAllocator.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     KeForceAttachProcess @ 0x1403536D8 (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x14035573C (KeForceDetachProcess.c)
 *     MiConvertStandbyToProto @ 0x14035A020 (MiConvertStandbyToProto.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiSharePages(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  _BYTE *v9; // r13
  _QWORD *v10; // r12
  int v11; // r15d
  __int64 v12; // r14
  __int64 v13; // r14
  _KPROCESS *v14; // rsi
  unsigned __int64 OldIrql; // rsi
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int8 v18; // r9
  char v19; // si
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // r15
  __int64 v22; // rsi
  __int64 valid; // rax
  int v24; // eax
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // r14
  int v28; // eax
  int v29; // r12d
  int v30; // r13d
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // si
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r15
  int v38; // eax
  _QWORD *v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *result; // rax
  __int64 *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v46; // r15
  int IsZero; // eax
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v51; // eax
  bool v52; // zf
  unsigned __int8 v53; // cl
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  char v57; // [rsp+20h] [rbp-E0h]
  char v58; // [rsp+21h] [rbp-DFh]
  _QWORD *v59; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v60; // [rsp+30h] [rbp-D0h]
  __int64 v61; // [rsp+38h] [rbp-C8h]
  _BYTE *Pool; // [rsp+40h] [rbp-C0h]
  __int64 v63; // [rsp+48h] [rbp-B8h]
  unsigned int v64; // [rsp+50h] [rbp-B0h]
  int v65; // [rsp+54h] [rbp-ACh]
  int v66; // [rsp+58h] [rbp-A8h]
  __int64 v67; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-98h]
  int v69; // [rsp+70h] [rbp-90h]
  unsigned __int64 v70; // [rsp+78h] [rbp-88h]
  _QWORD *v71; // [rsp+80h] [rbp-80h]
  __int64 v72; // [rsp+88h] [rbp-78h]
  int v73; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v74; // [rsp+94h] [rbp-6Ch]
  int v75; // [rsp+98h] [rbp-68h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-58h]
  __int64 v78; // [rsp+B0h] [rbp-50h]
  __int64 v79; // [rsp+B8h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-40h]
  __int64 v81; // [rsp+C8h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v83[3]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v84[24]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE P[192]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v86[10]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v87; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v88; // [rsp+318h] [rbp+218h] BYREF

  v76 = 0LL;
  v81 = 0LL;
  memset(v83, 0, sizeof(v83));
  memset(v84, 0, 0xB8uLL);
  memset(P, 0, 0xB8uLL);
  v6 = a2[4];
  v77 = *a1;
  v74 = *((_DWORD *)a1 + 35);
  v71 = (_QWORD *)a1[13];
  v64 = 0;
  v72 = 0LL;
  v63 = v6;
  v65 = MiTbFlushType(v6);
  MiInitializePageColorBase(v7, (unsigned int)(a3 + 1), a1 + 40);
  v8 = a2[3];
  v9 = P;
  v10 = (_QWORD *)a2[6];
  v11 = 0;
  v67 = (__int64)v10;
  v69 = 0;
  Pool = P;
  if ( v8 > 0x14 )
  {
    v12 = 509LL;
    if ( v8 < 0x1FD )
      v12 = a2[3];
    Pool = (_BYTE *)MiAllocatePool(64LL, 8 * v12 + 24, 1935109453LL);
    v9 = Pool;
    if ( !Pool )
    {
      v9 = P;
      LODWORD(v12) = 20;
      Pool = P;
    }
  }
  else
  {
    LODWORD(v12) = a2[3];
  }
  *((_DWORD *)v9 + 2) = v12;
  v13 = 0LL;
  *((_QWORD *)v9 + 3) = 0LL;
  *((_DWORD *)v9 + 3) = 0;
  *(_DWORD *)v9 = v65;
  *((_WORD *)v9 + 2) = 0;
  *((_QWORD *)v9 + 2) = 0LL;
  v14 = (_KPROCESS *)a2[5];
  BugCheckParameter1 = (ULONG_PTR)v14;
  if ( v14 && v14 != KeGetCurrentThread()->ApcState.Process )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &LockHandle);
    v69 = MiPrepareAttachThread(v14, &v14[1].ActiveProcessors.StaticBitmap[26]);
    KxReleaseQueuedSpinLock(&LockHandle);
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
        v51 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v52 = (v51 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v51;
        if ( v52 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( !v69 )
      goto LABEL_58;
    v14 = (_KPROCESS *)BugCheckParameter1;
    KeForceAttachProcess(BugCheckParameter1);
    v13 = 0LL;
  }
  a1[39] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 2 )
  {
    v16 = a1[39];
    v86[0] = 0LL;
    v86[5] = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    if ( v16 > 1 )
    {
      if ( (unsigned int)MiReplenishSlabAllocator(v16, 16LL) )
        a1[39] = 0LL;
      else
        a1[39] = 1LL;
    }
    if ( !a1[37] )
      a1[37] = MiAllocateCombineBlock(v77);
    v57 = 0;
    v61 = 0LL;
    v58 = 0;
    v18 = MiLockWorkingSetShared(v63);
    v60 = v18;
    if ( !a1[37] || v14 && !(unsigned int)MiProcessSuitableForCombining(v14) )
    {
      MiUnlockWorkingSetShared(v63, v18);
      break;
    }
    while ( 1 )
    {
      v19 = 0;
      if ( v57 )
      {
        v57 = 0;
        v11 = 0;
      }
      else
      {
        ++v11;
      }
      v66 = v11;
      if ( !a1[37] || (unsigned __int64)a1[39] > 1 )
        goto LABEL_66;
      if ( v58 )
      {
        v58 = 0;
LABEL_66:
        v19 = 1;
        goto LABEL_24;
      }
      if ( (v11 & 7) == 0
        && ((unsigned int)MiWorkingSetIsContended(v63) || v13 && (unsigned int)MiPageTableLockIsContended(v17, v13))
        || KeShouldYieldProcessor()
        || (unsigned int)MiFlushTbListEarly(v9, 2LL) )
      {
        goto LABEL_66;
      }
LABEL_24:
      if ( !v10 )
        break;
      if ( v19 )
        goto LABEL_52;
      v17 = 0x7FFFFFFFF8LL;
      v59 = (_QWORD *)*v10;
      v20 = v10[2] & 0xFFFFFFFFFFFFFFFEuLL;
      v78 = v10[1];
      v70 = v20;
      v21 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v22 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v13 == v22 )
        goto LABEL_29;
      if ( v13 )
      {
        v11 = v66;
        v67 = (__int64)v10;
        v58 = 1;
      }
      else
      {
        valid = MiLockLowestValidPageTable(v63, v21, &v81);
        v61 = valid;
        v13 = valid;
        if ( valid == v22 )
        {
LABEL_29:
          v24 = MiReplenishCombineResources(a1);
          if ( v24 < 0 )
          {
            if ( v24 != -1073741267 )
              goto LABEL_71;
            v11 = v66;
            v67 = (__int64)v10;
          }
          else
          {
            v25 = MI_READ_PTE_LOCK_FREE(v21);
            v76 = v25;
            if ( (v25 & 1) != 0 )
            {
              v26 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v76) >> 12) & 0xFFFFFFFFFFLL;
              if ( v26 <= qword_140C65BA0 && _bittest64((const signed __int64 *)(48 * v26 - 0x21FFFFFFFFD8LL), 0x36u) )
              {
                v27 = 48 * v26 - 0x220000000000LL;
                v73 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v73);
                  while ( *(__int64 *)(v27 + 24) < 0 );
                }
                goto LABEL_34;
              }
LABEL_71:
              v11 = v66;
              v10 = v59;
              v67 = (__int64)v59;
            }
            else
            {
              if ( (v25 & 0x400) != 0 || (v25 & 0x800) == 0 )
                goto LABEL_71;
              v27 = MiLockTransitionLeafPageEx(v21);
              if ( !v27 )
                goto LABEL_70;
              v26 = 0xAAAAAAAAAAAAAAABuLL * ((v27 + 0x220000000000LL) >> 4);
LABEL_34:
              v28 = MiCombineCandidate(v77, v74, v27);
              v29 = v28;
              if ( !v28 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_70;
              }
              *((_DWORD *)a1 + 38) = v28;
              a1[18] = v26;
              v30 = (*(_DWORD *)(v27 + 16) >> 5) & 0x1F;
              *(_DWORD *)(v67 + 32) = v30;
              v79 = *(_QWORD *)(v67 + 24);
              if ( *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v27 + 0x220000000000LL) >> 4)) + 8) != a3 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_93;
              }
              v33 = *(_BYTE *)(v27 + 34) & 7;
              if ( v33 != 6 )
              {
                v37 = v79;
                goto LABEL_48;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !(unsigned int)MiActivePageCombineCandidate(v32, v31, v27, v21) )
                goto LABEL_93;
              v35 = 0LL;
              if ( v29 == 1 )
              {
                v35 = MiVadSupportsCombine(v34, v70);
                if ( !v35 )
                  goto LABEL_93;
              }
              if ( (v76 & 0x42) != 0 )
              {
                if ( v64 < 8 )
                {
                  v43 = &v87;
                  goto LABEL_69;
                }
                MiMakeCombineCandidateClean(v21, v35);
                WORD2(v84[0]) = 0;
                v84[2] = 0LL;
                v84[3] = 0LL;
                v84[1] = 1LL;
                LODWORD(v84[0]) = v65;
                MiInsertTbFlushEntry(v84, v70, 1LL, 0LL);
                MiFlushTbList(v84);
                v36 = v78;
              }
              else
              {
                v36 = v78;
                if ( v78 != qword_140C69728 )
                  goto LABEL_42;
                if ( (v30 & 0x18) == 0 && (v76 & 0x20) != 0 && v64 < 3 )
                {
                  v43 = &v88;
LABEL_69:
                  v9 = Pool;
                  MiInsertTbFlushEntry(Pool, v70, 1LL, 0LL);
                  v44 = *v43;
                  *v43 = v67;
                  *(_QWORD *)v67 = v44;
                  goto LABEL_70;
                }
              }
              if ( v36 == qword_140C69728 && (unsigned int)MiPageMightBeZero(v63, v27, v21) )
              {
                v75 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v75);
                  while ( *(__int64 *)(v27 + 24) < 0 );
                }
                IsZero = MiConfirmPageIsZero(v27);
                _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( IsZero )
                {
                  v84[2] = 0LL;
                  v84[3] = 0LL;
                  v84[1] = 1LL;
                  LODWORD(v84[0]) = v65;
                  WORD2(v84[0]) = 4;
                  MiInsertTbFlushEntry(v84, v70, 1LL, 0LL);
                  MiFreeWsleList(v63, v84, 0LL);
                  ++v72;
                  ++v71[1];
                  goto LABEL_93;
                }
              }
LABEL_42:
              v37 = v79;
              if ( v79 != qword_140C67250
                && v29 == 1
                && (v79 != *(_QWORD *)(v63 + 864)
                 || (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x1000) != 0
                 || !(unsigned int)MiCheckProcessCombineSequence(BugCheckParameter1, *((unsigned int *)a1 + 72))) )
              {
                goto LABEL_93;
              }
              if ( (v30 & 0x18) != 0 )
              {
                v57 = 1;
                a1[12] = MiGetUltraMapping(a1 + 32, 3LL, 2LL);
                goto LABEL_49;
              }
LABEL_48:
              a1[12] = MiGetUltraMapping(a1 + 32, 3LL, 2LL);
              if ( v33 != 6 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v37 != qword_140C67250
                  && v29 == 1
                  && (v37 != MiGetCombineDomain(1LL, v63)
                   || (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x1000) != 0
                   || !(unsigned int)MiCheckProcessCombineSequence(BugCheckParameter1, *((unsigned int *)a1 + 72))) )
                {
                  a1[12] = 0LL;
LABEL_93:
                  v9 = Pool;
LABEL_70:
                  v13 = v61;
                  goto LABEL_71;
                }
                if ( (v30 & 0x18) != 0 )
                  v57 = 1;
                v38 = MiConvertStandbyToProto(a1, v67);
                v9 = Pool;
                goto LABEL_80;
              }
LABEL_49:
              v9 = Pool;
              v38 = MiConvertPrivateToProto(a1, v67, Pool);
              if ( v38 >= 0 )
              {
                *(_QWORD *)v67 = v86[0];
                a1[12] = 0LL;
                v86[0] = v67;
                goto LABEL_81;
              }
LABEL_80:
              a1[12] = 0LL;
              if ( v38 < 0 )
                goto LABEL_70;
LABEL_81:
              v13 = v61;
              ++v71[1];
              if ( !BugCheckParameter1 )
                goto LABEL_71;
              _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
              v11 = v66;
              v10 = v59;
              v67 = (__int64)v59;
            }
          }
        }
        else
        {
          MiUnlockPageTableInternal(v63, valid);
          v13 = 0LL;
          v11 = v66;
          v10 = v59;
          v61 = 0LL;
          v67 = (__int64)v59;
        }
      }
    }
    ++v64;
LABEL_52:
    v67 = MiRelinkDeferredCrcEntries(a1, v86, v17, v10);
    v10 = (_QWORD *)v67;
    MiFlushTbList(v9);
    if ( v13 )
      MiUnlockPageTableInternal(v63, v13);
    MiUnlockWorkingSetShared(v63, v60);
    v39 = (_QWORD *)v86[0];
    if ( v86[0] )
    {
      do
      {
        v45 = v39[2];
        v46 = (unsigned __int8)MiLockPageInline(v45);
        *(_BYTE *)(v45 + 34) = *(_BYTE *)(v45 + 34) & 0xF8 | 6;
        MiDecrementShareCount(v45);
        _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v53 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v53 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            v55 = v54->SchedulerAssist;
            v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
            v52 = (v56 & v55[5]) == 0;
            v55[5] &= v56;
            if ( v52 )
              KiRemoveSystemWorkPriorityKick(v54);
          }
        }
        __writecr8(v46);
        v39 = (_QWORD *)*v39;
      }
      while ( v39 );
      v11 = v66;
      v9 = Pool;
    }
    if ( v67 )
    {
      v14 = (_KPROCESS *)BugCheckParameter1;
      v13 = 0LL;
      continue;
    }
    break;
  }
  KeLeaveCriticalRegionThread(CurrentThread);
  if ( v69 )
  {
    KeForceDetachProcess(v83, 0LL);
    MiAttachThreadDone(BugCheckParameter1 + 1664);
  }
LABEL_58:
  if ( v9 != P )
    ExFreePoolWithTag(v9, 0);
  v40 = a1[38];
  if ( v40 )
  {
    MiReleaseFreshPage(v40);
    a1[38] = 0LL;
  }
  v41 = a1[37];
  if ( v41 )
  {
    *(_QWORD *)(v41 + 24) = 0LL;
    MiFreeCombineBlock(a1[37]);
    a1[37] = 0LL;
  }
  result = v71;
  *v71 += v72;
  return result;
}
