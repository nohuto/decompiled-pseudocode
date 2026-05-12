/*
 * XREFs of RaidFillTcgLockingObjects @ 0x1C0059214
 * Callers:
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x1C0050E2C (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x1C0052E98 (RaidUnitStorageTcgEnumerateLockingObjects.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidFillTcgLockingInfo @ 0x1C0059178 (RaidFillTcgLockingInfo.c)
 */

void __fastcall RaidFillTcgLockingObjects(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _WORD *a5)
{
  _DWORD *v5; // r15
  char v7; // dl
  bool v8; // r12
  unsigned int v9; // edi
  size_t v10; // r14
  unsigned int v11; // ebx
  int v12; // r11d
  char v13; // si
  unsigned __int64 v14; // r10
  int v15; // eax
  int v16; // r13d
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  __int64 v19; // rcx
  _WORD *v20; // rsi
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  unsigned int v26; // r11d
  int v27; // r8d
  bool v28; // dl
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  char v33; // [rsp+20h] [rbp-58h]
  char v34; // [rsp+21h] [rbp-57h]
  int v35; // [rsp+24h] [rbp-54h]
  int v36; // [rsp+28h] [rbp-50h]
  unsigned __int64 v37; // [rsp+30h] [rbp-48h]
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]

  v5 = a4;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  LOBYTE(v35) = 0;
  v10 = (unsigned int)*a4;
  v11 = 0;
  v37 = 0LL;
  v12 = 0;
  v33 = 0;
  v13 = 0;
  v36 = 0;
  v14 = 0LL;
  v34 = 0;
  v38 = 0LL;
  if ( (unsigned int)v10 < 0x10 )
  {
    *a4 = 0;
    return;
  }
  v15 = *(_DWORD *)(a3 + 8);
  v16 = *(_DWORD *)(a3 + 12);
  if ( (v15 & 1) != 0 )
  {
    v14 = *(_QWORD *)(a3 + 16);
    v13 = 1;
    v34 = 1;
    v37 = v14 + *(_QWORD *)(a3 + 24);
    v38 = v14;
  }
  else if ( (v15 & 2) != 0 )
  {
    v12 = *(_DWORD *)(a3 + 16);
    v7 = 1;
    v33 = 1;
    v36 = v12;
  }
  else
  {
    v8 = (v15 & 4) != 0;
  }
  v17 = 0;
  v18 = *(_DWORD *)(a1 + 128);
  if ( v18 )
  {
    v19 = a2 + 8;
    while ( 1 )
    {
      if ( v16 == -1 )
      {
        if ( v7 )
        {
          if ( *(_DWORD *)v19 )
          {
            v22 = *(_DWORD *)(v19 + 64);
            if ( v22 )
            {
              if ( v22 == v12 )
              {
LABEL_12:
                v9 = 1;
                break;
              }
            }
          }
        }
        else if ( v13 )
        {
          if ( *(_DWORD *)v19 )
          {
            v23 = *(_QWORD *)(v19 + 48);
            if ( v23 )
            {
              v24 = *(_QWORD *)(v19 + 40);
              if ( v24 >= v14 && v23 + v24 <= v37 )
                goto LABEL_30;
            }
          }
        }
        else if ( !v8 || *(_QWORD *)(v19 + 48) || *(_DWORD *)(v19 + 64) )
        {
LABEL_30:
          ++v9;
        }
      }
      else if ( *(_DWORD *)v19 == v16 )
      {
        goto LABEL_12;
      }
      ++v17;
      v19 += 80LL;
      if ( v17 >= v18 )
        break;
      v7 = v33;
    }
  }
  v20 = a5;
  memset_0(a5, 0, v10);
  *a5 = 1;
  v21 = (v9 << 6) + 16;
  *((_DWORD *)a5 + 1) = v21;
  if ( (unsigned int)v10 < v21 )
  {
    *v5 = 16;
    return;
  }
  v25 = a1;
  v26 = 0;
  if ( !*(_DWORD *)(a1 + 128) )
    goto LABEL_58;
  v27 = v35;
  do
  {
    v28 = 0;
    v29 = 80LL * v26;
    if ( v16 != -1 )
    {
      v27 = (unsigned __int8)v27;
      if ( *(_DWORD *)(v29 + a2 + 8) == v16 )
        v27 = 1;
      v28 = *(_DWORD *)(v29 + a2 + 8) == v16;
      v35 = v27;
      goto LABEL_52;
    }
    if ( v33 )
    {
      if ( *(_DWORD *)(v29 + a2 + 8) )
      {
        v30 = *(_DWORD *)(v29 + a2 + 72);
        if ( v30 )
        {
          if ( v30 == v36 )
          {
            LOBYTE(v27) = 1;
            v28 = 1;
            v35 = v27;
          }
        }
      }
      goto LABEL_52;
    }
    if ( v34 )
    {
      if ( *(_DWORD *)(v29 + a2 + 8) )
      {
        v31 = *(_QWORD *)(v29 + a2 + 56);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v29 + a2 + 48);
          if ( v32 >= v38 )
            v28 = v31 + v32 <= v37;
        }
      }
      v27 = v35;
      goto LABEL_52;
    }
    if ( v8 )
    {
      if ( *(_QWORD *)(v29 + a2 + 56) || *(_DWORD *)(v29 + a2 + 72) )
        v28 = 1;
LABEL_52:
      if ( !v28 )
        goto LABEL_55;
    }
    if ( v11 < v9 )
    {
      RaidFillTcgLockingInfo(a2 + v29, (__int64)&a5[32 * (unsigned __int64)v11 + 8]);
      v27 = v35;
      v25 = a1;
      ++v11;
    }
LABEL_55:
    if ( (_BYTE)v27 )
      break;
    ++v26;
  }
  while ( v26 < *(_DWORD *)(v25 + 128) );
  v20 = a5;
  v5 = a4;
  if ( v11 <= v9 )
  {
LABEL_58:
    *((_DWORD *)v20 + 2) = v11;
    *v5 = (v11 << 6) + 16;
  }
}
