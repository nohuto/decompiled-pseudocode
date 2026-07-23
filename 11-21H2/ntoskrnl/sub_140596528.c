/*
 * XREFs of sub_140596528 @ 0x140596528
 * Callers:
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140596528(char *a1, __int64 a2)
{
  __int64 v3; // rsi
  char v4; // di
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rbx
  char v7; // cl
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 *v12; // rcx
  __int64 v13; // r11
  __int64 v14; // rax
  char v15; // r11
  unsigned __int8 v16; // al
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx

  v3 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a2 + 174));
  if ( *((_QWORD *)a1 + 10) == *((_QWORD *)a1 + 12) )
    return 0LL;
  v4 = 3;
  if ( *(_QWORD *)(v3 + 16896) >= *((_QWORD *)a1 + 9) && ((unsigned __int8)a1[3] < 3u || (*a1 & 0x7F) != 0) )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 144);
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 32LL);
  if ( v5 <= v6 )
    return 0LL;
  v7 = *(_BYTE *)(a2 + 184);
  if ( (v7 & 7) == 0 )
  {
    if ( v7 >= 0 )
    {
      if ( (*(_DWORD *)(a2 - 540) & 0x40) != 0 )
        goto LABEL_17;
      goto LABEL_14;
    }
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(a2 + 184) & 7) == 1 && v7 < 0 )
  {
LABEL_8:
    if ( v5 <= *(_QWORD *)(a2 + 112) )
      return 0LL;
  }
LABEL_14:
  v9 = *(_QWORD *)(a2 + 112);
  if ( v5 <= v9 )
    v5 = 0LL;
  else
    v5 -= v9;
LABEL_17:
  v10 = (unsigned __int8)a1[1];
  if ( (_BYTE)v10 )
  {
    v11 = 0LL;
    if ( (unsigned int)v10 >= 8 )
      return 0LL;
    v12 = (__int64 *)(a2 + 40 + 8 * v10);
    v13 = 8 - (unsigned int)(unsigned __int8)a1[1];
    do
    {
      v14 = *v12++;
      v11 += v14;
      --v13;
    }
    while ( v13 );
    if ( !v11 )
      return 0LL;
  }
  else if ( *(_QWORD *)(a2 + 144) <= *(_QWORD *)(a2 + 112) )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 144) - *(_QWORD *)(a2 + 112);
  }
  v15 = *a1;
  v16 = *a1 & 0x7F;
  if ( v16 <= 1u )
  {
    if ( *(_BYTE *)(a2 + 186) != 2 )
      v4 = 1;
    v17 = v11 >> v4;
    v18 = *((_QWORD *)a1 + 13);
    if ( v18 >= v11 )
    {
      v19 = v11 * (100 * v11 / v18) / 0x64;
      if ( v17 < v19 )
        v17 = v19;
    }
    if ( v17 <= v5 )
      v5 = v17;
LABEL_43:
    v11 = v5;
    goto LABEL_44;
  }
  if ( v16 == 4 && *(_QWORD *)(v3 + 16896) < 0xE0uLL )
  {
    v20 = *(_QWORD *)(a2 + 144);
    if ( v20 <= v6 )
      return 0LL;
    v15 = *a1;
    v11 = v20 - v6;
  }
  else
  {
    if ( *((_QWORD *)a1 + 12) > *((_QWORD *)a1 + 10) )
      return 0LL;
    if ( *(_BYTE *)(a2 + 186) != 2 )
    {
      v21 = *((_QWORD *)a1 + 13);
      v22 = *((_QWORD *)a1 + 11);
      if ( v21 > v22 )
        v11 /= v21 / v22;
    }
    if ( v11 > v5 )
      goto LABEL_43;
  }
LABEL_44:
  result = *((_QWORD *)a1 + 10) - *((_QWORD *)a1 + 12);
  if ( v11 <= result )
    result = v11;
  ++*(_DWORD *)(*(_QWORD *)(v3 + 16600) + 4LL * (v15 & 0x7F) + 2540);
  return result;
}
