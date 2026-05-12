/*
 * XREFs of PartitionIoctlGetPartitionInfo @ 0x1C0025070
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PartitionLength @ 0x1C0002B2C (PartitionLength.c)
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 */

__int64 __fastcall PartitionIoctlGetPartitionInfo(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  int DriveLayout; // edi
  __int64 v6; // rsi

  v2 = a2[23];
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(v2 + 8) >= 0x20u )
  {
    v6 = a2[3];
    *(_OWORD *)v6 = 0LL;
    *(_OWORD *)(v6 + 16) = 0LL;
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v4 + 24) + 56LL), Executive, 0, 0, 0LL);
    if ( (*(_BYTE *)(v2 + 2) & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 52LL) & 1) != 0 )
      PmInvalidatePartitionTableCache(*(_QWORD *)(v4 + 24));
    DriveLayout = PmGetDriveLayoutEx(*(KSPIN_LOCK **)(v4 + 24), 0LL);
    if ( DriveLayout >= 0 )
    {
      if ( *(_DWORD *)(v4 + 168) )
      {
        DriveLayout = -1073741808;
      }
      else
      {
        *(_QWORD *)v6 = *(_QWORD *)(v4 + 176);
        *(_QWORD *)(v6 + 8) = PartitionLength(v4, 1);
        *(_DWORD *)(v6 + 16) = *(_DWORD *)(v4 + 204);
        *(_DWORD *)(v6 + 20) = *(_DWORD *)(v4 + 192);
        *(_BYTE *)(v6 + 24) = *(_BYTE *)(v4 + 200);
        *(_BYTE *)(v6 + 25) = *(_BYTE *)(v4 + 201);
        *(_BYTE *)(v6 + 26) = *(_BYTE *)(v4 + 202);
        *(_BYTE *)(v6 + 27) = *(_BYTE *)(v4 + 196);
        a2[7] = 32LL;
      }
    }
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v4 + 24) + 56LL), 0);
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)DriveLayout;
}
