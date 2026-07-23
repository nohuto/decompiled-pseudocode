/*
 * XREFs of IopExceptionCleanupEx @ 0x140944B78
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140224220 (IopAllocateAndPopulateWriteIrp.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14028F3F4 (IopFreeCopyObjectsFromDataBuffer.c)
 *     NtSetInformationFile @ 0x1402A6E80 (NtSetInformationFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
 *     NtLockFile @ 0x140765680 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x140765A90 (BuildQueryDirectoryIrp.c)
 *     NtUnlockFile @ 0x1407B4DB0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1407CA290 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CBE60 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E7340 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E85C0 (NtWriteFileGather.c)
 *     NtSetVolumeInformationFile @ 0x140881B10 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945CC0 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14094AE60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B470 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     IopReleaseFileObjectLock @ 0x1402315D0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
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
