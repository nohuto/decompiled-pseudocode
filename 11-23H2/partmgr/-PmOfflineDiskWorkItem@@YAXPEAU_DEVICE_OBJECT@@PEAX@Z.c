/*
 * XREFs of ?PmOfflineDiskWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C000EA40
 * Callers:
 *     <none>
 * Callees:
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 *     PmSetDiskAttributes @ 0x1C0009178 (PmSetDiskAttributes.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 */

void __fastcall PmOfflineDiskWorkItem(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  char *DeviceExtension; // rdi
  int v3; // ebx
  __int128 v4; // xmm0
  _QWORD v5[3]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+48h] [rbp-20h]

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v3 = (int)Context;
  v5[0] = 40LL;
  KeWaitForSingleObject(DeviceExtension + 56, Executive, 0, 0, 0LL);
  v4 = *((_OWORD *)DeviceExtension + 34);
  v5[2] = 3LL;
  v5[1] = 3LL;
  v6 = v4;
  if ( (int)PmSetDiskAttributes((__int64)DeviceExtension, (__int64)v5, v3) >= 0 )
    PmInvalidatePartitionTableCache((__int64)DeviceExtension);
  KeReleaseMutex((PRKMUTEX)DeviceExtension + 1, 0);
  _InterlockedExchange((volatile __int32 *)DeviceExtension + 221, 0);
}
