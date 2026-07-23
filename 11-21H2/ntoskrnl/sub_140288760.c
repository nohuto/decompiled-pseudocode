/*
 * XREFs of sub_140288760 @ 0x140288760
 * Callers:
 *     sub_140275FC0 @ 0x140275FC0 (sub_140275FC0.c)
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14023A1D8 @ 0x14023A1D8 (sub_14023A1D8.c)
 *     sub_14023F3E8 @ 0x14023F3E8 (sub_14023F3E8.c)
 *     sub_140248C10 @ 0x140248C10 (sub_140248C10.c)
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     sub_1402767FC @ 0x1402767FC (sub_1402767FC.c)
 *     sub_1402768B4 @ 0x1402768B4 (sub_1402768B4.c)
 *     sub_14027A1B4 @ 0x14027A1B4 (sub_14027A1B4.c)
 *     CcGetFlushedValidData @ 0x14027FB60 (CcGetFlushedValidData.c)
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_140288EE4 @ 0x140288EE4 (sub_140288EE4.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140538890 @ 0x140538890 (sub_140538890.c)
 *     sub_14053A580 @ 0x14053A580 (sub_14053A580.c)
 *     FsRtlAcquireFileExclusive @ 0x1406FE2E0 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 */

void __fastcall sub_140288760(__int64 a1)
{
  __int64 v2; // rbx
  char v3; // r12
  int *v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 OldIrql; // rdi
  bool v8; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  signed __int64 *v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // r15d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int *v22; // r15
  int v23; // r15d
  unsigned __int64 v24; // rdi
  struct _FILE_OBJECT *v25; // rdi
  int v26; // ecx
  unsigned int v27; // eax
  struct _FILE_OBJECT *v28; // rdi
  char v29; // r12
  int v30; // eax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rdx
  char v36; // r9
  __int64 v37; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v40; // r9
  int v41; // eax
  bool v42; // zf
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  __int64 v45; // r9
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  __int64 v49; // r9
  int v50; // eax
  unsigned __int64 v51; // rdi
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  __int64 v54; // r9
  int v55; // eax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  __int64 v58; // r9
  int v59; // eax
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  __int64 v62; // r9
  int v63; // eax
  unsigned __int64 v64; // rdi
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  __int64 v67; // r9
  int v68; // eax
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r9
  __int64 v71; // r8
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // r8
  unsigned __int64 v75; // rbx
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r9
  __int64 v78; // r8
  int v79; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-59h] BYREF
  int *v81; // [rsp+48h] [rbp-41h]
  __int64 v82; // [rsp+50h] [rbp-39h]
  __int64 v83; // [rsp+58h] [rbp-31h] BYREF
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // [rsp+60h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE v85; // [rsp+68h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE v86; // [rsp+80h] [rbp-9h] BYREF
  char v87; // [rsp+F8h] [rbp+6Fh]
  int v88; // [rsp+100h] [rbp+77h]
  LARGE_INTEGER FlushedValidData; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_BYTE *)(a1 + 56);
  v4 = *(int **)(a1 + 24);
  v83 = 0LL;
  memset(&v85, 0, sizeof(v85));
  v81 = v4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v87 = v3;
  memset(&v86, 0, sizeof(v86));
  v5 = *(_QWORD *)(v2 + 528);
  if ( byte_140C54C58 == 1 )
    v82 = *(_QWORD *)(v2 + 592);
  else
    v82 = 0LL;
  if ( v5 != *(_QWORD *)(a1 + 136) )
    KeBugCheckEx(0x34u, 0x1C3BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
    ++*(_DWORD *)(v2 + 4);
    ++*(_DWORD *)(v2 + 536);
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
          v40 = *((_QWORD *)CurrentPrcb + 4375);
          v6 = -1LL << (LockHandle.OldIrql + 1);
          v41 = ~(unsigned __int16)v6;
          v42 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
          *(_DWORD *)(v40 + 20) &= v41;
          if ( v42 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    LOBYTE(v6) = 1;
    sub_140288EE4(v5, v6, v2);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v86);
    v8 = sub_1402768B4(v5);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v86);
    v10 = v86.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v43 = KeGetCurrentIrql();
        if ( v43 <= 0xFu && v86.OldIrql <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v45 = *((_QWORD *)v44 + 4375);
          v9 = -1LL << (v86.OldIrql + 1);
          v46 = ~(unsigned __int16)v9;
          v42 = (v46 & *(_DWORD *)(v45 + 20)) == 0;
          *(_DWORD *)(v45 + 20) &= v46;
          if ( v42 )
            sub_140418E4C(v44);
        }
      }
    }
    __writecr8(v10);
    if ( !v8 )
      sub_140288EE4(v5, 0LL, v2);
    LOBYTE(v9) = 1;
    if ( !(unsigned __int8)sub_14042A5E0(*(_QWORD *)(v2 + 216), v9) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v2 + 280));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
    v11 = *(_QWORD *)(v2 + 160);
    v88 = *(_DWORD *)(v2 + 152) & 0x10000;
    if ( v11 )
    {
      if ( byte_140C54C58 == 1 )
        v27 = *(_DWORD *)(*(_QWORD *)(v2 + 592) + 912LL);
      else
        v27 = *(_DWORD *)(v5 + 912);
      v12 = *(_DWORD *)(v11 + 8);
      *(_DWORD *)(v11 + 4) = v12;
      if ( v12 > v27 )
      {
        *(_DWORD *)(v11 + 4) = v27;
        v12 = v27;
      }
    }
    else
    {
      v12 = *(_DWORD *)(v2 + 192);
    }
    SectionObjectPointer = *(PSECTION_OBJECT_POINTERS *)((*(_QWORD *)(v2 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v13 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v47 = KeGetCurrentIrql();
        if ( v47 <= 0xFu && LockHandle.OldIrql <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = *((_QWORD *)v48 + 4375);
          v50 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v42 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
          *(_DWORD *)(v49 + 20) &= v50;
          if ( v42 )
            sub_140418E4C(v48);
        }
      }
    }
    __writecr8(v13);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v2 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 196LL), v12);
    if ( (*(_DWORD *)(v2 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 200LL), v12);
    v14 = *(_QWORD *)(v2 + 504);
    *(_QWORD *)(v14 + 264) += *(unsigned int *)(v14 + 196);
    v15 = *(_QWORD *)(v14 + 272);
    if ( v15 <= *(unsigned int *)(*(_QWORD *)(v2 + 504) + 196LL) )
      v15 = *(unsigned int *)(*(_QWORD *)(v2 + 504) + 196LL);
    ++*(_QWORD *)(v14 + 280);
    *(_QWORD *)(v14 + 272) = v15;
    *(_QWORD *)(v14 + 288) += *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL);
    v16 = *(_QWORD *)(v14 + 296);
    if ( v16 <= *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL) )
      v16 = *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL);
    ++*(_QWORD *)(v14 + 304);
    *(_QWORD *)(v14 + 296) = v16;
    if ( (*(_DWORD *)(v2 + 152) & 0x1000000) != 0 )
    {
      v17 = &v83;
      v83 = *(_QWORD *)(*(_QWORD *)(v2 + 240) + 112LL);
    }
    else
    {
      v17 = 0LL;
    }
    sub_140283030((__int64)SectionObjectPointer, &unk_140C49AF8, 1u, v17, 0, v81);
    sub_140288EE4(v5, 0LL, v2);
    v19 = -v12;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 196LL), v19);
    if ( (*(_DWORD *)(v2 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 200LL), v19);
    *(_QWORD *)(v14 + 264) += *(unsigned int *)(*(_QWORD *)(v2 + 504) + 196LL);
    v20 = *(_QWORD *)(v14 + 272);
    if ( v20 <= *(unsigned int *)(*(_QWORD *)(v2 + 504) + 196LL) )
      v20 = *(unsigned int *)(*(_QWORD *)(v2 + 504) + 196LL);
    ++*(_QWORD *)(v14 + 280);
    *(_QWORD *)(v14 + 272) = v20;
    *(_QWORD *)(v14 + 288) += *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL);
    v21 = *(_QWORD *)(v14 + 296);
    if ( v21 <= *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL) )
      v21 = *(unsigned int *)(*(_QWORD *)(v2 + 504) + 200LL);
    ++*(_QWORD *)(v14 + 304);
    *(_QWORD *)(v14 + 296) = v21;
    sub_14042A5E0(*(_QWORD *)(v2 + 216), v18);
    v22 = v81;
    if ( *v81 != -2147483626 && sub_140248C10(v2, *v81) )
    {
      v51 = sub_14027A1B4(v2);
      sub_14053A580(v51, (unsigned int)*v22);
      sub_140230680((signed __int64 *)(v2 + 96), v51, 0x63536343u);
    }
    v23 = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v2 + 280));
    FlushedValidData = *(LARGE_INTEGER *)(v2 + 40);
    if ( sub_14023A1D8(v2) )
    {
      FlushedValidData = CcGetFlushedValidData(SectionObjectPointer, 1u);
      if ( FlushedValidData.QuadPart >= *(_QWORD *)(v2 + 40) )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v2 + 280));
        v28 = (struct _FILE_OBJECT *)sub_14027A1B4(v2);
        v23 = sub_14023F3E8(v28, (__int64 *)&FlushedValidData);
        sub_140230680((signed __int64 *)(v2 + 96), (unsigned __int64)v28, 0x63536343u);
        ExAcquireFastMutex((PFAST_MUTEX)(v2 + 280));
        if ( v23 < 0 )
        {
          if ( v23 != -1073741740 && v23 != -1073741670 && v23 != -2147483626 )
            FlushedValidData = *(LARGE_INTEGER *)(v2 + 48);
        }
        else
        {
          *(LARGE_INTEGER *)(v2 + 40) = FlushedValidData;
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v2 + 280));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
    --*(_DWORD *)(v2 + 4);
    --*(_DWORD *)(v2 + 536);
    if ( *(_DWORD *)(v2 + 4) )
      goto LABEL_50;
    if ( v23 == -1073741740 || v23 == -2147483626 || v23 == -1073741670 )
    {
      if ( (*(_DWORD *)(v2 + 152) & 0x10000) != 0 )
        sub_140538890(v2);
      if ( !*(_DWORD *)(v2 + 112) )
      {
        sub_1402767FC(v2);
        v29 = 1;
        goto LABEL_51;
      }
LABEL_50:
      v29 = 0;
      goto LABEL_51;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v24 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v52 = KeGetCurrentIrql();
        if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          v54 = *((_QWORD *)v53 + 4375);
          v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v42 = (v55 & *(_DWORD *)(v54 + 20)) == 0;
          *(_DWORD *)(v54 + 20) &= v55;
          if ( v42 )
            sub_140418E4C(v53);
        }
      }
    }
    __writecr8(v24);
    v25 = (struct _FILE_OBJECT *)sub_14027A1B4(v2);
    FsRtlAcquireFileExclusive(v25);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &v85);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
    v26 = *(_DWORD *)(v2 + 4);
    if ( !v26
      && (!*(_DWORD *)(v2 + 112)
       && (*(_QWORD *)(v2 + 40) == 0x7FFFFFFFFFFFFFFFLL
        || (*(_DWORD *)(v2 + 152) & 0x400) == 0
        || FlushedValidData.QuadPart >= *(_QWORD *)(v2 + 48))
       || !*(_QWORD *)(v2 + 8) && (*(_DWORD *)(v2 + 152) & 4) == 0) )
    {
      sub_140275338((_QWORD *)v2, &v85, &LockHandle, 1, v25);
      *((_QWORD *)v81 + 1) = 0LL;
      goto LABEL_38;
    }
    if ( *(_DWORD *)(v2 + 112) )
    {
      if ( (*(_DWORD *)(v2 + 152) & 0x10000) != 0 )
        sub_140538890(v2);
LABEL_62:
      v29 = 0;
      goto LABEL_63;
    }
    if ( v26 )
      goto LABEL_62;
    sub_1402767FC(v2);
    v29 = 1;
LABEL_63:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v32 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v56 = KeGetCurrentIrql();
        if ( v56 <= 0xFu && LockHandle.OldIrql <= 0xFu && v56 >= 2u )
        {
          v57 = KeGetCurrentPrcb();
          v58 = *((_QWORD *)v57 + 4375);
          v59 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v42 = (v59 & *(_DWORD *)(v58 + 20)) == 0;
          *(_DWORD *)(v58 + 20) &= v59;
          if ( v42 )
            sub_140418E4C(v57);
        }
      }
    }
    __writecr8(v32);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v85);
    v33 = v85.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v60 = KeGetCurrentIrql();
        if ( v60 <= 0xFu && v85.OldIrql <= 0xFu && v60 >= 2u )
        {
          v61 = KeGetCurrentPrcb();
          v62 = *((_QWORD *)v61 + 4375);
          v63 = ~(unsigned __int16)(-1LL << (v85.OldIrql + 1));
          v42 = (v63 & *(_DWORD *)(v62 + 20)) == 0;
          *(_DWORD *)(v62 + 20) &= v63;
          if ( v42 )
            sub_140418E4C(v61);
        }
      }
    }
    __writecr8(v33);
    FsRtlReleaseFile(v25);
    sub_140230680((signed __int64 *)(v2 + 96), (unsigned __int64)v25, 0x63536343u);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
LABEL_51:
    v30 = *(_DWORD *)(v2 + 152);
    if ( (v30 & 0x10000) == 0 || v88 )
    {
      if ( *((_QWORD *)v81 + 1) != 35422LL )
        *(_DWORD *)(v2 + 152) = v30 & 0xFFFFFFDF;
      if ( v29 )
      {
        if ( byte_140C54C58 == 1 )
          v34 = *(_QWORD *)(v2 + 592);
        else
          v34 = *(_QWORD *)(v2 + 528);
        v35 = v82;
        *(_BYTE *)(v34 + 986) = 1;
        if ( (*(_DWORD *)(v2 + 152) & 0x10000) != 0 )
        {
          v36 = 1;
          v37 = 1LL;
        }
        else
        {
          v36 = 0;
          v37 = 0LL;
        }
        sub_140276758((_BYTE *)v5, v35, v37, v36);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v31 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v69 = KeGetCurrentIrql();
          if ( v69 <= 0xFu && LockHandle.OldIrql <= 0xFu && v69 >= 2u )
          {
            v70 = KeGetCurrentPrcb();
            v71 = *((_QWORD *)v70 + 4375);
            v72 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v42 = (v72 & *(_DWORD *)(v71 + 20)) == 0;
            *(_DWORD *)(v71 + 20) &= v72;
            if ( v42 )
              sub_140418E4C(v70);
          }
        }
      }
      __writecr8(v31);
      goto LABEL_38;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v64 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v65 = KeGetCurrentIrql();
        if ( v65 <= 0xFu && LockHandle.OldIrql <= 0xFu && v65 >= 2u )
        {
          v66 = KeGetCurrentPrcb();
          v67 = *((_QWORD *)v66 + 4375);
          v68 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v42 = (v68 & *(_DWORD *)(v67 + 20)) == 0;
          *(_DWORD *)(v67 + 20) &= v68;
          if ( v42 )
            sub_140418E4C(v66);
        }
      }
    }
    __writecr8(v64);
  }
  sub_140288EE4(v5, 0LL, v2);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &LockHandle);
  *(_DWORD *)(v2 + 152) &= ~0x20u;
  if ( (*(_DWORD *)(v2 + 152) & 0x10000) != 0 )
    sub_140538890(v2);
  sub_140282AF4(v2, v73, v74);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v75 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v76 = KeGetCurrentIrql();
      if ( v76 <= 0xFu && LockHandle.OldIrql <= 0xFu && v76 >= 2u )
      {
        v77 = KeGetCurrentPrcb();
        v78 = *((_QWORD *)v77 + 4375);
        v79 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v42 = (v79 & *(_DWORD *)(v78 + 20)) == 0;
        *(_DWORD *)(v78 + 20) &= v79;
        if ( v42 )
          sub_140418E4C(v77);
      }
    }
  }
  __writecr8(v75);
  *v81 = -1073741740;
LABEL_38:
  if ( v87 )
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
