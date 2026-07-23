/*
 * XREFs of RtlAvlInsertNodeEx @ 0x14030EFD0
 * Callers:
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_140255870 @ 0x140255870 (sub_140255870.c)
 *     sub_14025A2B4 @ 0x14025A2B4 (sub_14025A2B4.c)
 *     sub_14025B5E0 @ 0x14025B5E0 (sub_14025B5E0.c)
 *     sub_140268520 @ 0x140268520 (sub_140268520.c)
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_14026EA80 @ 0x14026EA80 (sub_14026EA80.c)
 *     sub_140281F60 @ 0x140281F60 (sub_140281F60.c)
 *     sub_1402C41D0 @ 0x1402C41D0 (sub_1402C41D0.c)
 *     sub_1402D8C20 @ 0x1402D8C20 (sub_1402D8C20.c)
 *     sub_1402D9A54 @ 0x1402D9A54 (sub_1402D9A54.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_14036DB5C @ 0x14036DB5C (sub_14036DB5C.c)
 *     sub_140372224 @ 0x140372224 (sub_140372224.c)
 *     sub_140386294 @ 0x140386294 (sub_140386294.c)
 *     sub_1403CF758 @ 0x1403CF758 (sub_1403CF758.c)
 *     sub_140584030 @ 0x140584030 (sub_140584030.c)
 *     sub_14058503C @ 0x14058503C (sub_14058503C.c)
 *     sub_140586A44 @ 0x140586A44 (sub_140586A44.c)
 *     sub_1405879D8 @ 0x1405879D8 (sub_1405879D8.c)
 *     sub_140588C48 @ 0x140588C48 (sub_140588C48.c)
 *     sub_14058DFB8 @ 0x14058DFB8 (sub_14058DFB8.c)
 *     sub_14058E174 @ 0x14058E174 (sub_14058E174.c)
 *     sub_140590B00 @ 0x140590B00 (sub_140590B00.c)
 *     sub_140591814 @ 0x140591814 (sub_140591814.c)
 *     sub_14059F7A0 @ 0x14059F7A0 (sub_14059F7A0.c)
 *     sub_1405BB8B4 @ 0x1405BB8B4 (sub_1405BB8B4.c)
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 *     sub_1405BD66C @ 0x1405BD66C (sub_1405BD66C.c)
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_1405BE614 @ 0x1405BE614 (sub_1405BE614.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_1405BF028 @ 0x1405BF028 (sub_1405BF028.c)
 *     sub_1405C350C @ 0x1405C350C (sub_1405C350C.c)
 *     sub_1405E2E00 @ 0x1405E2E00 (sub_1405E2E00.c)
 *     sub_1405E33F8 @ 0x1405E33F8 (sub_1405E33F8.c)
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 *     sub_1406FC590 @ 0x1406FC590 (sub_1406FC590.c)
 *     sub_1406FD9F0 @ 0x1406FD9F0 (sub_1406FD9F0.c)
 *     sub_140973D6C @ 0x140973D6C (sub_140973D6C.c)
 *     sub_140973EA4 @ 0x140973EA4 (sub_140973EA4.c)
 *     sub_1409743A4 @ 0x1409743A4 (sub_1409743A4.c)
 *     sub_14097C814 @ 0x14097C814 (sub_14097C814.c)
 *     sub_140982F64 @ 0x140982F64 (sub_140982F64.c)
 *     sub_1409B35D0 @ 0x1409B35D0 (sub_1409B35D0.c)
 *     sub_1409BFCA0 @ 0x1409BFCA0 (sub_1409BFCA0.c)
 *     sub_1409BFD4C @ 0x1409BFD4C (sub_1409BFD4C.c)
 *     sub_140B08E90 @ 0x140B08E90 (sub_140B08E90.c)
 *     sub_140B1A80C @ 0x140B1A80C (sub_140B1A80C.c)
 * Callees:
 *     sub_14034FD50 @ 0x14034FD50 (sub_14034FD50.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  __int64 v4; // rax
  bool v5; // r10
  unsigned __int64 v6; // rbx
  _BYTE *v8; // r9
  char v9; // r8
  char v10; // cl
  char v11; // di
  _BOOL8 v12; // r9
  unsigned __int64 *v13; // r10
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rcx

  LOBYTE(v4) = 0;
  v5 = a3;
  *a4 = 0LL;
  v6 = (unsigned __int64)a4;
  a4[1] = 0LL;
  a4[2] = a2;
  if ( !a2 )
  {
    *a1 = (unsigned __int64)a4;
    return v4;
  }
  v8 = (_BYTE *)(a2 + 16);
  *(_QWORD *)(a2 + 8LL * a3) = v6;
  v9 = *(_BYTE *)(a2 + 16);
  LOBYTE(v4) = 2 * v5;
  v10 = (-1 - 2 * v5) & 3;
  v11 = v9 & 3;
  if ( (v9 & 3) != 0 )
  {
LABEL_5:
    if ( v11 != v10 )
    {
      *(_BYTE *)(a2 + 16) &= 0xFCu;
      return v4;
    }
    if ( (*(_BYTE *)(v6 + 16) & 3) != v11 )
    {
      v4 = sub_14034FD50(a1, a2, v6, v5);
      *(_BYTE *)(v17 + 16) &= 0xFCu;
      v18 = v4;
      LOBYTE(v4) = *(_BYTE *)(v6 + 16) & 0xFC;
      *(_BYTE *)(v6 + 16) = v4;
      if ( v11 == (*(_BYTE *)(v18 + 16) & 3) )
      {
        LOBYTE(v4) = (v11 ^ *(_BYTE *)(v17 + 16) ^ 0xFE) & 3;
        *(_BYTE *)(v17 + 16) ^= v4;
        *(_BYTE *)(v18 + 16) &= 0xFCu;
      }
      else
      {
        if ( v11 == ((*(_BYTE *)(v18 + 16) ^ 0xFE) & 3) )
        {
          LOBYTE(v4) = v11 | v4;
          *(_BYTE *)(v6 + 16) = v4;
        }
        *(_BYTE *)(v18 + 16) &= 0xFCu;
      }
      return v4;
    }
    v12 = !v5;
    if ( (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v13 = (unsigned __int64 *)(a2 + 8LL * v5);
      if ( *v13 == v6 )
      {
        v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v14 )
        {
          if ( *(_QWORD *)(v14 + 8) == a2 )
          {
            *(_QWORD *)(v14 + 8) = v6;
          }
          else
          {
            if ( *(_QWORD *)v14 != a2 )
              goto LABEL_28;
            *(_QWORD *)v14 = v6;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_28;
          *a1 = v6;
        }
        v15 = (unsigned __int64 *)(v6 + 8 * v12);
        *(_QWORD *)(v6 + 16) = v14 | *(_DWORD *)(v6 + 16) & 3;
        v16 = *v15;
        if ( !*v15 )
        {
LABEL_13:
          *v13 = v16;
          *v15 = a2;
          v4 = v6 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v4;
          *(_BYTE *)(v6 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
          return v4;
        }
        v19 = *(_QWORD *)(v16 + 16);
        if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) == v6 )
        {
          *(_QWORD *)(v16 + 16) = a2 | v19 & 3;
          goto LABEL_13;
        }
      }
    }
LABEL_28:
    __fastfail(0x1Du);
  }
  while ( 1 )
  {
    v6 = a2;
    *v8 = v10 | v9 & 0xFC;
    a2 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return v4;
    v8 = (_BYTE *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 16);
    v5 = *(_QWORD *)a2 != v6;
    LOBYTE(v4) = 2 * v5;
    v10 = (-1 - 2 * v5) & 3;
    v11 = v9 & 3;
    if ( (v9 & 3) != 0 )
      goto LABEL_5;
  }
}
