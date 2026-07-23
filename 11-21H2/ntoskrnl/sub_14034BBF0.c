/*
 * XREFs of sub_14034BBF0 @ 0x14034BBF0
 * Callers:
 *     sub_140232528 @ 0x140232528 (sub_140232528.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_14037193C @ 0x14037193C (sub_14037193C.c)
 * Callees:
 *     sub_140239D20 @ 0x140239D20 (sub_140239D20.c)
 *     sub_1402406C8 @ 0x1402406C8 (sub_1402406C8.c)
 *     sub_14034BFE0 @ 0x14034BFE0 (sub_14034BFE0.c)
 *     sub_14034F7F0 @ 0x14034F7F0 (sub_14034F7F0.c)
 *     sub_14036E550 @ 0x14036E550 (sub_14036E550.c)
 *     sub_1403E0320 @ 0x1403E0320 (sub_1403E0320.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

char *__fastcall sub_14034BBF0(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  int v7; // r13d
  _DWORD *v9; // rsi
  __int64 v10; // r9
  unsigned int v11; // edi
  unsigned __int64 *v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  _QWORD *v15; // r8
  int v16; // edx
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  int v20; // ecx
  unsigned __int64 v21; // r10
  int v22; // ecx
  int v23; // ecx
  unsigned __int64 v24; // r10
  unsigned int v25; // r11d
  char *v26; // rdi
  __int64 v27; // rcx
  char *v28; // rsi
  int v29; // eax
  __int64 v31; // r8
  int v32; // r9d
  __int16 v33; // cx
  int v34; // r9d
  __int16 v35; // ax
  unsigned __int64 v36; // rsi
  unsigned int v37; // [rsp+70h] [rbp+8h]

  v7 = a3;
  if ( a2 != a3 )
    v7 = a3 + 2;
  v9 = a6;
  v10 = a5;
  v37 = (*(_DWORD *)(a1 + 176) & 1) + ((unsigned int)(v7 + 15) >> 4);
  v11 = (v37 + 1) << 16;
  if ( !*a6 )
  {
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      sub_14036E550(a1, *(unsigned int *)(a1 + 8), a5);
      v10 = a5;
    }
  }
  v12 = (unsigned __int64 *)(a1 + 16);
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 24);
    v14 = *v12;
    if ( (v13 & 1) == 0 )
      goto LABEL_11;
    if ( v14 )
    {
      v14 ^= (unsigned __int64)v12;
LABEL_11:
      v15 = 0LL;
      v16 = v13 & 1;
      if ( !v14 )
        goto LABEL_17;
      while ( 1 )
      {
        v17 = *(_DWORD *)(v14 - 8) ^ qword_140C5A5C0 ^ (v14 - 8);
        if ( v11 < v17 )
        {
          v18 = *(_QWORD *)v14;
          v15 = (_QWORD *)v14;
          if ( v16 && v18 )
          {
            v14 ^= v18;
            goto LABEL_16;
          }
        }
        else
        {
          if ( v11 <= v17 )
            goto LABEL_18;
          v18 = *(_QWORD *)(v14 + 8);
          if ( v16 && v18 )
          {
            v14 ^= v18;
            goto LABEL_16;
          }
        }
        v14 = v18;
LABEL_16:
        if ( !v14 )
          goto LABEL_17;
      }
    }
    v15 = 0LL;
LABEL_17:
    v14 = (unsigned __int64)v15;
LABEL_18:
    if ( v14 )
      break;
    if ( (a4 & 1) == 0 )
      sub_14034F7F0(*(unsigned int *)(a1 + 8), v10);
    *v9 = 0;
    v36 = sub_140239D20(a1, v7);
    if ( !v36 )
      return 0LL;
    *a6 = 1;
    if ( (a4 & 1) == 0 )
      sub_14036E550(a1, *(unsigned int *)(a1 + 8), a5);
    sub_1402406C8(a1, v36);
    v10 = a5;
    v9 = a6;
  }
  v19 = v14 - 8;
  v20 = HIDWORD(qword_140C5A5C0) ^ HIDWORD(*(_QWORD *)(v14 - 8)) ^ ((v14 - 8) >> 32);
  v21 = v14 - 8;
  if ( (v20 & 0xFF0000) != 0 )
  {
    v23 = (unsigned __int8)(qword_140C5A5C0 ^ v19 ^ *(_BYTE *)v14);
  }
  else
  {
    if ( (_WORD)v20 )
    {
      v21 -= 16LL * (unsigned __int16)((qword_140C5A5C0 ^ *(_QWORD *)(v14 - 8) ^ v19) >> 32);
      v22 = HIDWORD(qword_140C5A5C0) ^ HIDWORD(*(_QWORD *)v21) ^ HIDWORD(v21);
      if ( (v22 & 0xFF0000) != 0 )
      {
        v23 = (unsigned __int8)(qword_140C5A5C0 ^ v21 ^ *(_BYTE *)(v21 + 8));
        goto LABEL_24;
      }
      if ( (_WORD)v22 )
      {
        v21 -= 16LL * (unsigned __int16)((qword_140C5A5C0 ^ *(_QWORD *)v21 ^ v21) >> 32);
        v23 = (unsigned __int8)(qword_140C5A5C0 ^ v21 ^ *(_BYTE *)(v21 + 8));
        goto LABEL_24;
      }
    }
    v23 = 0;
  }
LABEL_24:
  v24 = (v21 - (unsigned int)(v23 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v24 + 32) ^ *(_WORD *)(v24 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    sub_1405F1BBC(18, a1 ^ *(_DWORD *)(a1 + 128), v24, v14 - 8, 0LL, 0LL);
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v25 = v37;
    if ( ((v19 + 32) & 0xFFF) == 0 )
      v25 = v37 + 1;
  }
  else
  {
    v25 = v37 + 1;
  }
  if ( !(unsigned int)sub_14034BFE0(a1, v24, (int)v14 - 8, v25, a4, a5) )
    return 0LL;
  v26 = (char *)(v19 + 16);
  v27 = 16 * (WORD1(qword_140C5A5C0) ^ WORD1(v19) ^ *(unsigned __int16 *)(v19 + 2)) - 16;
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v28 = (char *)(v19 + 32);
    if ( ((unsigned __int16)v28 & 0xFFF) == 0 )
    {
      v26 = v28;
      v27 = (unsigned int)(v27 - 16);
    }
  }
  v29 = *(_DWORD *)v14;
  if ( a2 < (unsigned int)v27 )
  {
    v31 = (unsigned int)v27;
    *(_DWORD *)v14 = v29 | 0x100;
    v32 = v27;
    v26[v27 - 1] = 0;
    v33 = *(_WORD *)&v26[v27 - 2];
    v34 = v32 - a2;
    v35 = v33 ^ (v34 ^ v33) & 0x1FFF;
    if ( v34 == 1 )
      v35 = v33 | 0x8000;
    *(_WORD *)&v26[v31 - 2] = v35;
  }
  else
  {
    *(_DWORD *)v14 = v29 & 0xFFFFFEFF;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) == 0 )
      sub_14034F7F0(*(unsigned int *)(a1 + 8), a5);
    *a6 = 0;
    if ( ((a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
      sub_1403E0320(v26, a2);
    else
      memset(v26, 0, a2);
  }
  return v26;
}
