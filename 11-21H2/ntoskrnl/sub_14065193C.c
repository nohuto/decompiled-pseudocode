/*
 * XREFs of sub_14065193C @ 0x14065193C
 * Callers:
 *     sub_140651304 @ 0x140651304 (sub_140651304.c)
 *     sub_140651C24 @ 0x140651C24 (sub_140651C24.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140651394 @ 0x140651394 (sub_140651394.c)
 *     sub_140651710 @ 0x140651710 (sub_140651710.c)
 *     sub_140651D0C @ 0x140651D0C (sub_140651D0C.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_140930250 @ 0x140930250 (sub_140930250.c)
 */

__int64 __fastcall sub_14065193C(__int64 *a1, _QWORD *a2)
{
  unsigned __int8 *v2; // r13
  unsigned int v3; // r12d
  unsigned int v4; // r15d
  const __m128i *v5; // rbp
  unsigned int v6; // edi
  __int64 v7; // rax
  _DWORD *v8; // rbx
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // r14
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // eax
  char v15; // al
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned __int8 v21; // cf
  char v22; // al
  unsigned int v23; // eax
  unsigned int v24; // r14d
  _DWORD *v25; // rax
  _DWORD *v26; // rsi
  int v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  char v32; // [rsp+A0h] [rbp+18h]
  unsigned int v33; // [rsp+A8h] [rbp+20h]
  unsigned int v34; // [rsp+A8h] [rbp+20h]

  v2 = 0LL;
  v32 = 0;
  v3 = 0;
  v28 = 0;
  v4 = 0;
  v33 = 0;
  v5 = *(const __m128i **)(*a1 + 264);
  v6 = 0;
  *a2 = 0LL;
  v7 = sub_140930250(0x270uLL);
  v8 = (_DWORD *)v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  memset((void *)(v7 + 4), 0, 0x26CuLL);
  *v8 = 0;
  v8[2] = v5[27].m128i_i32[2];
  v8[3] = sub_140651710(v5);
  if ( v5[31].m128i_i16[7] != -21931 )
    goto LABEL_27;
  v9 = &v5[28].m128i_u8[2];
  while ( 2 )
  {
    v10 = v9;
    v11 = v33;
    v29 = 4LL;
    v12 = 4LL;
    do
    {
      v13 = 18LL * v4;
      if ( *v10 == 5 || *v10 == 15 )
      {
        if ( v2 )
        {
          v15 = 1;
          v32 = 1;
          goto LABEL_19;
        }
        v2 = v10 - 4;
        v14 = v3;
      }
      else
      {
        v14 = v11;
      }
      v34 = v14;
      if ( (unsigned __int8)sub_140651D0C(v10 - 4, v14, *(_QWORD *)(*a1 + 248)) )
      {
        v8[36 * v4 + 12] = 0;
        v16 = (v34 + (unsigned __int64)*((unsigned int *)v10 + 1)) << *(_DWORD *)(*a1 + 240);
        *(_QWORD *)&v8[36 * v4 + 14] = v16;
        v17 = *((unsigned int *)v10 + 2);
        v18 = *(_DWORD *)(*a1 + 240);
        v8[36 * v4 + 18] = -1;
        *(_QWORD *)&v8[36 * v4 + 16] = v17 << v18;
        LOBYTE(v8[36 * v4 + 20]) = *v10;
        BYTE1(v8[36 * v4 + 20]) = *(v10 - 4) == 0x80;
        v19 = *v10;
        if ( (unsigned __int8)v19 > 0xFu || (v20 = 32801, v21 = _bittest(&v20, v19), v22 = 0, !v21) )
          v22 = 1;
        BYTE2(v8[36 * v4++ + 20]) = v22;
        v8[2 * v13 + 21] = *((_DWORD *)v10 + 1);
        v8[2 * v13 + 22] = v8[2];
        v15 = v32;
        v8[2 * v13 + 23] = 0;
        *(_QWORD *)&v8[2 * v13 + 24] = v16;
      }
      else
      {
        v15 = 1;
        v32 = 1;
      }
      v12 = v29;
LABEL_19:
      v10 += 16;
      v29 = --v12;
    }
    while ( v12 );
    v6 = v28;
    if ( v15 || !v2 )
    {
LABEL_27:
      v8[1] = (v4 + 3) & 0xFFFFFFFC;
      *a2 = v8;
    }
    else
    {
      v23 = *((_DWORD *)v2 + 2);
      v2 = 0LL;
      v24 = v23 + v3;
      if ( !v3 )
        v3 = v23;
      v33 = v24;
      v25 = (_DWORD *)sub_140930250(144 * v4 + 624);
      v26 = v25;
      if ( v25 )
      {
        memmove(v25, v8, (int)(144 * v4 + 48));
        memset(&v26[36 * v4 + 12], 0, 0x240uLL);
        sub_1406D9550(v8);
        v8 = v26;
        v28 = sub_140651394(*a1, 1LL, v24);
        v6 = v28;
        if ( v28 >= 0 )
        {
          v9 = &v5[28].m128i_u8[2];
          if ( v5[31].m128i_i16[7] != -21931 )
            goto LABEL_27;
          continue;
        }
LABEL_30:
        sub_1406D9550(v8);
      }
      else
      {
        v6 = -1073741670;
        if ( v8 )
          goto LABEL_30;
      }
    }
    return v6;
  }
}
