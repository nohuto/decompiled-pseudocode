/*
 * XREFs of CcZeroData @ 0x14029BD20
 * Callers:
 *     FsRtlCopyWrite @ 0x14092D2C0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14092DCF0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcZeroDataOnDisk @ 0x1402458E0 (CcZeroDataOnDisk.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_14029C124 @ 0x14029C124 (sub_14029C124.c)
 *     sub_14029C34C @ 0x14029C34C (sub_14029C34C.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rcx
  char v8; // r15
  __int64 v9; // rbx
  KIRQL OldIrql; // di
  __int64 v11; // r9
  unsigned int v12; // edi
  LONGLONG v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned int v19; // r14d
  unsigned __int64 v21; // [rsp+38h] [rbp-80h] BYREF
  __int64 v22; // [rsp+40h] [rbp-78h]
  int v23; // [rsp+48h] [rbp-70h]
  int v24; // [rsp+4Ch] [rbp-6Ch]
  NTSTATUS Status[4]; // [rsp+50h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  BOOLEAN v27; // [rsp+C0h] [rbp+8h]
  LONGLONG v28; // [rsp+C8h] [rbp+10h] BYREF
  PLARGE_INTEGER v29; // [rsp+D0h] [rbp+18h]
  BOOLEAN v30; // [rsp+D8h] [rbp+20h]

  v30 = Wait;
  v29 = EndOffset;
  QuadPart = StartOffset->QuadPart;
  v28 = StartOffset->QuadPart;
  v21 = 0LL;
  v27 = 0;
  v22 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (FileObject->Flags & 0x10) != 0 || (v8 = 0, !FileObject->PrivateCacheMap) )
    v8 = 1;
  v9 = EndOffset->QuadPart - QuadPart;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v22 = sub_14029C124(FileObject);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v22 + 1232)) <= 1 )
    __fastfail(0xEu);
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
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( !v8 && v9 <= 0x200000 && (*(_QWORD *)(**(_QWORD **)(v22 + 8) + 16896LL) >= 0x800uLL || v9 <= 0x2000) || Wait )
  {
    if ( IoGetRelatedDeviceObject(FileObject)->SectorSize )
      v12 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v12 = 0;
    if ( v8 )
    {
      if ( (v12 & (unsigned int)v28) != 0 )
      {
        *(_OWORD *)Status = 0LL;
        v28 += v12;
        LODWORD(v28) = ~v12 & v28;
        v19 = v28 - StartOffset->LowPart;
        LOBYTE(v11) = v30;
        if ( !(unsigned __int8)sub_14029C34C(FileObject, StartOffset, v19, v11) )
          goto LABEL_42;
        sub_140283030((__int64)FileObject->SectionObjectPointer, StartOffset, v19, 0LL, 0, Status);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
      }
LABEL_17:
      if ( v28 < v29->QuadPart )
      {
        v13 = v12 + v29->QuadPart;
        v21 = (~v12 | 0xFFFFFFFF00000000uLL) & v13;
        CcZeroDataOnDisk((__int64)FileObject, &v28, &v21);
      }
      v27 = 1;
      goto LABEL_42;
    }
    if ( *(_QWORD *)(**(_QWORD **)(v22 + 8) + 16896LL) >= 0x800uLL )
      goto LABEL_12;
    if ( v9 > 0x2000 && ((unsigned int)v28 & v12) != 0 )
    {
      v24 = (v28 + (unsigned __int64)v12) >> 32;
      v23 = ~v12 & (v28 + v12);
      LODWORD(v9) = v23 - v28;
    }
    else
    {
      if ( v9 <= 0x2000 )
      {
LABEL_12:
        if ( v9 > 0x200000 )
        {
          *(_QWORD *)Status = v28 + 0x200000 + v12;
          Status[0] = ~v12 & (v28 + 0x200000 + v12);
          LODWORD(v9) = Status[0] - v28;
        }
        goto LABEL_14;
      }
      LODWORD(v9) = 0;
    }
LABEL_14:
    if ( (_DWORD)v9 )
    {
      LOBYTE(v11) = v30;
      if ( !(unsigned __int8)sub_14029C34C(FileObject, &v28, (unsigned int)v9, v11) )
        goto LABEL_42;
    }
    v28 += (unsigned int)v9;
    goto LABEL_17;
  }
LABEL_42:
  sub_140276728(v22);
  return v27;
}
