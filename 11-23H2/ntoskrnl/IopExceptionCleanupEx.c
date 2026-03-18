/*
 * XREFs of IopExceptionCleanupEx @ 0x140944978
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140224220 (IopAllocateAndPopulateWriteIrp.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14028F164 (IopFreeCopyObjectsFromDataBuffer.c)
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     NtLockFile @ 0x140765490 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407658A0 (BuildQueryDirectoryIrp.c)
 *     NtUnlockFile @ 0x1407B4AD0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1407C9FC0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CBB90 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E7070 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E82F0 (NtWriteFileGather.c)
 *     NtSetVolumeInformationFile @ 0x1408818D0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945AC0 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14094AC60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B270 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     IopReleaseFileObjectLock @ 0x1402314E0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IoFreeMdl @ 0x1402ACFE0 (IoFreeMdl.c)
 *     IoFreeIrp @ 0x1402AF210 (IoFreeIrp.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall IopExceptionCleanupEx(volatile __int32 *Object, PIRP Irp, PVOID a3, PVOID P, char a5)
{
  struct _IRP *MasterIrp; // rcx
  struct _MDL *MdlAddress; // rcx

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( MasterIrp )
    ExFreePoolWithTag(MasterIrp, 0);
  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
    IoFreeMdl(MdlAddress);
  if ( (Irp->Flags & 0x200000) != 0 )
  {
    ObfDereferenceObjectWithTag(
      (PVOID)((unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcContext & 0xFFFFFFFFFFFFFFF8uLL),
      0x49526F49u);
    Irp->Flags &= ~0x200000u;
  }
  IoFreeIrp(Irp);
  if ( a5 )
    IopReleaseFileObjectLock(Object);
  if ( a3 )
    ObfDereferenceObject(a3);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ObfDereferenceObject((PVOID)Object);
}
