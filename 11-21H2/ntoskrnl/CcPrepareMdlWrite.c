/*
 * XREFs of CcPrepareMdlWrite @ 0x140253190
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x14092DCF0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     sub_140253510 @ 0x140253510 (sub_140253510.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 *     sub_140328510 @ 0x140328510 (sub_140328510.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __stdcall CcPrepareMdlWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v5; // edi
  ULONG v7; // esi
  struct _FAST_MUTEX *SharedCacheMap; // r14
  LONGLONG QuadPart; // rbx
  ULONG v10; // r12d
  LONGLONG v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // r8
  char v15; // bl
  __int64 v16; // rbx
  PMDL v17; // rcx
  struct _KEVENT *v18; // rcx
  struct _MDL *Next; // rax
  __int64 v20; // rdx
  KIRQL OldIrql; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v24; // r8
  int v25; // eax
  bool v26; // zf
  ULONG v27; // [rsp+30h] [rbp-C8h] BYREF
  int v28; // [rsp+34h] [rbp-C4h]
  int v29; // [rsp+38h] [rbp-C0h]
  int v30; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v31; // [rsp+48h] [rbp-B0h]
  struct _MDL *Mdl; // [rsp+50h] [rbp-A8h]
  __int64 v33; // [rsp+58h] [rbp-A0h] BYREF
  LONGLONG v34; // [rsp+60h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-90h] BYREF
  LONGLONG v36; // [rsp+80h] [rbp-78h]
  PVOID VirtualAddress; // [rsp+88h] [rbp-70h]
  PMDL i; // [rsp+90h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-60h]
  struct _KTHREAD *v40; // [rsp+A0h] [rbp-58h]
  struct _KTHREAD *v41; // [rsp+A8h] [rbp-50h]
  ULONG v42; // [rsp+110h] [rbp+18h]

  v42 = Length;
  v5 = Length;
  Mdl = 0LL;
  v31 = 0LL;
  v29 = 0;
  v7 = 0;
  v30 = 0;
  v33 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = (struct _FAST_MUTEX *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( (FileObject->Flags & 0x10) == 0 && (unsigned __int8)sub_140253510(FileObject, Length, SharedCacheMap, 0LL) )
    RtlRaiseStatus(-1073741670);
  QuadPart = FileOffset->QuadPart;
  v34 = QuadPart;
  while ( v5 )
  {
    v27 = 0;
    v36 = 0LL;
    VirtualAddress = (PVOID)sub_140328180(
                              (_DWORD)SharedCacheMap,
                              QuadPart,
                              (unsigned int)&v33,
                              (unsigned int)&v27,
                              0,
                              0);
    v10 = v27;
    if ( v27 > v5 )
      v10 = v5;
    v27 = v10;
    v11 = QuadPart + v10;
    v36 = v11;
    v12 = 2;
    v28 = 2;
    if ( (QuadPart & 0xFFF) == 0 )
    {
      if ( v10 >= 0x1000 )
        v12 = 3;
      v28 = v12;
    }
    if ( (v11 & 0xFFF) == 0 )
    {
      v12 |= 4u;
      v28 = v12;
    }
    v31 = QuadPart & 0xFFFFFFFFFFFFF000uLL;
    ExAcquireFastMutex(SharedCacheMap + 5);
    v31 = *(_QWORD *)&SharedCacheMap->OldIrql - v31;
    v13 = v31;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    if ( v13 <= 0 )
    {
      v12 |= 7u;
LABEL_15:
      v28 = v12;
      goto LABEL_16;
    }
    if ( (unsigned int)v31 <= 0x1000 && !HIDWORD(v31) )
    {
      v12 |= 6u;
      goto LABEL_15;
    }
LABEL_16:
    LOBYTE(v14) = 1;
    sub_140328510(v10, v12, v14, VirtualAddress);
    Mdl = IoAllocateMdl(VirtualAddress, v10, 0, 0, 0LL);
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    CurrentThread = KeGetCurrentThread();
    v29 = *((unsigned __int8 *)CurrentThread + 1389) + 2;
    v15 = v29;
    v40 = CurrentThread;
    *((_BYTE *)CurrentThread + 1389) = 1;
    sub_14029C5B0(Mdl, 0LL, 1LL);
    v41 = KeGetCurrentThread();
    *((_BYTE *)v41 + 1389) = v15 - 2;
    v29 = 0;
    ExAcquireFastMutex(SharedCacheMap + 5);
    if ( v11 > *(_QWORD *)&SharedCacheMap->OldIrql )
      *(_QWORD *)&SharedCacheMap->OldIrql = v11;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    v16 = *(_QWORD *)(v33 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v33 + 16)) )
    {
      v18 = *(struct _KEVENT **)(v16 + 184);
      if ( v18 )
        KeSetEvent(v18, 0, 0);
      _InterlockedAdd((volatile signed __int32 *)(v16 + 544), 0xFFFFFFFF);
    }
    v33 = 0LL;
    v17 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v17->Next;
        if ( !v17->Next )
          break;
        v17 = v17->Next;
      }
      v17->Next = Mdl;
    }
    else
    {
      *MdlChain = Mdl;
    }
    Mdl = 0LL;
    QuadPart = v11;
    v34 = v11;
    v7 = v27 + v30;
    v30 += v27;
    v5 = v42 - v27;
    v42 -= v27;
  }
  v20 = *(_QWORD *)&SharedCacheMap[9].Event.Header.Lock;
  IoStatus->Status = 0;
  IoStatus->Information = v7;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v20 + 704), &LockHandle);
  ++*(&SharedCacheMap->Count + 1);
  ++LODWORD(SharedCacheMap[9].Event.Header.WaitListHead.Flink);
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
        v24 = *((_QWORD *)CurrentPrcb + 4375);
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v26 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
}
