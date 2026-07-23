/*
 * XREFs of CcCanIWrite @ 0x140283F40
 * Callers:
 *     FsRtlCopyWrite @ 0x14092D2C0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14092DCF0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x140223920 (ExInterlockedInsertTailList.c)
 *     ExInterlockedInsertHeadList @ 0x1402430F0 (ExInterlockedInsertHeadList.c)
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     sub_140284848 @ 0x140284848 (sub_140284848.c)
 *     sub_14029E260 @ 0x14029E260 (sub_14029E260.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 *     sub_14053E4EC @ 0x14053E4EC (sub_14053E4EC.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  __int64 v4; // r11
  ULONG v5; // r10d
  int v7; // edx
  __int64 v8; // r15
  __int64 v9; // r13
  ULONG Flags; // eax
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v13; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _QWORD *SharedCacheMap; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *v19; // r12
  PSECTION_OBJECT_POINTERS v20; // rcx
  bool v21; // si
  _DWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  struct _KPRCB *v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  char v29; // bl
  BOOLEAN v30; // si
  BOOLEAN v31; // al
  char v32; // r14
  unsigned __int8 v33; // r10
  struct _KPRCB *v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  struct _KPRCB *v39; // rcx
  __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  signed __int64 v42; // rax
  bool v43; // cc
  signed __int64 v44; // rax
  __int64 v46; // r9
  __int64 v47; // r9
  int v48; // eax
  int v49; // eax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  __int64 v52; // r9
  int v53; // eax
  bool v54; // zf
  KSPIN_LOCK *v55; // r8
  __int64 v56; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  __int64 v60; // r9
  int v61; // eax
  _BYTE *v62; // r15
  _BYTE *v63; // r14
  __int64 v64; // r8
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  __int64 v67; // r9
  int v68; // eax
  int v69; // eax
  __int64 v70; // rdx
  _QWORD *v71; // rcx
  void *v72; // rcx
  int v73; // eax
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  __int64 v76; // r9
  int v77; // eax
  int v78; // ebx
  signed __int64 v79; // r12
  signed __int64 v80; // r12
  char v81; // [rsp+40h] [rbp-C0h] BYREF
  char v82; // [rsp+41h] [rbp-BFh]
  char v83; // [rsp+42h] [rbp-BEh]
  int v84; // [rsp+44h] [rbp-BCh]
  __int128 v85; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v86; // [rsp+58h] [rbp-A8h]
  __int64 v87; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int64 *v88; // [rsp+68h] [rbp-98h]
  __int64 v89; // [rsp+70h] [rbp-90h]
  _BYTE *v90; // [rsp+78h] [rbp-88h]
  _BYTE *v91; // [rsp+80h] [rbp-80h]
  __int64 Object; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v93[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER Interval; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-40h]
  _QWORD v97[14]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v98; // [rsp+140h] [rbp+40h]
  __int64 v99; // [rsp+150h] [rbp+50h]
  void *retaddr; // [rsp+198h] [rbp+98h]
  UCHAR v103; // [rsp+1B8h] [rbp+B8h]

  v103 = Retrying;
  LODWORD(v4) = 0;
  v86 = 0LL;
  v85 = 0LL;
  v5 = BytesToWrite;
  v83 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v82 = 0;
  v7 = 0;
  v84 = 0;
  v8 = 0LL;
  v96 = 0LL;
  v9 = 0LL;
  if ( (*((_DWORD *)KeGetCurrentThread() + 345) & 2) != 0 )
    return 1;
  if ( !FileObject )
  {
    v16 = *((_QWORD *)qword_140D06C40 + 1);
    v90 = (_BYTE *)(v16 + 716);
    v19 = (_LIST_ENTRY *)(v16 + 1104);
    v91 = (_BYTE *)(v16 + 1228);
    if ( byte_140C54C58 != 1 )
      goto LABEL_32;
    return 1;
  }
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
    return 1;
  *((_QWORD *)&v85 + 1) = &SpinLock;
  *(_QWORD *)&v85 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v46 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v46 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LOBYTE(v86) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v13 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v48 = *(_DWORD *)(v13 + 24);
      *(_DWORD *)(v13 + 24) = v48 + 1;
      if ( v48 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(&v85, &SpinLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&SpinLock, (__int64)&v85) )
  {
    sub_140311C70(&v85);
  }
  SectionObjectPointer = FileObject->SectionObjectPointer;
  if ( SectionObjectPointer && (SharedCacheMap = SectionObjectPointer->SharedCacheMap) != 0LL )
    v16 = SharedCacheMap[66];
  else
    v16 = *((_QWORD *)qword_140D06C40 + 1);
  v17 = sub_140284848(FileObject, v16);
  v9 = v17;
  if ( byte_140C54C58 == 1 )
  {
    v18 = (_LIST_ENTRY *)v17;
    v90 = (_BYTE *)(v17 + 708);
    v91 = (_BYTE *)(v17 + 1172);
  }
  else
  {
    v18 = (_LIST_ENTRY *)v16;
    v90 = (_BYTE *)(v16 + 716);
    v91 = (_BYTE *)(v16 + 1228);
  }
  v19 = v18 + 69;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 1232)) <= 1 )
    __fastfail(0xEu);
  if ( v17 && _InterlockedIncrement64((volatile signed __int64 *)(v17 + 8)) <= 1 )
    __fastfail(0xEu);
  v20 = FileObject->SectionObjectPointer;
  v21 = 0;
  v83 = 1;
  v99 = 0LL;
  v98 = 0LL;
  if ( v20 )
  {
    v22 = v20->SharedCacheMap;
    if ( v22 )
      v21 = (v22[38] & 0x40000000) != 0;
  }
  if ( !byte_140C498C1 )
  {
    if ( v20 )
    {
      v23 = v20->SharedCacheMap;
      if ( v23 )
      {
        v8 = v23[63];
        v96 = v8;
        v82 = 1;
        ++*(_DWORD *)(v8 + 4);
      }
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(&v85, retaddr);
    v4 = 0LL;
    goto LABEL_27;
  }
  _m_prefetchw(&v85);
  v24 = v85;
  if ( (_QWORD)v85 )
    goto LABEL_67;
  if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v85 + 1), v4, (signed __int64)&v85) != &v85 )
  {
    v24 = sub_140282C20((__int64 *)&v85);
    v4 = 0LL;
LABEL_67:
    *(_QWORD *)&v85 = v4;
    _InterlockedXor64((volatile signed __int64 *)(v24 + 8), 1uLL);
  }
LABEL_27:
  v25 = KeGetCurrentPrcb();
  v26 = *((_QWORD *)v25 + 4375);
  if ( v26 )
  {
    if ( *((_BYTE *)v25 + 32) <= 1u )
    {
      v49 = *(_DWORD *)(v26 + 24) - 1;
      *(_DWORD *)(v26 + 24) = v49;
      if ( !v49 )
      {
        sub_140418E4C(v25);
        v4 = 0LL;
      }
    }
  }
  v27 = (unsigned __int8)v86;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v50 = KeGetCurrentIrql();
      if ( v50 <= 0xFu && (unsigned __int8)v86 <= 0xFu && v50 >= 2u )
      {
        v51 = KeGetCurrentPrcb();
        v52 = *((_QWORD *)v51 + 4375);
        v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v86 + 1));
        v54 = (v53 & *(_DWORD *)(v52 + 20)) == 0;
        *(_DWORD *)(v52 + 20) &= v53;
        if ( v54 )
        {
          sub_140418E4C(v51);
          v4 = 0LL;
        }
      }
    }
  }
  __writecr8(v27);
  if ( v21 || byte_140C54C58 == 1 && !v9 )
  {
LABEL_37:
    v30 = 1;
  }
  else
  {
    while ( 1 )
    {
      v7 = v84;
      Retrying = v103;
      v5 = BytesToWrite;
LABEL_32:
      v28 = (unsigned int)(v7 + 1);
      v29 = 0;
      v30 = 0;
      v84 = v28;
      v81 = 0;
      if ( Retrying || v19->Flink == v19 || dword_140C54C6C && v5 && v5 >= dword_140C54C6C )
      {
        v31 = sub_1402844A0(v16, v9, (_DWORD)FileObject, v5, v4, v4, (__int64)&v81);
        v29 = v81;
        v30 = v31;
        if ( v31 && !v81 || v84 == 2 && v31 )
          goto LABEL_36;
        v5 = BytesToWrite;
      }
      if ( (xmmword_140D06910 & 0x20000) != 0 )
        sub_14053E4EC(FileObject, v5, *(_QWORD *)(v16 + 992), *(_QWORD *)(v16 + 1016));
      LOBYTE(v28) = 1;
      sub_14029E260(v16, v28);
      if ( Wait )
      {
        Object = 393216LL;
        memset(v97, 0, 0x68uLL);
        v97[9] = v16;
        v93[1] = v93;
        v93[0] = v93;
        LODWORD(v97[2]) = BytesToWrite;
        v97[5] = &Object;
        v97[10] = v9;
        LODWORD(v97[0]) = 6816508;
        v97[1] = FileObject;
        v97[12] = MEMORY[0xFFFFF78000000320];
        if ( !v30 || (LOBYTE(v97[11]) = 1, !v81) )
          LOBYTE(v97[11]) = 0;
        v55 = (KSPIN_LOCK *)(v16 + 1152);
        if ( v103 )
          ExInterlockedInsertHeadList(v19, (PLIST_ENTRY)&v97[3], v55);
        else
          ExInterlockedInsertTailList(v19, (PLIST_ENTRY)&v97[3], v55);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 704), &LockHandle);
        LOBYTE(v56) = 1;
        sub_140276758((_BYTE *)v16, v9, v56, 0);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v58 = KeGetCurrentIrql();
            if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
            {
              v59 = KeGetCurrentPrcb();
              v60 = *((_QWORD *)v59 + 4375);
              v61 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v54 = (v61 & *(_DWORD *)(v60 + 20)) == 0;
              *(_DWORD *)(v60 + 20) &= v61;
              if ( v54 )
                sub_140418E4C(v59);
            }
          }
        }
        v62 = v90;
        v63 = v91;
LABEL_127:
        __writecr8(OldIrql);
        while ( 1 )
        {
          sub_14053A100(v16, v9);
          if ( !KeWaitForSingleObject(&Object, Executive, 0, 0, &DueTime) )
            break;
          if ( *v63 || *v62 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 704), &LockHandle);
            LOBYTE(v64) = 1;
            sub_140276758((_BYTE *)v16, v9, v64, 0);
            if ( *v62 )
              *v62 = 0;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            OldIrql = LockHandle.OldIrql;
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
                  v54 = (v68 & *(_DWORD *)(v67 + 20)) == 0;
                  *(_DWORD *)(v67 + 20) &= v68;
                  if ( v54 )
                    sub_140418E4C(v66);
                }
              }
            }
            goto LABEL_127;
          }
        }
        v8 = v96;
LABEL_36:
        v4 = 0LL;
        goto LABEL_37;
      }
      if ( v84 != 1 )
        break;
      if ( !v30 )
      {
        v30 = 0;
        v4 = 0LL;
        goto LABEL_38;
      }
      if ( !v29 )
        goto LABEL_36;
      Interval.HighPart = -1;
      Interval.LowPart = -10000 * dword_140C54C74;
      DbgPrintEx(0x7Fu, 2u, "CcCanIWrite: will delay %lums before retrying async-write\n", dword_140C54C74);
      if ( v8 )
        ++*(_QWORD *)(v8 + 376);
      KeDelayExecutionThread(0, 0, &Interval);
      LODWORD(v4) = 0;
    }
    if ( v8 )
      ++*(_QWORD *)(v8 + 368);
    v4 = 0LL;
  }
LABEL_38:
  if ( !v82 )
    goto LABEL_52;
  ++*(_QWORD *)(v8 + 360);
  v88 = (volatile signed __int64 *)&SpinLock;
  v32 = 0;
  v87 = v4;
  v89 = 0LL;
  v33 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v33 <= 0xFu )
  {
    v47 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v47 + 20) |= (-1 << (v33 + 1)) & 4;
  }
  LOBYTE(v89) = v33;
  v34 = KeGetCurrentPrcb();
  v35 = *((_QWORD *)v34 + 4375);
  if ( v35 )
  {
    if ( *((_BYTE *)v34 + 32) <= 1u )
    {
      v69 = *(_DWORD *)(v35 + 24);
      *(_DWORD *)(v35 + 24) = v69 + 1;
      if ( v69 == -1 )
      {
        sub_140418E4C(v34);
        v4 = 0LL;
      }
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(&v87, &SpinLock);
  }
  else
  {
    if ( !_InterlockedExchange64((volatile __int64 *)&SpinLock, (__int64)&v87) )
      goto LABEL_43;
    sub_140311C70(&v87);
  }
  v4 = 0LL;
LABEL_43:
  v36 = *(_DWORD *)(v8 + 4);
  if ( !v36 )
    KeBugCheckEx(0x34u, 0x62EuLL, 0xFFFFFFFFC0000420uLL, 0LL, v4);
  v37 = v36 - 1;
  *(_DWORD *)(v8 + 4) = v37;
  if ( !v37 )
  {
    v70 = *(_QWORD *)(v8 + 16);
    v71 = *(_QWORD **)(v8 + 24);
    v32 = 1;
    if ( *(_QWORD *)(v70 + 8) != v8 + 16 || *v71 != v8 + 16 )
      __fastfail(3u);
    *v71 = v70;
    *(_QWORD *)(v70 + 8) = v71;
    _InterlockedDecrement64(&qword_140C498C8);
    v72 = *(void **)(v8 + 160);
    if ( v72 )
    {
      ObfDereferenceObject(v72);
      v4 = 0LL;
      *(_QWORD *)(v8 + 160) = 0LL;
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(&v87, retaddr);
  }
  else
  {
    _m_prefetchw(&v87);
    v38 = v87;
    if ( !v87 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v88, v4, (signed __int64)&v87) == &v87 )
        goto LABEL_48;
      v38 = sub_140282C20(&v87);
      v4 = 0LL;
    }
    v87 = v4;
    _InterlockedXor64((volatile signed __int64 *)(v38 + 8), 1uLL);
  }
LABEL_48:
  v39 = KeGetCurrentPrcb();
  v40 = *((_QWORD *)v39 + 4375);
  if ( v40 )
  {
    if ( *((_BYTE *)v39 + 32) <= 1u )
    {
      v73 = *(_DWORD *)(v40 + 24) - 1;
      *(_DWORD *)(v40 + 24) = v73;
      if ( !v73 )
        sub_140418E4C(v39);
    }
  }
  v41 = (unsigned __int8)v89;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v74 = KeGetCurrentIrql();
      if ( v74 <= 0xFu && (unsigned __int8)v89 <= 0xFu && v74 >= 2u )
      {
        v75 = KeGetCurrentPrcb();
        v76 = *((_QWORD *)v75 + 4375);
        v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v89 + 1));
        v54 = (v77 & *(_DWORD *)(v76 + 20)) == 0;
        *(_DWORD *)(v76 + 20) &= v77;
        if ( v54 )
          sub_140418E4C(v75);
      }
    }
  }
  __writecr8(v41);
  if ( v32 )
  {
    v78 = *(_DWORD *)(v8 + 204);
    ExFreePoolWithTag((PVOID)v8, 0x6D566343u);
    DbgPrintEx(
      0x7Fu,
      3u,
      "[%04x:%04x]CcDecrementVolumeUseCountWithDelete: VCM:%p(vid:%2lx) Freed!\n",
      *((_DWORD *)KeGetCurrentThread() + 306),
      *((_DWORD *)KeGetCurrentThread() + 308),
      (const void *)v8,
      v78);
  }
LABEL_52:
  if ( v83 )
  {
    v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 1232), 0xFFFFFFFFFFFFFFFFuLL);
    v43 = v42 <= 1;
    v44 = v42 - 1;
    if ( v43 )
    {
      if ( v44 )
        __fastfail(0xEu);
      KeSetEvent((PRKEVENT)(v16 + 1264), 0, 0);
    }
    if ( v9 )
    {
      v79 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      v43 = v79 <= 1;
      v80 = v79 - 1;
      if ( v43 )
      {
        if ( v80 )
          __fastfail(0xEu);
        KeSetEvent((PRKEVENT)(v9 + 1200), 0, 0);
      }
    }
  }
  return v30;
}
