/*
 * XREFs of PartitionIoctlSetPartitionInfoEx @ 0x1C0025564
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmSetPartitionInformationEx @ 0x1C0026BE0 (PmSetPartitionInformationEx.c)
 */

__int64 __fastcall PartitionIoctlSetPartitionInfoEx(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int DriveLayout; // ebx
  __int64 v4; // rsi

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x78u )
  {
    v4 = *(_QWORD *)(a2 + 24);
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v2 + 24) + 56LL), Executive, 0, 0, 0LL);
    DriveLayout = PmGetDriveLayoutEx(*(KSPIN_LOCK **)(v2 + 24), 0LL);
    if ( DriveLayout >= 0 )
      DriveLayout = PmSetPartitionInformationEx(v2, v4);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v2 + 24) + 56LL), 0);
  }
  else
  {
    return (unsigned int)-1073741820;
  }
  return (unsigned int)DriveLayout;
}
