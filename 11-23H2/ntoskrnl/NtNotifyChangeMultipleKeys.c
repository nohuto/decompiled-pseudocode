/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x140766D20
 * Callers:
 *     NtNotifyChangeKey @ 0x1407679E0 (NtNotifyChangeKey.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KeInitializeApc @ 0x1402BE960 (KeInitializeApc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     CmpUnlockTwoKcbs @ 0x1406DBD44 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406DBD9C (CmpLockTwoKcbsShared.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     CmpAllocatePostBlock @ 0x1407675D8 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1407676E0 (CmpNotifyChangeKey.c)
 *     CmpFreePostBlock @ 0x140768540 (CmpFreePostBlock.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF52F0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByName @ 0x140AF56D4 (CmObReferenceObjectByName.c)
 */

NTSTATUS __cdecl NtNotifyChangeMultipleKeys(
        HANDLE MasterKeyHandle,
        ULONG Count,
        OBJECT_ATTRIBUTES SubordinateObjects[],
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  void *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r9d
  int v21; // r8d
  unsigned int v22; // r14d
  int v23; // esi
  __int64 *v24; // rbx
  __int64 PostBlock; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  unsigned int v31; // esi
  PVOID v32; // rsi
  _QWORD *v33; // rax
  __int64 v34; // rcx
  int v35; // r12d
  unsigned __int64 *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r9
  _QWORD *v40; // rbx
  bool v41; // r13
  __int64 v42; // r12
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  PVOID v49; // rcx
  char v50; // bl
  _KPROCESS *Process; // rcx
  unsigned __int8 v53; // si
  struct _KTHREAD *CurrentThread; // rdx
  void *v55; // r8
  __int64 v56; // r12
  int v57; // r9d
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rcx
  unsigned __int64 *v65; // rsi
  __int64 v66; // rax
  __int64 v67; // r12
  unsigned __int64 *v68; // rsi
  __int64 v69; // rax
  __int64 v70; // r12
  __int64 v71; // r9
  __int16 v72; // ax
  char v73; // al
  bool v74; // zf
  PVOID v75; // rcx
  PVOID v76; // rcx
  unsigned __int64 *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // r12
  unsigned __int64 *v80; // rsi
  __int64 v81; // rax
  __int64 v82; // r12
  __int64 v83; // r14
  __int64 v84; // r14
  __int64 v85; // r14
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rcx
  _QWORD *v92; // rax
  unsigned __int8 CurrentIrql; // r13
  __int64 v94; // rdx
  _QWORD *v95; // rcx
  unsigned __int8 v96; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v99; // edx
  __int64 v100; // r12
  NTSTATUS v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int8 v106; // si
  _QWORD *v107; // r12
  PVOID *v108; // rax
  PVOID *v109; // rcx
  __int64 v110; // rdx
  _QWORD *v111; // rcx
  __int64 v112; // rax
  _QWORD *v113; // rcx
  __int64 v114; // rdx
  _QWORD *v115; // rcx
  unsigned __int8 v116; // al
  struct _KPRCB *v117; // r9
  _DWORD *v118; // r8
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  PIO_STATUS_BLOCK v124; // rax
  unsigned __int8 v125; // r12
  _QWORD *v126; // rdx
  PVOID *v127; // rax
  PVOID *v128; // rcx
  char *v129; // rax
  __int64 v130; // rdx
  char **v131; // rcx
  __int64 v132; // rax
  _QWORD *v133; // rcx
  __int64 v134; // rdx
  _QWORD *v135; // rcx
  unsigned __int8 v136; // al
  struct _KPRCB *v137; // r9
  _DWORD *v138; // r8
  int v139; // eax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  char v144; // [rsp+40h] [rbp-1F8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1F7h]
  bool v146; // [rsp+43h] [rbp-1F5h]
  unsigned __int8 v147; // [rsp+44h] [rbp-1F4h]
  PVOID v148; // [rsp+48h] [rbp-1F0h] BYREF
  unsigned int v149; // [rsp+50h] [rbp-1E8h]
  PVOID P; // [rsp+58h] [rbp-1E0h]
  PVOID v151; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v152; // [rsp+68h] [rbp-1D0h]
  ULONG v153; // [rsp+70h] [rbp-1C8h]
  PVOID v154; // [rsp+78h] [rbp-1C0h]
  PVOID Object; // [rsp+80h] [rbp-1B8h] BYREF
  PIO_STATUS_BLOCK v156; // [rsp+88h] [rbp-1B0h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v157; // [rsp+90h] [rbp-1A8h]
  HANDLE Handle; // [rsp+98h] [rbp-1A0h]
  __int128 v159; // [rsp+A0h] [rbp-198h] BYREF
  int v160; // [rsp+B0h] [rbp-188h]
  _OWORD v161[19]; // [rsp+C0h] [rbp-178h] BYREF

  Handle = Event;
  v157 = SubordinateObjects;
  v153 = Count;
  Object = MasterKeyHandle;
  v156 = IoStatusBlock;
  v159 = 0LL;
  v148 = 0LL;
  v154 = 0LL;
  v14 = 0LL;
  P = 0LL;
  v149 = 1;
  memset(v161, 0, 0x128uLL);
  v147 = 0;
  v152 = 0LL;
  v160 = 0;
  CmpInitializeThreadInfo((__int64)&v159);
  v144 = CmpAcquireShutdownRundown(v16, v15, v17);
  if ( !v144 )
  {
    v23 = -1073741431;
    goto LABEL_45;
  }
  v21 = 1;
  if ( Count > 1 )
    goto LABEL_99;
  v146 = Count == 1;
  LOBYTE(v19) = KeGetCurrentThread()->PreviousMode;
  AccessMode = v19;
  if ( (_BYTE)v19 )
  {
    if ( (CompletionFilter & 0x10000000) != 0 )
    {
      if ( Asynchronous && !ApcRoutine && Event )
      {
        v22 = 4;
        v149 = 4;
        goto LABEL_9;
      }
LABEL_99:
      CmpReleaseShutdownRundown(v19, v18);
      v23 = -1073741811;
      goto LABEL_45;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[1].Affinity.StaticBitmap[30] )
      goto LABEL_47;
    v72 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v72 == 332 || (v74 = v72 == 452, v73 = 0, v74) )
      v73 = 1;
    v53 = 1;
    if ( !v73 )
LABEL_47:
      v53 = 0;
    v147 = v53;
    ProbeForWrite(IoStatusBlock, 8 * (v53 ^ 1LL) + 8, 4u);
    ProbeForWrite(Buffer, BufferSize, 4u);
    if ( v53 )
    {
      IoStatusBlock->Pointer = (PVOID)259;
    }
    else
    {
      IoStatusBlock->Status = 259;
      IoStatusBlock->Information = 0LL;
    }
    LOBYTE(v19) = AccessMode;
    if ( Asynchronous )
    {
      v22 = 2;
      v149 = 2;
    }
    else
    {
      v22 = v149;
    }
LABEL_9:
    if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
    {
      v23 = -1073741811;
      goto LABEL_44;
    }
    LOBYTE(v20) = v19;
    v23 = CmObReferenceObjectByHandle((_DWORD)Object, 16, v21, v20, (__int64)&v148, 0LL);
    if ( v23 < 0 )
    {
LABEL_44:
      CmpReleaseShutdownRundown(v19, v18);
      goto LABEL_45;
    }
    v24 = 0LL;
    v151 = 0LL;
    if ( Count == 1 )
    {
      LODWORD(v161[6]) = -1;
      *((_QWORD *)&v161[9] + 1) = &v161[9];
      *(_QWORD *)&v161[9] = &v161[9];
      memset((char *)&v161[13] + 8, 0, 0x50uLL);
      v23 = CmObReferenceObjectByName((_DWORD)v157, 0, 16, v57, AccessMode, (__int64)v161, (__int64)&v151);
      CmpCleanupParseContext(v161, 0LL);
      if ( v23 < 0 )
        goto LABEL_42;
      v24 = (__int64 *)v151;
      if ( *(_QWORD *)(*((_QWORD *)v148 + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)v151 + 1) + 32LL) )
      {
        ObfDereferenceObject(v151);
        v23 = -1073741811;
        goto LABEL_42;
      }
    }
    PostBlock = CmpAllocatePostBlock(v22, 0x10000LL, 0LL, 0LL);
    v30 = PostBlock;
    v157 = (OBJECT_ATTRIBUTES *)PostBlock;
    if ( !PostBlock )
    {
      if ( Count == 1 )
        ObfDereferenceObject(v24);
      goto LABEL_108;
    }
    v31 = v149;
    if ( Count == 1 )
    {
      v14 = (void *)CmpAllocatePostBlock(v149, 0LL, v24, PostBlock);
      P = v14;
      if ( !v14 )
      {
        ObfDereferenceObject(v24);
        CmpFreePostBlock((PVOID)v30);
LABEL_108:
        v23 = -1073741670;
        goto LABEL_42;
      }
    }
    if ( v31 == 1 )
    {
      v32 = 0LL;
    }
    else
    {
      if ( Handle )
      {
        Object = 0LL;
        v23 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
        v154 = Object;
        if ( v23 < 0 )
        {
          if ( Count != 1 )
          {
LABEL_112:
            v76 = (PVOID)v30;
LABEL_113:
            CmpFreePostBlock(v76);
            goto LABEL_42;
          }
          v75 = v14;
LABEL_111:
          CmpFreePostBlock(v75);
          goto LABEL_112;
        }
        v32 = Object;
        KeResetEvent((PRKEVENT)Object);
      }
      else
      {
        v32 = 0LL;
      }
      v27 = v149;
      v33 = *(_QWORD **)(v30 + 64);
      if ( v149 == 2 )
      {
        v33[13] = v156;
        *(_QWORD *)(*(_QWORD *)(v30 + 64) + 8LL) = v32;
        CurrentThread = KeGetCurrentThread();
        v55 = AlpcMessageDeleteProcedure;
        if ( ApcRoutine )
          v55 = ApcRoutine;
        KeInitializeApc(
          *(_QWORD *)(v30 + 64) + 16LL,
          (__int64)CurrentThread,
          2,
          (__int64)CmpPostApc,
          (__int64)CmpPostApcRunDown,
          (__int64)v55,
          ApcRoutine != 0LL ? AccessMode : 0,
          (__int64)ApcContext);
        v24 = (__int64 *)v151;
      }
      else
      {
        *v33 = v32;
        if ( (_DWORD)v27 != 4 )
        {
          *(_QWORD *)(*(_QWORD *)(v30 + 64) + 8LL) = ApcRoutine;
          v27 = *(_QWORD *)(v30 + 64);
          *(_DWORD *)(v27 + 16) = (_DWORD)ApcContext;
        }
      }
    }
    CmpLockRegistry(v27, v26, v28, v29);
    v34 = *((_QWORD *)v148 + 1);
    if ( Count == 1 )
      CmpLockTwoKcbsShared(v34, v24[1]);
    else
      CmpLockKcbShared(v34);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v148, 0LL)
      || Count == 1 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(v24, 0LL) )
    {
      v58 = *((_QWORD *)v148 + 1);
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v58, v24[1]);
      else
        CmpUnlockKcb(v58);
      CmpUnlockRegistry(v60, v59, v61, v62);
      if ( v32 )
        ObfDereferenceObject(v32);
      if ( Count == 1 )
        CmpFreePostBlock(v14);
      CmpFreePostBlock((PVOID)v30);
      v23 = -1073741444;
      goto LABEL_42;
    }
    v35 = 1;
    if ( Count != 1
      || (Handle = v148, v63 = *(_QWORD *)(*((_QWORD *)v148 + 1) + 32LL), v64 = *(_QWORD *)(v24[1] + 32), v63 == v64) )
    {
      v36 = (unsigned __int64 *)(*(_QWORD *)(*((_QWORD *)v148 + 1) + 32LL) + 1680LL);
      v37 = KeAbPreAcquire((__int64)v36, 0LL);
      v38 = v37;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0LL) )
        ExfAcquirePushLockExclusiveEx(v36, v37, (__int64)v36);
      if ( v38 )
        *(_BYTE *)(v38 + 18) = 1;
    }
    else
    {
      if ( v63 < v64 )
      {
        v77 = (unsigned __int64 *)(v63 + 1680);
        v78 = KeAbPreAcquire((__int64)v77, 0LL);
        v79 = v78;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v77, 0LL) )
          ExfAcquirePushLockExclusiveEx(v77, v78, (__int64)v77);
        if ( v79 )
          *(_BYTE *)(v79 + 18) = 1;
        v80 = (unsigned __int64 *)(*(_QWORD *)(v24[1] + 32) + 1680LL);
        v81 = KeAbPreAcquire((__int64)v80, 0LL);
        v82 = v81;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v80, 0LL) )
          ExfAcquirePushLockExclusiveEx(v80, v81, (__int64)v80);
        if ( v82 )
          *(_BYTE *)(v82 + 18) = 1;
        v35 = 2;
      }
      else
      {
        v65 = (unsigned __int64 *)(v64 + 1680);
        v66 = KeAbPreAcquire(v64 + 1680, 0LL);
        v67 = v66;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v65, 0LL) )
          ExfAcquirePushLockExclusiveEx(v65, v66, (__int64)v65);
        if ( v67 )
          *(_BYTE *)(v67 + 18) = 1;
        v68 = (unsigned __int64 *)(*(_QWORD *)(*((_QWORD *)Handle + 1) + 32LL) + 1680LL);
        v69 = KeAbPreAcquire((__int64)v68, 0LL);
        v70 = v69;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v68, 0LL) )
          ExfAcquirePushLockExclusiveEx(v68, v69, (__int64)v68);
        if ( v70 )
          *(_BYTE *)(v70 + 18) = 1;
        v35 = 3;
      }
      v152 = *(_QWORD *)(v24[1] + 32);
    }
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    LOBYTE(v39) = WatchTree;
    v40 = v148;
    v23 = CmpNotifyChangeKey(v148, v30, CompletionFilter, v39);
    if ( v23 < 0 )
    {
      ExReleaseFastMutexUnsafe(&CmpPostLock);
      if ( v35 == 1 )
      {
        v83 = *(_QWORD *)(v40[1] + 32LL);
      }
      else if ( v35 == 2 )
      {
        v84 = v152;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v152 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v84 + 1680));
        KeAbPostRelease(v84 + 1680);
        v83 = *(_QWORD *)(*((_QWORD *)v148 + 1) + 32LL);
      }
      else
      {
        v85 = *(_QWORD *)(*((_QWORD *)v148 + 1) + 32LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v85 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v85 + 1680));
        KeAbPostRelease(v85 + 1680);
        v83 = v152;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v83 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v83 + 1680));
      KeAbPostRelease(v83 + 1680);
      v86 = *((_QWORD *)v148 + 1);
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v86, *((_QWORD *)v151 + 1));
      else
        CmpUnlockKcb(v86);
      CmpUnlockRegistry(v88, v87, v89, v90);
      if ( v154 )
        ObfDereferenceObject(v154);
      if ( Count != 1 )
        goto LABEL_42;
      v76 = P;
      goto LABEL_113;
    }
    v41 = Count == 1;
    if ( v153 == 1 )
    {
      ObfReferenceObject(v151);
      if ( v23 )
      {
        LOBYTE(v71) = WatchTree;
        v23 = CmpNotifyChangeKey(v151, P, CompletionFilter, v71);
        if ( v23 < 0 )
        {
          v91 = *(_QWORD *)v30;
          v92 = *(_QWORD **)(v30 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
            goto LABEL_210;
          if ( *v92 != v30 )
            goto LABEL_210;
          *v92 = v91;
          *(_QWORD *)(v91 + 8) = v92;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          v94 = *(_QWORD *)(v30 + 16);
          v95 = *(_QWORD **)(v30 + 24);
          if ( *(_QWORD *)(v94 + 8) != v30 + 16 || *v95 != v30 + 16 )
            goto LABEL_210;
          *v95 = v94;
          *(_QWORD *)(v94 + 8) = v95;
          if ( (_DWORD)KiIrqlFlags )
          {
            v96 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v96 <= 0xFu && CurrentIrql <= 0xFu && v96 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v99 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v74 = (v99 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v99;
              if ( v74 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(CurrentIrql);
          v41 = v146;
        }
      }
      else
      {
        CmpFreePostBlock(P);
        v41 = 0;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    if ( v35 != 1 )
    {
      if ( v35 != 2 )
      {
        v56 = *(_QWORD *)(*((_QWORD *)v148 + 1) + 32LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v56 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v56 + 1680));
        KeAbPostRelease(v56 + 1680);
        v42 = v152;
        goto LABEL_34;
      }
      v100 = v152;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v152 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v100 + 1680));
      KeAbPostRelease(v100 + 1680);
    }
    v42 = *(_QWORD *)(*((_QWORD *)v148 + 1) + 32LL);
LABEL_34:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v42 + 1680));
    KeAbPostRelease(v42 + 1680);
    v43 = *((_QWORD *)v148 + 1);
    if ( v153 == 1 )
      CmpUnlockTwoKcbs(v43, *((_QWORD *)v151 + 1));
    else
      CmpUnlockKcb(v43);
    CmpUnlockRegistry(v45, v44, v46, v47);
    v49 = v151;
    if ( v151 )
      ObfDereferenceObject(v151);
    if ( v23 < 0 )
    {
      CmpFreePostBlock((PVOID)v30);
      if ( v154 )
        ObfDereferenceObject(v154);
      goto LABEL_42;
    }
    if ( v149 != 1 )
    {
LABEL_42:
      v50 = v144;
      goto LABEL_43;
    }
    CmpReleaseShutdownRundown(v49, v48);
    v144 = 0;
    v101 = KeWaitForSingleObject(*(PVOID *)(v30 + 64), Executive, AccessMode, 1u, 0LL);
    v23 = v101;
    if ( v101 != 257 && v101 != 192 )
    {
      CmpLockRegistry(v103, v102, v104, v105);
      ExAcquireFastMutexUnsafe(&CmpPostLock);
      v106 = KeGetCurrentIrql();
      __writecr8(1uLL);
      v107 = P;
      if ( v41 )
      {
        v108 = *(PVOID **)P;
        if ( *(_QWORD *)P )
        {
          v109 = (PVOID *)*((_QWORD *)P + 1);
          if ( v108[1] != P || *v109 != P )
            goto LABEL_210;
          *v109 = v108;
          v108[1] = v109;
        }
        v110 = v107[2];
        v111 = (_QWORD *)v107[3];
        if ( *(_QWORD **)(v110 + 8) != v107 + 2 || (_QWORD *)*v111 != v107 + 2 )
          goto LABEL_210;
        *v111 = v110;
        *(_QWORD *)(v110 + 8) = v111;
      }
      v112 = *(_QWORD *)v30;
      if ( *(_QWORD *)v30 )
      {
        v113 = *(_QWORD **)(v30 + 8);
        if ( *(_QWORD *)(v112 + 8) != v30 || *v113 != v30 )
          goto LABEL_210;
        *v113 = v112;
        *(_QWORD *)(v112 + 8) = v113;
      }
      v114 = *(_QWORD *)(v30 + 16);
      v115 = *(_QWORD **)(v30 + 24);
      if ( *(_QWORD *)(v114 + 8) == v30 + 16 && *v115 == v30 + 16 )
      {
        *v115 = v114;
        *(_QWORD *)(v114 + 8) = v115;
        if ( (_DWORD)KiIrqlFlags )
        {
          v116 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v116 <= 0xFu && v106 <= 0xFu && v116 >= 2u )
          {
            v117 = KeGetCurrentPrcb();
            v118 = v117->SchedulerAssist;
            v119 = ~(unsigned __int16)(-1LL << (v106 + 1));
            v74 = (v119 & v118[5]) == 0;
            v118[5] &= v119;
            if ( v74 )
              KiRemoveSystemWorkPriorityKick((__int64)v117);
          }
        }
        __writecr8(v106);
        ExReleaseFastMutexUnsafe(&CmpPostLock);
        CmpUnlockRegistry(v121, v120, v122, v123);
        v23 = *(_DWORD *)(*(_QWORD *)(v30 + 64) + 24LL);
        v124 = v156;
        v156->Status = v23;
        if ( v147 )
          HIDWORD(v124->Pointer) = 0;
        else
          v124->Information = 0LL;
        v50 = 0;
        if ( v41 )
          CmpFreePostBlock(v107);
        CmpFreePostBlock((PVOID)v30);
LABEL_43:
        ObfDereferenceObject(v148);
        if ( !v50 )
        {
LABEL_45:
          CmCleanupThreadInfo((__int64 *)&v159);
          return v23;
        }
        goto LABEL_44;
      }
LABEL_210:
      __fastfail(3u);
    }
    CmpLockRegistry(v103, v102, v104, v105);
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    v125 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( v41 )
    {
      v126 = P;
      v127 = *(PVOID **)P;
      if ( *(_QWORD *)P )
      {
        v128 = (PVOID *)*((_QWORD *)P + 1);
        if ( v127[1] != P || *v128 != P )
          goto LABEL_210;
        *v128 = v127;
        v127[1] = v128;
      }
      v129 = (char *)(v126 + 2);
      v130 = v126[2];
      v131 = (char **)*((_QWORD *)v129 + 1);
      if ( *(char **)(v130 + 8) != v129 || *v131 != v129 )
        goto LABEL_210;
      *v131 = (char *)v130;
      *(_QWORD *)(v130 + 8) = v131;
    }
    v132 = *(_QWORD *)v30;
    if ( *(_QWORD *)v30 )
    {
      v133 = *(_QWORD **)(v30 + 8);
      if ( *(_QWORD *)(v132 + 8) != v30 || *v133 != v30 )
        goto LABEL_210;
      *v133 = v132;
      *(_QWORD *)(v132 + 8) = v133;
    }
    v134 = *(_QWORD *)(v30 + 16);
    v135 = *(_QWORD **)(v30 + 24);
    if ( *(_QWORD *)(v134 + 8) != v30 + 16 || *v135 != v30 + 16 )
      goto LABEL_210;
    *v135 = v134;
    *(_QWORD *)(v134 + 8) = v135;
    if ( (_DWORD)KiIrqlFlags )
    {
      v136 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v136 <= 0xFu && v125 <= 0xFu && v136 >= 2u )
      {
        v137 = KeGetCurrentPrcb();
        v138 = v137->SchedulerAssist;
        v139 = ~(unsigned __int16)(-1LL << (v125 + 1));
        v74 = (v139 & v138[5]) == 0;
        v138[5] &= v139;
        if ( v74 )
          KiRemoveSystemWorkPriorityKick((__int64)v137);
      }
    }
    __writecr8(v125);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    CmpUnlockRegistry(v141, v140, v142, v143);
    if ( !v41 )
      goto LABEL_112;
    v75 = P;
    goto LABEL_111;
  }
  if ( !Asynchronous )
  {
    v22 = 1;
    goto LABEL_9;
  }
  v22 = 3;
  v149 = 3;
  if ( !Count )
    goto LABEL_9;
  CmpReleaseShutdownRundown(v19, v18);
  CmCleanupThreadInfo((__int64 *)&v159);
  return -1073741811;
}
