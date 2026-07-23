/*
 * XREFs of RawShutdown @ 0x1409B8420
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402C9C10 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x1403050A0 (IoDeleteDevice.c)
 *     RawScanDeletedList @ 0x14079188C (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x140875520 (IoUnregisterFileSystem.c)
 */

__int64 __fastcall RawShutdown(__int64 a1, IRP *a2)
{
  RawScanDeletedList();
  IoUnregisterFileSystem(RawDeviceDiskObject);
  IoUnregisterFileSystem(RawDeviceCdRomObject);
  IoUnregisterFileSystem(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceCdRomObject);
  IoDeleteDevice(RawDeviceDiskObject);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 1);
  return 0LL;
}
