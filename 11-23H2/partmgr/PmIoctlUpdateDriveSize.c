/*
 * XREFs of PmIoctlUpdateDriveSize @ 0x1C002638C
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 */

__int64 __fastcall PmIoctlUpdateDriveSize(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  int Status; // edi

  v2 = *(_QWORD *)(a1 + 64);
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 16), a2);
  Status = a2->IoStatus.Status;
  if ( Status >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v2 + 56), Executive, 0, 0, 0LL);
    PmInvalidatePartitionTableCache(v2);
    PmGetDriveLayoutEx((KSPIN_LOCK *)v2, 0LL);
    KeReleaseMutex((PRKMUTEX)(v2 + 56), 0);
  }
  return (unsigned int)Status;
}
