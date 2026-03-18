/*
 * XREFs of IoGetBaseFileSystemDeviceObject @ 0x1402A1D30
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x1402F4A7C (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140349A9C (FsRtlAcquireFileForModWriteEx.c)
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 *     FsRtlReleaseFile @ 0x140723980 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140723B90 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B4A78 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407B4D18 (FsRtlReleaseFileForCcFlush.c)
 *     PnpHandleProcessWalkWorker @ 0x1409581F0 (PnpHandleProcessWalkWorker.c)
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
