/*
 * XREFs of FsRtlMdlReadComplete @ 0x140541010
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall FsRtlMdlReadComplete(struct _FILE_OBJECT *a1, __int64 a2)
{
  PFAST_IO_DISPATCH FastIoDispatch; // r9

  FastIoDispatch = IoGetRelatedDeviceObject(a1)->DriverObject->FastIoDispatch;
  if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch > 0x88 && FastIoDispatch->MdlReadComplete )
    return sub_14042A5E0(a1, a2);
  else
    return 0;
}
