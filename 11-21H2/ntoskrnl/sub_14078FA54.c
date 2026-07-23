/*
 * XREFs of sub_14078FA54 @ 0x14078FA54
 * Callers:
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 * Callees:
 *     sub_1402E10FC @ 0x1402E10FC (sub_1402E10FC.c)
 *     sub_14078F198 @ 0x14078F198 (sub_14078F198.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_140796BF4 @ 0x140796BF4 (sub_140796BF4.c)
 */

__int64 __fastcall sub_14078FA54(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 *a4, _BYTE *a5)
{
  int v5; // eax
  __int64 v9; // r10
  unsigned int v10; // edx
  __int64 v11; // r9
  char *v12; // r8
  __int64 v13; // rax
  __int64 v14; // r11
  int v15; // r15d
  unsigned __int8 v16; // si
  __int64 v17; // r14
  unsigned __int8 v19; // al
  unsigned int v20; // r15d
  char *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r11
  __int64 v24; // r9
  int v25; // r14d
  unsigned __int8 v26; // r8
  __int64 v27; // rsi
  unsigned __int8 v28; // al
  __int128 v29; // [rsp+30h] [rbp-20h]
  __int128 v30; // [rsp+30h] [rbp-20h]
  __int128 v31; // [rsp+40h] [rbp-10h]
  __int128 v32; // [rsp+40h] [rbp-10h]
  unsigned int v33; // [rsp+88h] [rbp+38h] BYREF

  v33 = 0;
  v5 = *(_DWORD *)(a2 + 72);
  if ( v5 == 1 )
  {
    *(_BYTE *)(BugCheckParameter2 + 91) ^= (*(_BYTE *)(BugCheckParameter2 + 91) ^ *(_BYTE *)(a2 + 112)) & 1;
    *(_BYTE *)(BugCheckParameter2 + 91) = *(_BYTE *)(BugCheckParameter2 + 91) & 1 | (2 * *(_BYTE *)(a2 + 107));
    *(_WORD *)(BugCheckParameter2 + 88) = *(_WORD *)(a2 + 104);
    *(_BYTE *)(BugCheckParameter2 + 90) = *(_BYTE *)(a2 + 106);
    *(_QWORD *)(BugCheckParameter2 + 80) = a3;
  }
  else if ( !v5 && *(_WORD *)(BugCheckParameter2 + 88) == *(_WORD *)(a2 + 104) )
  {
    *(_BYTE *)(BugCheckParameter2 + 91) &= ~1u;
  }
  if ( sub_1402E10FC(BugCheckParameter2, *(unsigned __int16 *)(a2 + 78), &v33) )
  {
    v20 = v33;
    v21 = (char *)(BugCheckParameter2 + 132);
    v22 = 32 * (v33 + 4LL);
    v23 = -1LL;
    *(_OWORD *)(v22 + BugCheckParameter2) = *(_OWORD *)(a2 + 72);
    v24 = 8LL;
    v30 = 0LL;
    v25 = 0;
    v26 = 0;
    v27 = 0LL;
    *(_OWORD *)(v22 + BugCheckParameter2 + 16) = *(_OWORD *)(a2 + 88);
    *((_QWORD *)&v32 + 1) = -1LL;
    do
    {
      if ( *((_DWORD *)v21 - 1) )
      {
        v28 = v26;
        LODWORD(v30) = v9;
        if ( v26 <= (unsigned __int8)*v21 )
          v28 = *v21;
        v23 &= *(_QWORD *)(v21 + 20);
        v27 |= *(_QWORD *)(v21 + 12);
        v26 = v28;
        v25 |= *((_DWORD *)v21 + 1);
        *((_QWORD *)&v32 + 1) = v23;
      }
      v21 += 32;
      v24 -= v9;
    }
    while ( v24 );
    BYTE4(v30) = v26;
    DWORD2(v30) = v25;
    *(_QWORD *)&v32 = v27;
    *a5 = (_BYTE)v9 << v20;
    *(_OWORD *)(BugCheckParameter2 + 96) = v30;
    *(_OWORD *)(BugCheckParameter2 + 112) = v32;
    sub_14078F198(BugCheckParameter2, v20, a2, *(_DWORD *)(a2 + 72) == 0, a4);
    if ( !*(_DWORD *)(a2 + 72) )
      sub_140796B04((PVOID)BugCheckParameter2);
    return 0LL;
  }
  if ( *(_DWORD *)(a2 + 72) )
  {
    v10 = 0;
    v11 = 8LL;
    while ( *(_DWORD *)(32 * (v10 + 4LL) + BugCheckParameter2) )
    {
      v10 += v9;
      if ( v10 >= 8 )
        return 3221225626LL;
    }
    v12 = (char *)(BugCheckParameter2 + 132);
    v13 = 32 * (v10 + 4LL);
    v14 = -1LL;
    *(_OWORD *)(v13 + BugCheckParameter2) = *(_OWORD *)(a2 + 72);
    v29 = 0LL;
    v15 = 0;
    v16 = 0;
    v17 = 0LL;
    *(_OWORD *)(v13 + BugCheckParameter2 + 16) = *(_OWORD *)(a2 + 88);
    *((_QWORD *)&v31 + 1) = -1LL;
    do
    {
      if ( *((_DWORD *)v12 - 1) )
      {
        v19 = v16;
        LODWORD(v29) = v9;
        if ( v16 <= (unsigned __int8)*v12 )
          v19 = *v12;
        v14 &= *(_QWORD *)(v12 + 20);
        v17 |= *(_QWORD *)(v12 + 12);
        v16 = v19;
        v15 |= *((_DWORD *)v12 + 1);
        *((_QWORD *)&v31 + 1) = v14;
      }
      v12 += 32;
      v11 -= v9;
    }
    while ( v11 );
    BYTE4(v29) = v16;
    DWORD2(v29) = v15;
    *(_QWORD *)&v31 = v17;
    *a5 = (_BYTE)v9 << v10;
    *(_OWORD *)(BugCheckParameter2 + 96) = v29;
    *(_OWORD *)(BugCheckParameter2 + 112) = v31;
    sub_14078F198(BugCheckParameter2, v10, a2, *(_DWORD *)(a2 + 72) == 0, a4);
    sub_140796BF4(BugCheckParameter2);
    return 0LL;
  }
  return 3221226021LL;
}
