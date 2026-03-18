/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x140884BAC
 * Callers:
 *     PiBuildDeviceNodeInstancePath @ 0x14078E5E8 (PiBuildDeviceNodeInstancePath.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835270 (IoReportRootDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140867E64 (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031E9D0 (RtlDeleteElementGenericTableAvl.c)
 *     PpDeviceRegistration @ 0x1407CF564 (PpDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(__int64 a1)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  ExReleaseFastMutex(&PnpDeviceReferenceTableLock);
  return PpDeviceRegistration(a1, 0LL, 0LL, 1);
}
