/*
 * XREFs of MiSetPagesModified @ 0x140628E4C
 * Callers:
 *     MiCreateNewSection @ 0x1407466E0 (MiCreateNewSection.c)
 * Callees:
 *     MiGetCommittedPages @ 0x1402197C0 (MiGetCommittedPages.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A2680 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E1780 (MiGetEffectivePagePriorityThread.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402EC258 (MiUpdateControlAreaCommitCount.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x1403180D0 (KiAbThreadRemoveBoostsSlow.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiCapturePageFileInfoInline @ 0x140348F44 (MiCapturePageFileInfoInline.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406ACB70 (MiUnmapImageInSystemSpace.c)
 *     MiDeleteFileExtents @ 0x1406B0AE0 (MiDeleteFileExtents.c)
 *     MiPrefetchControlArea @ 0x1407DCBDC (MiPrefetchControlArea.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // r12
  unsigned int EffectivePagePriorityThread; // eax
  int v9; // r14d
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 valid; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbx
  __int64 CommittedPages; // r14
  __int64 v19; // rcx
  __int64 v20; // r15
  ULONG_PTR v21; // rbx
  struct _KTHREAD *v22; // r15
  __int64 v23; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v25; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  int SessionId; // eax
  bool v31; // zf
  unsigned __int8 v32; // [rsp+30h] [rbp-128h]
  __int64 v33; // [rsp+38h] [rbp-120h]
  __int64 v34; // [rsp+40h] [rbp-118h]
  unsigned __int64 v35; // [rsp+40h] [rbp-118h]
  unsigned int v36; // [rsp+48h] [rbp-110h]
  unsigned __int64 v37; // [rsp+58h] [rbp-100h]
  __int64 v38; // [rsp+60h] [rbp-F8h]
  int v39; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v40; // [rsp+78h] [rbp-E0h]
  __int64 v41; // [rsp+80h] [rbp-D8h]
  __int64 v42; // [rsp+88h] [rbp-D0h]
  _QWORD v43[6]; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v44; // [rsp+C0h] [rbp-98h]
  unsigned __int64 v45; // [rsp+C8h] [rbp-90h] BYREF
  unsigned __int64 v46; // [rsp+D0h] [rbp-88h]
  _QWORD v47[10]; // [rsp+E0h] [rbp-78h] BYREF

  v45 = 0LL;
  memset(v47, 0, sizeof(v47));
  v4 = *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v41 = v4;
  v42 = *(_QWORD *)a1;
  v43[2] = v42;
  v5 = *(unsigned int *)(v42 + 8);
  v43[3] = v5;
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0LL) )
    return 3221225773LL;
  v37 = *(_QWORD *)(a1 + 136);
  v44 = v37 + 8 * v5;
  CurrentThread = KeGetCurrentThread();
  v43[1] = CurrentThread;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea(a1, CLFS_LSN_NULL_EXT[0], 0, EffectivePagePriorityThread, 0, a2);
  v9 = MiMapImageInSystemSpace(a1, 3LL, v47);
  if ( v9 >= 0 )
  {
    v33 = v47[3];
    v10 = v47[0];
    v38 = v47[0];
    v11 = ((v47[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = 0LL;
    v40 = 0LL;
    v13 = v37;
    while ( 1 )
    {
      v43[5] = v10;
      v43[4] = v11;
      if ( v13 >= v44 )
        break;
      v43[0] = MI_READ_PTE_LOCK_FREE(v13);
      if ( v43[0] )
      {
        while ( 1 )
        {
          v32 = MiLockWorkingSetShared(v33);
          valid = MiLockLowestValidPageTable(v33, v11, &v45, v14);
          v46 = valid;
          if ( valid == ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_BYTE *)v11 & 1) != 0 )
            break;
          MiUnlockPageTableInternal(v33, valid);
          MiUnlockWorkingSetShared(v33, v32);
        }
        v34 = ++v12;
        v40 = v12;
        v43[0] = MI_READ_PTE_LOCK_FREE(v11);
        v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v43) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        if ( *(__int64 *)(v16 + 40) < 0 )
        {
          v17 = 0LL;
          v39 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v39);
            while ( *(__int64 *)(v16 + 24) < 0 );
          }
          if ( (!_bittest64((const signed __int64 *)(v16 + 16), 0xAu) & (unsigned __int8)~(*(_BYTE *)(v16 + 34) >> 3)) != 0 )
            v17 = MiCapturePageFileInfoInline((unsigned __int64 *)(v16 + 16), 1, 0);
          *(_BYTE *)(v16 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v17 )
            MiReleasePageFileInfo(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL)), v17, 1);
          v12 = v34;
        }
        MiUnlockPageTableInternal(v33, v46);
        MiUnlockWorkingSetShared(v33, v32);
      }
      v13 = v37 + 8;
      v37 += 8LL;
      v11 += 8LL;
      v10 = v38 + 4096;
      v38 += 4096LL;
    }
    MiUnmapImageInSystemSpace(v47);
    CommittedPages = MiGetCommittedPages((_QWORD *)a1);
    v19 = CommittedPages - v12;
    v20 = CommittedPages - v12 + v5;
    if ( v20 )
      MiReturnCommit(v41, v20);
    v35 = v12 - CommittedPages;
    if ( v12 != CommittedPages )
    {
      --CurrentThread->SpecialApcDisable;
      v21 = v42 + 40;
      v22 = KeGetCurrentThread();
      v23 = 0LL;
      _disable();
      AbEntrySummary = v22->AbEntrySummary;
      if ( v22->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v19, (__int64)v22)) != 0 )
      {
        _BitScanForward(&v25, AbEntrySummary);
        v36 = v25;
        v22->AbEntrySummary = AbEntrySummary & ~(1 << v25);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v28 = *SchedulerAssist;
          do
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
          }
          while ( v29 != v28 );
          if ( (v28 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
        v23 = (__int64)(&v22[1].Process + 12 * v36);
        if ( v21 - qword_140C659E8 >= 0x8000000000LL )
          SessionId = -1;
        else
          SessionId = MmGetSessionIdEx((__int64)v22->ApcState.Process);
        *(_DWORD *)(v23 + 8) = SessionId;
        *(_QWORD *)v23 = v21 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v21, v23, v21);
      if ( v23 )
        *(_BYTE *)(v23 + 18) = 1;
      MiUpdateControlAreaCommitCount(a1, v35);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v21);
      KeAbPostRelease(v21);
      v31 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v31
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    MiDeleteFileExtents(a1);
    return 0LL;
  }
  else
  {
    MiReturnCommit(v4, v5);
    return (unsigned int)v9;
  }
}
