/*
 * XREFs of FsRtlPrivateLock @ 0x14021E2B0
 * Callers:
 *     FsRtlProcessFileLock @ 0x14021D0B0 (FsRtlProcessFileLock.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14021E5E4 @ 0x14021E5E4 (sub_14021E5E4.c)
 *     sub_14021E818 @ 0x14021E818 (sub_14021E818.c)
 *     sub_14021F198 @ 0x14021F198 (sub_14021F198.c)
 *     sub_14021F468 @ 0x14021F468 (sub_14021F468.c)
 *     sub_14021F5E4 @ 0x14021F5E4 (sub_14021F5E4.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140541E40 @ 0x140541E40 (sub_140541E40.c)
 *     sub_140542018 @ 0x140542018 (sub_140542018.c)
 */

BOOLEAN __stdcall FsRtlPrivateLock(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock,
        PIO_STATUS_BLOCK Iosb,
        PIRP Irp,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  PFILE_OBJECT v14; // r15
  KSPIN_LOCK *v16; // rsi
  KSPIN_LOCK *LockInformation; // r14
  LONGLONG QuadPart; // r8
  char *v19; // rcx
  char v20; // al
  PIO_STATUS_BLOCK v21; // rbx
  PSLIST_ENTRY v22; // rax
  __int64 v24; // r8
  NTSTATUS v25; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r9
  int v29; // eax
  bool v30; // zf
  KIRQL NewIrql; // [rsp+68h] [rbp-78h]
  BOOLEAN v32; // [rsp+69h] [rbp-77h]
  char v33; // [rsp+6Ah] [rbp-76h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+70h] [rbp-70h] BYREF
  KSPIN_LOCK *v35; // [rsp+78h] [rbp-68h]
  KSPIN_LOCK *v36; // [rsp+80h] [rbp-60h]
  __int128 v37; // [rsp+88h] [rbp-58h] BYREF
  __int128 v38; // [rsp+98h] [rbp-48h]
  __int128 v39; // [rsp+A8h] [rbp-38h]

  v14 = FileObject;
  v33 = 0;
  v35 = 0LL;
  v16 = 0LL;
  v36 = 0LL;
  NewIrql = -1;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
  v35 = LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(FileObject) = Irp == 0LL;
    if ( !(unsigned __int8)sub_14021F468(FileLock, FileObject) )
      goto LABEL_15;
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
    v35 = LockInformation;
  }
  *(LARGE_INTEGER *)&v37 = *FileOffset;
  QuadPart = Length->QuadPart;
  *((_QWORD *)&v37 + 1) = QuadPart;
  *((_QWORD *)&v39 + 1) = v37 + QuadPart - 1;
  DWORD1(v38) = Key;
  *((_QWORD *)&v38 + 1) = v14;
  *(_QWORD *)&v39 = ProcessId;
  LOBYTE(v38) = ExclusiveLock;
  v16 = LockInformation + 3;
  v36 = LockInformation + 3;
  if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)v37 && QuadPart )
  {
    v21 = Iosb;
    Iosb->Status = -1073741407;
    goto LABEL_10;
  }
  v33 = 1;
  NewIrql = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v19 = (char *)(LockInformation + 3);
  if ( ExclusiveLock )
    v20 = sub_14021F198(v19, &v37);
  else
    v20 = sub_14021E818(v19, &v37);
  if ( v20 )
  {
    if ( (unsigned __int8)sub_14021E5E4(LockInformation, v14, &v37) )
    {
      v21 = Iosb;
      Iosb->Status = 0;
LABEL_10:
      v32 = 1;
      goto LABEL_30;
    }
    if ( Irp )
    {
      KeReleaseSpinLock(LockInformation + 3, NewIrql);
      RtlRaiseStatus(-1073741670);
    }
  }
  else
  {
    if ( FailImmediately )
    {
      v21 = Iosb;
      Iosb->Status = -1073741739;
      goto LABEL_10;
    }
    if ( Irp )
    {
      v22 = sub_140202234((__int64)&stru_140CE2680);
      if ( !v22 )
      {
        KeReleaseSpinLock(LockInformation + 3, NewIrql);
        RtlRaiseStatus(-1073741670);
      }
      *((_QWORD *)&v22[1].Next + 1) = Irp;
      v22[1].Next = (_SLIST_ENTRY *)Context;
      *((_QWORD *)&v22->Next + 1) = LockInformation[1];
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation->Control |= 1u;
      v22->Next = 0LL;
      if ( LockInformation[6] )
        *(_QWORD *)LockInformation[7] = v22;
      else
        LockInformation[6] = (KSPIN_LOCK)v22;
      LockInformation[7] = (KSPIN_LOCK)v22;
      Irp->IoStatus.Information = (ULONG_PTR)LockInformation;
      _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)sub_140541E40);
      if ( Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
      {
        Irp->CancelIrql = NewIrql;
        sub_140541E40(0LL, Irp);
        v33 = 0;
      }
      v21 = Iosb;
      Iosb->Status = 259;
      LockInformation = v35;
      v16 = v36;
      goto LABEL_10;
    }
  }
LABEL_15:
  v32 = 0;
  v21 = Iosb;
LABEL_30:
  if ( v33 )
  {
    KeReleaseSpinLockFromDpcLevel(v16);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && NewIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v28 = *((_QWORD *)CurrentPrcb + 4375);
          v29 = ~(unsigned __int16)(-1LL << (NewIrql + 1));
          v30 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
          *(_DWORD *)(v28 + 20) &= v29;
          if ( v30 )
            sub_140418E4C(CurrentPrcb);
          LockInformation = v35;
        }
      }
    }
    __writecr8(NewIrql);
  }
  if ( Irp && v21->Status != 259 )
  {
    LODWORD(CurrentStackLocation) = 0;
    ObfReferenceObjectWithTag(v14, 0x746C6644u);
    sub_14021F5E4(LockInformation[1], Context, Irp, (unsigned int)v21->Status, &CurrentStackLocation, v14);
    v25 = (int)CurrentStackLocation;
    if ( (int)CurrentStackLocation < 0 && v21->Status >= 0 )
    {
      LOBYTE(v24) = 1;
      sub_140542018(LockInformation, &v37, v24);
    }
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    v21->Status = v25;
  }
  return v32;
}
