/*
 * XREFs of sub_140299840 @ 0x140299840
 * Callers:
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 * Callees:
 *     sub_140299A64 @ 0x140299A64 (sub_140299A64.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056ABF0 @ 0x14056ABF0 (sub_14056ABF0.c)
 *     sub_14056FE5C @ 0x14056FE5C (sub_14056FE5C.c)
 *     sub_14057B504 @ 0x14057B504 (sub_14057B504.c)
 *     sub_14057D2A8 @ 0x14057D2A8 (sub_14057D2A8.c)
 */

char __fastcall sub_140299840(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  int v6; // r8d
  char v7; // r14
  __int16 v8; // ax
  void *v9; // rdx
  void *v10; // rcx
  bool v11; // cf
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r14
  char v16; // si
  char v17; // cl
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  __int16 v22; // ax
  int v23; // eax
  _QWORD v24[14]; // [rsp+30h] [rbp-39h] BYREF

  memset(v24, 0, sizeof(v24));
  v7 = 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0x10000001:
      v12 = 0x80000000;
      goto LABEL_29;
    case 0x10000002:
      goto LABEL_41;
    case 0x10000003:
      v12 = 0x20000000;
      *(_DWORD *)a1 = -1073741676;
      goto LABEL_10;
  }
  if ( *(_DWORD *)a1 != 268435460 )
  {
    if ( *(_DWORD *)a1 == 268435462 )
    {
      v7 = 1;
      if ( (unsigned __int8)sub_14056ABF0(a1, a2) )
        return 1;
      goto LABEL_5;
    }
    if ( *(_DWORD *)a1 != 268435463 )
    {
      if ( *(_DWORD *)a1 != 268435472 )
        return 0;
      if ( (int)sub_14056FE5C(KeGetCurrentThread(), *(_QWORD *)(a1 + 32)) >= 0 )
        return 1;
LABEL_41:
      v12 = 0x40000000;
      *(_DWORD *)a1 = -1073741795;
      goto LABEL_10;
    }
    v12 = 0x4000000;
LABEL_29:
    *(_DWORD *)a1 = -1073741819;
    goto LABEL_10;
  }
LABEL_5:
  v8 = *(_WORD *)(a2 + 56);
  if ( v8 == 16 )
  {
    v9 = &loc_140429897;
    v10 = &loc_140429887;
  }
  else
  {
    if ( v8 != 51 )
      goto LABEL_8;
    v9 = (void *)qword_140D071B0;
    v10 = (void *)qword_140D071B8;
  }
  if ( *(void **)(a2 + 248) != v9 )
    goto LABEL_8;
  if ( v8 == 16 )
  {
    *(_QWORD *)(a2 + 248) = v10;
    if ( (_BYTE)byte_140E01841 && (*(_DWORD *)(a2 + 48) & 0x100080) == 0x100080 )
      *(_QWORD *)(*(int *)(a2 + 1256) + a2 + 1240) = v10;
    return 1;
  }
  CurrentThread = KeGetCurrentThread();
  v20 = *(_QWORD *)(a1 + 40);
  if ( v20 == *((_QWORD *)CurrentThread + 3) )
  {
    v21 = *((_WORD *)CurrentThread + 323);
    v6 = 1024;
    if ( v21 > 0x400u )
    {
      *((_WORD *)CurrentThread + 323) = 0;
LABEL_8:
      v11 = *(_DWORD *)(a1 + 24) < 2u;
      v12 = 0x10000000;
      *(_DWORD *)a1 = -1073741819;
      if ( v11 || (*(_BYTE *)(a1 + 32) & 8) == 0 )
      {
LABEL_10:
        LOBYTE(v6) = a3;
        v13 = sub_140299A64(a1, a2, v6, v12, v24);
        if ( v13 < 0 )
        {
          v16 = 0;
        }
        else
        {
          if ( v7 )
          {
            HIDWORD(v24[7]) |= 0x2000000u;
            v24[13] = -1LL;
          }
          v15 = v24[11];
          if ( v24[11] )
            v13 = sub_14042A5E0(v24, v14);
          v16 = 0;
          if ( v13 >= 0 && v15 )
          {
            v17 = v24[12];
            v16 = v24[12];
            if ( LOBYTE(v24[12]) )
              return v16;
LABEL_17:
            if ( v12 == 0x80000000 )
            {
              if ( *(_DWORD *)a1 == -1073741819 && !BYTE1(v24[12]) )
              {
                *(_DWORD *)(a1 + 24) = 2;
                *(_QWORD *)(a1 + 40) = -1LL;
                *(_QWORD *)(a1 + 32) = 0LL;
              }
            }
            else if ( v12 == 0x8000000 )
            {
              if ( BYTE2(v24[7]) )
              {
                if ( (*(_BYTE *)(v24[4] + 32LL) & 8) != 0 && *(_QWORD *)(v24[4] + 40LL) == v24[0] )
                {
                  v23 = sub_14057D2A8(
                          LODWORD(v24[3]) + 248,
                          LODWORD(v24[3]) + 152,
                          LODWORD(v24[3]) + 120,
                          LODWORD(v24[3]) + 128,
                          v24[3] + 136LL);
                  v17 = v24[12];
                  if ( v23 )
                    return 1;
                }
              }
              return v17;
            }
            else if ( v12 == 0x10000000 && (v24[7] & 0x200000000000000LL) != 0 )
            {
              sub_14057B504(v24, a1);
              if ( *(_DWORD *)a1 == 268435465 )
                KeBugCheckEx(
                  0x1EAu,
                  *(_QWORD *)(a1 + 32),
                  *(_QWORD *)(a1 + 40),
                  *(_QWORD *)(a1 + 48),
                  *(_QWORD *)(a1 + 56));
            }
            return v16;
          }
        }
        v17 = v24[12];
        goto LABEL_17;
      }
      if ( a3 )
      {
        v12 = 0x8000000;
        goto LABEL_10;
      }
      return 0;
    }
    v22 = v21 + 1;
  }
  else
  {
    *((_QWORD *)CurrentThread + 3) = v20;
    v22 = 0;
  }
  *((_WORD *)CurrentThread + 323) = v22;
  *(_QWORD *)(a2 + 248) = v10;
  return 1;
}
