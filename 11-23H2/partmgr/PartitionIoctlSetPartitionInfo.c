/*
 * XREFs of PartitionIoctlSetPartitionInfo @ 0x1C001E74C
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     PmSetPartitionInformationEx @ 0x1C0026BE0 (PmSetPartitionInformationEx.c)
 */

__int64 __fastcall PartitionIoctlSetPartitionInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int DriveLayout; // ebx
  _BYTE v6[136]; // [rsp+30h] [rbp-88h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  memset(v6, 0, 0x78uLL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
  {
    v6[8] = **(_BYTE **)(a2 + 24);
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v2 + 24) + 56LL), Executive, 0, 0, 0LL);
    DriveLayout = PmGetDriveLayoutEx(*(KSPIN_LOCK **)(v2 + 24), 0LL);
    if ( DriveLayout >= 0 )
    {
      if ( *(_DWORD *)(v2 + 168) )
        DriveLayout = -1073741808;
      else
        DriveLayout = PmSetPartitionInformationEx(v2, v6);
    }
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v2 + 24) + 56LL), 0);
  }
  else
  {
    return (unsigned int)-1073741820;
  }
  return (unsigned int)DriveLayout;
}
