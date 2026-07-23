/*
 * XREFs of CcInitializeCacheMapEx @ 0x140310F10
 * Callers:
 *     CcInitializeCacheMap @ 0x14025AFC0 (CcInitializeCacheMap.c)
 * Callees:
 *     sub_1402368F4 @ 0x1402368F4 (sub_1402368F4.c)
 *     sub_14023EB0C @ 0x14023EB0C (sub_14023EB0C.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     MmDisableModifiedWriteOfSection @ 0x140248110 (MmDisableModifiedWriteOfSection.c)
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402D1304 @ 0x1402D1304 (sub_1402D1304.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14053BE0C @ 0x14053BE0C (sub_14053BE0C.c)
 *     ObDeleteCapturedInsertInfo @ 0x140680050 (ObDeleteCapturedInsertInfo.c)
 *     sub_1406B54BC @ 0x1406B54BC (sub_1406B54BC.c)
 *     sub_1406B8C3C @ 0x1406B8C3C (sub_1406B8C3C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcInitializeCacheMapEx(_QWORD *Object, __int128 *a2, char a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // r15d
  struct _KTHREAD *CurrentThread; // rcx
  void *v9; // r12
  NTSTATUS v10; // r13d
  __int128 v11; // xmm1
  __int64 v12; // rax
  int v13; // edi
  int v14; // eax
  PVOID PoolWithTag; // rax
  __int64 v16; // rbx
  unsigned int v17; // eax
  NTSTATUS v18; // eax
  KSPIN_LOCK *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  KSPIN_LOCK *v29; // r14
  KSPIN_LOCK *v30; // r15
  unsigned int v31; // eax
  __int16 v32; // cx
  int v33; // ecx
  __int64 v34; // rax
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  struct _KEVENT *v38; // rcx
  unsigned __int64 v39; // rdi
  _WORD *v40; // rdi
  int v41; // r14d
  struct _KTHREAD *v42; // rcx
  int v43; // ecx
  _QWORD *v44; // rax
  int v45; // ecx
  _QWORD *v46; // rdx
  int v47; // r15d
  int v48; // edi
  int v49; // esi
  __int64 v50; // rcx
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rbx
  PVOID v53; // rdi
  KSPIN_LOCK *v54; // r15
  __int64 v55; // r14
  _QWORD *v56; // rcx
  struct _KSPIN_LOCK_QUEUE *v57; // r8
  int v58; // eax
  int v59; // eax
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rbx
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r10
  __int64 v66; // r9
  int v67; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v71; // r9
  int v72; // eax
  __int64 *v73; // rcx
  __int64 v74; // rax
  __int64 **v75; // rdx
  __int64 v76; // r8
  int v77; // eax
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  __int64 v80; // r9
  int v81; // eax
  _QWORD *v82; // rax
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r10
  __int64 v85; // r9
  int v86; // eax
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r10
  __int64 v89; // r9
  int v90; // eax
  unsigned __int8 v91; // al
  struct _KPRCB *v92; // r10
  __int64 v93; // r9
  int v94; // eax
  unsigned __int64 v95; // rdi
  unsigned __int8 v96; // al
  struct _KPRCB *v97; // r10
  __int64 v98; // r9
  int v99; // eax
  unsigned __int8 v100; // al
  struct _KPRCB *v101; // r10
  __int64 v102; // r9
  int v103; // eax
  char *v104; // rax
  unsigned __int64 v105; // rdi
  unsigned __int8 v106; // al
  struct _KPRCB *v107; // r10
  __int64 v108; // r9
  int v109; // eax
  unsigned __int64 v110; // rdi
  unsigned __int8 v111; // al
  struct _KPRCB *v112; // r10
  __int64 v113; // r9
  int v114; // eax
  _QWORD *v115; // rax
  unsigned __int64 v116; // rdi
  unsigned __int8 v117; // al
  struct _KPRCB *v118; // r10
  __int64 v119; // r9
  int v120; // eax
  unsigned __int64 v121; // rdi
  unsigned __int8 v122; // al
  struct _KPRCB *v123; // r10
  __int64 v124; // r9
  int v125; // eax
  NTSTATUS v126; // eax
  BOOLEAN IsNtstatusExpected; // al
  unsigned __int8 v128; // al
  struct _KPRCB *v129; // r10
  __int64 v130; // r9
  int v131; // eax
  unsigned __int8 v132; // al
  __int64 v133; // r9
  int v134; // eax
  unsigned __int64 v135; // r14
  unsigned __int8 v136; // al
  struct _KPRCB *v137; // r10
  __int64 v138; // r9
  int v139; // eax
  unsigned __int64 v140; // r14
  unsigned __int8 v141; // al
  struct _KPRCB *v142; // r10
  __int64 v143; // r9
  int v144; // eax
  int v145; // esi
  struct _KEVENT *v146; // rcx
  unsigned __int64 v147; // rbx
  unsigned __int8 v148; // al
  struct _KPRCB *v149; // r10
  __int64 v150; // r9
  int v151; // eax
  unsigned __int64 v152; // rbx
  unsigned __int8 v153; // al
  struct _KPRCB *v154; // r9
  __int64 v155; // r8
  int v156; // eax
  unsigned __int64 v157; // rcx
  __int64 v158; // rdi
  unsigned int v159; // eax
  unsigned __int8 v160; // al
  struct _KPRCB *v161; // r10
  __int64 v162; // r9
  int v163; // eax
  unsigned __int8 v164; // al
  struct _KPRCB *v165; // r10
  __int64 v166; // r9
  int v167; // eax
  unsigned __int8 v168; // al
  struct _KPRCB *v169; // r9
  __int64 v170; // r8
  int v171; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-79h] BYREF
  struct _KLOCK_QUEUE_HANDLE v173; // [rsp+48h] [rbp-61h] BYREF
  int v174; // [rsp+60h] [rbp-49h]
  PVOID P; // [rsp+68h] [rbp-41h]
  unsigned int v176; // [rsp+70h] [rbp-39h]
  unsigned int v177; // [rsp+74h] [rbp-35h]
  KSPIN_LOCK *v178; // [rsp+78h] [rbp-31h]
  PVOID Objecta; // [rsp+80h] [rbp-29h] BYREF
  __int128 v180; // [rsp+88h] [rbp-21h]
  __int64 v181; // [rsp+98h] [rbp-11h]
  __int64 v182; // [rsp+A0h] [rbp-9h]
  struct _KTHREAD *v183; // [rsp+A8h] [rbp-1h]
  char v184; // [rsp+100h] [rbp+57h]

  v6 = a6;
  v176 = 0;
  CurrentThread = KeGetCurrentThread();
  v174 = 0;
  v9 = 0LL;
  P = 0LL;
  v183 = CurrentThread;
  v10 = 0;
  v182 = *((_QWORD *)CurrentThread + 23);
  v184 = 0;
  v178 = 0LL;
  Objecta = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v173, 0, sizeof(v173));
  if ( byte_140D010F0 )
    v6 = a6 & 0xFFFFFFFE;
  v11 = *a2;
  v177 = v6;
  v12 = v11;
  v181 = *((_QWORD *)a2 + 2);
  v180 = v11;
  if ( !(_QWORD)v11 )
  {
    LODWORD(v180) = 1;
    v12 = v180;
  }
  v13 = *((_DWORD *)CurrentThread + 29) & 0x400;
  if ( *((_BYTE *)Object + 75) )
  {
    *(_QWORD *)&v180 = v12 + 0xFFFFF;
    v14 = (v12 + 0xFFFFF) & 0xFFF00000;
  }
  else
  {
    *(_QWORD *)&v180 = v12 + 0x3FFFF;
    v14 = (v12 + 0x3FFFF) & 0xFFFC0000;
  }
  LODWORD(v180) = v14;
  if ( *(_QWORD *)(Object[5] + 8LL) )
    goto LABEL_23;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x258uLL, 0x63536343u);
    v16 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
LABEL_111:
      RtlRaiseStatus(-1073741670);
    v9 = PoolWithTag;
    v17 = v176;
    if ( (v6 & 1) != 0 )
    {
      v17 = v176 | 1;
      v176 |= 1u;
    }
    v18 = sub_1406B8C3C(&Objecta, v180, v17, Object);
    v10 = v18;
    if ( v18 == -1073740277 )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      if ( qword_140D017F8 != qword_140C4E878 )
        v10 = -1073700856;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v71 = *((_QWORD *)CurrentPrcb + 4375);
            v72 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v27 = (v72 & *(_DWORD *)(v71 + 20)) == 0;
            *(_DWORD *)(v71 + 20) &= v72;
            if ( v27 )
            {
              sub_140418E4C(CurrentPrcb);
              __writecr8(OldIrql);
              v48 = 0;
              v47 = 0;
              goto LABEL_113;
            }
          }
        }
      }
      goto LABEL_141;
    }
    if ( v18 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v18) )
        v10 = -1073741590;
      v48 = 0;
      v47 = 0;
      goto LABEL_113;
    }
    ObDeleteCapturedInsertInfo(Objecta);
    v178 = (KSPIN_LOCK *)sub_14023EB0C(*(_QWORD *)(*(_QWORD *)(qword_140C51F48
                                                             + 8LL * (*(_WORD *)(*(_QWORD *)Object[5] + 60LL) & 0x3FF))
                                                 + 176LL));
    v19 = v178;
    if ( !v178 )
    {
      v48 = 0;
      v10 = -1073741670;
      v47 = 0;
      goto LABEL_113;
    }
    v20 = *((_QWORD *)&v180 + 1);
    *(_DWORD *)v16 = 39322367;
    *(_QWORD *)(v16 + 548) = -1LL;
    *(_QWORD *)(v16 + 96) = Object;
    *(_QWORD *)(v16 + 8) = v20;
    v21 = v181;
    *(_QWORD *)(v16 + 40) = v181;
    *(_QWORD *)(v16 + 48) = v21;
    *(_DWORD *)(v16 + 512) = *(_DWORD *)(v182 + 1524);
    *(_QWORD *)(v16 + 528) = v19;
    v10 = sub_1402D1304(Object, (__int64 **)(v16 + 504));
    if ( v10 < 0 )
      goto LABEL_111;
    if ( byte_140C54C58 == 1 )
    {
      v10 = sub_14053BE0C(v19, v16);
      if ( v10 < 0 )
        goto LABEL_111;
    }
    *(_DWORD *)(v16 + 280) = 1;
    *(_QWORD *)(v16 + 288) = 0LL;
    *(_DWORD *)(v16 + 296) = 0;
    *(_WORD *)(v16 + 304) = 1;
    *(_BYTE *)(v16 + 306) = 6;
    *(_DWORD *)(v16 + 308) = 0;
    *(_QWORD *)(v16 + 320) = v16 + 312;
    *(_QWORD *)(v16 + 312) = v16 + 312;
    *(_QWORD *)(v16 + 104) = 0LL;
    if ( a3 )
      *(_DWORD *)(v16 + 152) |= 4u;
    if ( (Object[10] & 0x20) != 0 )
      *(_DWORD *)(v16 + 152) |= 0x40u;
    if ( !v13 )
      *(_DWORD *)(v16 + 152) |= 0x200000u;
    LOBYTE(v6) = v177;
    *(_QWORD *)(v16 + 24) = v16 + 16;
    *(_QWORD *)(v16 + 16) = v16 + 16;
    *(_QWORD *)(v16 + 208) = a4;
    *(_QWORD *)(v16 + 216) = a5;
    v22 = (_QWORD *)(v16 + 224);
    v22[1] = v22;
    *v22 = v22;
LABEL_23:
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( Object[6] )
      break;
    v16 = *(_QWORD *)(Object[5] + 8LL);
    if ( v16 )
    {
      v54 = *(KSPIN_LOCK **)(v16 + 528);
      v178 = v54;
      if ( byte_140C54C58 == 1 )
        v55 = *(_QWORD *)(v16 + 592);
      else
        v55 = 0LL;
      v56 = (_QWORD *)sub_1402A3A14((__int64)Object, 8, 0LL);
      if ( !v56 || *v56 == v54[1] )
      {
        v173.LockQueue.Next = v57;
        v173.LockQueue.Lock = v54 + 88;
        sub_1403119F0(&v173);
        if ( (Object[10] & 0x20) == 0 )
          *(_DWORD *)(v16 + 152) &= ~0x40u;
        v58 = *(_DWORD *)(v16 + 152);
        if ( (v58 & 0x200000) != 0 && v13 )
          *(_DWORD *)(v16 + 152) = v58 & 0xFFDFFFFF;
        v59 = *(_DWORD *)(v182 + 1524);
        if ( v59 )
          *(_DWORD *)(v16 + 512) = v59;
        goto LABEL_29;
      }
      v173.LockQueue.Next = v57;
      v173.LockQueue.Lock = v54 + 88;
      sub_1403119F0(&v173);
      v77 = *(_DWORD *)(v16 + 4);
      if ( !v77 || v77 == *(_DWORD *)(v16 + 536) )
      {
        LOBYTE(v76) = 1;
        v10 = -1073741608;
        sub_140276758(v54, v55, v76, 0);
        v184 = 1;
      }
      else
      {
        v10 = -1073740277;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v78 = KeGetCurrentIrql();
          if ( v78 <= 0xFu && LockHandle.OldIrql <= 0xFu && v78 >= 2u )
          {
            v79 = KeGetCurrentPrcb();
            v80 = *((_QWORD *)v79 + 4375);
            v81 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v27 = (v81 & *(_DWORD *)(v80 + 20)) == 0;
            *(_DWORD *)(v80 + 20) &= v81;
            if ( v27 )
              sub_140418E4C(v79);
          }
        }
      }
LABEL_141:
      __writecr8(OldIrql);
      v48 = 0;
      v47 = 0;
      goto LABEL_113;
    }
    if ( v9 )
    {
      v16 = (__int64)v9;
      v9 = 0LL;
      v23 = *(_QWORD *)(v16 + 528);
      v173.LockQueue.Next = 0LL;
      v173.LockQueue.Lock = (volatile PKSPIN_LOCK)(v23 + 704);
      sub_1403119F0(&v173);
      v24 = v23 + 592;
      v25 = (_QWORD *)(v16 + 136);
      v26 = *(_QWORD **)(v24 + 8);
      if ( *v26 != v24 )
        goto LABEL_263;
      v27 = byte_140C54C58 == 1;
      *v25 = v24;
      *(_QWORD *)(v16 + 144) = v26;
      *v26 = v25;
      *(_QWORD *)(v24 + 8) = v25;
      if ( v27 )
      {
        v73 = (__int64 *)(v16 + 560);
        v74 = *(_QWORD *)(v16 + 592) + 608LL;
        v75 = *(__int64 ***)(*(_QWORD *)(v16 + 592) + 616LL);
        if ( *v75 != (__int64 *)v74 )
          goto LABEL_263;
        *v73 = v74;
        *(_QWORD *)(v16 + 568) = v75;
        *v75 = v73;
        *(_QWORD *)(v74 + 8) = v73;
      }
      v28 = Object[5];
      v174 = 1;
      *(_QWORD *)(v28 + 8) = v16;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
LABEL_29:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
      v29 = *(KSPIN_LOCK **)(v16 + 528);
      v178 = v29;
      v30 = v29 + 88;
      KeAcquireInStackQueuedSpinLock(v29 + 88, &v173);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (*(_DWORD *)(v16 + 152) & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v31 = *(_DWORD *)(v16 + 152) & 0xFFFFFFEF;
      v32 = *(_WORD *)(v16 + 152) & 0xFFEF;
      *(_DWORD *)(v16 + 152) = v31;
      v33 = v32 & 0x100;
      if ( *(_QWORD *)(v16 + 88) )
      {
        if ( !v33 )
        {
          ++*(_DWORD *)(v16 + 4);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
          v60 = v173.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v128 = KeGetCurrentIrql();
              if ( v128 <= 0xFu && v173.OldIrql <= 0xFu && v128 >= 2u )
              {
                v129 = KeGetCurrentPrcb();
                v130 = *((_QWORD *)v129 + 4375);
                v131 = ~(unsigned __int16)(-1LL << (v173.OldIrql + 1));
                v27 = (v131 & *(_DWORD *)(v130 + 20)) == 0;
                *(_DWORD *)(v130 + 20) &= v131;
                if ( v27 )
                  sub_140418E4C(v129);
              }
            }
          }
          __writecr8(v60);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v39 = LockHandle.OldIrql;
          if ( !dword_140D06B08 )
            goto LABEL_45;
          if ( (dword_140D06B08 & 1) == 0 )
            goto LABEL_45;
          v132 = KeGetCurrentIrql();
          if ( v132 > 0xFu )
            goto LABEL_45;
          if ( LockHandle.OldIrql > 0xFu )
            goto LABEL_45;
          if ( v132 < 2u )
            goto LABEL_45;
          v101 = KeGetCurrentPrcb();
          v133 = *((_QWORD *)v101 + 4375);
          v134 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v134 & *(_DWORD *)(v133 + 20)) == 0;
          *(_DWORD *)(v133 + 20) &= v134;
          if ( !v27 )
            goto LABEL_45;
LABEL_223:
          sub_140418E4C(v101);
LABEL_45:
          __writecr8(v39);
LABEL_46:
          if ( v9 )
          {
            ExFreePoolWithTag(v9, 0x63536343u);
            v9 = 0LL;
          }
          v40 = (_WORD *)(v16 + 376);
          if ( *(_WORD *)(v16 + 376) )
            goto LABEL_90;
          while ( 1 )
          {
            v41 = 1;
            KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
            KeAcquireInStackQueuedSpinLock(v30, &v173);
            if ( Object[6] )
              break;
            if ( !*v40 )
              goto LABEL_51;
            if ( P )
            {
              v40 = P;
              P = 0LL;
LABEL_51:
              memset(v40, 0, 0x78uLL);
              v42 = v183;
              *v40 = 766;
              *((_QWORD *)v40 + 1) = Object;
              *((_DWORD *)v40 + 1) = 4095;
              v43 = (unsigned __int8)sub_14033D720(v42);
              v44 = v40 + 48;
              v45 = (*(_DWORD *)v40 ^ (v43 << 18)) & 0x1C0000;
              *((_QWORD *)v40 + 10) = 0LL;
              *(_DWORD *)v40 ^= v45;
              v46 = *(_QWORD **)(v16 + 232);
              if ( *v46 == v16 + 224 )
              {
                *v44 = v16 + 224;
                *((_QWORD *)v40 + 13) = v46;
                *v46 = v44;
                *(_QWORD *)(v16 + 232) = v44;
                Object[6] = v40;
                goto LABEL_53;
              }
LABEL_263:
              __fastfail(3u);
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
            v135 = v173.OldIrql;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v136 = KeGetCurrentIrql();
                if ( v136 <= 0xFu && v173.OldIrql <= 0xFu && v136 >= 2u )
                {
                  v137 = KeGetCurrentPrcb();
                  v138 = *((_QWORD *)v137 + 4375);
                  v139 = ~(unsigned __int16)(-1LL << (v173.OldIrql + 1));
                  v27 = (v139 & *(_DWORD *)(v138 + 20)) == 0;
                  *(_DWORD *)(v138 + 20) &= v139;
                  if ( v27 )
                    sub_140418E4C(v137);
                }
              }
            }
            __writecr8(v135);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v140 = LockHandle.OldIrql;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v141 = KeGetCurrentIrql();
                if ( v141 <= 0xFu && LockHandle.OldIrql <= 0xFu && v141 >= 2u )
                {
                  v142 = KeGetCurrentPrcb();
                  v143 = *((_QWORD *)v142 + 4375);
                  v144 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v27 = (v144 & *(_DWORD *)(v143 + 20)) == 0;
                  *(_DWORD *)(v143 + 20) &= v144;
                  if ( v27 )
                    sub_140418E4C(v142);
                }
              }
            }
            __writecr8(v140);
            v29 = v178;
LABEL_90:
            P = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
            if ( !P )
            {
              v145 = 0;
              v10 = -1073741670;
              goto LABEL_239;
            }
          }
          v159 = *(_DWORD *)(v16 + 4);
          if ( v159 <= 1 )
            KeBugCheckEx(0x34u, 0x8F8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *(_DWORD *)(v16 + 4) = v159 - 1;
LABEL_63:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
          v51 = v173.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v160 = KeGetCurrentIrql();
              if ( v160 <= 0xFu && v173.OldIrql <= 0xFu && v160 >= 2u )
              {
                v161 = KeGetCurrentPrcb();
                v162 = *((_QWORD *)v161 + 4375);
                v163 = ~(unsigned __int16)(-1LL << (v173.OldIrql + 1));
                v27 = (v163 & *(_DWORD *)(v162 + 20)) == 0;
                *(_DWORD *)(v162 + 20) &= v163;
                if ( v27 )
                  sub_140418E4C(v161);
              }
            }
          }
          __writecr8(v51);
LABEL_65:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v52 = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v164 = KeGetCurrentIrql();
              if ( v164 <= 0xFu && LockHandle.OldIrql <= 0xFu && v164 >= 2u )
              {
                v165 = KeGetCurrentPrcb();
                v166 = *((_QWORD *)v165 + 4375);
                v167 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v27 = (v167 & *(_DWORD *)(v166 + 20)) == 0;
                *(_DWORD *)(v166 + 20) &= v167;
                if ( v27 )
                  sub_140418E4C(v165);
              }
            }
          }
          __writecr8(v52);
          v53 = P;
LABEL_67:
          if ( v9 )
            ExFreePoolWithTag(v9, 0x63536343u);
          if ( v53 )
            ExFreePoolWithTag(v53, 0x63506343u);
          if ( Objecta )
            ObDereferenceObjectDeferDeleteWithTag(Objecta, 0x746C6644u);
          if ( v10 < 0 )
          {
            if ( v184 )
              KeDelayExecutionThread(0, 0, &stru_140C0CAB8);
            RtlRaiseStatus(v10);
          }
          return;
        }
      }
      else if ( !v33 )
      {
        ++*(_DWORD *)(v16 + 4);
        *(_DWORD *)(v16 + 152) = v31 | 0x100;
        v34 = *(_QWORD *)(v16 + 176);
        if ( v34 )
        {
          *(_WORD *)v34 = 0;
          *(_BYTE *)(v34 + 2) = 6;
          *(_DWORD *)(v34 + 4) = 0;
          v82 = (_QWORD *)(v34 + 8);
          v82[1] = v82;
          *v82 = v82;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
        v35 = v173.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v83 = KeGetCurrentIrql();
            if ( v83 <= 0xFu && v173.OldIrql <= 0xFu && v83 >= 2u )
            {
              v84 = KeGetCurrentPrcb();
              v85 = *((_QWORD *)v84 + 4375);
              v86 = ~(unsigned __int16)(-1LL << (v173.OldIrql + 1));
              v27 = (v86 & *(_DWORD *)(v85 + 20)) == 0;
              *(_DWORD *)(v85 + 20) &= v86;
              if ( v27 )
                sub_140418E4C(v84);
            }
          }
        }
        __writecr8(v35);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v36 = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v87 = KeGetCurrentIrql();
            if ( v87 <= 0xFu && LockHandle.OldIrql <= 0xFu && v87 >= 2u )
            {
              v88 = KeGetCurrentPrcb();
              v89 = *((_QWORD *)v88 + 4375);
              v90 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v27 = (v90 & *(_DWORD *)(v89 + 20)) == 0;
              *(_DWORD *)(v89 + 20) &= v90;
              if ( v27 )
                sub_140418E4C(v88);
            }
          }
        }
        __writecr8(v36);
        if ( *(_QWORD *)(v16 + 168) )
        {
          v145 = 1;
          v10 = -1073741811;
        }
        else
        {
          if ( !Objecta )
            KeBugCheckEx(0x34u, 0x7A8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *(_QWORD *)(v16 + 168) = Objecta;
          v37 = Object[3];
          Objecta = 0LL;
          if ( (*(_BYTE *)(v37 + 6) & 1) == 0 && !Object[4] )
          {
            MmDisableModifiedWriteOfSection(Object[5]);
            KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
            v173.LockQueue.Lock = v29 + 88;
            v173.LockQueue.Next = 0LL;
            sub_1403119F0(&v173);
            *(_DWORD *)(v16 + 152) |= 0x200u;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v61 = LockHandle.OldIrql;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v91 = KeGetCurrentIrql();
                if ( v91 <= 0xFu && LockHandle.OldIrql <= 0xFu && v91 >= 2u )
                {
                  v92 = KeGetCurrentPrcb();
                  v93 = *((_QWORD *)v92 + 4375);
                  v94 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v27 = (v94 & *(_DWORD *)(v93 + 20)) == 0;
                  *(_DWORD *)(v93 + 20) &= v94;
                  if ( v27 )
                    sub_140418E4C(v92);
                }
              }
            }
            __writecr8(v61);
          }
          v10 = sub_1406B54BC(v16, v180);
          if ( v10 >= 0 )
          {
            if ( (v177 & 1) != 0 )
            {
              KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
              v173.LockQueue.Lock = v29 + 88;
              v173.LockQueue.Next = 0LL;
              sub_1403119F0(&v173);
              *(_DWORD *)(v16 + 152) |= 0x40000000u;
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v95 = LockHandle.OldIrql;
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v96 = KeGetCurrentIrql();
                  if ( v96 <= 0xFu && LockHandle.OldIrql <= 0xFu && v96 >= 2u )
                  {
                    v97 = KeGetCurrentPrcb();
                    v98 = *((_QWORD *)v97 + 4375);
                    v99 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v27 = (v99 & *(_DWORD *)(v98 + 20)) == 0;
                    *(_DWORD *)(v98 + 20) &= v99;
                    if ( v27 )
                      sub_140418E4C(v97);
                  }
                }
              }
              __writecr8(v95);
            }
            KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
            v173.LockQueue.Lock = v29 + 88;
            v173.LockQueue.Next = 0LL;
            sub_1403119F0(&v173);
            v38 = *(struct _KEVENT **)(v16 + 176);
            *(_DWORD *)(v16 + 152) &= ~0x100u;
            if ( v38 )
              KeSetEvent(v38, 0, 0);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v39 = LockHandle.OldIrql;
            if ( !dword_140D06B08 )
              goto LABEL_45;
            if ( (dword_140D06B08 & 1) == 0 )
              goto LABEL_45;
            v100 = KeGetCurrentIrql();
            if ( v100 > 0xFu )
              goto LABEL_45;
            if ( LockHandle.OldIrql > 0xFu )
              goto LABEL_45;
            if ( v100 < 2u )
              goto LABEL_45;
            v101 = KeGetCurrentPrcb();
            v102 = *((_QWORD *)v101 + 4375);
            v103 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v27 = (v103 & *(_DWORD *)(v102 + 20)) == 0;
            *(_DWORD *)(v102 + 20) &= v103;
            if ( !v27 )
              goto LABEL_45;
            goto LABEL_223;
          }
          v184 = 0;
          v145 = 1;
        }
LABEL_239:
        v53 = P;
LABEL_240:
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        KeAcquireInStackQueuedSpinLock(v29 + 88, &v173);
        if ( v145 )
        {
          v146 = *(struct _KEVENT **)(v16 + 176);
          if ( v146 )
            KeSetEvent(v146, 0, 0);
          *(_DWORD *)(v16 + 152) &= ~0x100u;
        }
        v27 = (*(_DWORD *)(v16 + 4))-- == 1;
        if ( !v27 || (*(_DWORD *)(v16 + 152) & 0x20) != 0 || *(_DWORD *)(v16 + 112) )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
          v147 = v173.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v148 = KeGetCurrentIrql();
              if ( v148 <= 0xFu && v173.OldIrql <= 0xFu && v148 >= 2u )
              {
                v149 = KeGetCurrentPrcb();
                v150 = *((_QWORD *)v149 + 4375);
                v151 = ~(unsigned __int16)(-1LL << (v173.OldIrql + 1));
                v27 = (v151 & *(_DWORD *)(v150 + 20)) == 0;
                *(_DWORD *)(v150 + 20) &= v151;
                if ( v27 )
                  sub_140418E4C(v149);
              }
            }
          }
          __writecr8(v147);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v152 = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v153 = KeGetCurrentIrql();
              if ( v153 <= 0xFu && LockHandle.OldIrql <= 0xFu && v153 >= 2u )
              {
                v154 = KeGetCurrentPrcb();
                v155 = *((_QWORD *)v154 + 4375);
                v156 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v27 = (v156 & *(_DWORD *)(v155 + 20)) == 0;
                *(_DWORD *)(v155 + 20) &= v156;
                if ( v27 )
                  sub_140418E4C(v154);
              }
            }
          }
          __writecr8(v152);
        }
        else
        {
          sub_140275338((_QWORD *)v16, &LockHandle, &v173, 0, 0LL);
        }
        goto LABEL_67;
      }
      if ( !*(_QWORD *)(v16 + 176) )
      {
        v104 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
        *(_QWORD *)(v16 + 176) = v104;
        if ( !v104 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
          v105 = v173.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v106 = KeGetCurrentIrql();
              if ( v106 <= 0xFu && v173.OldIrql <= 0xFu && v106 >= 2u )
              {
                v107 = KeGetCurrentPrcb();
                v108 = *((_QWORD *)v107 + 4375);
                v109 = ~(unsigned __int16)(-1LL << (v173.OldIrql + 1));
                v27 = (v109 & *(_DWORD *)(v108 + 20)) == 0;
                *(_DWORD *)(v108 + 20) &= v109;
                if ( v27 )
                  sub_140418E4C(v107);
              }
            }
          }
          __writecr8(v105);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v110 = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v111 = KeGetCurrentIrql();
              if ( v111 <= 0xFu && LockHandle.OldIrql <= 0xFu && v111 >= 2u )
              {
                v112 = KeGetCurrentPrcb();
                v113 = *((_QWORD *)v112 + 4375);
                v114 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v27 = (v114 & *(_DWORD *)(v113 + 20)) == 0;
                *(_DWORD *)(v113 + 20) &= v114;
                if ( v27 )
                  sub_140418E4C(v112);
              }
            }
          }
          __writecr8(v110);
          v10 = -1073741670;
          v41 = 0;
LABEL_53:
          v47 = v174;
          v48 = v41;
          v184 = 0;
          if ( v41 )
          {
LABEL_54:
            v49 = v48;
            if ( v178 && !v48 )
            {
              KeAcquireInStackQueuedSpinLock(v178 + 88, &v173);
              v49 = 1;
            }
            if ( !v47 && !*(_DWORD *)(v16 + 112) && *(_DWORD *)(v16 + 4) )
              sub_1402368F4(v16);
            v50 = *(_QWORD *)(v16 + 272);
            if ( v50 )
            {
              do
              {
                v157 = v50 & 0xFFFFFFFFFFFFFFFEuLL;
                v158 = *(_QWORD *)v157;
                KeSetEvent((PRKEVENT)(v157 + 8), 0, 0);
                v50 = v158;
              }
              while ( v158 );
            }
            *(_DWORD *)(v16 + 152) &= ~0x10000u;
            *(_QWORD *)(v16 + 272) = 0LL;
            if ( !v49 )
              goto LABEL_65;
            goto LABEL_63;
          }
LABEL_113:
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
          goto LABEL_54;
        }
        *(_WORD *)v104 = 0;
        v104[2] = 6;
        *((_DWORD *)v104 + 1) = 0;
        v115 = v104 + 8;
        v115[1] = v115;
        *v115 = v115;
      }
      ++*(_DWORD *)(v16 + 4);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v173);
      v116 = v173.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v117 = KeGetCurrentIrql();
          if ( v117 <= 0xFu && v173.OldIrql <= 0xFu && v117 >= 2u )
          {
            v118 = KeGetCurrentPrcb();
            v119 = *((_QWORD *)v118 + 4375);
            v120 = ~(unsigned __int16)(-1LL << (v173.OldIrql + 1));
            v27 = (v120 & *(_DWORD *)(v119 + 20)) == 0;
            *(_DWORD *)(v119 + 20) &= v120;
            if ( v27 )
              sub_140418E4C(v118);
          }
        }
      }
      __writecr8(v116);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v121 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v122 = KeGetCurrentIrql();
          if ( v122 <= 0xFu && LockHandle.OldIrql <= 0xFu && v122 >= 2u )
          {
            v123 = KeGetCurrentPrcb();
            v124 = *((_QWORD *)v123 + 4375);
            v125 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v27 = (v125 & *(_DWORD *)(v124 + 20)) == 0;
            *(_DWORD *)(v124 + 20) &= v125;
            if ( v27 )
              sub_140418E4C(v123);
          }
        }
      }
      __writecr8(v121);
      KeWaitForSingleObject(*(PVOID *)(v16 + 176), Executive, 0, 0, 0LL);
      v126 = *(_DWORD *)(v16 + 156);
      if ( v126 >= 0 )
        goto LABEL_46;
      v10 = *(_DWORD *)(v16 + 156);
      IsNtstatusExpected = FsRtlIsNtstatusExpected(v126);
      v53 = P;
      v145 = (int)P;
      if ( !IsNtstatusExpected )
        v10 = -1073741590;
      goto LABEL_240;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v63 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v64 = KeGetCurrentIrql();
        if ( v64 <= 0xFu && LockHandle.OldIrql <= 0xFu && v64 >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v66 = *((_QWORD *)v65 + 4375);
          v67 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v67 & *(_DWORD *)(v66 + 20)) == 0;
          *(_DWORD *)(v66 + 20) &= v67;
          if ( v27 )
            sub_140418E4C(v65);
        }
      }
    }
    __writecr8(v63);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v62 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v168 = KeGetCurrentIrql();
      if ( v168 <= 0xFu && LockHandle.OldIrql <= 0xFu && v168 >= 2u )
      {
        v169 = KeGetCurrentPrcb();
        v170 = *((_QWORD *)v169 + 4375);
        v171 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v27 = (v171 & *(_DWORD *)(v170 + 20)) == 0;
        *(_DWORD *)(v170 + 20) &= v171;
        if ( v27 )
          sub_140418E4C(v169);
      }
    }
  }
  __writecr8(v62);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x63536343u);
}
