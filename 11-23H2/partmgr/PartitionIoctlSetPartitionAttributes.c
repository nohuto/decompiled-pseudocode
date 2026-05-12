/*
 * XREFs of PartitionIoctlSetPartitionAttributes @ 0x1C00253E0
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     PmSetPartitionAttributesMbr @ 0x1C000E374 (PmSetPartitionAttributesMbr.c)
 *     PmSetPartitionInformationEx @ 0x1C0026BE0 (PmSetPartitionInformationEx.c)
 */

__int64 __fastcall PartitionIoctlSetPartitionAttributes(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int DriveLayout; // ebx
  __int64 v5; // rsi
  unsigned int v6; // r8d
  int v7; // ecx
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // eax
  _QWORD v18[16]; // [rsp+30h] [rbp-88h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  memset(v18, 0, 0x78uLL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x18u )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)v5 != 24 || *(_BYTE *)(v5 + 5) || *(_BYTE *)(v5 + 6) || *(_BYTE *)(v5 + 7) )
      return (unsigned int)-1073741811;
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v2 + 24) + 56LL), Executive, 0, 0, 0LL);
    DriveLayout = PmGetDriveLayoutEx(*(KSPIN_LOCK **)(v2 + 24), 0LL);
    if ( DriveLayout < 0 )
      goto LABEL_14;
    v7 = *(_DWORD *)(v2 + 168);
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        DriveLayout = -1073741808;
LABEL_14:
        KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v2 + 24) + 56LL), 0);
        return (unsigned int)DriveLayout;
      }
      v8 = *(_OWORD *)(v2 + 200);
      v9 = *(_QWORD *)(v5 + 8);
      v10 = *(_OWORD *)(v2 + 216);
      LODWORD(v18[0]) = 1;
      *(_OWORD *)&v18[1] = v8;
      v11 = *(_OWORD *)(v2 + 232);
      *(_OWORD *)&v18[3] = v10;
      v12 = *(_OWORD *)(v2 + 248);
      v18[6] = *((_QWORD *)&v11 + 1);
      v18[5] = v9;
      v13 = *(_OWORD *)(v2 + 264);
      *(_OWORD *)&v18[7] = v12;
      v14 = *(_OWORD *)(v2 + 280);
      *(_OWORD *)&v18[9] = v13;
      v15 = *(_OWORD *)(v2 + 296);
      *(_OWORD *)&v18[11] = v14;
      *(_OWORD *)&v18[13] = v15;
      v16 = PmSetPartitionInformationEx(v2, v18);
    }
    else
    {
      v16 = PmSetPartitionAttributesMbr(*(_QWORD *)(v2 + 24), *(_QWORD *)(v5 + 8), v6);
    }
    DriveLayout = v16;
    goto LABEL_14;
  }
  return (unsigned int)-1073741820;
}
