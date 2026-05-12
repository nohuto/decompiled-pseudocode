/*
 * XREFs of PartitionIoctlGetPartitionInfoEx @ 0x1C001C788
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PartitionLength @ 0x1C0002B2C (PartitionLength.c)
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall PartitionIoctlGetPartitionInfoEx(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  _OWORD *v5; // rbp
  int DriveLayout; // edi

  v2 = a2[23];
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(v2 + 8) < 0x90u )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v5 = (_OWORD *)a2[3];
    memset(v5, 0, 0x90uLL);
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v4 + 24) + 56LL), Executive, 0, 0, 0LL);
    if ( (*(_BYTE *)(v2 + 2) & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 52LL) & 1) != 0 )
      PmInvalidatePartitionTableCache(*(_QWORD *)(v4 + 24));
    DriveLayout = PmGetDriveLayoutEx(*(KSPIN_LOCK **)(v4 + 24), 0LL);
    if ( DriveLayout >= 0 )
    {
      *v5 = *(_OWORD *)(v4 + 168);
      v5[1] = *(_OWORD *)(v4 + 184);
      v5[2] = *(_OWORD *)(v4 + 200);
      v5[3] = *(_OWORD *)(v4 + 216);
      v5[4] = *(_OWORD *)(v4 + 232);
      v5[5] = *(_OWORD *)(v4 + 248);
      v5[6] = *(_OWORD *)(v4 + 264);
      v5[7] = *(_OWORD *)(v4 + 280);
      v5[8] = *(_OWORD *)(v4 + 296);
      *((_QWORD *)v5 + 2) = PartitionLength(v4, 1);
      a2[7] = 144LL;
    }
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v4 + 24) + 56LL), 0);
  }
  return (unsigned int)DriveLayout;
}
