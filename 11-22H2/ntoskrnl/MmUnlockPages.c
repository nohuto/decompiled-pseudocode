/*
 * XREFs of MmUnlockPages @ 0x1402CAB10
 * Callers:
 *     ExUnlockUserBuffer @ 0x140206EC4 (ExUnlockUserBuffer.c)
 *     MiProbeAndLockComplete @ 0x140238850 (MiProbeAndLockComplete.c)
 *     CcCopyBytesToUserBuffer @ 0x140262090 (CcCopyBytesToUserBuffer.c)
 *     IopUnlockAndFreeMdl @ 0x14028CE0C (IopUnlockAndFreeMdl.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     CcZeroDataInCache @ 0x1402FBF18 (CcZeroDataInCache.c)
 *     MiGetWorkingSetInfo @ 0x140362BC0 (MiGetWorkingSetInfo.c)
 *     CcPrepareMdlWrite @ 0x140368B40 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14036B23C (CcMdlWriteComplete2.c)
 *     VslpLockPagesForTransfer @ 0x1403CE424 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403CE69C (VslpUnlockPagesForTransfer.c)
 *     CcLockSystemCacheBuffer @ 0x140537810 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x140538AA0 (CcMdlWriteAbort.c)
 *     VslFinalizeSecureImageHash @ 0x14054DCA0 (VslFinalizeSecureImageHash.c)
 *     KiOpPatchCode @ 0x14057F490 (KiOpPatchCode.c)
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 *     PspIumAllocatePartitionState @ 0x1405A59A0 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x1405A5FEC (PspIumFreePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x1405CD894 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1405F8C50 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1405F8D10 (VmUnlockPages.c)
 *     ExpGetLookasideInformation @ 0x140605318 (ExpGetLookasideInformation.c)
 *     MiCopyVirtualMemory @ 0x1406F79C0 (MiCopyVirtualMemory.c)
 *     CcMdlRead @ 0x14073EEB0 (CcMdlRead.c)
 *     sub_140762650 @ 0x140762650 (sub_140762650.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1407653A4 (WbMakeUserExecutablePagesKernelWritable.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6410 (MiAllocatePerSessionProtos.c)
 *     CcMdlReadComplete2 @ 0x1407C3DFC (CcMdlReadComplete2.c)
 *     sub_1407D94A8 @ 0x1407D94A8 (sub_1407D94A8.c)
 *     VslValidateDynamicCodePages @ 0x14087F3C8 (VslValidateDynamicCodePages.c)
 *     VslCallEnclave @ 0x1408A4F78 (VslCallEnclave.c)
 *     FsRtlpFreeMdlChain @ 0x14093EFB8 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940520 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1409405C0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslObtainHotPatchUndoTable @ 0x140942BA8 (VslObtainHotPatchUndoTable.c)
 *     IopCleanupFileObjectIosbRange @ 0x140944790 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140945FE8 (IopSetFileObjectIosbRange.c)
 *     AlpcpFreeCompletionList @ 0x140979774 (AlpcpFreeCompletionList.c)
 *     AlpcpInitializeCompletionList @ 0x1409797D0 (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140988BDC (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1409B1010 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D7428 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x140A042B0 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x140A046D0 (NtStartProfile.c)
 *     NtStopProfile @ 0x140A04940 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A052C0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x140A17588 (CmpLockKeyBodyIntoMemory.c)
 *     CmpUnlockKeyBodyFromMemory @ 0x140A179EC (CmpUnlockKeyBodyFromMemory.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A31478 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A31710 (MiRotateToFrameBuffer.c)
 *     MiApplyImageHotPatch @ 0x140A353F8 (MiApplyImageHotPatch.c)
 *     MiReleaseHotPatchResources @ 0x140A3BD10 (MiReleaseHotPatchResources.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D034 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E144 (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3F9C0 (MiQueryMemoryPhysicalContiguity.c)
 *     sub_140A4DB30 @ 0x140A4DB30 (sub_140A4DB30.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiPfnShareCountIsZero @ 0x1402817A0 (MiPfnShareCountIsZero.c)
 *     MiProbeUnlockPage @ 0x1402CB170 (MiProbeUnlockPage.c)
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     KeShouldYieldProcessor @ 0x140333AD0 (KeShouldYieldProcessor.c)
 *     MiDereferenceIoPages @ 0x140335F54 (MiDereferenceIoPages.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeMdlTracker @ 0x14061C89C (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x14061CA30 (MiRetardMdl.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  __int64 v1; // r9
  unsigned int MdlFlags; // r12d
  PMDL v3; // rbx
  unsigned __int64 v5; // r15
  PMDL v6; // r8
  int v7; // r13d
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r14
  char v10; // di
  unsigned __int64 Next; // rdx
  unsigned __int64 v12; // r14
  PMDL v13; // rdi
  unsigned __int64 v14; // r15
  ULONG_PTR v15; // rbx
  _QWORD *p_Next; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  int v20; // r12d
  unsigned __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  PMDL v26; // r9
  _DWORD *SchedulerAssist; // r10
  __int64 v28; // rdx
  struct _KPRCB *v29; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v31; // zf
  signed __int32 v32; // eax
  LOGICAL ShouldYieldProcessor; // eax
  unsigned __int8 v34; // cl
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 *p_Size; // r11
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r10
  unsigned __int8 v40; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v42; // edx
  unsigned __int8 v43; // dl
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  unsigned __int8 v47; // [rsp+30h] [rbp-68h]
  __int64 v48; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-50h]
  unsigned __int64 v50; // [rsp+50h] [rbp-48h]
  struct _EPROCESS *Process; // [rsp+58h] [rbp-40h]
  PMDL v52; // [rsp+A0h] [rbp+8h] BYREF
  int v53; // [rsp+A8h] [rbp+10h]
  int v54; // [rsp+B0h] [rbp+18h] BYREF
  PMDL v55; // [rsp+B8h] [rbp+20h]

  v52 = MemoryDescriptorList;
  MdlFlags = MemoryDescriptorList->MdlFlags;
  v3 = MemoryDescriptorList + 1;
  Process = MemoryDescriptorList->Process;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v5 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v50 = v5;
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v6 = (PMDL)((char *)v3 + 8 * v5);
  v7 = 1;
  v55 = v6;
  v54 = 1;
  v8 = 0LL;
  v48 = 0x3FFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  v47 = CurrentIrql;
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v28) = 4;
    else
      v28 = (-1LL << (CurrentIrql + 1)) & 4;
    v1 = (unsigned int)v28 | SchedulerAssist[5];
    SchedulerAssist[5] = v1;
  }
  v53 = CurrentIrql + 1;
  v10 = CurrentIrql + 1;
  while ( 1 )
  {
    Next = (unsigned __int64)v3->Next;
    if ( v3->Next == (struct _MDL *)-1LL )
      break;
    v12 = 1LL;
    if ( Next > qword_140C65CA0 )
      goto LABEL_80;
    if ( (*(_QWORD *)(48 * Next - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
    {
      v6 = v55;
LABEL_80:
      v36 = 512 - ((__int64)v3->Next & 0x1FF);
      v49 = v36;
      if ( v36 > 1 )
      {
        p_Size = (unsigned __int64 *)&v3->Size;
        v38 = Next;
        do
        {
          if ( p_Size == (unsigned __int64 *)v6 )
            break;
          v39 = *p_Size;
          if ( *p_Size == -1LL || v39 != v38 + 1 )
            break;
          if ( v39 <= qword_140C65CA0 )
          {
            if ( _bittest64((const signed __int64 *)(48 * v39 - 0x21FFFFFFFFD8LL), 0x36u) )
              break;
            v36 = v49;
          }
          ++v12;
          ++p_Size;
          v38 = v39;
        }
        while ( v12 < v36 );
        v10 = v53;
      }
      MiDereferenceIoPages(0LL, Next, v12);
      goto LABEL_13;
    }
    MiProbeUnlockPage(48 * Next - 0x220000000000LL, MdlFlags, &v48, &v54);
LABEL_13:
    ++v8;
    v3 = (PMDL)((char *)v3 + 8 * v12);
    if ( (v8 & 0x3F) != 0 || v47 >= 2u )
    {
      v6 = v55;
      if ( v3 >= v55 )
        break;
    }
    else
    {
      if ( v3 >= v55 )
        break;
      ShouldYieldProcessor = KeShouldYieldProcessor();
      v6 = v55;
      if ( ShouldYieldProcessor )
      {
        if ( (_DWORD)KiIrqlFlags )
        {
          v40 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v40 - 2) <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v1 = (__int64)CurrentPrcb->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << v10);
            v31 = (v42 & *(_DWORD *)(v1 + 20)) == 0;
            *(_DWORD *)(v1 + 20) &= v42;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v47);
        v34 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v6 = v55;
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
        {
          v1 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
          if ( v34 == 2 )
            LODWORD(v35) = 4;
          else
            v35 = (-1LL << (v34 + 1)) & 4;
          *(_DWORD *)(v1 + 20) |= v35;
          v6 = v55;
        }
      }
    }
  }
  v13 = v52;
  v14 = v50;
  if ( v48 != 0x3FFFFFFFFFLL )
  {
    v15 = 48 * v48 - 0x220000000000LL;
    p_Next = 0LL;
    v55 = 0LL;
    if ( v54 == 2 )
    {
      if ( (*(_BYTE *)(v15 + 34) & 7) != 6
        || (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
        || (v17 = *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL, v17 < 0xFFFFF68000000000uLL)
        || (v1 = 0xFFFFF6FFFFFFFFFFuLL, v17 > 0xFFFFF6FFFFFFFFFFuLL)
        || (v18 = (__int64)(v17 << 25) >> 16, v18 < 0xFFFFF68000000000uLL)
        || v18 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v7 = 0;
      }
      v19 = (_QWORD *)(v15 + 24);
      v20 = 3;
      if ( v7 )
        goto LABEL_24;
      goto LABEL_78;
    }
    v20 = 1;
    if ( !v54 )
      v20 = 4;
LABEL_24:
    v19 = (_QWORD *)(v15 + 24);
    if ( (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_78:
      KeBugCheckEx(
        0x1Au,
        0x41791uLL,
        48 * v48 - 0x220000000000LL,
        *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL,
        *v19 & 0x3FFFFFFFFFFFFFFFLL);
    v21 = 0LL;
    v22 = 0LL;
    while ( 1 )
    {
      v23 = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFLL;
      LODWORD(v52) = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v52);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
        p_Next = &v55->Next;
      }
      v24 = *(_QWORD *)(v15 + 24) ^ ((*(_QWORD *)(v15 + 24) - 0x10000LL) ^ *(_QWORD *)(v15 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v15 + 24) = v24;
      v25 = v24 & 0x3FFFFFFFFFFFFFFFLL;
      if ( v25 >= 0x10000 )
        break;
      if ( !p_Next )
        v55 = *(PMDL *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
      ++v21;
      if ( !v25 && (unsigned int)MiPfnShareCountIsZero(v15, 0LL, p_Next, v1) != 3 )
        ++v22;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v20 )
        goto LABEL_34;
      p_Next = &v55->Next;
      v15 = 48 * v23 - 0x220000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_34:
    v26 = v55;
    if ( v21 )
    {
      if ( v55 == (PMDL)&MiSystemPartition )
      {
        v29 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v29->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v21 + CachedResidentAvailable <= 0x100 && v21 < 0x80000 )
          {
            do
            {
              v32 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v29->CachedResidentAvailable,
                      v21 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v31 = (_DWORD)CachedResidentAvailable == v32;
              LODWORD(CachedResidentAvailable) = v32;
              if ( v31 )
                goto LABEL_35;
            }
            while ( v32 != -1 && v21 + v32 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v29->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v21 += (int)CachedResidentAvailable - 192;
          }
          if ( !v21 )
            goto LABEL_35;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v26[360], v21);
    }
LABEL_35:
    if ( v22 )
      MiReturnCommit(v26, v22);
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v43 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v43 <= 0xFu && v47 <= 0xFu && v43 >= 2u )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v46 = ~(unsigned __int16)(-1LL << v53);
      v31 = (v46 & v45[5]) == 0;
      v45[5] &= v46;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
  __writecr8(v47);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v14);
  v13->MdlFlags &= 0xF6FDu;
}
