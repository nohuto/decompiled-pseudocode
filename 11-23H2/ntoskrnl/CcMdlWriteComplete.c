/*
 * XREFs of CcMdlWriteComplete @ 0x1407EA0A0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     CcMdlWriteComplete2 @ 0x14036BA2C (CcMdlWriteComplete2.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __stdcall CcMdlWriteComplete(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r10
  unsigned __int8 (__fastcall *MdlWriteComplete)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT); // rax

  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || (MdlWriteComplete = (unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT))FastIoDispatch->MdlWriteComplete) == 0LL
    || !MdlWriteComplete(FileObject, FileOffset, MdlChain, RelatedDeviceObject) )
  {
    CcMdlWriteComplete2((__int64)FileObject, (__int64 *)FileOffset, MdlChain);
  }
}
