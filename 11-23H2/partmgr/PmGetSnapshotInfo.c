/*
 * XREFs of PmGetSnapshotInfo @ 0x1C00233F4
 * Callers:
 *     PmIoctlGetSnapshotInfo @ 0x1C00232E0 (PmIoctlGetSnapshotInfo.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmGetSnapshotData @ 0x1C0003EE0 (PmGetSnapshotData.c)
 *     memmove @ 0x1C000B740 (memmove.c)
 */

__int64 __fastcall PmGetSnapshotInfo(KSPIN_LOCK *a1, __int64 *a2)
{
  int DriveLayout; // ebx
  int SnapshotData; // eax
  _DWORD *v6; // rdi
  __int64 Pool2; // rax
  __int64 v8; // rsi
  void *v9; // rcx
  unsigned int v10; // eax
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  PVOID v13; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v12 = 0;
  P = 0LL;
  DriveLayout = PmGetDriveLayoutEx(a1, &v13);
  if ( DriveLayout >= 0 )
  {
    SnapshotData = PmGetSnapshotData(a1, (struct _DRIVE_LAYOUT_INFORMATION_EX *)v13, &P, &v12);
    v6 = P;
    DriveLayout = SnapshotData;
    if ( SnapshotData >= 0 )
    {
      if ( *((_DWORD *)P + 27) >= 0xFFFFFFB4 )
      {
        DriveLayout = -1073741675;
      }
      else
      {
        DriveLayout = 0;
        Pool2 = ExAllocatePool2(64LL, (unsigned int)(*((_DWORD *)P + 27) + 76), 1146318160LL);
        v8 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = 80;
          v9 = (void *)(Pool2 + 76);
          *(_DWORD *)(Pool2 + 4) = v6[5];
          *(_OWORD *)(Pool2 + 8) = *((_OWORD *)v6 + 2);
          *(_OWORD *)(Pool2 + 24) = *((_OWORD *)v6 + 3);
          *(_OWORD *)(Pool2 + 40) = *((_OWORD *)v6 + 4);
          *(_QWORD *)(Pool2 + 56) = *((_QWORD *)v6 + 10);
          *(_DWORD *)(Pool2 + 64) = v6[22];
          *(_DWORD *)(Pool2 + 68) = v6[23];
          v10 = v6[27];
          *(_DWORD *)(v8 + 72) = v10;
          memmove(v9, (char *)v6 + (unsigned int)v6[26], v10);
          *a2 = v8;
        }
        else
        {
          DriveLayout = -1073741670;
        }
      }
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)DriveLayout;
}
