/*
 * XREFs of CcInitializeCacheMapInternal @ 0x14025E7B0
 * Callers:
 *     CcInitializeCacheMapEx2 @ 0x140352CE0 (CcInitializeCacheMapEx2.c)
 *     CcInitializeCacheMap @ 0x14036A2D0 (CcInitializeCacheMap.c)
 *     CcInitializeCacheMapEx @ 0x140535A20 (CcInitializeCacheMapEx.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8F0 (ObDereferenceObjectDeferDelete.c)
 *     MmDisableModifiedWriteOfSection @ 0x14020EF90 (MmDisableModifiedWriteOfSection.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x1402998D8 (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x140299EA0 (CcDeleteSharedCacheMap.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CAB0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     PsGetPagePriorityThread @ 0x1402E1520 (PsGetPagePriorityThread.c)
 *     IopGetFileObjectExtension @ 0x14030169C (IopGetFileObjectExtension.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     DbgPrint @ 0x14032A510 (DbgPrint.c)
 *     CcInitializeVolumeCacheMap @ 0x14032EE94 (CcInitializeVolumeCacheMap.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x140341514 (CcCreatePrivateVolumeCacheMap.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14034656C (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcGetPartitionWithCreate @ 0x14034E6F4 (CcGetPartitionWithCreate.c)
 *     FsRtlIsNtstatusExpected @ 0x140359700 (FsRtlIsNtstatusExpected.c)
 *     CcGetPrivateVolumeCacheMap @ 0x14035BB1C (CcGetPrivateVolumeCacheMap.c)
 *     CcAllocateAndZeroSharedCacheMapRaiseOnError @ 0x14040F358 (CcAllocateAndZeroSharedCacheMapRaiseOnError.c)
 *     CcAllocatePrivateCacheMap @ 0x14040F390 (CcAllocatePrivateCacheMap.c)
 *     CcFreePrivateCacheMapIgnoreNull @ 0x14040F3AC (CcFreePrivateCacheMapIgnoreNull.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x14040F3D0 (CcFreeSharedCacheMapIgnoreNull.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ObDeleteCapturedInsertInfo @ 0x140692B60 (ObDeleteCapturedInsertInfo.c)
 *     CcCreateVacbArray @ 0x1407BB6EC (CcCreateVacbArray.c)
 *     MmCreateCacheManagerSection @ 0x1407BE59C (MmCreateCacheManagerSection.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140AAFC80 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcInitializeCacheMapInternal(
        __int64 a1,
        __m128i *a2,
        char a3,
        _WORD *a4,
        _WORD *a5,
        __int64 a6,
        int a7)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v10; // esi
  _QWORD *v11; // r12
  void *v12; // r13
  NTSTATUS PrivateVolumeCacheMap; // r14d
  __int64 v14; // xmm0_8
  int MiscFlags; // ebx
  __int64 v16; // rcx
  int v17; // ebx
  __int32 v18; // eax
  _DWORD *PoolWithTag; // rdi
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  _WORD *v24; // rdx
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  bool v32; // zf
  __int64 v33; // rbx
  PVOID v34; // rsi
  __int64 v35; // rbx
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 *v38; // rcx
  __int64 v39; // rax
  __int64 **v40; // rdx
  _QWORD *v41; // r15
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r9
  _QWORD *FileObjectExtension; // rcx
  __int64 v47; // r8
  int v48; // eax
  unsigned __int64 v49; // rbx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  int v54; // ebx
  int v55; // eax
  int v56; // eax
  KSPIN_LOCK *v57; // r12
  unsigned int v58; // ecx
  __int16 v59; // ax
  int v60; // eax
  __int64 v61; // rax
  _QWORD *v62; // rax
  unsigned __int64 v63; // rbx
  unsigned __int8 v64; // cl
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // eax
  unsigned __int64 v68; // rbx
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  __int64 v73; // rax
  unsigned __int64 v74; // rbx
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r10
  _DWORD *v77; // r9
  int v78; // eax
  unsigned __int64 v79; // rbx
  unsigned __int8 v80; // al
  struct _KPRCB *v81; // r10
  _DWORD *v82; // r9
  int v83; // eax
  struct _KEVENT *v84; // rcx
  char *v85; // rax
  unsigned __int64 v86; // rbx
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r10
  _DWORD *v89; // r9
  int v90; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v92; // al
  struct _KPRCB *v93; // r10
  _DWORD *v94; // r9
  int v95; // eax
  _QWORD *v96; // rax
  unsigned __int64 v97; // rbx
  unsigned __int8 v98; // al
  struct _KPRCB *v99; // r10
  _DWORD *v100; // r9
  int v101; // eax
  unsigned __int64 v102; // rbx
  unsigned __int8 v103; // al
  struct _KPRCB *v104; // r10
  _DWORD *v105; // r9
  int v106; // eax
  NTSTATUS v107; // eax
  BOOLEAN v108; // al
  _DWORD *v109; // rbx
  unsigned __int64 v110; // rbx
  unsigned __int8 v111; // al
  struct _KPRCB *v112; // r10
  _DWORD *v113; // r9
  int v114; // eax
  unsigned __int64 v115; // rbx
  unsigned __int8 v116; // al
  struct _KPRCB *v117; // r10
  _DWORD *v118; // r9
  int v119; // eax
  _DWORD *v120; // r15
  int v121; // esi
  unsigned __int64 v122; // rbx
  unsigned __int8 v123; // cl
  struct _KPRCB *v124; // r10
  _DWORD *v125; // r9
  int v126; // eax
  unsigned __int64 v127; // rbx
  unsigned __int8 v128; // al
  struct _KPRCB *v129; // r10
  _DWORD *v130; // r9
  int v131; // eax
  PVOID PrivateCacheMap; // rax
  struct _KEVENT *v133; // rcx
  _DWORD *v134; // rbx
  unsigned __int64 v135; // rbx
  unsigned __int8 v136; // al
  struct _KPRCB *v137; // r10
  _DWORD *v138; // r9
  int v139; // eax
  unsigned __int64 v140; // rbx
  unsigned __int8 v141; // al
  struct _KTHREAD *v142; // rcx
  int PagePriorityThread; // ecx
  __int64 v144; // r8
  _QWORD *v145; // rax
  int v146; // ecx
  _QWORD *v147; // rdx
  unsigned int v148; // eax
  unsigned __int64 v149; // rbx
  unsigned __int8 v150; // al
  struct _KPRCB *v151; // r9
  _DWORD *v152; // r8
  int v153; // eax
  BOOLEAN IsNtstatusExpected; // al
  int v155; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v159; // eax
  int v160; // r15d
  __int64 v161; // rcx
  unsigned __int64 v162; // rcx
  __int64 v163; // rbx
  unsigned __int64 v164; // rbx
  unsigned __int8 v165; // al
  struct _KPRCB *v166; // r10
  _DWORD *v167; // r9
  int v168; // eax
  unsigned __int8 v169; // al
  struct _KPRCB *v170; // r9
  _DWORD *v171; // r8
  int v172; // edx
  char v173; // [rsp+30h] [rbp-81h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-79h] BYREF
  __int64 v175; // [rsp+50h] [rbp-61h]
  PVOID P; // [rsp+58h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE v177; // [rsp+60h] [rbp-51h] BYREF
  int v178; // [rsp+78h] [rbp-39h]
  int v179; // [rsp+7Ch] [rbp-35h]
  PVOID v180; // [rsp+80h] [rbp-31h] BYREF
  int v181; // [rsp+88h] [rbp-29h]
  int v182; // [rsp+8Ch] [rbp-25h]
  __m128i v183; // [rsp+90h] [rbp-21h]
  __int64 v184; // [rsp+A0h] [rbp-11h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-9h]
  struct _KTHREAD *v186; // [rsp+B0h] [rbp-1h]

  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v11 = 0LL;
  P = 0LL;
  v12 = 0LL;
  Process = CurrentThread->ApcState.Process;
  PrivateVolumeCacheMap = 0;
  v178 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *(_QWORD *)&v177.OldIrql = 0LL;
  v173 = 0;
  v179 = 0;
  v175 = 0LL;
  v180 = 0LL;
  if ( CcDbgDisableDAX )
    a7 = -2;
  v186 = CurrentThread;
  v182 = a7;
  LockHandle.LockQueue = 0LL;
  v177.LockQueue = 0LL;
  if ( a4 )
  {
    if ( !a5 )
      goto LABEL_5;
LABEL_307:
    RtlRaiseStatus(-1073741811);
  }
  if ( a5 && (*a5 != 1 || a5[1] != 40) )
    goto LABEL_307;
LABEL_5:
  v14 = a2[1].m128i_i64[0];
  MiscFlags = CurrentThread->MiscFlags;
  v16 = (unsigned int)_mm_cvtsi128_si32(*a2);
  v183 = *a2;
  if ( !v183.m128i_i64[0] )
    v16 = 1LL;
  v17 = MiscFlags & 0x400;
  v183.m128i_i32[0] = v16;
  v184 = v14;
  v181 = v17;
  if ( *(_BYTE *)(a1 + 75) )
  {
    v183.m128i_i64[0] += 0xFFFFFLL;
    v18 = (v16 + 0xFFFFF) & 0xFFF00000;
  }
  else
  {
    v183.m128i_i64[0] += 0x3FFFFLL;
    v18 = (v16 + 0x3FFFF) & 0xFFFC0000;
  }
  v183.m128i_i32[0] = v18;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
    goto LABEL_37;
  while ( 1 )
  {
    if ( EnableFeatureServicing_45016043 )
    {
      PoolWithTag = (_DWORD *)CcAllocateAndZeroSharedCacheMapRaiseOnError(v16, 608LL);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x260uLL, 0x63536343u);
      if ( !PoolWithTag )
        RtlRaiseStatus(-1073741670);
    }
    v11 = PoolWithTag;
    P = PoolWithTag;
    if ( (v182 & 1) != 0 )
      v10 |= 1u;
    v20 = MmCreateCacheManagerSection(&v180, v183.m128i_i64[0], v10, a1);
    PrivateVolumeCacheMap = v20;
    if ( v20 == -1073740277 )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      if ( CcSectionDeletionSequencePhase3 != CcSectionDeletionSequencePhase1 )
        PrivateVolumeCacheMap = -1073700856;
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
          v159 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v32 = (v159 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v159;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      goto LABEL_261;
    }
    if ( v20 < 0 )
    {
      IsNtstatusExpected = FsRtlIsNtstatusExpected(v20);
      v155 = PrivateVolumeCacheMap;
      if ( !IsNtstatusExpected )
        v155 = -1073741590;
      PrivateVolumeCacheMap = v155;
      goto LABEL_262;
    }
    ObDeleteCapturedInsertInfo(v180);
    v175 = CcGetPartitionWithCreate(*(_QWORD *)(*(_QWORD *)(qword_140C674C8
                                                          + 8LL * (*(_WORD *)(**(_QWORD **)(a1 + 40) + 60LL) & 0x3FF))
                                              + 200LL));
    v21 = v175;
    if ( !v175 )
    {
      v121 = 0;
      PrivateVolumeCacheMap = -1073741670;
      goto LABEL_264;
    }
    v22 = v183.m128i_i64[1];
    *PoolWithTag = 39846655;
    *(_QWORD *)(PoolWithTag + 139) = -1LL;
    *((_QWORD *)PoolWithTag + 12) = a1;
    *((_QWORD *)PoolWithTag + 1) = v22;
    v23 = v184;
    *((_QWORD *)PoolWithTag + 5) = v184;
    *((_QWORD *)PoolWithTag + 6) = v23;
    LODWORD(v23) = HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]);
    *((_QWORD *)PoolWithTag + 67) = v21;
    PoolWithTag[130] = v23;
    PrivateVolumeCacheMap = CcInitializeVolumeCacheMap((PVOID)a1);
    if ( PrivateVolumeCacheMap < 0 )
      goto LABEL_262;
    if ( CcEnablePerVolumeLazyWriter )
    {
      PrivateVolumeCacheMap = CcCreatePrivateVolumeCacheMap(v175, PoolWithTag, PoolWithTag + 150);
      if ( PrivateVolumeCacheMap < 0 )
        goto LABEL_262;
    }
    PoolWithTag[72] = 1;
    *((_QWORD *)PoolWithTag + 37) = 0LL;
    PoolWithTag[76] = 0;
    *((_WORD *)PoolWithTag + 156) = 1;
    *((_BYTE *)PoolWithTag + 314) = 6;
    PoolWithTag[79] = 0;
    *((_QWORD *)PoolWithTag + 41) = PoolWithTag + 80;
    *((_QWORD *)PoolWithTag + 40) = PoolWithTag + 80;
    *((_QWORD *)PoolWithTag + 13) = 0LL;
    if ( a3 )
      PoolWithTag[38] |= 4u;
    if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 )
      PoolWithTag[38] |= 0x40u;
    if ( !v17 )
      PoolWithTag[38] |= 0x200000u;
    v24 = a4;
    *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 4;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 4;
    *((_QWORD *)PoolWithTag + 28) = a6;
    v25 = PoolWithTag[39];
    if ( a4 )
    {
      v26 = v25 & 0xFFFFFFFE;
    }
    else
    {
      v24 = a5;
      v26 = v25 | 1;
    }
    PoolWithTag[39] = v26;
    *((_QWORD *)PoolWithTag + 27) = v24;
    *((_QWORD *)PoolWithTag + 30) = PoolWithTag + 58;
    *((_QWORD *)PoolWithTag + 29) = PoolWithTag + 58;
LABEL_37:
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    if ( *(_QWORD *)(a1 + 48) )
      break;
    v27 = *(_QWORD *)(a1 + 40);
    PoolWithTag = *(_DWORD **)(v27 + 8);
    if ( PoolWithTag )
    {
      v42 = *((_QWORD *)PoolWithTag + 67);
      v43 = *(_QWORD *)(v27 + 8);
      v175 = v42;
      v44 = CcGetPrivateVolumeCacheMap(v43);
      FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(v45, 8LL);
      if ( FileObjectExtension && *FileObjectExtension != *(_QWORD *)(v42 + 8) )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v42 + 768), &v177);
        v48 = PoolWithTag[1];
        if ( !v48 || v48 == PoolWithTag[136] )
        {
          LOBYTE(v47) = 1;
          PrivateVolumeCacheMap = -1073741608;
          CcScheduleLazyWriteScan(v42, v44, v47, 0LL);
          v173 = 1;
        }
        else
        {
          PrivateVolumeCacheMap = -1073740277;
        }
        KxReleaseQueuedSpinLock(&v177);
        KxReleaseQueuedSpinLock(&LockHandle);
        v49 = LockHandle.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v50 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v50 <= 0xFu && LockHandle.OldIrql <= 0xFu && v50 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            v53 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v32 = (v53 & v52[5]) == 0;
            v52[5] &= v53;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
        __writecr8(v49);
        v54 = 0;
        goto LABEL_266;
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v42 + 768), &v177);
      v41 = (_QWORD *)a1;
      if ( (*(_DWORD *)(a1 + 80) & 0x20) == 0 )
        PoolWithTag[38] &= ~0x40u;
      v55 = PoolWithTag[38];
      if ( (v55 & 0x200000) != 0 && v181 )
        PoolWithTag[38] = v55 & 0xFFDFFFFF;
      v56 = HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]);
      if ( v56 )
        PoolWithTag[130] = v56;
      v34 = P;
LABEL_75:
      KxReleaseQueuedSpinLock(&v177);
      v175 = *((_QWORD *)PoolWithTag + 67);
      v57 = (KSPIN_LOCK *)(v175 + 768);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v175 + 768), &v177);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (PoolWithTag[38] & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v58 = PoolWithTag[38] & 0xFFFFFFEF;
      v59 = PoolWithTag[38] & 0xFFEF;
      PoolWithTag[38] = v58;
      v60 = v59 & 0x100;
      if ( *((_QWORD *)PoolWithTag + 11) )
      {
        if ( !v60 )
        {
          ++PoolWithTag[1];
          KxReleaseQueuedSpinLock(&v177);
          v110 = v177.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            v111 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v111 <= 0xFu && v177.OldIrql <= 0xFu && v111 >= 2u )
            {
              v112 = KeGetCurrentPrcb();
              v113 = v112->SchedulerAssist;
              v114 = ~(unsigned __int16)(-1LL << (v177.OldIrql + 1));
              v32 = (v114 & v113[5]) == 0;
              v113[5] &= v114;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v112);
            }
          }
          __writecr8(v110);
          goto LABEL_168;
        }
      }
      else if ( !v60 )
      {
        ++PoolWithTag[1];
        v61 = *((_QWORD *)PoolWithTag + 23);
        PoolWithTag[38] = v58 | 0x100;
        if ( v61 )
        {
          *(_WORD *)v61 = 0;
          *(_BYTE *)(v61 + 2) = 6;
          *(_DWORD *)(v61 + 4) = 0;
          v62 = (_QWORD *)(v61 + 8);
          v62[1] = v62;
          *v62 = v62;
        }
        KxReleaseQueuedSpinLock(&v177);
        v63 = v177.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v64 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v64 <= 0xFu && v177.OldIrql <= 0xFu && v64 >= 2u )
          {
            v65 = KeGetCurrentPrcb();
            v66 = v65->SchedulerAssist;
            v67 = ~(unsigned __int16)(-1LL << (v177.OldIrql + 1));
            v32 = (v67 & v66[5]) == 0;
            v66[5] &= v67;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v65);
          }
        }
        __writecr8(v63);
        KxReleaseQueuedSpinLock(&LockHandle);
        v68 = LockHandle.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v69 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v69 <= 0xFu && LockHandle.OldIrql <= 0xFu && v69 >= 2u )
          {
            v70 = KeGetCurrentPrcb();
            v71 = v70->SchedulerAssist;
            v72 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v32 = (v72 & v71[5]) == 0;
            v71[5] &= v72;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v70);
          }
        }
        __writecr8(v68);
        v178 = 1;
        if ( *((_QWORD *)PoolWithTag + 22) )
        {
          PrivateVolumeCacheMap = -1073741811;
        }
        else
        {
          if ( !v180 )
            KeBugCheckEx(0x34u, 0x7B8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *((_QWORD *)PoolWithTag + 22) = v180;
          v73 = v41[3];
          v180 = 0LL;
          if ( (*(_BYTE *)(v73 + 6) & 1) == 0 && !v41[4] )
          {
            MmDisableModifiedWriteOfSection(v41[5]);
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v57, &v177);
            PoolWithTag[38] |= 0x200u;
            KxReleaseQueuedSpinLock(&v177);
            KxReleaseQueuedSpinLock(&LockHandle);
            v74 = LockHandle.OldIrql;
            if ( (_DWORD)KiIrqlFlags )
            {
              v75 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v75 <= 0xFu && LockHandle.OldIrql <= 0xFu && v75 >= 2u )
              {
                v76 = KeGetCurrentPrcb();
                v77 = v76->SchedulerAssist;
                v78 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v32 = (v78 & v77[5]) == 0;
                v77[5] &= v78;
                if ( v32 )
                  KiRemoveSystemWorkPriorityKick(v76);
              }
            }
            __writecr8(v74);
          }
          PrivateVolumeCacheMap = CcCreateVacbArray(PoolWithTag, v183.m128i_i64[0]);
          if ( PrivateVolumeCacheMap >= 0 )
          {
            if ( (v182 & 1) != 0 )
            {
              KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
              KeAcquireInStackQueuedSpinLockAtDpcLevel(v57, &v177);
              PoolWithTag[38] |= 0x40000000u;
              KxReleaseQueuedSpinLock(&v177);
              KxReleaseQueuedSpinLock(&LockHandle);
              v79 = LockHandle.OldIrql;
              if ( (_DWORD)KiIrqlFlags )
              {
                v80 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v80 <= 0xFu && LockHandle.OldIrql <= 0xFu && v80 >= 2u )
                {
                  v81 = KeGetCurrentPrcb();
                  v82 = v81->SchedulerAssist;
                  v83 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v32 = (v83 & v82[5]) == 0;
                  v82[5] &= v83;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v81);
                }
              }
              __writecr8(v79);
            }
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v57, &v177);
            v84 = (struct _KEVENT *)*((_QWORD *)PoolWithTag + 23);
            PoolWithTag[38] &= ~0x100u;
            if ( v84 )
              KeSetEvent(v84, 0, 0);
            KxReleaseQueuedSpinLock(&v177);
LABEL_168:
            KxReleaseQueuedSpinLock(&LockHandle);
            v115 = LockHandle.OldIrql;
            if ( (_DWORD)KiIrqlFlags )
            {
              v116 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v116 <= 0xFu && LockHandle.OldIrql <= 0xFu && v116 >= 2u )
              {
                v117 = KeGetCurrentPrcb();
                v118 = v117->SchedulerAssist;
                v119 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v32 = (v119 & v118[5]) == 0;
                v118[5] &= v119;
                if ( v32 )
                  KiRemoveSystemWorkPriorityKick(v117);
              }
            }
            __writecr8(v115);
            goto LABEL_176;
          }
          v173 = 0;
        }
LABEL_205:
        v11 = P;
        v109 = PoolWithTag;
LABEL_206:
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v175 + 768), &v177);
        if ( v178 )
        {
          v133 = (struct _KEVENT *)*((_QWORD *)PoolWithTag + 23);
          if ( v133 )
            KeSetEvent(v133, 0, 0);
          v134 = PoolWithTag + 38;
          PoolWithTag[38] &= ~0x100u;
        }
        else
        {
          v134 = v109 + 38;
        }
        v32 = PoolWithTag[1]-- == 1;
        if ( v32 && (*v134 & 0x20) == 0 && !PoolWithTag[28] )
        {
          CcDeleteSharedCacheMap(PoolWithTag, &LockHandle, 0LL);
LABEL_295:
          if ( EnableFeatureServicing_45016043 )
          {
            CcFreeSharedCacheMapIgnoreNull(v11);
            CcFreePrivateCacheMapIgnoreNull(v12);
          }
          else
          {
            if ( v11 )
              ExFreePoolWithTag(v11, 0x63536343u);
            if ( v12 )
              ExFreePoolWithTag(v12, 0x63506343u);
          }
          if ( v180 )
            ObDereferenceObjectDeferDelete(v180);
          if ( PrivateVolumeCacheMap < 0 )
          {
            if ( v173 )
              KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
            RtlRaiseStatus(PrivateVolumeCacheMap);
          }
          return;
        }
        KxReleaseQueuedSpinLock(&v177);
        v135 = v177.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          v136 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v136 <= 0xFu && v177.OldIrql <= 0xFu && v136 >= 2u )
          {
            v137 = KeGetCurrentPrcb();
            v138 = v137->SchedulerAssist;
            v139 = ~(unsigned __int16)(-1LL << (v177.OldIrql + 1));
            v32 = (v139 & v138[5]) == 0;
            v138[5] &= v139;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v137);
          }
        }
        __writecr8(v135);
        KxReleaseQueuedSpinLock(&LockHandle);
        v140 = LockHandle.OldIrql;
        if ( !(_DWORD)KiIrqlFlags
          || (v141 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) == 0)
          || v141 > 0xFu
          || LockHandle.OldIrql > 0xFu
          || v141 < 2u )
        {
LABEL_294:
          __writecr8(v140);
          goto LABEL_295;
        }
LABEL_292:
        v170 = KeGetCurrentPrcb();
        v171 = v170->SchedulerAssist;
        v172 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1)) & v171[5];
        v171[5] = v172;
        if ( !v172 )
          KiRemoveSystemWorkPriorityKick(v170);
        goto LABEL_294;
      }
      if ( !*((_QWORD *)PoolWithTag + 23) )
      {
        v85 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
        *((_QWORD *)PoolWithTag + 23) = v85;
        if ( !v85 )
        {
          KxReleaseQueuedSpinLock(&v177);
          v86 = v177.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            v87 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v87 <= 0xFu && v177.OldIrql <= 0xFu && v87 >= 2u )
            {
              v88 = KeGetCurrentPrcb();
              v89 = v88->SchedulerAssist;
              v90 = ~(unsigned __int16)(-1LL << (v177.OldIrql + 1));
              v32 = (v90 & v89[5]) == 0;
              v89[5] &= v90;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v88);
            }
          }
          __writecr8(v86);
          KxReleaseQueuedSpinLock(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            v92 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v92 <= 0xFu && LockHandle.OldIrql <= 0xFu && v92 >= 2u )
            {
              v93 = KeGetCurrentPrcb();
              v94 = v93->SchedulerAssist;
              v95 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v32 = (v95 & v94[5]) == 0;
              v94[5] &= v95;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v93);
            }
          }
          v11 = P;
          PrivateVolumeCacheMap = -1073741670;
LABEL_261:
          __writecr8(OldIrql);
LABEL_262:
          v121 = 0;
LABEL_263:
          v21 = v175;
LABEL_264:
          v54 = v121;
          v160 = v121;
          if ( !PoolWithTag )
            goto LABEL_277;
          v173 = 0;
          if ( v121 )
          {
LABEL_267:
            v160 = v54;
            if ( v21 && !v54 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v21 + 768), &v177);
              v160 = 1;
            }
            if ( !v179 && !PoolWithTag[28] && PoolWithTag[1] )
              CcInsertIntoCleanSharedCacheMapList(PoolWithTag);
            v161 = *((_QWORD *)PoolWithTag + 35);
            if ( v161 )
            {
              do
              {
                v162 = v161 & 0xFFFFFFFFFFFFFFFEuLL;
                v163 = *(_QWORD *)v162;
                KeSetEvent((PRKEVENT)(v162 + 8), 0, 0);
                v161 = v163;
              }
              while ( v163 );
            }
            PoolWithTag[38] &= ~0x10000u;
            *((_QWORD *)PoolWithTag + 35) = 0LL;
LABEL_277:
            if ( v160 )
            {
              KxReleaseQueuedSpinLock(&v177);
              v164 = v177.OldIrql;
              if ( (_DWORD)KiIrqlFlags )
              {
                v165 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v165 <= 0xFu && v177.OldIrql <= 0xFu && v165 >= 2u )
                {
                  v166 = KeGetCurrentPrcb();
                  v167 = v166->SchedulerAssist;
                  v168 = ~(unsigned __int16)(-1LL << (v177.OldIrql + 1));
                  v32 = (v168 & v167[5]) == 0;
                  v167[5] &= v168;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v166);
                }
              }
              __writecr8(v164);
            }
            if ( !v121 )
              goto LABEL_295;
            KxReleaseQueuedSpinLock(&LockHandle);
            v140 = LockHandle.OldIrql;
            if ( !(_DWORD)KiIrqlFlags )
              goto LABEL_294;
            v169 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 || v169 > 0xFu || LockHandle.OldIrql > 0xFu || v169 < 2u )
              goto LABEL_294;
            goto LABEL_292;
          }
LABEL_266:
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          v21 = v175;
          v121 = 1;
          goto LABEL_267;
        }
        *(_WORD *)v85 = 0;
        v85[2] = 6;
        *((_DWORD *)v85 + 1) = 0;
        v96 = v85 + 8;
        v96[1] = v96;
        *v96 = v96;
      }
      ++PoolWithTag[1];
      KxReleaseQueuedSpinLock(&v177);
      v97 = v177.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v98 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v98 <= 0xFu && v177.OldIrql <= 0xFu && v98 >= 2u )
        {
          v99 = KeGetCurrentPrcb();
          v100 = v99->SchedulerAssist;
          v101 = ~(unsigned __int16)(-1LL << (v177.OldIrql + 1));
          v32 = (v101 & v100[5]) == 0;
          v100[5] &= v101;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v99);
        }
      }
      __writecr8(v97);
      KxReleaseQueuedSpinLock(&LockHandle);
      v102 = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v103 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v103 <= 0xFu && LockHandle.OldIrql <= 0xFu && v103 >= 2u )
        {
          v104 = KeGetCurrentPrcb();
          v105 = v104->SchedulerAssist;
          v106 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v32 = (v106 & v105[5]) == 0;
          v105[5] &= v106;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v104);
        }
      }
      __writecr8(v102);
      KeWaitForSingleObject(*((PVOID *)PoolWithTag + 23), Executive, 0, 0, 0LL);
      v107 = PoolWithTag[40];
      if ( v107 >= 0 )
      {
LABEL_176:
        if ( EnableFeatureServicing_45016043 )
        {
          CcFreeSharedCacheMapIgnoreNull(v34);
        }
        else
        {
          if ( !v34 )
          {
LABEL_181:
            v120 = PoolWithTag + 96;
            if ( *((_WORD *)PoolWithTag + 192) )
              goto LABEL_200;
            while ( 1 )
            {
              v121 = 1;
              KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
              KeAcquireInStackQueuedSpinLock(v57, &v177);
              if ( *(_QWORD *)(a1 + 48) )
              {
                v148 = PoolWithTag[1];
                if ( v148 <= 1 )
                  KeBugCheckEx(0x34u, 0x917uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
                v11 = P;
                PoolWithTag[1] = v148 - 1;
                PoolWithTag = 0LL;
                goto LABEL_263;
              }
              if ( !*(_WORD *)v120 )
                goto LABEL_229;
              if ( v12 )
                break;
              KxReleaseQueuedSpinLock(&v177);
              v122 = v177.OldIrql;
              if ( (_DWORD)KiIrqlFlags )
              {
                v123 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v123 <= 0xFu && v177.OldIrql <= 0xFu && v123 >= 2u )
                {
                  v124 = KeGetCurrentPrcb();
                  v125 = v124->SchedulerAssist;
                  v126 = ~(unsigned __int16)(-1LL << (v177.OldIrql + 1));
                  v32 = (v126 & v125[5]) == 0;
                  v125[5] &= v126;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v124);
                }
              }
              __writecr8(v122);
              KxReleaseQueuedSpinLock(&LockHandle);
              v127 = LockHandle.OldIrql;
              if ( (_DWORD)KiIrqlFlags )
              {
                v128 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v128 <= 0xFu && LockHandle.OldIrql <= 0xFu && v128 >= 2u )
                {
                  v129 = KeGetCurrentPrcb();
                  v130 = v129->SchedulerAssist;
                  v131 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v32 = (v131 & v130[5]) == 0;
                  v130[5] &= v131;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v129);
                }
              }
              __writecr8(v127);
LABEL_200:
              if ( EnableFeatureServicing_45016043 )
                PrivateCacheMap = (PVOID)CcAllocatePrivateCacheMap();
              else
                PrivateCacheMap = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
              v12 = PrivateCacheMap;
              if ( !PrivateCacheMap )
              {
                v178 = 0;
                PrivateVolumeCacheMap = -1073741670;
                v173 = 0;
                goto LABEL_205;
              }
            }
            v120 = v12;
            v12 = 0LL;
LABEL_229:
            v142 = v186;
            *(_OWORD *)v120 = 0LL;
            *((_OWORD *)v120 + 1) = 0LL;
            *((_OWORD *)v120 + 2) = 0LL;
            *((_OWORD *)v120 + 3) = 0LL;
            *((_OWORD *)v120 + 4) = 0LL;
            *((_OWORD *)v120 + 5) = 0LL;
            *((_OWORD *)v120 + 6) = 0LL;
            *((_QWORD *)v120 + 14) = 0LL;
            *(_WORD *)v120 = 766;
            *((_QWORD *)v120 + 1) = a1;
            v120[1] = 4095;
            PagePriorityThread = (unsigned __int8)PsGetPagePriorityThread(v142);
            v145 = v120 + 24;
            v146 = (*v120 ^ (PagePriorityThread << 18)) & 0x1C0000;
            *((_QWORD *)v120 + 10) = 0LL;
            *v120 ^= v146;
            v147 = (_QWORD *)*((_QWORD *)PoolWithTag + 30);
            if ( (_DWORD *)*v147 != PoolWithTag + 58 )
LABEL_230:
              __fastfail(3u);
            v11 = P;
            *v145 = PoolWithTag + 58;
            *((_QWORD *)v120 + 13) = v147;
            *v147 = v145;
            *((_QWORD *)PoolWithTag + 30) = v145;
            *(_QWORD *)(v144 + 48) = v120;
            goto LABEL_263;
          }
          ExFreePoolWithTag(v34, 0x63536343u);
        }
        P = 0LL;
        goto LABEL_181;
      }
      PrivateVolumeCacheMap = PoolWithTag[40];
      v108 = FsRtlIsNtstatusExpected(v107);
      v11 = P;
      v109 = PoolWithTag;
      if ( !v108 )
        PrivateVolumeCacheMap = -1073741590;
      goto LABEL_206;
    }
    if ( v11 )
    {
      v33 = v11[67];
      v34 = 0LL;
      PoolWithTag = v11;
      P = 0LL;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v33 + 768), &v177);
      v35 = v33 + 624;
      v36 = v11 + 17;
      v37 = *(_QWORD **)(v35 + 8);
      if ( *v37 != v35 )
        goto LABEL_230;
      v32 = CcEnablePerVolumeLazyWriter == 0;
      *v36 = v35;
      v11[18] = v37;
      *v37 = v36;
      *(_QWORD *)(v35 + 8) = v36;
      if ( !v32 )
      {
        v38 = v11 + 71;
        v39 = v11[75] + 608LL;
        v40 = *(__int64 ***)(v11[75] + 616LL);
        if ( *v40 != (__int64 *)v39 )
          goto LABEL_230;
        *v38 = v39;
        v11[72] = v40;
        *v40 = v38;
        *(_QWORD *)(v39 + 8) = v38;
      }
      v41 = (_QWORD *)a1;
      v179 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) = v11;
      ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
      goto LABEL_75;
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    v28 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)v16 <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)v16 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v16 = (unsigned int)LockHandle.OldIrql + 1;
        v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v32 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v28);
    v17 = v181;
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v149 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v150 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v150 <= 0xFu && LockHandle.OldIrql <= 0xFu && v150 >= 2u )
    {
      v151 = KeGetCurrentPrcb();
      v152 = v151->SchedulerAssist;
      v153 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v32 = (v153 & v152[5]) == 0;
      v152[5] &= v153;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(v151);
    }
  }
  __writecr8(v149);
  if ( EnableFeatureServicing_45016043 )
  {
    CcFreeSharedCacheMapIgnoreNull(v11);
  }
  else if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x63536343u);
  }
  if ( v180 )
    ObDereferenceObjectDeferDelete(v180);
}
