/*
 * XREFs of IoGetBaseFileSystemDeviceObject @ 0x1402A20E0
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x1402F4D0C (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14034A23C (FsRtlAcquireFileForModWriteEx.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     FsRtlReleaseFile @ 0x140723B10 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140723D20 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B47A8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407B4A48 (FsRtlReleaseFileForCcFlush.c)
 *     PnpHandleProcessWalkWorker @ 0x140958340 (PnpHandleProcessWalkWorker.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetBaseFileSystemDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  PVPB v3; // rax

  Vpb = FileObject->Vpb;
  if ( !Vpb || (result = Vpb->DeviceObject) == 0LL )
  {
    if ( (FileObject->Flags & 0x800) != 0 )
      return FileObject->DeviceObject;
    v3 = FileObject->DeviceObject->Vpb;
    if ( !v3 )
      return FileObject->DeviceObject;
    result = v3->DeviceObject;
    if ( !result )
      return FileObject->DeviceObject;
  }
  return result;
}
