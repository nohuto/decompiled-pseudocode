/*
 * XREFs of MiFlushSectionInternal @ 0x140275630
 * Callers:
 *     MiCleanSection @ 0x1402016FC (MiCleanSection.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140287370 (MmFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x140623BB8 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1406245A4 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1407B4808 (MmFlushVirtualMemory.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020C898 (IoDiskIoAttributionDereference.c)
 *     MiRemoveUnusedSubsection @ 0x14021B994 (MiRemoveUnusedSubsection.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     IoSynchronousPageWriteEx @ 0x140250E60 (IoSynchronousPageWriteEx.c)
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MiChargeCommit @ 0x1402763A0 (MiChargeCommit.c)
 *     MiEndingOffset @ 0x140279DE8 (MiEndingOffset.c)
 *     MiGetPagePrivilege @ 0x140282C40 (MiGetPagePrivilege.c)
 *     MiIncrementSubsectionViewCount @ 0x1402890D0 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertUnusedSubsection @ 0x14028BBE0 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x14029F9B0 (MiDecrementSubsectionViewCount.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A22D0 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A23E0 (ObFastDereferenceObjectDeferDelete.c)
 *     PsGetIoPriorityThread @ 0x1402A8A90 (PsGetIoPriorityThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402DBE30 (MiCheckProtoPtePageState.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     MiReadyFlushMdlToWrite @ 0x1402DFCC4 (MiReadyFlushMdlToWrite.c)
 *     MiChargePartitionResidentAvailable @ 0x1402E6278 (MiChargePartitionResidentAvailable.c)
 *     MiIsRetryIoStatus @ 0x1402F4998 (MiIsRetryIoStatus.c)
 *     MiClearPfnImageVerified @ 0x140335218 (MiClearPfnImageVerified.c)
 *     MiUnlockFlushMdl @ 0x14033EB10 (MiUnlockFlushMdl.c)
 *     MiWaitForPageWriteCompletion @ 0x14034A6C4 (MiWaitForPageWriteCompletion.c)
 *     MiExpandFlushMdl @ 0x140354B08 (MiExpandFlushMdl.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 *     MiFlushWaitForReadInProgress @ 0x140635FA8 (MiFlushWaitForReadInProgress.c)
 *     MiIssueAsynchronousFlush @ 0x1406360C4 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x1406363C4 (MiWaitForAsynchronousFlushes.c)
 *     MiFlushFileOnlyMdl @ 0x14063D570 (MiFlushFileOnlyMdl.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1406608C8 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B424 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushSectionInternal(
        ULONG_PTR a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        struct _IO_STATUS_BLOCK *a7)
{
  struct _IO_STATUS_BLOCK *v8; // rsi
  int v10; // ebx
  int v11; // edi
  __int64 v12; // r14
  struct _MDL *v13; // r12
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r15
  unsigned int v20; // edi
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  ULONG_PTR v23; // r8
  __int64 v24; // rcx
  unsigned __int64 *v25; // rdx
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  ULONG_PTR v30; // rsi
  unsigned __int64 v31; // rbx
  char v32; // al
  unsigned int *p_ByteCount; // r13
  unsigned int v34; // ecx
  int v35; // r14d
  unsigned __int64 v36; // rbx
  void *v37; // r10
  int v38; // eax
  BOOL v39; // r12d
  int v40; // r15d
  unsigned int v41; // r9d
  struct _KPRCB *v42; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v44; // ett
  int v45; // r14d
  int v46; // eax
  char v47; // al
  ULONG ByteOffset; // r8d
  unsigned int v49; // edx
  unsigned int ByteCount; // eax
  unsigned __int64 v51; // r14
  __int64 v52; // r9
  unsigned int v53; // esi
  int v54; // eax
  ULONG_PTR v55; // r15
  signed __int64 v56; // rax
  signed __int64 v57; // rtt
  __int64 result; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // rsi
  NTSTATUS v61; // eax
  __int64 Status; // rcx
  volatile LONG *v63; // rcx
  __int16 v64; // ax
  __int64 v65; // rsi
  ULONG_PTR v66; // rax
  __int64 Pool; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  _QWORD *v70; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v74; // eax
  bool v75; // zf
  unsigned __int8 v76; // cl
  struct _KPRCB *v77; // r10
  _DWORD *v78; // r9
  int v79; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v81; // rax
  volatile signed __int64 *v82; // r10
  unsigned __int64 v83; // r8
  struct _KPRCB *v84; // r9
  __int64 v85; // rdx
  signed __int32 v86; // eax
  __int64 v87; // rax
  int v88; // eax
  unsigned __int8 v89; // cl
  struct _KPRCB *v90; // r9
  _DWORD *v91; // r8
  int v92; // eax
  int v93; // [rsp+44h] [rbp-214h]
  __int64 v94; // [rsp+48h] [rbp-210h]
  unsigned __int64 v95; // [rsp+50h] [rbp-208h]
  unsigned __int64 v96; // [rsp+58h] [rbp-200h]
  ULONG_PTR v97; // [rsp+68h] [rbp-1F0h]
  int v98; // [rsp+70h] [rbp-1E8h]
  struct _MDL *P; // [rsp+78h] [rbp-1E0h]
  __int64 v100; // [rsp+80h] [rbp-1D8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-1D0h]
  int IoPriorityThread; // [rsp+90h] [rbp-1C8h]
  __int64 v103; // [rsp+98h] [rbp-1C0h]
  unsigned int v104; // [rsp+A0h] [rbp-1B8h]
  __int64 v105; // [rsp+A8h] [rbp-1B0h]
  PVOID v107; // [rsp+B8h] [rbp-1A0h]
  __int64 v108; // [rsp+C8h] [rbp-190h]
  int v109; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v110; // [rsp+D8h] [rbp-180h]
  struct _KEVENT Object; // [rsp+E0h] [rbp-178h] BYREF
  void *v112; // [rsp+F8h] [rbp-160h]
  unsigned __int64 v113; // [rsp+100h] [rbp-158h]
  _QWORD *v114; // [rsp+108h] [rbp-150h]
  _QWORD *v115; // [rsp+110h] [rbp-148h]
  ULONG_PTR BugCheckParameter1; // [rsp+118h] [rbp-140h]
  unsigned __int64 v117; // [rsp+120h] [rbp-138h]
  PEX_SPIN_LOCK SpinLock; // [rsp+128h] [rbp-130h]
  __int64 v119; // [rsp+130h] [rbp-128h] BYREF
  struct _KTHREAD *v120; // [rsp+138h] [rbp-120h]
  __int64 v121; // [rsp+140h] [rbp-118h]
  _BYTE v122[192]; // [rsp+150h] [rbp-108h] BYREF

  v8 = a7;
  v115 = a3;
  v121 = a2;
  BugCheckParameter1 = a1;
  memset(v122, 0, 0xB8uLL);
  v10 = a6;
  v11 = 0;
  if ( (a6 & 2) == 0 )
    v11 = 2;
  if ( a5 )
  {
    v10 = a6 | 4;
    a6 |= 4u;
  }
  v12 = *a3;
  v13 = (struct _MDL *)v122;
  v107 = 0LL;
  v105 = 0LL;
  P = (struct _MDL *)v122;
  v100 = v12;
  if ( (*(_BYTE *)(v12 + 62) & 0xC) != 0 )
  {
    v10 &= ~4u;
    a6 = v10;
  }
  if ( (v10 & 4) == 0 )
    goto LABEL_8;
  Pool = MiAllocatePool(64LL, 2560LL, 1632005453LL);
  v107 = (PVOID)Pool;
  v68 = Pool;
  if ( a5 )
  {
    *(_QWORD *)(a5 + 40) = Pool;
    if ( !Pool )
      return 3221225626LL;
  }
  else if ( !Pool )
  {
    goto LABEL_8;
  }
  *(_WORD *)(Pool + 48) = 0;
  v69 = Pool + 48;
  *(_BYTE *)(Pool + 50) = 6;
  v13 = (struct _MDL *)(Pool + 80);
  v105 = Pool;
  *(_DWORD *)(Pool + 52) = 0;
  v70 = (_QWORD *)(Pool + 56);
  v70[1] = v70;
  *v70 = v70;
  *(_DWORD *)v68 = 0;
  *(_QWORD *)(v68 + 16) = 0LL;
  *(_QWORD *)(v68 + 40) = a5;
  *(_QWORD *)(v68 + 32) = v12;
  *(_QWORD *)(v68 + 72) = v13;
  *(_QWORD *)(v68 + 2112) = v69;
  *(_WORD *)(v68 + 312) = 0;
  *(_BYTE *)(v68 + 314) = 6;
  *(_DWORD *)(v68 + 316) = 0;
  *(_QWORD *)(v68 + 328) = v68 + 320;
  *(_QWORD *)(v68 + 320) = v68 + 320;
  *(_QWORD *)(v68 + 336) = v68 + 344;
  *(_DWORD *)(v68 + 264) = 0;
  *(_QWORD *)(v68 + 280) = 0LL;
  *(_QWORD *)(v68 + 304) = a5;
  *(_QWORD *)(v68 + 296) = v12;
  *(_QWORD *)(v68 + 2120) = v68 + 312;
  *(_WORD *)(v68 + 576) = 0;
  *(_BYTE *)(v68 + 578) = 6;
  *(_DWORD *)(v68 + 580) = 0;
  *(_QWORD *)(v68 + 592) = v68 + 584;
  *(_QWORD *)(v68 + 584) = v68 + 584;
  *(_QWORD *)(v68 + 600) = v68 + 608;
  *(_DWORD *)(v68 + 528) = 0;
  *(_QWORD *)(v68 + 544) = 0LL;
  *(_QWORD *)(v68 + 568) = a5;
  *(_QWORD *)(v68 + 560) = v12;
  *(_QWORD *)(v68 + 2128) = v68 + 576;
  *(_WORD *)(v68 + 840) = 0;
  *(_BYTE *)(v68 + 842) = 6;
  *(_DWORD *)(v68 + 844) = 0;
  *(_QWORD *)(v68 + 856) = v68 + 848;
  *(_QWORD *)(v68 + 848) = v68 + 848;
  *(_QWORD *)(v68 + 864) = v68 + 872;
  *(_DWORD *)(v68 + 792) = 0;
  *(_QWORD *)(v68 + 808) = 0LL;
  *(_QWORD *)(v68 + 832) = a5;
  *(_QWORD *)(v68 + 824) = v12;
  *(_QWORD *)(v68 + 2136) = v68 + 840;
  *(_WORD *)(v68 + 1104) = 0;
  *(_BYTE *)(v68 + 1106) = 6;
  *(_DWORD *)(v68 + 1108) = 0;
  *(_QWORD *)(v68 + 1120) = v68 + 1112;
  *(_QWORD *)(v68 + 1112) = v68 + 1112;
  *(_QWORD *)(v68 + 1128) = v68 + 1136;
  *(_DWORD *)(v68 + 1056) = 0;
  *(_QWORD *)(v68 + 1072) = 0LL;
  *(_QWORD *)(v68 + 1096) = a5;
  *(_QWORD *)(v68 + 1088) = v12;
  *(_QWORD *)(v68 + 2144) = v68 + 1104;
  *(_WORD *)(v68 + 1368) = 0;
  *(_BYTE *)(v68 + 1370) = 6;
  *(_DWORD *)(v68 + 1372) = 0;
  *(_QWORD *)(v68 + 1384) = v68 + 1376;
  *(_QWORD *)(v68 + 1376) = v68 + 1376;
  *(_DWORD *)(v68 + 1320) = 0;
  P = v13;
  *(_QWORD *)(v68 + 1336) = 0LL;
  *(_QWORD *)(v68 + 1392) = v68 + 1400;
  *(_QWORD *)(v68 + 1360) = a5;
  *(_QWORD *)(v68 + 1352) = v12;
  *(_QWORD *)(v68 + 2152) = v68 + 1368;
  *(_WORD *)(v68 + 1632) = 0;
  *(_BYTE *)(v68 + 1634) = 6;
  *(_DWORD *)(v68 + 1636) = 0;
  *(_QWORD *)(v68 + 1648) = v68 + 1640;
  *(_QWORD *)(v68 + 1640) = v68 + 1640;
  *(_QWORD *)(v68 + 1656) = v68 + 1664;
  *(_DWORD *)(v68 + 1584) = 0;
  *(_QWORD *)(v68 + 1600) = 0LL;
  *(_QWORD *)(v68 + 1624) = a5;
  *(_QWORD *)(v68 + 1616) = v12;
  *(_QWORD *)(v68 + 2160) = v68 + 1632;
  *(_WORD *)(v68 + 1896) = 0;
  *(_BYTE *)(v68 + 1898) = 6;
  *(_DWORD *)(v68 + 1900) = 0;
  *(_QWORD *)(v68 + 1912) = v68 + 1904;
  *(_QWORD *)(v68 + 1904) = v68 + 1904;
  *(_QWORD *)(v68 + 1920) = v68 + 1928;
  *(_DWORD *)(v68 + 1848) = 0;
  *(_QWORD *)(v68 + 1864) = 0LL;
  *(_QWORD *)(v68 + 1888) = a5;
  *(_QWORD *)(v68 + 1880) = v12;
  *(_QWORD *)(v68 + 2168) = v68 + 1896;
LABEL_8:
  v117 = a2 + 8;
  v14 = MiReferenceControlAreaFileWithTag(v12, 1666411853LL);
  CurrentThread = KeGetCurrentThread();
  v108 = v14;
  v120 = CurrentThread;
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread, v16, v17, v18);
  if ( IoPriorityThread < 2
    && (CurrentThread->MiscFlags & 0x400) == 0
    && CurrentThread->PreviousMode != 1
    && KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
  {
    IoPriorityThread = 2;
  }
  if ( v10 < 0 )
    v11 |= 0x10u;
  v19 = BugCheckParameter1;
  a7->Status = 0;
  v20 = v11 | 0x20;
  a7->Information = 0LL;
  v13->Next = 0LL;
  v13->MdlFlags = 0;
  v13->StartVa = 0LL;
  *(_QWORD *)&v13->ByteCount = 0LL;
  --CurrentThread->KernelApcDisable;
  v98 = 0;
  v97 = 0LL;
  BugCheckParameter2 = (ULONG_PTR)v115;
  v93 = 16;
  v95 = v19;
  SpinLock = (PEX_SPIN_LOCK)(v12 + 72);
  v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
  if ( !*(_QWORD *)(v12 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v21 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v75 = (v74 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v74;
        if ( v75 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v21);
    if ( v107 )
    {
      ExFreePoolWithTag(v107, 0);
      if ( a5 )
        *(_QWORD *)(a5 + 40) = 0LL;
    }
    ObFastDereferenceObjectDeferDelete(v12 + 64, v108, 1666411853LL);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    result = 0LL;
    a7->Status = 0;
    a7->Information = 0LL;
    return result;
  }
  v22 = *(_QWORD *)(v12 + 120);
  v110 = 8 * v22;
  if ( 8 * v22 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v22 + 32)) <= 1 )
    __fastfail(0xEu);
  v23 = (ULONG_PTR)v115;
  v103 = 0LL;
  v24 = a4;
  while ( 1 )
  {
LABEL_14:
    v25 = (unsigned __int64 *)(v23 + 8);
    v114 = (_QWORD *)(v23 + 8);
    if ( v23 == v24 )
    {
      v26 = v117;
      v114 = (_QWORD *)(v23 + 8);
    }
    else
    {
      v26 = *v25 + 8LL * (*(_DWORD *)(v23 + 44) - (*(_DWORD *)(v23 + 52) & 0x3FFFFFFFu));
      v24 = a4;
    }
    v96 = v26;
    if ( !v19 )
    {
      v19 = *v25;
      v95 = *v25;
    }
    if ( *(_DWORD *)(v23 + 104) && *v25 )
      break;
    v55 = ((__int64)(v26 - v19) >> 3 << 12) + v97;
    v66 = *(_QWORD *)(v23 + 16);
    v97 = v55;
    if ( !v66 )
    {
      if ( v26 == *v25 + 8LL * (*(_DWORD *)(v23 + 44) - (*(_DWORD *)(v23 + 52) & 0x3FFFFFFFu)) )
      {
        v88 = MiEndingOffset(v23) & 0xFFF;
        if ( v88 )
          v55 -= (unsigned int)(4096 - v88);
      }
      goto LABEL_90;
    }
    if ( v24 == v23 )
      goto LABEL_90;
    v19 = *(_QWORD *)(v66 + 8);
    v23 = *(_QWORD *)(v23 + 16);
    v95 = v19;
    BugCheckParameter2 = v66;
  }
  MiIncrementSubsectionViewCount(v23);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 8) != 0 )
    MiRemoveUnusedSubsection(BugCheckParameter2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  if ( (_DWORD)KiIrqlFlags )
  {
    v76 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v76 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v76 >= 2u )
    {
      v77 = KeGetCurrentPrcb();
      v78 = v77->SchedulerAssist;
      v79 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
      v75 = (v79 & v78[5]) == 0;
      v78[5] &= v79;
      if ( v75 )
        KiRemoveSystemWorkPriorityKick(v77);
    }
  }
  __writecr8((unsigned __int8)v21);
  v113 = v19;
  if ( v19 >= v26 )
    goto LABEL_85;
  while ( 2 )
  {
    v94 = MiCheckProtoPtePageState(v19);
    if ( !v94 )
    {
      p_ByteCount = &v13->ByteCount;
      v19 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v95 = v19;
      if ( !v13->ByteCount )
        goto LABEL_70;
      v51 = v96;
      goto LABEL_105;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)v19;
        v28 = *(_QWORD *)v19;
        if ( (*(_QWORD *)v19 & 1) != 0 )
          goto LABEL_33;
        if ( (*(_QWORD *)v19 & 0xC00LL) != 0x800 )
          goto LABEL_66;
        if ( !v27 || !qword_140C65C40 || (v27 & qword_140C65C40) != 0 )
        {
          v28 = *(_QWORD *)v19;
          if ( qword_140C65C40 && (v27 & 0x10) == 0 )
            v28 = v27 & ~qword_140C65C40;
LABEL_33:
          v29 = (v28 >> 12) & 0xFFFFFFFFFFLL;
          if ( v29 <= qword_140C65CA0 )
          {
            if ( _bittest64((const signed __int64 *)(48 * v29 - 0x21FFFFFFFFD8LL), 0x36u) )
              break;
          }
        }
      }
      v30 = 48 * v29 - 0x220000000000LL;
      v109 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v109);
        while ( *(__int64 *)(v30 + 24) < 0 );
      }
      if ( *(_QWORD *)v19 == v27 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      v30 = MiLockSpecialPurposeMemoryCachedPage(v30, 0LL, 0LL, v52);
    if ( !v30 )
    {
LABEL_66:
      ByteCount = v13->ByteCount;
      p_ByteCount = &v13->ByteCount;
      if ( !ByteCount )
        goto LABEL_67;
LABEL_73:
      v20 |= 4u;
LABEL_67:
      v51 = v96;
      v19 += 8LL;
      v95 = v19;
      if ( (v20 & 4) == 0 && (v19 != v96 || !ByteCount) )
      {
        v12 = v100;
        goto LABEL_70;
      }
LABEL_105:
      v20 &= ~4u;
      *p_ByteCount <<= 12;
      v59 = MiReadyFlushMdlToWrite(v13, BugCheckParameter2, a6);
      if ( v105 )
      {
        v87 = MiIssueAsynchronousFlush(v108, v105, (_DWORD)v107, a5, v59, (a6 >> 2) & 4, IoPriorityThread, v110);
        v105 = v87;
        if ( !v87 )
        {
          v19 = v51;
          v20 = v20 & 0xFFFFFFDE | 1;
          goto LABEL_225;
        }
        v13 = *(struct _MDL **)(v87 + 72);
        v12 = v100;
        v93 = 16;
        goto LABEL_129;
      }
      v12 = v100;
      v60 = *(_QWORD *)(48 * (__int64)v13[1].Next - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
      if ( (*(_BYTE *)(v100 + 62) & 0xC) != 0 )
      {
        MiFlushFileOnlyMdl(6 * (__int64)v13[1].Next, v13, v59);
      }
      else
      {
        Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
        Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
        v119 = v59;
        *(_QWORD *)&Object.Header.Lock = 393216LL;
        v61 = IoSynchronousPageWriteEx((struct _FILE_OBJECT *)v108, v13, &v119, &Object, (a6 >> 2) & 4, v110, a7);
        if ( v61 < 0 )
          a7->Status = v61;
        else
          KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      }
      MiUnlockFlushMdl(v13);
      Status = (unsigned int)a7->Status;
      if ( (int)Status >= 0 )
      {
        v98 = 0;
        if ( v13 == (struct _MDL *)v122 )
        {
LABEL_111:
          v13->ByteCount = 0;
          goto LABEL_70;
        }
        v93 = 16;
        ExFreePoolWithTag(v13, 0);
        v13 = (struct _MDL *)v122;
LABEL_129:
        P = v13;
        goto LABEL_111;
      }
      v95 = v60;
      v19 = v60;
      if ( (_DWORD)Status == -1073741740 && (v20 & 0x10) != 0 )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
      }
      else
      {
        v53 = *p_ByteCount;
        if ( !(unsigned int)MiIsRetryIoStatus(Status, *p_ByteCount) )
        {
LABEL_79:
          v54 = 0;
          goto LABEL_80;
        }
        if ( (--v98 & 0x1F) != 0 )
        {
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
        }
        else
        {
          if ( v93 == 1 || v53 <= 0x1000 )
            goto LABEL_79;
          v93 = 1;
        }
      }
      a7->Status = 0;
      v54 = 32;
LABEL_80:
      v20 = v54 | v20 & 0xFFFFFFDF;
      if ( v13 != (struct _MDL *)v122 )
      {
        if ( v93 != 1 )
          v93 = 16;
        ExFreePoolWithTag(v13, 0);
        v13 = (struct _MDL *)v122;
        P = (struct _MDL *)v122;
      }
      v13->ByteCount = 0;
      if ( (v20 & 0x20) != 0 )
        goto LABEL_70;
      goto LABEL_85;
    }
    v31 = *(_QWORD *)v19;
    if ( v19 >= 0xFFFFF6FB7DBED000uLL
      && v19 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v81 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
        if ( (v81 & 0x20) != 0 )
          LOBYTE(v31) = v31 | 0x20;
        if ( (v81 & 0x42) != 0 )
          LOBYTE(v31) = v31 | 0x42;
      }
    }
    v32 = *(_BYTE *)(v30 + 34);
    p_ByteCount = &v13->ByteCount;
    if ( (v32 & 8) == 0 )
    {
      if ( (v32 & 0x10) == 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ByteCount = *p_ByteCount;
        if ( *p_ByteCount )
          goto LABEL_73;
        goto LABEL_67;
      }
      v34 = *p_ByteCount;
      if ( (v32 & 0x20) != 0 )
      {
        if ( !v34 )
        {
          MiFlushWaitForReadInProgress(v30, v94, 17LL);
          goto LABEL_70;
        }
LABEL_136:
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v51 = v96;
        goto LABEL_105;
      }
      v35 = 0;
      if ( !v34 )
      {
        v35 = 2;
        ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
        v63 = SpinLock;
        ++*(_DWORD *)(v100 + 76);
        ExReleaseSpinLockExclusiveFromDpcLevel(v63);
        v13->Next = 0LL;
        v13->MdlFlags = 0;
        v13->StartVa = 0LL;
        *p_ByteCount = 0;
        v13->ByteOffset = v93;
      }
      v36 = v31 & 1;
      v37 = *(void **)(qword_140C674C8 + 8 * ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL));
      v38 = *(_DWORD *)(v30 + 16);
      v112 = v37;
      v39 = (v38 & 0x400) != 0LL;
      v40 = v35 & 2;
      v41 = 4;
      if ( !v36 )
        v40 = v35;
      if ( !v40 )
        v41 = 8;
      v104 = v41;
      if ( v37 == &MiSystemPartition )
      {
        v42 = KeGetCurrentPrcb();
        CachedResidentAvailable = v42->CachedResidentAvailable;
        if ( CachedResidentAvailable )
        {
          while ( CachedResidentAvailable != -1 )
          {
            v44 = CachedResidentAvailable;
            CachedResidentAvailable = _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&v42->CachedResidentAvailable,
                                        CachedResidentAvailable - 1,
                                        CachedResidentAvailable);
            if ( v44 == CachedResidentAvailable )
            {
              v45 = 1;
              goto LABEL_56;
            }
            if ( !CachedResidentAvailable )
              break;
          }
        }
      }
      v45 = MiChargePartitionResidentAvailable(v37, 1LL, (unsigned int)-(v40 != 0));
      if ( !v45 )
        goto LABEL_203;
      v41 = v104;
      v37 = v112;
LABEL_56:
      v46 = v39;
      if ( !v40 )
        v46 = v39;
      if ( v46 && !(unsigned int)MiChargeCommit(v37, 1LL, v41) )
      {
        v82 = (volatile signed __int64 *)v112;
        v83 = 1LL;
        if ( v112 != &MiSystemPartition )
          goto LABEL_202;
        v84 = KeGetCurrentPrcb();
        v85 = (int)v84->CachedResidentAvailable;
        if ( (_DWORD)v85 == -1 )
          goto LABEL_202;
        if ( (unsigned __int64)(v85 + 1) <= 0x100 )
        {
          do
          {
            v86 = _InterlockedCompareExchange((volatile signed __int32 *)&v84->CachedResidentAvailable, v85 + 1, v85);
            v75 = (_DWORD)v85 == v86;
            LODWORD(v85) = v86;
            if ( v75 )
              goto LABEL_203;
          }
          while ( v86 != -1 && (unsigned __int64)(v86 + 1LL) <= 0x100 );
        }
        if ( (int)v85 > 192
          && (_DWORD)v85 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v84->CachedResidentAvailable,
                              192,
                              v85) )
        {
          v83 = (int)v85 - 192 + 1LL;
        }
        if ( v83 )
LABEL_202:
          _InterlockedExchangeAdd64(v82 + 2160, v83);
LABEL_203:
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v94, 17LL);
        v19 = v95;
        v13 = P;
        v51 = v96;
        goto LABEL_105;
      }
      if ( !v36 )
      {
        MiUnlinkPageFromListEx(v30, 0LL);
        *(_QWORD *)(v30 + 24) &= 0xC000000000000000uLL;
      }
      v47 = *(_BYTE *)(v30 + 34);
      ++*(_WORD *)(v30 + 32);
      *(_BYTE *)(v30 + 34) = v47 | 8;
      *(_BYTE *)(v30 + 34) &= ~0x10u;
      if ( (*(_DWORD *)(v30 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v30) & 0x10) != 0 )
        MiClearPfnImageVerified(v30);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v13 = P;
      *((_QWORD *)&P[1].Next + *p_ByteCount) = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v30 + 0x220000000000LL) >> 4);
      ByteOffset = P->ByteOffset;
      v49 = *p_ByteCount + 1;
      *p_ByteCount = v49;
      if ( v45 == 3 && (v49 >= 0x10 || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0) )
      {
        MiUnlockProtoPoolPage(v94, 17LL);
        v51 = v96;
        v19 = v95 + 8;
        v95 += 8LL;
        goto LABEL_105;
      }
      if ( v49 != ByteOffset )
      {
        v19 = v95;
        ByteCount = v49;
        goto LABEL_67;
      }
      MiUnlockProtoPoolPage(v94, 17LL);
      if ( v93 == 1 || v95 + 8 >= v96 )
      {
        v51 = v96;
        v19 = v95 + 8;
        v95 += 8LL;
        goto LABEL_105;
      }
      v65 = MiExpandFlushMdl(P);
      if ( !v65 )
      {
        v19 = v95 + 8;
        v95 += 8LL;
        v51 = v96;
        v93 = P->ByteOffset;
        goto LABEL_105;
      }
      if ( P != (struct _MDL *)v122 && (!v105 || P != (struct _MDL *)(v105 + 80)) )
        ExFreePoolWithTag(P, 0);
      P = (struct _MDL *)v65;
      v13 = (struct _MDL *)v65;
      if ( v105 )
        *(_QWORD *)(v105 + 72) = v65;
      v19 = v95 + 8;
      v95 += 8LL;
      v12 = v100;
      v93 = *(_DWORD *)(v65 + 44);
LABEL_70:
      if ( v19 >= v96 )
        goto LABEL_85;
      continue;
    }
    break;
  }
  if ( *p_ByteCount )
    goto LABEL_136;
  if ( (v20 & 2) != 0 )
  {
    MiWaitForPageWriteCompletion(v30, v12, v94, 17LL);
    goto LABEL_70;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = v96;
  v20 |= 8u;
LABEL_225:
  v12 = v100;
LABEL_85:
  v97 += (__int64)(v19 - v113) >> 3 << 12;
  LOBYTE(v21) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
  if ( *(_QWORD *)(BugCheckParameter2 + 16)
    || v19 != *v114
            + 8LL * (*(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu)) )
  {
    v55 = v97;
  }
  else
  {
    v64 = MiEndingOffset(BugCheckParameter2);
    v55 = v97;
    if ( (v64 & 0xFFF) != 0 )
    {
      v55 = v97 - (4096 - (v64 & 0xFFFu));
      v97 = v55;
    }
  }
  v103 += MiDecrementSubsectionViewCount(BugCheckParameter2);
  if ( !*(_QWORD *)(BugCheckParameter2 + 96) && (*(_BYTE *)(BugCheckParameter2 + 34) & 1) == 0 )
    v103 += MiInsertUnusedSubsection(BugCheckParameter2);
  v8 = a7;
  if ( (v20 & 0x28) == 0x20 )
  {
    v24 = a4;
    if ( BugCheckParameter2 != a4 )
    {
      v23 = *(_QWORD *)(BugCheckParameter2 + 16);
      BugCheckParameter2 = v23;
      if ( v23 )
      {
        v19 = *(_QWORD *)(v23 + 8);
        v95 = v19;
        goto LABEL_14;
      }
    }
  }
LABEL_90:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  if ( (_DWORD)KiIrqlFlags )
  {
    v89 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v89 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v89 >= 2u )
    {
      v90 = KeGetCurrentPrcb();
      v91 = v90->SchedulerAssist;
      v92 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
      v75 = (v92 & v91[5]) == 0;
      v91[5] &= v92;
      if ( v75 )
        KiRemoveSystemWorkPriorityKick(v90);
    }
  }
  __writecr8((unsigned __int8)v21);
  if ( v107 && !a5 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(v107) < 0 )
      LOBYTE(v20) = v20 | 1;
    ExFreePoolWithTag(v107, 0);
  }
  _m_prefetchw((const void *)(v12 + 64));
  v56 = *(_QWORD *)(v12 + 64);
  if ( (v108 ^ (unsigned __int64)v56) >= 0xF )
  {
LABEL_154:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v108, 0x63536D4Du);
  }
  else
  {
    while ( 1 )
    {
      v57 = v56;
      v56 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 64), v56 + 1, v56);
      if ( v57 == v56 )
        break;
      if ( (v108 ^ (unsigned __int64)v56) >= 0xF )
        goto LABEL_154;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo(v108 - 48);
  }
  if ( v103 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C674C8 + 8LL * (*(_WORD *)(v12 + 60) & 0x3FF)), 1LL, v103);
  if ( v110 )
    IoDiskIoAttributionDereference(v110);
  KeLeaveCriticalRegionThread((__int64)v120);
  if ( (v20 & 1) != 0 )
    return MiFlushSectionInternal(BugCheckParameter1, v121, (_DWORD)v115, a4, a5, a6 & 0xFFFFFFFB, (__int64)v8);
  if ( (v20 & 8) != 0 )
    v8->Status = -1073740749;
  result = (unsigned int)v8->Status;
  v8->Information = v55;
  return result;
}
