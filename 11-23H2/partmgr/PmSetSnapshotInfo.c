/*
 * XREFs of PmSetSnapshotInfo @ 0x1C0027BA4
 * Callers:
 *     PmIoctlResetSnapshotInfo @ 0x1C0025E08 (PmIoctlResetSnapshotInfo.c)
 *     PmIoctlSetSnapshotInfo @ 0x1C00262E0 (PmIoctlSetSnapshotInfo.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmGetSnapshotData @ 0x1C0003EE0 (PmGetSnapshotData.c)
 *     StRtlFindBestStorageDeviceId @ 0x1C000A878 (StRtlFindBestStorageDeviceId.c)
 *     memmove @ 0x1C000B740 (memmove.c)
 *     PmSetSnapshotData @ 0x1C000FD58 (PmSetSnapshotData.c)
 *     ?PmInitializeSnapshotData@@YAXPEAU_DISK_SNAPSHOT_DATA@@K@Z @ 0x1C0022E30 (-PmInitializeSnapshotData@@YAXPEAU_DISK_SNAPSHOT_DATA@@K@Z.c)
 *     ?PmCreateSnapshotPartition@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0027564 (-PmCreateSnapshotPartition@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 */

__int64 __fastcall PmSetSnapshotInfo(struct _DEVICE_EXTENSION *a1, __int64 a2)
{
  signed int SnapshotPartition; // ebx
  int SnapshotData; // eax
  PVOID v6; // rdi
  int v7; // ecx
  unsigned int v8; // r15d
  char *v9; // rsi
  __int64 v10; // rcx
  __int64 BestStorageDeviceId; // rax
  int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  _QWORD *Pool2; // rax
  _QWORD *v17; // r13
  unsigned int v18; // ebx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // eax
  int v22; // eax
  size_t v23; // r8
  char *v24; // rcx
  PVOID P[7]; // [rsp+20h] [rbp-38h] BYREF
  size_t Size; // [rsp+70h] [rbp+18h] BYREF
  PVOID v28; // [rsp+78h] [rbp+20h] BYREF

  v28 = 0LL;
  LODWORD(Size) = 0;
  P[0] = 0LL;
  SnapshotPartition = PmCreateSnapshotPartition(a1);
  if ( SnapshotPartition < 0 )
    return (unsigned int)SnapshotPartition;
  SnapshotPartition = PmGetDriveLayoutEx((KSPIN_LOCK *)a1, &v28);
  if ( SnapshotPartition >= 0 )
  {
    SnapshotData = PmGetSnapshotData(
                     (KSPIN_LOCK *)a1,
                     (struct _DRIVE_LAYOUT_INFORMATION_EX *)v28,
                     P,
                     (unsigned int *)&Size);
    v6 = P[0];
    SnapshotPartition = SnapshotData;
    if ( SnapshotData < 0 )
      goto LABEL_20;
    v7 = *(_DWORD *)(a2 + 4);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v10 = *((_QWORD *)a1 + 31);
        if ( !v10 || (BestStorageDeviceId = StRtlFindBestStorageDeviceId(v10)) == 0 )
        {
          SnapshotPartition = -1073741275;
          goto LABEL_20;
        }
        v8 = *(unsigned __int16 *)(BestStorageDeviceId + 8);
        v9 = (char *)(BestStorageDeviceId + 16);
      }
      else
      {
        v8 = *((_DWORD *)P[0] + 25);
        v9 = (char *)P[0] + *((unsigned int *)P[0] + 24);
      }
      v12 = v8 + 112;
      if ( v8 >= 0xFFFFFF90 )
      {
        SnapshotPartition = -1073741675;
LABEL_20:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        goto LABEL_22;
      }
    }
    else
    {
      v9 = 0LL;
      v8 = 0;
      v12 = 112;
    }
    v13 = *(_DWORD *)(a2 + 72);
    v14 = -1;
    v15 = v12 + v13;
    if ( v12 + v13 >= v13 )
      v14 = v12 + v13;
    SnapshotPartition = v15 < v13 ? 0xC0000095 : 0;
    LODWORD(Size) = v14;
    if ( v15 >= v13 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(66LL, v14, 1146318160LL);
      v17 = Pool2;
      if ( Pool2 )
      {
        v18 = Size;
        PmInitializeSnapshotData(Pool2, (unsigned int)Size);
        v19 = *(_OWORD *)(a2 + 8);
        v20 = *(_OWORD *)(a2 + 24);
        *((_DWORD *)v17 + 5) = *(_DWORD *)(a2 + 4);
        v17[10] = *(_QWORD *)(a2 + 56);
        v21 = *(_DWORD *)(a2 + 64);
        *((_OWORD *)v17 + 2) = v19;
        *((_DWORD *)v17 + 22) = v21;
        v22 = *(_DWORD *)(a2 + 68);
        *((_OWORD *)v17 + 4) = *(_OWORD *)(a2 + 40);
        *((_DWORD *)v17 + 3) = v18;
        *((_OWORD *)v17 + 3) = v20;
        *((_DWORD *)v17 + 23) = v22;
        *((_DWORD *)v17 + 24) = 112;
        *((_DWORD *)v17 + 25) = v8;
        memmove(v17 + 14, v9, v8);
        v23 = *(unsigned int *)(a2 + 72);
        v24 = (char *)v17 + (unsigned int)(*((_DWORD *)v17 + 25) + 112);
        *((_DWORD *)v17 + 26) = *((_DWORD *)v17 + 25) + 112;
        *((_DWORD *)v17 + 27) = v23;
        memmove(v24, (const void *)(a2 + 76), v23);
        SnapshotPartition = PmSetSnapshotData(a1, (struct _DRIVE_LAYOUT_INFORMATION_EX *)v28, (UCHAR *)v17, v18);
        ExFreePoolWithTag(v17, 0);
      }
      else
      {
        SnapshotPartition = -1073741670;
      }
    }
    goto LABEL_20;
  }
LABEL_22:
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  return (unsigned int)SnapshotPartition;
}
