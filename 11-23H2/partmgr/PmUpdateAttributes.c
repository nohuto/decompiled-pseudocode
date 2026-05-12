/*
 * XREFs of PmUpdateAttributes @ 0x1C001CAC8
 * Callers:
 *     ?PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C0002D88 (-PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 * Callees:
 *     PmGetSnapshotData @ 0x1C0003EE0 (PmGetSnapshotData.c)
 *     PmSetDiskAttributes @ 0x1C0009178 (PmSetDiskAttributes.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 */

__int64 __fastcall PmUpdateAttributes(__int64 a1, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  PVOID v2; // rsi
  unsigned int v3; // r14d
  __int64 v5; // rbx
  int SnapshotData; // eax
  int v7; // r8d
  unsigned int v9; // [rsp+20h] [rbp-40h] BYREF
  PVOID P; // [rsp+28h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-10h]

  v2 = 0LL;
  v9 = 0;
  v3 = 0;
  v13 = 0LL;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (*(_BYTE *)(a1 + 604) || *(_DWORD *)(a1 + 592) || *(_DWORD *)(a1 + 596) || *(_DWORD *)(a1 + 600))
    && ((*(_BYTE *)(a1 + 528) & 3) != 0 || (BYTE8(v11) & 3) != 0) )
  {
    *((_QWORD *)&v11 + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
    v5 = v12 | 3;
    *(_QWORD *)&v12 = v12 | 3;
  }
  else
  {
    v5 = v12;
  }
  if ( (*(_BYTE *)(a1 + 528) & 1) != 0 || (BYTE8(v11) & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    SnapshotData = PmGetSnapshotData((KSPIN_LOCK *)a1, a2, &P, &v9);
    v2 = P;
    v3 = SnapshotData;
    if ( SnapshotData < 0 )
      goto LABEL_12;
    v7 = 0;
    if ( *((_DWORD *)P + 5) == 1 )
    {
      *((_QWORD *)&v11 + 1) |= 1uLL;
      v7 = 3;
      v5 |= 1uLL;
      *(_BYTE *)(a1 + 604) = 0;
      *(_QWORD *)&v12 = v5;
    }
  }
  if ( v5 )
  {
    LODWORD(v11) = 40;
    BYTE4(v11) = 1;
    v3 = PmSetDiskAttributes(a1, (__int64)&v11, v7);
  }
LABEL_12:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v3;
}
