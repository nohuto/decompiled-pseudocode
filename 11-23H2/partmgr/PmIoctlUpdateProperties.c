/*
 * XREFs of PmIoctlUpdateProperties @ 0x1C001EA70
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 */

__int64 __fastcall PmIoctlUpdateProperties(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  KeWaitForSingleObject((PVOID)(v1 + 56), Executive, 0, 0, 0LL);
  PmInvalidatePartitionTableCache(v1);
  PmGetDriveLayoutEx((KSPIN_LOCK *)v1, 0LL);
  KeReleaseMutex((PRKMUTEX)(v1 + 56), 0);
  return 0LL;
}
