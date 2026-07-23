/*
 * XREFs of CcZeroData @ 0x1402FB700
 * Callers:
 *     FsRtlCopyWrite @ 0x1408509C0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D660 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14022F530 (IoGetRelatedDeviceObject.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x14029C310 (CcDereferencePartition.c)
 *     CcFlushCachePriv @ 0x14029CC14 (CcFlushCachePriv.c)
 *     CcGetPartitionFromFileObject @ 0x1402FBB08 (CcGetPartitionFromFileObject.c)
 *     CcZeroDataInCache @ 0x1402FBF18 (CcZeroDataInCache.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     CcZeroDataOnDisk @ 0x1403C10B0 (CcZeroDataOnDisk.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rcx
  char v8; // r14
  __int64 v9; // rbx
  unsigned __int8 OldIrql; // di
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v12; // r9
  unsigned int SectorSize; // r12d
  unsigned int v14; // edi
  LONGLONG v15; // rax
  NTSTATUS v16; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned int v22; // r15d
  unsigned __int64 v24; // [rsp+48h] [rbp-80h] BYREF
  __int64 PartitionFromFileObject; // [rsp+50h] [rbp-78h]
  NTSTATUS v26; // [rsp+58h] [rbp-70h]
  int v27; // [rsp+5Ch] [rbp-6Ch]
  NTSTATUS Status[4]; // [rsp+60h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-58h] BYREF
  BOOLEAN v30; // [rsp+D0h] [rbp+8h]
  LONGLONG v31; // [rsp+D8h] [rbp+10h] BYREF
  PLARGE_INTEGER v32; // [rsp+E0h] [rbp+18h]
  BOOLEAN v33; // [rsp+E8h] [rbp+20h]

  v33 = Wait;
  v32 = EndOffset;
  QuadPart = StartOffset->QuadPart;
  v31 = StartOffset->QuadPart;
  v24 = 0LL;
  v30 = 0;
  PartitionFromFileObject = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (FileObject->Flags & 0x10) != 0 || (v8 = 0, !FileObject->PrivateCacheMap) )
    v8 = 1;
  v9 = EndOffset->QuadPart - QuadPart;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  PartitionFromFileObject = CcGetPartitionFromFileObject(FileObject);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 1296)) <= 1 )
    __fastfail(0xEu);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
      v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v21 = (v20 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( !v8
    && v9 <= 0x200000
    && (*(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 17216LL) >= 0x800uLL || v9 <= 0x2000)
    || Wait )
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( RelatedDeviceObject->SectorSize )
      v14 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v14 = 0;
    if ( v8 )
    {
      if ( (v14 & (unsigned int)v31) != 0 )
      {
        *(_OWORD *)Status = 0LL;
        v31 += v14;
        LODWORD(v31) = v31 & ~v14;
        v22 = v31 - StartOffset->LowPart;
        LOBYTE(v12) = v33;
        if ( !(unsigned __int8)CcZeroDataInCache(FileObject, StartOffset, v22, v12) )
          goto LABEL_44;
        CcFlushCachePriv(FileObject->SectionObjectPointer, (__int64)StartOffset, v22, 0LL, 0, (__int128 *)Status, 0LL);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
      }
LABEL_16:
      if ( v31 < v32->QuadPart )
      {
        v15 = v14 + v32->QuadPart;
        v24 = (~v14 | 0xFFFFFFFF00000000uLL) & v15;
        CcZeroDataOnDisk(FileObject, &v31, &v24, SectorSize);
      }
      v30 = 1;
      goto LABEL_44;
    }
    if ( *(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 17216LL) < 0x800uLL )
    {
      if ( v9 > 0x2000 && (v14 & (unsigned int)v31) != 0 )
      {
        v27 = (v31 + (unsigned __int64)v14) >> 32;
        v16 = (v31 + v14) & ~v14;
        v26 = v16;
LABEL_24:
        LODWORD(v9) = v16 - v31;
        goto LABEL_13;
      }
      if ( v9 > 0x2000 )
      {
        LODWORD(v9) = 0;
LABEL_13:
        if ( (_DWORD)v9 )
        {
          LOBYTE(v12) = Wait;
          if ( !(unsigned __int8)CcZeroDataInCache(FileObject, &v31, (unsigned int)v9, v12) )
            goto LABEL_44;
        }
        v31 += (unsigned int)v9;
        goto LABEL_16;
      }
    }
    if ( v9 <= 0x200000 )
      goto LABEL_13;
    Status[1] = (v31 + 0x200000 + (unsigned __int64)v14) >> 32;
    v16 = (v31 + 0x200000 + v14) & ~v14;
    Status[0] = v16;
    goto LABEL_24;
  }
LABEL_44:
  CcDereferencePartition(PartitionFromFileObject);
  return v30;
}
