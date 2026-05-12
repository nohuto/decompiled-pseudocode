/*
 * XREFs of PartitionIoctlGetPartitionAttributes @ 0x1C0022758
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmGetPartitionAttributesMbr @ 0x1C0004CCC (PmGetPartitionAttributesMbr.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 */

__int64 __fastcall PartitionIoctlGetPartitionAttributes(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  int DriveLayout; // edi
  int v7; // eax

  v2 = a2[23];
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(v2 + 8) < 0x10u )
    return (unsigned int)-1073741789;
  v5 = a2[3];
  *(_OWORD *)v5 = 0LL;
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(v4 + 24) + 56LL), Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(v2 + 2) & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 52LL) & 1) != 0 )
    PmInvalidatePartitionTableCache(*(_QWORD *)(v4 + 24));
  DriveLayout = PmGetDriveLayoutEx(*(KSPIN_LOCK **)(v4 + 24), 0LL);
  if ( DriveLayout >= 0 )
  {
    v7 = *(_DWORD *)(v4 + 168);
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        DriveLayout = -1073741808;
        goto LABEL_8;
      }
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v4 + 232);
    }
    else
    {
      DriveLayout = PmGetPartitionAttributesMbr(*(KSPIN_LOCK **)(v4 + 24), (_QWORD *)(v5 + 8));
      if ( DriveLayout < 0 )
        goto LABEL_8;
    }
    a2[7] = 16LL;
  }
LABEL_8:
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v4 + 24) + 56LL), 0);
  return (unsigned int)DriveLayout;
}
