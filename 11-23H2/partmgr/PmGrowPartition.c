/*
 * XREFs of PmGrowPartition @ 0x1C000F6AC
 * Callers:
 *     PmIoctlGrowPartition @ 0x1C0025BC0 (PmIoctlGrowPartition.c)
 * Callees:
 *     PartitionOffset @ 0x1C0002784 (PartitionOffset.c)
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 *     PmWritePartitionTable @ 0x1C001ED64 (PmWritePartitionTable.c)
 */

__int64 __fastcall PmGrowPartition(KSPIN_LOCK *a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v6; // edx
  int v8; // r8d
  int v9; // ebx
  __int64 v11; // rsi
  _QWORD **v12; // r12
  _QWORD *v13; // rcx
  bool i; // zf
  _QWORD *v15; // rbp
  unsigned int v16; // r15d
  __int64 v17; // r13
  _QWORD *v18; // r9
  int v19; // r10d
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // r10d
  unsigned int v26; // r8d
  unsigned int v27; // ecx
  bool j; // cf
  char v29; // dl
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 k; // r11
  char v36; // al
  __int64 v37; // r9
  KIRQL v38; // al
  KIRQL v39; // bl
  __int64 v40; // [rsp+20h] [rbp-58h]
  KSPIN_LOCK *SpinLock; // [rsp+28h] [rbp-50h]
  KIRQL NewIrql; // [rsp+88h] [rbp+10h]

  v5 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  if ( v6 )
  {
    v8 = *a3;
    while ( *(_DWORD *)(a2 + 144 * v5 + 72) != v8 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v6 )
        return (unsigned int)-1073741810;
    }
    v40 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)a2 != 1 || (v11 = *(_QWORD *)(a2 + 24) + *(_QWORD *)(a2 + 32), a4 < v11) )
      v11 = a4;
    SpinLock = a1 + 14;
    v12 = (_QWORD **)(a1 + 112);
    NewIrql = KeAcquireSpinLockRaiseToDpc(a1 + 14);
    v13 = *v12;
    for ( i = *v12 == v12; ; i = v13 == v12 )
    {
      if ( i )
      {
        v9 = -1073741810;
        goto LABEL_56;
      }
      v15 = v13 - 18;
      if ( (*(_DWORD *)(v13 - 13) & 4) == 0 )
      {
        v16 = v5;
        if ( *((_DWORD *)v15 + 48) == *a3 )
          break;
      }
      v13 = (_QWORD *)*v13;
    }
    v17 = v15[22];
    if ( PartitionOffset((__int64)(v13 - 18), 1) != v17 )
    {
      v9 = -1073741637;
LABEL_56:
      KeReleaseSpinLock(SpinLock, NewIrql);
      return (unsigned int)v9;
    }
    v20 = v15[23];
    v21 = v11 - v20 - v17;
    if ( v40 != 0x7FFFFFFFFFFFFFFFLL && *((_QWORD *)a3 + 1) > v21 )
    {
LABEL_19:
      v9 = -1073741811;
      goto LABEL_56;
    }
    v22 = *((_QWORD *)a3 + 1);
    if ( v22 >= 0 )
    {
      v23 = v22 + v20;
    }
    else
    {
      v23 = v20 + v22;
      if ( v20 + v22 <= 0 )
        goto LABEL_19;
    }
    if ( v40 == 0x7FFFFFFFFFFFFFFFLL )
      v23 = v20 + v21;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v18 - 13) & 4) == 0 )
      {
        v24 = v18[4];
        if ( v24 > v17 )
          break;
      }
      v18 = (_QWORD *)*v18;
      if ( v18 == v12 )
        goto LABEL_29;
    }
    v32 = v24 - v17;
    if ( v40 == 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v23 >= v32 )
        v23 = v32;
    }
    else if ( v23 > v32 )
    {
      goto LABEL_19;
    }
LABEL_29:
    v25 = v19 & 0xFFFFFFFC;
    if ( !*(_DWORD *)a2 )
    {
      v26 = *(_DWORD *)(a2 + 4);
      v27 = v25;
      for ( j = v25 < v26; j; j = v27 < v26 )
      {
        v29 = *(_BYTE *)(a2 + 144LL * v27 + 80);
        if ( v29 == 5 || v29 == 15 )
        {
          v30 = *(_QWORD *)(a2 + 144LL * v27 + 56);
          if ( v30 > v17 )
          {
            v31 = v30 - v17;
            if ( v40 == 0x7FFFFFFFFFFFFFFFLL )
            {
              if ( v23 >= v31 )
                v23 = v31;
            }
            else if ( v23 > v31 )
            {
              goto LABEL_19;
            }
          }
        }
        ++v27;
      }
    }
    v33 = 18LL * v16;
    *(_QWORD *)(a2 + 8 * v33 + 64) = v23;
    *(_BYTE *)(a2 + 8 * v33 + 76) = 1;
    if ( !*(_DWORD *)a2 && v16 > 3 )
    {
      v34 = v25 - 1;
      for ( k = v23 + v15[22] - 1LL; (int)v34 >= 0; v34 = (unsigned int)(v34 - 1) )
      {
        v36 = *(_BYTE *)(a2 + 144 * v34 + 80);
        if ( v36 == 5 || v36 == 15 )
        {
          v37 = *(_QWORD *)(a2 + 144 * v34 + 56);
          if ( v37 + *(_QWORD *)(a2 + 144 * v34 + 64) - 1LL > k )
            break;
          *(_BYTE *)(a2 + 144 * v34 + 76) = 1;
          *(_QWORD *)(a2 + 144 * v34 + 64) = k - v37 + 1;
        }
      }
    }
    KeReleaseSpinLock(SpinLock, NewIrql);
    v9 = PmWritePartitionTable(a1[1], a2);
    if ( v9 >= 0 )
    {
      PmInvalidatePartitionTableCache((__int64)a1);
      v38 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      *((_DWORD *)v15 + 10) |= 0x10u;
      v39 = v38;
      v15[23] = v23;
      PmWakeupNotificationWorkItem((__int64)a1);
      KeReleaseSpinLock(SpinLock, v39);
      return (unsigned int)PmGetDriveLayoutEx(a1, 0LL);
    }
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)v9;
}
