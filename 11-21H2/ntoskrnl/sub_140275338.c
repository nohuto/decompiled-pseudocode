/*
 * XREFs of sub_140275338 @ 0x140275338
 * Callers:
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_14053DDB8 @ 0x14053DDB8 (sub_14053DDB8.c)
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14023F250 @ 0x14023F250 (sub_14023F250.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     sub_140276A48 @ 0x140276A48 (sub_140276A48.c)
 *     sub_140276AAC @ 0x140276AAC (sub_140276AAC.c)
 *     sub_140276BF8 @ 0x140276BF8 (sub_140276BF8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140388FC8 @ 0x140388FC8 (sub_140388FC8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140538C04 @ 0x140538C04 (sub_140538C04.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140275338(
        _QWORD *P,
        PKLOCK_QUEUE_HANDLE LockHandle,
        PKLOCK_QUEUE_HANDLE a3,
        int a4,
        PFILE_OBJECT FileObject)
{
  __int64 v5; // r13
  __int64 StartContext; // rsi
  char *v11; // rax
  __int64 v12; // rdx
  char **v13; // rcx
  char v14; // r8
  _QWORD **v15; // rdx
  PVOID *v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v19; // rbx
  void *v20; // rcx
  void *v21; // rbx
  void *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rbx
  _QWORD **v30; // rdx
  PVOID *v31; // rcx
  _QWORD **v32; // rdx
  PVOID *v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rdx
  __int64 v36; // rdx
  _QWORD *v37; // rcx
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
  signed __int64 v51; // rax
  bool v52; // cc
  signed __int64 v53; // rax
  int v54; // [rsp+58h] [rbp-31h]
  HANDLE ThreadHandle; // [rsp+60h] [rbp-29h] BYREF
  __int128 v56; // [rsp+68h] [rbp-21h]
  __int64 v57; // [rsp+78h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF

  v5 = P[66];
  v54 = 0;
  ThreadHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  StartContext = 0LL;
  if ( byte_140C54C58 == 1 )
    StartContext = P[74];
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 1232)) <= 1 )
    __fastfail(0xEu);
  if ( StartContext && _InterlockedIncrement64((volatile signed __int64 *)(StartContext + 8)) <= 1 )
    __fastfail(0xEu);
  v11 = (char *)(P + 17);
  v12 = P[17];
  v13 = (char **)P[18];
  if ( *(_QWORD **)(v12 + 8) != P + 17 || *v13 != v11 )
    goto LABEL_87;
  v14 = byte_140C54C58;
  *v13 = (char *)v12;
  *(_QWORD *)(v12 + 8) = v13;
  if ( v14 == 1 )
  {
    v30 = (_QWORD **)P[70];
    v31 = (PVOID *)P[71];
    if ( v30[1] != P + 70 || *v31 != P + 70 )
      goto LABEL_87;
    *v31 = v30;
    v30[1] = v31;
  }
  if ( (P[19] & 0x3000000) != 0 )
  {
    v15 = (_QWORD **)P[15];
    v16 = (PVOID *)P[16];
    if ( v15[1] != P + 15 || *v16 != P + 15 )
      goto LABEL_87;
    *v16 = v15;
    v15[1] = v16;
    if ( v14 == 1 )
    {
      v32 = (_QWORD **)P[72];
      v33 = (PVOID *)P[73];
      if ( v32[1] != P + 72 || *v33 != P + 72 )
        goto LABEL_87;
      *v33 = v32;
      v32[1] = v33;
    }
  }
  *(_QWORD *)(*(_QWORD *)((P[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) = 0LL;
  *((_DWORD *)P + 38) |= 0x80020u;
  if ( LockHandle )
  {
    ++qword_140C4E878;
  }
  else if ( !*(_BYTE *)(v5 + 1230) )
  {
    KeBugCheckEx(0x34u, 0xF8DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  if ( P[74] )
  {
    v54 = sub_140538C04();
    if ( !v54 )
    {
      v34 = *(_QWORD *)(StartContext + 592);
      v35 = *(_QWORD **)(StartContext + 600);
      if ( *(_QWORD *)(v34 + 8) == StartContext + 592 && *v35 == StartContext + 592 )
      {
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
        v36 = *(_QWORD *)(StartContext + 576);
        v37 = *(_QWORD **)(StartContext + 584);
        if ( *(_QWORD *)(v36 + 8) == StartContext + 576 && *v37 == StartContext + 576 )
        {
          *v37 = v36;
          *(_QWORD *)(v36 + 8) = v37;
          goto LABEL_15;
        }
      }
LABEL_87:
      __fastfail(3u);
    }
  }
LABEL_15:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  OldIrql = a3->OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = -1LL << ((unsigned __int8)OldIrql + 1);
        v40 = *((_QWORD *)CurrentPrcb + 4375);
        v41 = ~(unsigned __int16)v17;
        v42 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
        *(_DWORD *)(v40 + 20) &= v41;
        if ( v42 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( LockHandle )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
    v19 = LockHandle->OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v43 = KeGetCurrentIrql();
        if ( v43 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v17 = -1LL << ((unsigned __int8)v19 + 1);
          v45 = *((_QWORD *)v44 + 4375);
          v46 = ~(unsigned __int16)v17;
          v42 = (v46 & *(_DWORD *)(v45 + 20)) == 0;
          *(_DWORD *)(v45 + 20) &= v46;
          if ( v42 )
            sub_140418E4C(v44);
        }
      }
    }
    __writecr8(v19);
  }
  if ( (_QWORD *)P[2] != P + 2 )
    sub_140388FC8(P);
  LOBYTE(v17) = P[1] >= 0x100000LL;
  sub_140276BF8(P, v17);
  if ( a4 )
  {
    FsRtlReleaseFile(FileObject);
    sub_140230680(P + 12, (unsigned __int64)FileObject, 0x63536343u);
  }
  v20 = (void *)P[21];
  if ( v20 )
  {
    ObfDereferenceObject(v20);
    P[21] = 0LL;
  }
  if ( P[20] )
    sub_14023F250((__int64)P);
  v21 = (void *)P[63];
  v57 = 0LL;
  v56 = 0LL;
  sub_140276AAC(v21);
  v22 = (void *)sub_140276A48(P + 12, 0LL);
  ObfDereferenceObject(v22);
  v23 = P[34];
  if ( v23 )
  {
    do
    {
      v28 = v23 & 0xFFFFFFFFFFFFFFFEuLL;
      v29 = *(_QWORD *)v28;
      KeSetEvent((PRKEVENT)(v28 + 8), 0, 0);
      v23 = v29;
    }
    while ( v29 );
  }
  if ( LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, LockHandle);
    ++qword_140C4E868;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
    v24 = LockHandle->OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v47 = KeGetCurrentIrql();
        if ( v47 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = *((_QWORD *)v48 + 4375);
          v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v42 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
          *(_DWORD *)(v49 + 20) &= v50;
          if ( v42 )
            sub_140418E4C(v48);
        }
      }
    }
    __writecr8(v24);
  }
  v25 = (_QWORD *)P[11];
  if ( v25 != P + 7 && v25 )
    ExFreePoolWithTag(v25, 0);
  v26 = (_QWORD *)P[22];
  if ( v26 && v26 != P + 43 )
    ExFreePoolWithTag(v26, 0);
  v27 = (_QWORD *)P[23];
  if ( v27 && v27 != P + 43 )
    ExFreePoolWithTag(v27, 0);
  sub_140276728(v5);
  if ( StartContext )
  {
    v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)(StartContext + 8), 0xFFFFFFFFFFFFFFFFuLL);
    v52 = v51 <= 1;
    v53 = v51 - 1;
    if ( v52 )
    {
      if ( v53 )
        __fastfail(0xEu);
      KeSetEvent((PRKEVENT)(StartContext + 1200), 0, 0);
    }
    if ( !v54 )
    {
      DbgPrintEx(
        0x7Fu,
        2u,
        "[%04x:%04x]CcDeleteSharedCacheMap: DEL-PVCM SCM:%p, VCM:%p(vid:%2lx), PVCM:%p(vid:%2lx)\n",
        *((_DWORD *)KeGetCurrentThread() + 306),
        *((_DWORD *)KeGetCurrentThread() + 308),
        P,
        (const void *)P[63],
        *(_DWORD *)(P[63] + 204LL),
        (const void *)StartContext,
        *(_DWORD *)(StartContext + 24));
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( PsCreateSystemThread(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             *(HANDLE *)(*(_QWORD *)(v5 + 8) + 112LL),
             0LL,
             sub_14053D880,
             (PVOID)StartContext) >= 0 )
        ZwClose(ThreadHandle);
      else
        __debugbreak();
    }
  }
  ExFreePoolWithTag(P, 0);
}
