/*
 * XREFs of sub_1402BD970 @ 0x1402BD970
 * Callers:
 *     CcCopyWriteEx @ 0x140226550 (CcCopyWriteEx.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     sub_1402535D8 @ 0x1402535D8 (sub_1402535D8.c)
 *     sub_1402766A0 @ 0x1402766A0 (sub_1402766A0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     sub_140376F34 @ 0x140376F34 (sub_140376F34.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14053A460 @ 0x14053A460 (sub_14053A460.c)
 *     RtlWriteNonVolatileMemory @ 0x1405EC4A0 (RtlWriteNonVolatileMemory.c)
 *     sub_1405F2B80 @ 0x1405F2B80 (sub_1405F2B80.c)
 *     sub_1405F2BFC @ 0x1405F2BFC (sub_1405F2BFC.c)
 */

char __fastcall sub_1402BD970(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        char a8,
        struct _KTHREAD *a9,
        LARGE_INTEGER *a10)
{
  __int64 v12; // r14
  void *v13; // r15
  __int64 v14; // r10
  int v15; // edx
  bool v16; // di
  struct _KTHREAD *CurrentThread; // r8
  int v18; // r13d
  _SLIST_ENTRY *v19; // rbx
  unsigned __int64 v20; // r12
  bool v21; // r9
  __int64 v22; // rdi
  struct _KTHREAD *v23; // r8
  unsigned int v24; // edx
  int v25; // eax
  __int64 v26; // rsi
  struct _KTHREAD *v27; // rcx
  _QWORD *v28; // rdi
  int v29; // esi
  __int64 v30; // rbx
  NTSTATUS v31; // ebx
  __int64 v32; // rbx
  __int64 v33; // rsi
  unsigned int v34; // r12d
  int v35; // esi
  __int64 v36; // rax
  unsigned int v37; // r12d
  unsigned int v38; // r8d
  ULONG_PTR v39; // r10
  unsigned int v40; // r12d
  int v41; // eax
  int v42; // ebx
  unsigned int v43; // ecx
  __int64 v44; // r9
  NTSTATUS v45; // edi
  int v46; // eax
  int v47; // esi
  NTSTATUS v48; // edi
  unsigned int v49; // r14d
  NTSTATUS v50; // eax
  BOOL v51; // r12d
  __int64 v52; // rbx
  struct _KEVENT *v53; // rcx
  int v54; // ecx
  char v55; // al
  char v56; // si
  struct _MDL *v57; // r14
  __int64 v58; // rcx
  char v59; // r8
  ULONG_PTR v60; // rdi
  void *v61; // r10
  int v62; // ecx
  unsigned int v63; // ecx
  signed __int32 v64; // esi
  bool v65; // di
  unsigned int v66; // ecx
  struct _KTHREAD *v67; // rdx
  struct _KTHREAD *v68; // rcx
  char v69; // al
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v71; // ecx
  __int64 v72; // r8
  NTSTATUS v73; // edi
  BOOLEAN v74; // al
  NTSTATUS v75; // ecx
  unsigned int v76; // ecx
  struct _KTHREAD *v77; // rdx
  unsigned int v79; // r8d
  unsigned __int64 v80; // rbx
  unsigned __int64 v81; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int64 v83; // r14
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // rbx
  __int64 v86; // rdi
  struct _KEVENT *v87; // rcx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v89; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v92; // r9
  int v93; // edx
  bool v94; // zf
  unsigned __int8 v95; // al
  struct _KPRCB *v96; // r10
  __int64 v97; // r9
  int v98; // eax
  unsigned __int8 v99; // al
  struct _KPRCB *v100; // r10
  __int64 v101; // r9
  int v102; // eax
  unsigned __int8 v103; // al
  struct _KPRCB *v104; // r10
  __int64 v105; // r9
  int v106; // eax
  unsigned __int8 v107; // al
  struct _KPRCB *v108; // r9
  __int64 v109; // r8
  int v110; // eax
  BOOLEAN v111; // al
  NTSTATUS v112; // ecx
  char v113; // [rsp+88h] [rbp-168h]
  bool v114; // [rsp+89h] [rbp-167h]
  char v115; // [rsp+8Ah] [rbp-166h]
  char v116; // [rsp+8Bh] [rbp-165h]
  char v117; // [rsp+8Ch] [rbp-164h]
  char v118; // [rsp+8Dh] [rbp-163h]
  char v119; // [rsp+8Eh] [rbp-162h]
  int v120; // [rsp+90h] [rbp-160h]
  char v121; // [rsp+94h] [rbp-15Ch] BYREF
  char v122; // [rsp+95h] [rbp-15Bh] BYREF
  bool v123; // [rsp+96h] [rbp-15Ah]
  char v124; // [rsp+97h] [rbp-159h]
  char v125; // [rsp+98h] [rbp-158h]
  bool v126; // [rsp+99h] [rbp-157h]
  unsigned int v127; // [rsp+9Ch] [rbp-154h]
  char v128; // [rsp+A0h] [rbp-150h]
  unsigned int v129; // [rsp+A4h] [rbp-14Ch]
  NTSTATUS Exception; // [rsp+A8h] [rbp-148h]
  BOOL v131; // [rsp+ACh] [rbp-144h]
  unsigned int v132; // [rsp+B0h] [rbp-140h] BYREF
  unsigned int v133; // [rsp+B4h] [rbp-13Ch]
  ULONG_PTR v134; // [rsp+B8h] [rbp-138h]
  __int64 v135; // [rsp+C0h] [rbp-130h] BYREF
  unsigned int v136; // [rsp+C8h] [rbp-128h]
  int v137; // [rsp+CCh] [rbp-124h]
  __int64 v138; // [rsp+D0h] [rbp-120h] BYREF
  int v139; // [rsp+D8h] [rbp-118h]
  unsigned int v140; // [rsp+DCh] [rbp-114h]
  NTSTATUS Status; // [rsp+E0h] [rbp-110h] BYREF
  signed __int32 v142; // [rsp+E4h] [rbp-10Ch]
  NTSTATUS v143[4]; // [rsp+E8h] [rbp-108h] BYREF
  __int64 v144; // [rsp+F8h] [rbp-F8h]
  struct _KTHREAD *v145; // [rsp+100h] [rbp-F0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+108h] [rbp-E8h] BYREF
  NTSTATUS v147; // [rsp+120h] [rbp-D0h]
  int v148; // [rsp+124h] [rbp-CCh]
  unsigned int v149; // [rsp+128h] [rbp-C8h]
  NTSTATUS v150; // [rsp+12Ch] [rbp-C4h]
  int v151; // [rsp+130h] [rbp-C0h]
  int v152; // [rsp+138h] [rbp-B8h]
  struct _MDL *v153; // [rsp+140h] [rbp-B0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v154; // [rsp+148h] [rbp-A8h] BYREF
  BOOL v155; // [rsp+160h] [rbp-90h]
  __int64 v156; // [rsp+168h] [rbp-88h]
  __int64 v157; // [rsp+170h] [rbp-80h]
  __int64 v158; // [rsp+178h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v159; // [rsp+180h] [rbp-70h] BYREF
  __int128 v160; // [rsp+1A0h] [rbp-50h]
  __int64 v161; // [rsp+1B0h] [rbp-40h]
  unsigned int v165; // [rsp+210h] [rbp+20h]

  v165 = a4;
  v133 = a4;
  v12 = a1;
  v13 = 0LL;
  v132 = 0;
  v127 = 0;
  v144 = 0LL;
  *(_OWORD *)v143 = 0LL;
  v14 = a6;
  v15 = *(_DWORD *)(a6 + 80);
  v16 = (v15 & 0x10) != 0;
  v113 = v16;
  v149 = a4;
  v129 = *a3 & 0xFFF;
  v138 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v145 = CurrentThread;
  v18 = 0;
  v120 = 0;
  v124 = 0;
  v115 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v122 = 1;
  v116 = 0;
  v119 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v154, 0, sizeof(v154));
  if ( _bittest((const signed __int32 *)(a1 + 152), 0xCu) )
    v118 = 1;
  else
    v118 = 0;
  v135 = *(_QWORD *)a3;
  v139 = *((unsigned __int8 *)CurrentThread + 1388) + 2 * *((_DWORD *)CurrentThread + 342);
  v148 = v139;
  v21 = (v15 & 0x10) != 0;
  v117 = v21;
  v126 = v21;
  if ( (v15 & 0x10) == 0 )
  {
    v117 = 0;
    memset(&v159, 0, sizeof(v159));
    v160 = 0LL;
    v161 = 0LL;
    v22 = *(_QWORD *)(a1 + 528);
    if ( (v15 & 0x1000000) != 0 )
    {
      if ( !sub_1402844A0(v22, *(_QWORD *)(a1 + 592), a6, v165, 0, 0, 0LL) )
      {
LABEL_161:
        v21 = 1;
        v117 = 1;
        if ( (*(_DWORD *)(v12 + 152) & 0x400) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v22 + 704), &v159);
          *(_DWORD *)(v12 + 152) |= 0x400u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v159);
          OldIrql = v159.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v159.OldIrql <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v92 = *((_QWORD *)CurrentPrcb + 4375);
                v93 = ~(unsigned __int16)(-1LL << (v159.OldIrql + 1));
                v94 = (v93 & *(_DWORD *)(v92 + 20)) == 0;
                *(_DWORD *)(v92 + 20) &= v93;
                if ( v94 )
                  sub_140418E4C(CurrentPrcb);
                v18 = 0;
              }
            }
          }
          __writecr8(OldIrql);
          v21 = 1;
        }
        goto LABEL_9;
      }
      v21 = 0;
      v14 = a6;
    }
    v23 = KeGetCurrentThread();
    v24 = (*((_DWORD *)v23 + 344) >> 9) & 7;
    if ( (*(_DWORD *)(*((_QWORD *)v23 + 68) + 1124LL) & 0x100000) != 0 )
    {
      v24 = 0;
    }
    else if ( v24 >= 2 )
    {
LABEL_7:
      if ( !v24 && (*(_DWORD *)(v14 + 80) & 0x8000) == 0 )
      {
        v18 = 0;
        goto LABEL_161;
      }
LABEL_8:
      v18 = 0;
LABEL_9:
      v126 = v21;
      v16 = v113;
      goto LABEL_10;
    }
    if ( v23 == KeGetCurrentThread() && *((_DWORD *)v23 + 360) )
      goto LABEL_8;
    goto LABEL_7;
  }
LABEL_10:
  if ( v21 )
  {
    if ( !a8 )
      return 0;
    *a10 = KeQueryPerformanceCounter(0LL);
  }
  v25 = 6;
  if ( a8 )
    v25 = 4;
  v140 = v25;
  v26 = *(_QWORD *)(v12 + 528);
  v157 = v26;
  v158 = v26;
  if ( v16 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v26 + 704), &LockHandle);
    if ( (*(_DWORD *)(v12 + 152) & 0x20) != 0 )
    {
      v154.LockQueue.Lock = (volatile PKSPIN_LOCK)(v26 + 768);
      v154.LockQueue.Next = 0LL;
      sub_1403119F0(&v154);
      v19 = *(_SLIST_ENTRY **)(v12 + 496);
      if ( !v19 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v154);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &stru_140C0CAC0);
        RtlRaiseStatus(-1073741608);
      }
      Next = v19->Next;
      v89 = (_SLIST_ENTRY **)*((_QWORD *)&v19->Next + 1);
      if ( *(&v19->Next->Next + 1) != v19 || *v89 != v19 )
        __fastfail(3u);
      *v89 = Next;
      *((_QWORD *)&Next->Next + 1) = v89;
      *((_QWORD *)&v19->Next + 1) = 0LL;
      v19->Next = 0LL;
      *(_QWORD *)(v12 + 496) = 0LL;
      *(_DWORD *)(v12 + 152) &= ~0x20u;
      v115 = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v154);
    }
    ++*(_DWORD *)(v12 + 516);
    v124 = 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v81 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v95 = KeGetCurrentIrql();
        if ( v95 <= 0xFu && LockHandle.OldIrql <= 0xFu && v95 >= 2u )
        {
          v96 = KeGetCurrentPrcb();
          v97 = *((_QWORD *)v96 + 4375);
          v98 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v94 = (v98 & *(_DWORD *)(v97 + 20)) == 0;
          *(_DWORD *)(v97 + 20) &= v98;
          if ( v94 )
            sub_140418E4C(v96);
          v18 = 0;
        }
      }
    }
    __writecr8(v81);
  }
  if ( v19 )
    sub_1402766A0(v19);
  v27 = a9;
  if ( !a9 )
  {
    v27 = KeGetCurrentThread();
    a9 = v27;
    v18 = 0;
  }
  v28 = (_QWORD *)*((_QWORD *)v27 + 194);
  v29 = 0;
  if ( !v28 )
    goto LABEL_19;
  if ( v27 != KeGetCurrentThread() )
  {
    v85 = ExAcquireSpinLockShared(&dword_140C1BEA4);
    v28 = (_QWORD *)*((_QWORD *)a9 + 194);
    if ( v28 )
    {
      ObfReferenceObjectWithTag(*((PVOID *)a9 + 194), 0x746C6644u);
      v29 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C1BEA4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v99 = KeGetCurrentIrql();
        if ( v99 <= 0xFu && (unsigned __int8)v85 <= 0xFu && v99 >= 2u )
        {
          v100 = KeGetCurrentPrcb();
          v101 = *((_QWORD *)v100 + 4375);
          v102 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v85 + 1));
          v94 = (v102 & *(_DWORD *)(v101 + 20)) == 0;
          *(_DWORD *)(v101 + 20) &= v102;
          if ( v94 )
            sub_140418E4C(v100);
        }
      }
    }
    __writecr8(v85);
    v27 = a9;
  }
  v18 = 0;
  if ( v28 )
    v30 = v28[68];
  else
LABEL_19:
    v30 = *((_QWORD *)v27 + 68);
  if ( *(_QWORD *)(v30 + 2392) )
  {
    v83 = ExAcquireSpinLockShared(&dword_140C46D6C);
    v84 = *(_QWORD *)(v30 + 2392);
    if ( v84 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v84 + 32)) <= 1 )
        __fastfail(0xEu);
      v20 = v84;
      v18 = 0;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C46D6C);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v103 = KeGetCurrentIrql();
        if ( v103 <= 0xFu && (unsigned __int8)v83 <= 0xFu && v103 >= 2u )
        {
          v104 = KeGetCurrentPrcb();
          v105 = *((_QWORD *)v104 + 4375);
          v106 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v83 + 1));
          v94 = (v106 & *(_DWORD *)(v105 + 20)) == 0;
          *(_DWORD *)(v105 + 20) &= v106;
          if ( v94 )
            sub_140418E4C(v104);
          v18 = 0;
        }
      }
    }
    __writecr8(v83);
    v12 = a1;
    if ( v84 )
      v31 = 0;
    else
      v31 = -1073741275;
  }
  else
  {
    v31 = -1073741275;
  }
  if ( v29 )
    ObDereferenceObjectDeferDelete(v28);
  Exception = v31;
  if ( v31 >= 0 )
  {
    sub_1402535D8(*(_QWORD *)(a6 + 40), v20);
    sub_140366814(v20);
  }
  v32 = v138;
  LODWORD(v33) = v127;
  v34 = v133;
  while ( v165 )
  {
    if ( v118 )
    {
      v35 = 0;
      a5 = 0;
    }
    else
    {
      v35 = a5;
    }
    v127 = 0;
    v36 = sub_140328180(v12, v135, (unsigned int)&v138, (unsigned int)&v132, 0, 0);
    v134 = v36;
    v37 = v132;
    if ( v132 > v165 )
    {
      v37 = v165;
      v132 = v165;
    }
    v127 = v37;
    v165 -= v37;
    v38 = v129;
    v39 = v36 - v129;
    v134 = v39;
    v40 = v129 + v37;
    v136 = v40;
    v132 = v40;
    v41 = 1;
    v137 = 1;
    HIDWORD(v144) = HIDWORD(v135);
    v42 = v135 - v129;
    LODWORD(v144) = v135 - v129;
    v116 = 0;
    v114 = 0;
    v43 = v40;
    v44 = 4096LL;
    while ( 1 )
    {
      v45 = 0;
      v147 = 0;
      v122 = 1;
      v131 = v43 > 0x1000;
      v155 = v131;
      Exception = 0;
      if ( (v41 & v35) != 0 )
      {
        if ( v144 >= *a7 )
        {
          v18 |= 1u;
          v120 = v18;
        }
        v46 = *(_DWORD *)(v12 + 152);
        if ( (v46 & 0x40) != 0 )
        {
          v18 |= 2u;
          v120 = v18;
        }
        if ( (v46 & 0x40000000) != 0 )
        {
          v69 = 0;
          if ( v43 <= 0x1000 )
            v69 = v40;
          if ( (((unsigned __int8)v38 | (unsigned __int8)(v69 - v38)) & 0x3F) != 0 )
          {
            v18 &= 0xFFFFFFF3;
            v120 = v18;
            v114 = 1;
          }
          else
          {
            v18 |= 4u;
            v120 = v18;
            if ( v113 )
            {
              v18 |= 8u;
              v120 = v18;
            }
          }
        }
        v47 = v18;
        v151 = v18;
        v48 = 0;
        v150 = 0;
        v49 = 1;
        v152 = 1;
        while ( v49 <= 2 )
        {
          v50 = sub_1402BE8E0(v39, v47);
          v48 = v50;
          v150 = v50;
          if ( (v47 & 8) == 0 || v50 != -1073741670 )
          {
            v38 = v129;
            break;
          }
          v47 &= 0xFFFFFFF3;
          v151 = v47;
          v152 = ++v49;
          v38 = v129;
          v39 = v134;
        }
        v123 = (v47 & 4) == 0;
        Exception = v48;
        if ( v48 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v48);
          v71 = -1073741592;
          if ( IsNtstatusExpected )
            v71 = v48;
          RtlRaiseStatus(v71);
        }
        v116 = 1;
        if ( !v114 )
          v114 = (v47 & 4) == 0;
        v51 = v131;
      }
      else
      {
        v55 = 1;
        v121 = 1;
        v56 = 0;
        v128 = 0;
        if ( v43 > 0x1000 && (a5 & 4) != 0 )
        {
          v68 = v145;
          *((_BYTE *)v145 + 1388) = 1;
          if ( !*((_DWORD *)v68 + 342) )
            *((_DWORD *)v68 + 342) = 1;
        }
        if ( a8 && !a10->QuadPart )
        {
          sub_140328690(v39, 1LL, v140 | 2, &v121);
          v56 = 1;
          v128 = 1;
          v55 = v121;
          if ( !v121 )
          {
            *a10 = KeQueryPerformanceCounter(0LL);
            v55 = v121;
          }
          v39 = v134;
        }
        if ( !v56 || !v55 )
        {
          v45 = sub_140328690(v39, 1LL, v140, &v122);
          v147 = v45;
        }
        if ( !v122 && !a8 )
        {
          v125 = 0;
          v32 = v138;
          LODWORD(v33) = v127;
          v34 = v133;
          goto LABEL_130;
        }
        v57 = 0LL;
        v153 = 0LL;
        v58 = 0LL;
        v156 = 0LL;
        Status = 0;
        if ( v45 < 0 )
          RtlRaiseStatus(v45);
        v59 = v118;
        v60 = v134;
        if ( v118 )
        {
          v72 = v40;
          v51 = v131;
          if ( v131 )
            v72 = 4096LL;
          v58 = sub_14053A460(v134, &v153, v72, 1LL, &Status);
          v156 = v58;
          if ( !v58 )
            RtlRaiseStatus(Status);
          v57 = v153;
          v59 = v118;
        }
        else
        {
          v51 = v131;
        }
        if ( v59 )
          v61 = (void *)(v129 + v58);
        else
          v61 = (void *)(v129 + v60);
        if ( v51 )
          v62 = 4096;
        else
          v62 = v136;
        v63 = v62 - v129;
        v64 = 0;
        v142 = 0;
        v65 = (*(_DWORD *)(a1 + 152) & 0x40000000) != 0;
        if ( v59 )
        {
          if ( (*(_DWORD *)(a1 + 152) & 0x40000000) != 0 )
          {
            v64 = sub_1405F2BFC(v61, a2, v63, v44);
            v142 = v64;
          }
          else
          {
            sub_1405F2B80(v61, a2, v63, v44);
          }
        }
        else if ( (*(_DWORD *)(a1 + 152) & 0x40000000) != 0 )
        {
          v64 = RtlWriteNonVolatileMemory((PVOID)0xFFFFFFFFFFFFFFFFLL, v61, a2, v63, 2u);
          v142 = v64;
        }
        else
        {
          memmove(v61, a2, v63);
        }
        if ( v64 < 0 )
          RtlRaiseStatus(v64);
        v123 = !v65;
        v116 = 1;
        if ( !v114 )
          v114 = !v65;
        if ( v57 )
        {
          MmUnlockPages(v57);
          IoFreeMdl(v57);
          v153 = 0LL;
        }
        v66 = v139;
        v67 = v145;
        *((_BYTE *)v145 + 1388) = v139 & 1;
        *((_DWORD *)v67 + 342) = v66 >> 1;
        v38 = v129;
      }
      v44 = 4096LL;
      a2 += 4096 - v38;
      v38 = 0;
      v129 = 0;
      if ( !v51 )
        break;
      v39 = v134 + 4096;
      v134 += 4096LL;
      v40 = v136 - 4096;
      v136 = v40;
      v43 = v40;
      v132 = v40;
      v42 += 4096;
      LODWORD(v144) = v42;
      if ( v165 )
      {
        v41 = 2;
      }
      else if ( v40 <= 0x1000 )
      {
        v41 = 4;
      }
      else
      {
        v41 = 2;
      }
      v137 = v41;
      v12 = a1;
      v35 = a5;
    }
    v116 = 0;
    v52 = *(_QWORD *)(v138 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v138 + 16)) )
    {
      v53 = *(struct _KEVENT **)(v52 + 184);
      if ( v53 )
        KeSetEvent(v53, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v52 + 544));
    }
    v32 = 0LL;
    v138 = 0LL;
    v33 = v127;
    v12 = a1;
    sub_14029D860(a1, &v135, v127, a9);
    v54 = *(_DWORD *)(a1 + 152) & 0x40000000;
    v34 = v133;
    if ( !v54 && v133 - v165 > 0x1000000 || v54 && v114 )
    {
      if ( !a10->QuadPart )
        *a10 = KeQueryPerformanceCounter(0LL);
      sub_140283030(*(_QWORD *)(a6 + 40), &v135, v33, 0LL, v113, v143);
      v73 = v143[0];
      if ( v143[0] < 0 )
      {
        v74 = FsRtlIsNtstatusExpected(v143[0]);
        v75 = -1073741591;
        if ( v74 )
          v75 = v73;
        RtlRaiseStatus(v75);
      }
    }
    if ( v165 >= 0x1000 )
    {
      a5 |= 1u;
    }
    else if ( (a5 & 4) == 0 )
    {
      a5 = 0;
    }
    v135 += v33;
    v18 = v120;
  }
  v125 = 1;
LABEL_130:
  v76 = v139;
  v77 = v145;
  *((_BYTE *)v145 + 1388) = v139 & 1;
  *((_DWORD *)v77 + 342) = v76 >> 1;
  if ( v32 )
  {
    v86 = *(_QWORD *)(v32 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v32 + 16)) )
    {
      v87 = *(struct _KEVENT **)(v86 + 184);
      if ( v87 )
        KeSetEvent(v87, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v86 + 544));
    }
    LODWORD(v33) = v127;
  }
  if ( v116 && (_DWORD)v33 )
    sub_14029D860(v12, &v135, v33, a9);
  if ( dword_140C097AC != -1
    && (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
    && !v113
    && *(_DWORD *)(v12 + 112) >= (unsigned int)dword_140C097AC )
  {
    v115 = 1;
    v119 = 1;
  }
  if ( v117 || v119 )
  {
    v143[0] = 0;
    if ( !v113 || (*(_DWORD *)(v12 + 152) & 0x40000000) == 0 )
    {
      v79 = 0;
      if ( !v115 )
      {
        v79 = v34;
        v13 = a3;
      }
      sub_140283030(*(_QWORD *)(a6 + 40), v13, v79, 0LL, v113, v143);
      LODWORD(v13) = v143[0];
    }
    if ( v124 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v157 + 704), &LockHandle);
      --*(_DWORD *)(v12 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v80 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v107 = KeGetCurrentIrql();
          if ( v107 <= 0xFu && LockHandle.OldIrql <= 0xFu && v107 >= 2u )
          {
            v108 = KeGetCurrentPrcb();
            v109 = *((_QWORD *)v108 + 4375);
            v110 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v94 = (v110 & *(_DWORD *)(v109 + 20)) == 0;
            *(_DWORD *)(v109 + 20) &= v110;
            if ( v94 )
              sub_140418E4C(v108);
          }
        }
      }
      __writecr8(v80);
      LODWORD(v13) = v143[0];
    }
    if ( (int)v13 < 0 )
    {
      v111 = FsRtlIsNtstatusExpected((NTSTATUS)v13);
      v112 = -1073741591;
      if ( v111 )
        v112 = (int)v13;
      RtlRaiseStatus(v112);
    }
  }
  return v125;
}
