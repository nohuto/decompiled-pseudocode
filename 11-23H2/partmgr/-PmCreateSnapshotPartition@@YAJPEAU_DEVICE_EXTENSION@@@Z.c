/*
 * XREFs of ?PmCreateSnapshotPartition@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0027564
 * Callers:
 *     PmSetSnapshotInfo @ 0x1C0027BA4 (PmSetSnapshotInfo.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memmove @ 0x1C000B740 (memmove.c)
 *     PmWritePartitionTable @ 0x1C001ED64 (PmWritePartitionTable.c)
 *     PmGetDriveGeometry @ 0x1C002006C (PmGetDriveGeometry.c)
 */

__int64 __fastcall PmCreateSnapshotPartition(struct _DEVICE_EXTENSION *a1)
{
  int DriveLayout; // eax
  unsigned int *v3; // rsi
  signed int DriveGeometry; // ebx
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned int v11; // eax
  struct SC_DISK_LAYOUT *Pool2; // rax
  struct SC_DISK_LAYOUT *v13; // rdi
  unsigned int v14; // r8d
  unsigned int v15; // edx
  _DWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rcx
  char *v23; // rdx
  signed __int64 v24; // r8
  __int16 v25; // ax
  char *v26; // rax
  __int64 v27; // rcx
  void *Src; // [rsp+20h] [rbp-48h] BYREF
  __int128 v30; // [rsp+28h] [rbp-40h] BYREF
  __int64 v31; // [rsp+38h] [rbp-30h]

  v30 = 0LL;
  v31 = 0LL;
  Src = 0LL;
  DriveLayout = PmGetDriveLayoutEx((KSPIN_LOCK *)a1, &Src);
  v3 = (unsigned int *)Src;
  DriveGeometry = DriveLayout;
  if ( DriveLayout >= 0 && *(_DWORD *)Src == 1 )
  {
    v5 = *((_DWORD *)Src + 1);
    v6 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = *((_QWORD *)Src + 18 * v6 + 10) - *(_QWORD *)&PARTITION_MSFT_SNAPSHOT_GUID.Data1;
        if ( !v7 )
          v7 = *((_QWORD *)Src + 18 * v6 + 11) - *(_QWORD *)PARTITION_MSFT_SNAPSHOT_GUID.Data4;
        if ( !v7 )
          break;
        if ( ++v6 >= v5 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      DriveGeometry = PmGetDriveGeometry(*((struct _DEVICE_OBJECT **)a1 + 1), &v30);
      if ( DriveGeometry >= 0 )
      {
        v8 = 0xFFFFFFFFLL;
        v9 = 144LL * v3[1];
        if ( v9 > 0xFFFFFFFF || (v10 = v9 + 48, (unsigned int)v9 >= 0xFFFFFFD0) )
        {
          DriveGeometry = -1073741675;
        }
        else
        {
          v11 = v9 + 192;
          if ( v10 < 0xFFFFFF70 )
            v8 = v11;
          DriveGeometry = v10 >= 0xFFFFFF70 ? 0xC0000095 : 0;
          if ( v11 >= 0x90 )
          {
            Pool2 = (struct SC_DISK_LAYOUT *)ExAllocatePool2(64LL, v8, 1414557008LL);
            v13 = Pool2;
            if ( Pool2 )
            {
              memmove(Pool2, v3, v10);
              v14 = *((_DWORD *)v13 + 1);
              v15 = 0;
              if ( v14 )
              {
                while ( 1 )
                {
                  v16 = (_DWORD *)((char *)v13 + 144 * v15);
                  v17 = *((_QWORD *)v16 + 10) - *(_QWORD *)&PARTITION_MSFT_RESERVED_GUID.Data1;
                  if ( !v17 )
                    v17 = *((_QWORD *)v16 + 11) - *(_QWORD *)PARTITION_MSFT_RESERVED_GUID.Data4;
                  if ( !v17 )
                    break;
                  if ( ++v15 >= v14 )
                    goto LABEL_21;
                }
                v18 = *((_QWORD *)v16 + 8);
                v19 = *((_QWORD *)v16 + 7);
                v20 = (unsigned int)(HIDWORD(v31) << 9);
                if ( v18 >= v20 )
                {
                  *((_BYTE *)v16 + 76) = 1;
                  *((_QWORD *)v16 + 7) = v19 + v20;
                  *((_QWORD *)v16 + 8) = v18 - v20;
                  v21 = 144LL * *((unsigned int *)v13 + 1);
                  *(_DWORD *)((char *)v13 + v21 + 48) = 1;
                  *(_QWORD *)((char *)v13 + v21 + 56) = v19;
                  *(_QWORD *)((char *)v13 + v21 + 64) = v20;
                  *((_BYTE *)v13 + v21 + 76) = 1;
                  *(GUID *)((char *)v13 + v21 + 80) = PARTITION_MSFT_SNAPSHOT_GUID;
                  DriveGeometry = ExUuidCreate((UUID *)((char *)v13 + v21 + 96));
                  if ( DriveGeometry >= 0 )
                  {
                    v22 = 36LL;
                    v23 = (char *)v13 + v21 + 120;
                    v24 = (char *)L"Microsoft shadow copy partition" - v23;
                    do
                    {
                      if ( v22 == -2147483610 )
                        break;
                      v25 = *(_WORD *)&v23[v24];
                      if ( !v25 )
                        break;
                      *(_WORD *)v23 = v25;
                      v23 += 2;
                      --v22;
                    }
                    while ( v22 );
                    v26 = v23 - 2;
                    if ( v22 )
                      v26 = v23;
                    *(_WORD *)v26 = 0;
                    v27 = *((_QWORD *)a1 + 1);
                    ++*((_DWORD *)v13 + 1);
                    DriveGeometry = PmWritePartitionTable(v27, v13);
                    if ( DriveGeometry >= 0 )
                    {
                      PmInvalidatePartitionTableCache((__int64)a1);
                      DriveGeometry = PmGetDriveLayoutEx((KSPIN_LOCK *)a1, 0LL);
                    }
                  }
                }
                else
                {
                  DriveGeometry = -1073741670;
                }
              }
              else
              {
LABEL_21:
                DriveGeometry = -1073741275;
              }
              ExFreePoolWithTag(v13, 0);
            }
            else
            {
              DriveGeometry = -1073741670;
            }
          }
        }
      }
    }
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)DriveGeometry;
}
