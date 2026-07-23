/*
 * XREFs of ObDuplicateObject @ 0x1406FBB00
 * Callers:
 *     PspPropagateHandle @ 0x1406B9B74 (PspPropagateHandle.c)
 *     NtDuplicateObject @ 0x1406FB940 (NtDuplicateObject.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     PspCopyAndFixupParameters @ 0x1407A2614 (PspCopyAndFixupParameters.c)
 *     DbgkpOpenHandles @ 0x140937724 (DbgkpOpenHandles.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1409471A0 (IoConvertFileHandleToKernelHandle.c)
 *     CmpCreateEmptyHiveClone @ 0x140A1CD70 (CmpCreateEmptyHiveClone.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4761C (MiInitializePartitionSpecialPurposeMemory.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExGetHandlePointer @ 0x14022F830 (ExGetHandlePointer.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     SepDeleteAccessState @ 0x140232340 (SepDeleteAccessState.c)
 *     ObpIncrPointerCount @ 0x14025A4D4 (ObpIncrPointerCount.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ObpIsKernelHandle @ 0x1402BEDE4 (ObpIsKernelHandle.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB280 (SeAuditingWithTokenForSubcategory.c)
 *     SeCreateAccessState @ 0x1406C2E90 (SeCreateAccessState.c)
 *     NtClose @ 0x1406E44F0 (NtClose.c)
 *     ExpLookupHandleTableEntry @ 0x1406E6960 (ExpLookupHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7090 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     ObpDecrementHandleCount @ 0x140740144 (ObpDecrementHandleCount.c)
 *     ExpFreeHandleTableEntry @ 0x140740588 (ExpFreeHandleTableEntry.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1407B0990 (ExpAllocateHandleTableEntrySlow.c)
 *     ObpGrantAccess @ 0x1407B64C4 (ObpGrantAccess.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407BA970 (ExpBlockOnLockedHandleEntry.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1407BF9CC (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditHandleCreation @ 0x1407DCB58 (SeAuditHandleCreation.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1408A5AAC (ObpPostInterceptHandleDuplicate.c)
 *     ExpGetHandleExtraInfo @ 0x1408AB71A (ExpGetHandleExtraInfo.c)
 *     SeAuditHandleDuplication @ 0x1409CA99C (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1409E534C (EtwTraceDuplicateHandle.c)
 *     ExpSetHandleExtraInfo @ 0x1409F9430 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1409F94E8 (ExpUpdateDebugInfo.c)
 *     VfCheckUserHandle @ 0x140AD3D04 (VfCheckUserHandle.c)
 */

__int64 __fastcall ObDuplicateObject(
        ULONG_PTR a1,
        void *a2,
        ULONG_PTR a3,
        unsigned __int64 *a4,
        int a5,
        int a6,
        char a7,
        unsigned __int8 a8)
{
  PEPROCESS v9; // rdi
  __int64 ClientToken; // r15
  char v12; // r13
  int v13; // ebx
  int v14; // eax
  struct _EX_RUNDOWN_REF *v15; // rdi
  __int64 v16; // rsi
  struct _KTHREAD *CurrentThread; // r9
  __int64 v18; // rdi
  signed __int64 *v19; // rbx
  signed __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r9
  volatile signed __int64 *HandlePointer; // r13
  int v24; // r12d
  unsigned int v25; // edi
  signed __int64 BugCheckParameter4; // rax
  void *v27; // rax
  _KPROCESS *v28; // rcx
  unsigned int v29; // esi
  struct _EX_RUNDOWN_REF *v30; // rsi
  int *v31; // r13
  int v32; // edx
  unsigned int v33; // r14d
  int v34; // esi
  __int64 v35; // rcx
  _DWORD *v36; // rbx
  char v37; // r14
  int v38; // eax
  unsigned __int8 v39; // bl
  struct _SECURITY_SUBJECT_CONTEXT *v40; // rdi
  int v41; // r12d
  HANDLE v42; // r14
  char PreviousMode; // bl
  struct _SECURITY_SUBJECT_CONTEXT *v44; // r14
  char v45; // bl
  int v46; // edx
  unsigned __int64 v47; // rbx
  struct _KTHREAD *v48; // rcx
  char v49; // al
  unsigned int Number; // edx
  unsigned int v51; // ecx
  unsigned int v52; // r12d
  unsigned int v53; // r14d
  int *v54; // rdi
  unsigned int v55; // r14d
  unsigned int v56; // eax
  char HandleTableEntrySlow; // r14
  int *v58; // rdi
  unsigned __int64 *v59; // rsi
  unsigned __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdi
  unsigned __int64 v65; // rdi
  int v66; // esi
  int v67; // r15d
  bool v68; // r12
  unsigned __int64 v69; // rbx
  PVOID v71; // rsi
  struct _EX_RUNDOWN_REF *v72; // rdi
  unsigned int v73; // r12d
  volatile signed __int64 *p_SystemAffinityTokenListHead; // rsi
  __int64 *HandleExtraInfo; // rax
  ULONG_PTR v76; // rcx
  __int64 v77; // rax
  signed __int32 v78[8]; // [rsp+0h] [rbp-100h] BYREF
  bool v79; // [rsp+40h] [rbp-C0h]
  int v80; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h]
  int v82; // [rsp+50h] [rbp-B0h]
  int v83; // [rsp+54h] [rbp-ACh]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-A8h]
  __int64 v85; // [rsp+60h] [rbp-A0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *v86; // [rsp+68h] [rbp-98h]
  ULONG_PTR v87; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h]
  int v89; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v90; // [rsp+84h] [rbp-7Ch]
  int v91; // [rsp+88h] [rbp-78h]
  PEX_RUNDOWN_REF RunRef; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *v93; // [rsp+98h] [rbp-68h]
  unsigned __int64 v94; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v95; // [rsp+A8h] [rbp-58h]
  __int128 v96; // [rsp+B0h] [rbp-50h] BYREF
  int v97; // [rsp+C0h] [rbp-40h]
  char *v98; // [rsp+C8h] [rbp-38h]
  PEX_RUNDOWN_REF v99; // [rsp+D0h] [rbp-30h]
  __int64 v100; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v101; // [rsp+E0h] [rbp-20h]
  $115DCDF994C6370D29323EAB0E0C9502 v102; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v103[160]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v104[224]; // [rsp+1C0h] [rbp+C0h] BYREF

  v87 = a3;
  v9 = (PEPROCESS)a3;
  Handle = a2;
  BugCheckParameter1 = a1;
  v101 = a4;
  memset(&v102, 0, sizeof(v102));
  memset(v104, 0, sizeof(v104));
  ClientToken = 0LL;
  v89 = 0;
  memset(v103, 0, sizeof(v103));
  v80 = 0;
  v96 = 0LL;
  if ( (a6 & 0x200) != 0 && !a8 )
  {
    v9 = PsInitialSystemProcess;
    v87 = (ULONG_PTR)PsInitialSystemProcess;
  }
  if ( a4 )
    *a4 = 0LL;
  v12 = a7;
  v13 = a7 & 2;
  v83 = v13;
  if ( (a7 & 2) == 0 && (a5 & 0xCE00000) != 0 )
    return 3221225506LL;
  v14 = *(_DWORD *)(a1 + 992) & 1;
  if ( !v9 )
  {
    if ( !(_BYTE)v14 )
      goto LABEL_8;
    return 3221225506LL;
  }
  if ( ((_BYTE)v14 || (v9->SecureState.SecureHandle & 1) != 0)
    && ((_KPROCESS *)a1 != KeGetCurrentThread()->ApcState.Process || v9 != KeGetCurrentThread()->ApcState.Process) )
  {
    return 3221225506LL;
  }
LABEL_8:
  v15 = (struct _EX_RUNDOWN_REF *)(a1 + 1112);
  RunRef = (PEX_RUNDOWN_REF)(a1 + 1112);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) )
    return 3221225738LL;
  v16 = *(_QWORD *)(a1 + 1392);
  if ( !v16 )
  {
    ExReleaseRundownProtection_0(v15);
    return 3221225738LL;
  }
  CurrentThread = KeGetCurrentThread();
  v18 = (__int64)Handle;
  Object = CurrentThread;
  if ( (int)Handle >= 0 )
    goto LABEL_15;
  if ( Handle != (HANDLE)-1LL )
  {
    if ( Handle == (HANDLE)-2LL )
    {
      p_SystemAffinityTokenListHead = (volatile signed __int64 *)&CurrentThread[-1].SystemAffinityTokenListHead;
      v24 = 0x1FFFFF;
      v85 = 0LL;
      v25 = 0;
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)p_SystemAffinityTokenListHead, 1, 1u, 0x6E48624Fu);
      ObpIncrPointerCount(p_SystemAffinityTokenListHead);
LABEL_29:
      v28 = (_KPROCESS *)BugCheckParameter1;
      goto LABEL_30;
    }
    if ( a8 )
    {
LABEL_134:
      ExReleaseRundownProtection_0(RunRef);
      return 3221225480LL;
    }
    v16 = ObpKernelHandleTable;
    v18 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
LABEL_15:
    --CurrentThread->KernelApcDisable;
    if ( (v18 & 0x3FC) != 0 )
    {
      v19 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v16, v18);
      if ( v19 )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v19);
            v20 = *v19;
            if ( (*v19 & 1) != 0 )
              break;
            if ( !v20 )
            {
              CurrentThread = (struct _KTHREAD *)Object;
              goto LABEL_176;
            }
            ExpBlockOnLockedHandleEntry(v16, v19, v20);
          }
        }
        while ( v20 != _InterlockedCompareExchange64(v19, v20 - 1, v20) );
        HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(v19);
        v24 = v19[1] & 0x1FFFFFF;
        if ( *(_DWORD *)(v16 + 4) && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(v16, v18, v21, v22)) != 0LL )
          v85 = *HandleExtraInfo;
        else
          v85 = 0LL;
        v25 = ((__int64)*(unsigned int *)v19 >> 17) & 7 | 8;
        if ( (v19[1] & 0x2000000) == 0 )
          v25 = ((__int64)*(unsigned int *)v19 >> 17) & 7;
        BugCheckParameter4 = _InterlockedIncrement64(HandlePointer);
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(HandlePointer + 6), 0x10uLL, BugCheckParameter4);
        _InterlockedExchangeAdd64(v19, 1uLL);
        _InterlockedOr(v78, 0);
        if ( *(_QWORD *)(v16 + 48) )
          ExfUnblockPushLock((volatile __int64 *)(v16 + 48), 0LL);
        KeLeaveCriticalRegionThread((__int64)Object);
        if ( ObpTraceFlags )
          ObpPushStackInfo((__int64)HandlePointer, 1, 1u, 0x6E48624Fu);
        v13 = v83;
        v27 = (void *)(HandlePointer + 6);
        v12 = a7;
        Object = v27;
        goto LABEL_29;
      }
    }
LABEL_176:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_134;
  }
  v24 = 0x1FFFFF;
  v25 = 0;
  v85 = 0LL;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter1 - 48, 1, 1u, 0x6E48624Fu);
  ObpIncrPointerCount((volatile signed __int64 *)(BugCheckParameter1 - 48));
  v28 = (_KPROCESS *)BugCheckParameter1;
  Object = (PVOID)BugCheckParameter1;
LABEL_30:
  v29 = 0;
  if ( (v25 & 4) == 0 )
    LODWORD(v85) = 0;
  if ( !v87 )
  {
    if ( (v12 & 1) != 0 )
    {
      KiStackAttachProcess(v28, 0, (__int64)&v102);
      NtClose(Handle);
      KiUnstackDetachProcess(&v102);
    }
    else
    {
      v29 = -1073741811;
    }
    ExReleaseRundownProtection_0(RunRef);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return v29;
  }
  v30 = (struct _EX_RUNDOWN_REF *)(v87 + 1112);
  v99 = (PEX_RUNDOWN_REF)(v87 + 1112);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v87 + 1112)) )
    goto LABEL_152;
  v31 = *(int **)(v87 + 1392);
  if ( !v31 )
  {
    ExReleaseRundownProtection_0(v30);
    v12 = a7;
LABEL_152:
    if ( (v12 & 1) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v102);
      NtClose(Handle);
      KiUnstackDetachProcess(&v102);
    }
    ExReleaseRundownProtection_0(RunRef);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return 3221225738LL;
  }
  v79 = v31 == (int *)ObpKernelHandleTable;
  if ( v13 )
    v32 = v24;
  else
    v32 = a5;
  if ( (a7 & 4) != 0 )
    v33 = v25;
  else
    v33 = v25 & 0xC | a6 & 0xFFFFFDFF;
  v34 = v33 | 8;
  if ( (a7 & 8) == 0 )
    v34 = v33;
  v98 = (char *)Object - 48;
  v35 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v98[24] ^ (unsigned __int64)BYTE1(v98)];
  v100 = v35;
  v36 = (_DWORD *)(v35 + 76);
  if ( (v32 & 0xF0000000) != 0 )
  {
    if ( v32 < 0 )
      v32 |= *v36;
    if ( (v32 & 0x40000000) != 0 )
      v32 |= *(_DWORD *)(v35 + 80);
    if ( (v32 & 0x20000000) != 0 )
      v32 |= *(_DWORD *)(v35 + 84);
    if ( (v32 & 0x10000000) != 0 )
      v32 |= *(_DWORD *)(v35 + 88);
    v32 &= 0xFFFFFFFu;
  }
  v37 = 0;
  v38 = *(_DWORD *)(v35 + 92) | 0x1000000;
  v86 = 0LL;
  v80 = v32 & v38;
  if ( (~v24 & v32 & v38) == 0 )
  {
    v39 = a8;
    v40 = 0LL;
LABEL_44:
    v41 = ObpIncrementHandleCountEx(2u, (__int64)&v80, (struct _KPROCESS *)v87, (__int64)Object, v39, v34, 0LL);
    v82 = v41;
    goto LABEL_45;
  }
  if ( (v25 & 8) != 0 || *(_UNKNOWN **)(v35 + 152) != &SeDefaultObjectMethod )
  {
    v41 = -1073741790;
    v40 = 0LL;
    v82 = -1073741790;
    goto LABEL_47;
  }
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v87 )
  {
    KiStackAttachProcess((_KPROCESS *)v87, 0, (__int64)&v102);
    v37 = 1;
  }
  SeCreateAccessState((int)v103, (int)v104, v80, (__int64)v36);
  v39 = a8;
  v40 = (struct _SECURITY_SUBJECT_CONTEXT *)v103;
  v86 = (struct _SECURITY_SUBJECT_CONTEXT *)v103;
  v82 = ObpGrantAccess(2LL, Object, v103, a8, v34, &v80);
  v41 = v82;
  if ( v82 >= 0 )
    goto LABEL_44;
LABEL_45:
  if ( v37 )
    KiUnstackDetachProcess(&v102);
LABEL_47:
  if ( (a7 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v102);
    v42 = Handle;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((__int64)Handle, 0) )
      VfCheckUserHandle(v76);
    ObpCloseHandle((__int64)v42, PreviousMode);
    KiUnstackDetachProcess(&v102);
  }
  if ( v41 < 0 )
  {
    if ( v40 )
    {
      SepDeleteAccessState((__int64)v40);
      SeReleaseSubjectContext(v40 + 1);
    }
    ExReleaseRundownProtection_0(RunRef);
    ExReleaseRundownProtection_0(v99);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return (unsigned int)v41;
  }
  else
  {
    v44 = v86;
    v45 = v34;
    v91 = v34;
    if ( v86 )
    {
      v91 = v34;
      if ( BYTE2(v86->ImpersonationLevel) )
      {
        v77 = *(_QWORD *)&v86[2].ImpersonationLevel;
        v45 = v34 | 4;
        v91 = v34 | 4;
        LODWORD(v85) = *(_DWORD *)(v77 + 28);
      }
    }
    *((_QWORD *)&v96 + 1) = &v96;
    *(_QWORD *)&v96 = &v96;
    if ( (*(_BYTE *)(v100 + 66) & 0x40) != 0 && *(_QWORD *)(v100 + 200) != v100 + 200 )
    {
      v71 = Object;
      v72 = (struct _EX_RUNDOWN_REF *)v87;
      v89 = v80;
      v82 = ObpPreInterceptHandleDuplicate(
              (_DWORD)Object,
              v79,
              (unsigned int)&v89,
              BugCheckParameter1,
              v87,
              (__int64)&v96);
      v73 = v82;
      if ( v82 < 0 )
      {
        ObpDecrementHandleCount((ULONG_PTR)v72);
        if ( v44 )
        {
          SepDeleteAccessState((__int64)v44);
          SeReleaseSubjectContext(v44 + 1);
        }
        ExReleaseRundownProtection_0(RunRef);
        ExReleaseRundownProtection_0(v72 + 139);
        ObfDereferenceObjectWithTag(v71, 0x6E48624Fu);
        return v73;
      }
      if ( !v79 )
        v80 = v89;
    }
    v46 = v80 & 0x1FFFFFF;
    v95 = v80 & 0x1FFFFFF;
    v94 = ((_QWORD)v98 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v45 & 7) << 17);
    if ( (v45 & 8) != 0 )
      v46 |= 0x2000000u;
    LODWORD(v95) = v46;
    v94 = ((_QWORD)v98 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v45 & 7) << 17) | 1;
    LODWORD(v47) = 0;
    v48 = KeGetCurrentThread();
    v93 = v48;
    --v48->KernelApcDisable;
    v49 = *((_BYTE *)v31 + 44);
    if ( (v49 & 4) == 0 )
    {
      if ( (v49 & 1) != 0 )
        Number = 0;
      else
        Number = KeGetPcr()->Prcb.Number;
      v51 = ExpFreeListCount;
      v83 = ExpFreeListCount;
      v90 = Number;
LABEL_59:
      v52 = 0;
      v97 = *v31;
      v53 = Number;
      while ( 1 )
      {
        v54 = &v31[16 * v53 + 16];
        if ( *((_QWORD *)v54 + 1) )
        {
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&v31[16 * v53 + 16], 0LL);
          v59 = (unsigned __int64 *)*((_QWORD *)v54 + 1);
          if ( v59 )
          {
            v60 = v59[1];
            *((_QWORD *)v54 + 1) = v60;
            if ( !v60 )
              *((_QWORD *)v54 + 2) = 0LL;
            v61 = ++v54[6];
            if ( v61 > v54[7] )
              v54[7] = v61;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v54, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v31[16 * v53 + 16]);
          KeAbPostRelease((ULONG_PTR)&v31[16 * v53 + 16]);
          if ( v59 )
          {
            v62 = (__int64)((__int64)v59 - ((unsigned __int64)v59 & 0xFFFFFFFFFFFFF000uLL)) >> 4;
            v63 = *(_QWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFF000uLL) + 8);
            v47 = v63 + 4 * v62;
            if ( v85 && (unsigned int)ExpSetHandleExtraInfo(v31, v63 + 4 * v62, &v85) )
            {
              ExpFreeHandleTableEntry(v31, v47, v59);
              LODWORD(v47) = 0;
              goto LABEL_165;
            }
            v64 = (__int64)v93;
            if ( *((_QWORD *)v31 + 12) )
              ExpUpdateDebugInfo(v31, v93, v47, 1LL);
            v59[1] = v95;
            *v59 = v94;
            KeLeaveCriticalRegionThread(v64);
            v65 = v47;
            if ( v47 )
            {
              v44 = v86;
              if ( v86 )
                SeAuditHandleCreation((__int64)v86);
              if ( (v91 & 4) != 0 )
              {
                if ( v44 )
                {
                  ClientToken = (__int64)v44[1].ClientToken;
                  if ( !ClientToken )
                    ClientToken = (__int64)v44[1].PrimaryToken;
                }
                if ( SeAuditingWithTokenForSubcategory(124, ClientToken) )
                  SeAuditHandleDuplication(Handle, v47, BugCheckParameter1, v87);
              }
              v66 = v82;
              v67 = (int)Object;
              goto LABEL_86;
            }
LABEL_166:
            v44 = v86;
            goto LABEL_167;
          }
          v51 = v83;
        }
        v55 = v53 + 1;
        ++v52;
        v56 = 0;
        if ( v55 != v51 )
          v56 = v55;
        v53 = v56;
        if ( v52 >= v51 )
        {
          HandleTableEntrySlow = 1;
          v58 = &v31[16 * v90 + 16];
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v31 + 14), 0LL);
          if ( v97 == *v31 )
            HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v31, v58);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v31 + 7);
          KeAbPostRelease((ULONG_PTR)(v31 + 14));
          if ( HandleTableEntrySlow )
          {
            v51 = v83;
            Number = v90;
            goto LABEL_59;
          }
LABEL_165:
          KeLeaveCriticalRegionThread((__int64)v93);
          v65 = 0LL;
          goto LABEL_166;
        }
      }
    }
    KeLeaveCriticalRegionThread((__int64)v48);
    v65 = 0LL;
LABEL_167:
    ObpDecrementHandleCount(v87);
    v67 = (int)Object;
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    v66 = -1073741670;
LABEL_86:
    v68 = v79;
    v69 = v47 | 0xFFFFFFFF80000000uLL;
    if ( !v79 )
      v69 = v65;
    if ( v101 )
      *v101 = v69;
    if ( v44 )
    {
      SepDeleteAccessState((__int64)v44);
      SeReleaseSubjectContext(v44 + 1);
    }
    ExReleaseRundownProtection_0(RunRef);
    ExReleaseRundownProtection_0(v99);
    if ( (__int128 *)v96 != &v96 )
      ObpPostInterceptHandleDuplicate(v67, v68, v66, v80, (__int64)&v96);
    if ( (xmmword_140D1EAD0 & 0x40) != 0 && v66 >= 0 )
      EtwTraceDuplicateHandle(
        (_DWORD)Handle,
        v69,
        v67,
        *(_DWORD *)(BugCheckParameter1 + 1088),
        *(_DWORD *)(v87 + 1088),
        v100);
    return (unsigned int)v66;
  }
}
