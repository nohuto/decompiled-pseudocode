/*
 * XREFs of PartitionIoctlGetLengthInfo @ 0x1C001C594
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PartitionLength @ 0x1C0002B2C (PartitionLength.c)
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 */

__int64 __fastcall PartitionIoctlGetLengthInfo(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 *v5; // r14
  int DriveLayout; // edi

  v2 = a2[23];
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(v2 + 8) < 8u )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v5 = (__int64 *)a2[3];
    *v5 = 0LL;
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v4 + 24) + 56LL), Executive, 0, 0, 0LL);
    if ( (*(_BYTE *)(v2 + 2) & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 52LL) & 1) != 0 )
      PmInvalidatePartitionTableCache(*(_QWORD *)(v4 + 24));
    DriveLayout = PmGetDriveLayoutEx(*(KSPIN_LOCK **)(v4 + 24), 0LL);
    if ( DriveLayout >= 0 )
    {
      *v5 = PartitionLength(v4, 1);
      a2[7] = 8LL;
    }
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v4 + 24) + 56LL), 0);
  }
  return (unsigned int)DriveLayout;
}
