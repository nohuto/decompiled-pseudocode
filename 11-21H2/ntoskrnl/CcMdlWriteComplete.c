/*
 * XREFs of CcMdlWriteComplete @ 0x1406E7450
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402581E0 @ 0x1402581E0 (sub_1402581E0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __stdcall CcMdlWriteComplete(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain)
{
  struct _DRIVER_OBJECT *DriverObject; // r9
  PFAST_IO_DISPATCH FastIoDispatch; // r10

  DriverObject = IoGetRelatedDeviceObject(FileObject)->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || !FastIoDispatch->MdlWriteComplete
    || !(unsigned __int8)sub_14042A5E0(FileObject, FileOffset) )
  {
    sub_1402581E0((__int64)FileObject, (__int64 *)FileOffset, MdlChain, (int)DriverObject);
  }
}
