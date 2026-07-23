/*
 * XREFs of RtlAvlRemoveNode @ 0x1402C66C0
 * Callers:
 *     sub_140239A98 @ 0x140239A98 (sub_140239A98.c)
 *     sub_140255870 @ 0x140255870 (sub_140255870.c)
 *     sub_14025B5E0 @ 0x14025B5E0 (sub_14025B5E0.c)
 *     sub_14025CE80 @ 0x14025CE80 (sub_14025CE80.c)
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     sub_14026EA80 @ 0x14026EA80 (sub_14026EA80.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1402D8C20 @ 0x1402D8C20 (sub_1402D8C20.c)
 *     sub_1402DBD88 @ 0x1402DBD88 (sub_1402DBD88.c)
 *     sub_14030DA80 @ 0x14030DA80 (sub_14030DA80.c)
 *     sub_140372224 @ 0x140372224 (sub_140372224.c)
 *     sub_1403864DC @ 0x1403864DC (sub_1403864DC.c)
 *     sub_1403CF758 @ 0x1403CF758 (sub_1403CF758.c)
 *     sub_140584374 @ 0x140584374 (sub_140584374.c)
 *     sub_14058503C @ 0x14058503C (sub_14058503C.c)
 *     sub_140586A44 @ 0x140586A44 (sub_140586A44.c)
 *     sub_140587900 @ 0x140587900 (sub_140587900.c)
 *     sub_1405882D0 @ 0x1405882D0 (sub_1405882D0.c)
 *     sub_140588C48 @ 0x140588C48 (sub_140588C48.c)
 *     sub_14058E7F4 @ 0x14058E7F4 (sub_14058E7F4.c)
 *     sub_140590C24 @ 0x140590C24 (sub_140590C24.c)
 *     sub_1405910C0 @ 0x1405910C0 (sub_1405910C0.c)
 *     sub_140599658 @ 0x140599658 (sub_140599658.c)
 *     sub_14059F6F4 @ 0x14059F6F4 (sub_14059F6F4.c)
 *     sub_14059FC8C @ 0x14059FC8C (sub_14059FC8C.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1405BA6F0 @ 0x1405BA6F0 (sub_1405BA6F0.c)
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 *     sub_1405BDDAC @ 0x1405BDDAC (sub_1405BDDAC.c)
 *     sub_1405BDF64 @ 0x1405BDF64 (sub_1405BDF64.c)
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_1405BE614 @ 0x1405BE614 (sub_1405BE614.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_1405BF028 @ 0x1405BF028 (sub_1405BF028.c)
 *     sub_1405BF2A0 @ 0x1405BF2A0 (sub_1405BF2A0.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 *     sub_1405C350C @ 0x1405C350C (sub_1405C350C.c)
 *     sub_1405E2E00 @ 0x1405E2E00 (sub_1405E2E00.c)
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 *     sub_1406FC070 @ 0x1406FC070 (sub_1406FC070.c)
 *     sub_1406FC2F0 @ 0x1406FC2F0 (sub_1406FC2F0.c)
 *     sub_140791CAC @ 0x140791CAC (sub_140791CAC.c)
 *     sub_140970668 @ 0x140970668 (sub_140970668.c)
 *     sub_140972E78 @ 0x140972E78 (sub_140972E78.c)
 *     sub_140973D6C @ 0x140973D6C (sub_140973D6C.c)
 *     sub_140973EA4 @ 0x140973EA4 (sub_140973EA4.c)
 *     sub_140977B70 @ 0x140977B70 (sub_140977B70.c)
 *     sub_140977CBC @ 0x140977CBC (sub_140977CBC.c)
 *     sub_14097D5F0 @ 0x14097D5F0 (sub_14097D5F0.c)
 *     sub_140981BB0 @ 0x140981BB0 (sub_140981BB0.c)
 *     sub_1409ADDA4 @ 0x1409ADDA4 (sub_1409ADDA4.c)
 *     sub_1409B35D0 @ 0x1409B35D0 (sub_1409B35D0.c)
 *     sub_1409BFEC8 @ 0x1409BFEC8 (sub_1409BFEC8.c)
 *     sub_140B1A80C @ 0x140B1A80C (sub_140B1A80C.c)
 * Callees:
 *     sub_14034FD50 @ 0x14034FD50 (sub_14034FD50.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // r10
  char v10; // al
  _BYTE *v11; // rsi
  unsigned __int8 v12; // di
  __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  bool v15; // zf
  _QWORD *v16; // r9
  unsigned __int64 v17; // rcx
  unsigned int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r9
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r15
  char v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // r11
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  char v32; // r9
  unsigned __int8 v33; // cl

  v2 = *a2;
  v4 = a2[1];
  v5 = v4;
  if ( *a2 )
    v5 = *a2;
  v7 = 0LL;
  if ( v2 )
    v7 = a2[1];
  if ( !v7 )
  {
    v8 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v5 )
    {
      if ( *(unsigned __int64 **)(v5 + 16) != a2 )
        goto LABEL_76;
      *(_QWORD *)(v5 + 16) = v8;
    }
    if ( v8 )
    {
      if ( *(unsigned __int64 **)(v8 + 8) == a2 )
      {
        v9 = 3;
        *(_QWORD *)(v8 + 8) = v5;
        goto LABEL_16;
      }
      if ( *(unsigned __int64 **)v8 == a2 )
      {
        v9 = 1;
        *(_QWORD *)v8 = v5;
        goto LABEL_16;
      }
    }
    else if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v5;
      return v7;
    }
LABEL_76:
    __fastfail(0x1Du);
  }
  if ( (a2[2] & 3) == 3 )
  {
    v29 = *(_QWORD **)(v2 + 8);
    v18 = 0;
    v17 = *a2;
    v8 = *a2;
    if ( v29 )
    {
      v18 = 1;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v29;
        v29 = (_QWORD *)v29[1];
      }
      while ( v29 );
    }
    v19 = *(_QWORD *)v17;
  }
  else
  {
    v16 = *(_QWORD **)v4;
    v17 = a2[1];
    v8 = v17;
    v18 = 1;
    if ( *(_QWORD *)v4 )
    {
      v18 = 0;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v16;
        v16 = (_QWORD *)*v16;
      }
      while ( v16 );
    }
    v19 = *(_QWORD *)(v17 + 8);
  }
  *(_QWORD *)v17 = v2;
  *(_QWORD *)(v17 + 8) = v4;
  v20 = *(_QWORD *)(v2 + 16);
  if ( (unsigned __int64 *)(v20 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_76;
  *(_QWORD *)(v2 + 16) = v17 | v20 & 3;
  v21 = *(_QWORD *)(v4 + 16);
  if ( (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_76;
  *(_QWORD *)(v4 + 16) = v17 | v21 & 3;
  if ( (*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_76;
  *(_QWORD *)(v8 + 8LL * v18) = v19;
  if ( v19 )
  {
    if ( *(_QWORD *)(v19 + 16) != v17 )
      goto LABEL_76;
    *(_QWORD *)(v19 + 16) = v8;
  }
  *(_QWORD *)(v17 + 16) = a2[2];
  v9 = 3;
  if ( !v18 )
    v9 = 1;
  v22 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v22 )
  {
    if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v17;
      goto LABEL_16;
    }
    goto LABEL_76;
  }
  v30 = 0LL;
  if ( *(unsigned __int64 **)(v22 + 8) == a2 )
    v30 = 8LL;
  if ( *(unsigned __int64 **)(v30 + v22) != a2 )
    goto LABEL_76;
  *(_QWORD *)(v30 + v22) = v17;
  while ( 1 )
  {
LABEL_16:
    v10 = *(_BYTE *)(v8 + 16);
    v11 = (_BYTE *)(v8 + 16);
    v12 = v10 & 3;
    if ( (v10 & 3) == ((unsigned __int8)v9 ^ 2) )
    {
      LOBYTE(v7) = v10 & 0xFC;
      *v11 = v7;
      v13 = *(_QWORD *)v11;
      goto LABEL_20;
    }
    if ( !v12 )
    {
      LOBYTE(v7) = v9 | v10 & 0xFC;
      *(_BYTE *)(v8 + 16) = v7;
      return v7;
    }
    v13 = *(_QWORD *)v11;
    v23 = *(_QWORD *)v8;
    if ( v9 == 1 )
      v23 = *(_QWORD *)(v8 + 8);
    v24 = *(_BYTE *)(v23 + 16) & 3;
    if ( v24 != ((unsigned __int8)v9 ^ 2) )
      break;
    v7 = sub_14034FD50(a1, v8, v23, v9 == 1);
    *v11 &= 0xFCu;
    v8 = v7;
    v32 = *(_BYTE *)(v23 + 16) & 0xFC;
    *(_BYTE *)(v23 + 16) = v32;
    v33 = *(_BYTE *)(v7 + 16);
    LODWORD(v7) = v33 & 3;
    if ( v12 == (_DWORD)v7 )
    {
      LOBYTE(v7) = (v12 ^ *v11 ^ 0xFE) & 3;
      *v11 ^= v7;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
    else
    {
      if ( v12 == ((v33 ^ 0xFE) & 3) )
        *(_BYTE *)(v23 + 16) = v12 | v32;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
LABEL_20:
    v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v14 )
      return v7;
    v15 = *(_QWORD *)(v14 + 8) == v8;
    v9 = 3;
    v8 = v14;
    if ( !v15 )
      v9 = 1;
  }
  if ( (*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_76;
  v25 = 0LL;
  if ( v9 == 1 )
    v25 = 8LL;
  v26 = (_QWORD *)(v25 + v8);
  if ( *(_QWORD *)(v25 + v8) != v23 )
    goto LABEL_76;
  v27 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( *(_QWORD *)(v27 + 8) == v8 )
    {
      *(_QWORD *)(v27 + 8) = v23;
    }
    else
    {
      if ( *(_QWORD *)v27 != v8 )
        goto LABEL_76;
      *(_QWORD *)v27 = v23;
    }
  }
  else
  {
    if ( *a1 != v8 )
      goto LABEL_76;
    *a1 = v23;
  }
  *(_QWORD *)(v23 + 16) = v27 | *(_DWORD *)(v23 + 16) & 3;
  v7 = 0LL;
  if ( v9 != 1 )
    v7 = 8LL;
  v28 = *(_QWORD *)(v7 + v23);
  if ( v28 )
  {
    v31 = *(_QWORD *)(v28 + 16);
    if ( (v31 & 0xFFFFFFFFFFFFFFFCuLL) != v23 )
      goto LABEL_76;
    *(_QWORD *)(v28 + 16) = v8 | v31 & 3;
  }
  *v26 = v28;
  *(_QWORD *)(v7 + v23) = v8;
  *(_QWORD *)v11 = v23 | *(_DWORD *)v11 & 3;
  LOBYTE(v7) = *(_BYTE *)(v23 + 16) & 0xFC;
  if ( v24 )
  {
    *(_BYTE *)(v23 + 16) = v7;
    v8 = v23;
    *v11 &= 0xFCu;
    goto LABEL_20;
  }
  *(_BYTE *)(v23 + 16) = v7 | (v9 ^ 0xFE) & 3;
  return v7;
}
