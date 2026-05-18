/*
 * XREFs of sub_180022920 @ 0x180022920
 * Callers:
 *     sub_180022AD4 @ 0x180022AD4 (sub_180022AD4.c)
 *     sub_180022E18 @ 0x180022E18 (sub_180022E18.c)
 *     sub_180022EC0 @ 0x180022EC0 (sub_180022EC0.c)
 *     sub_180025B00 @ 0x180025B00 (sub_180025B00.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180022920(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r11
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  unsigned int i; // ebp
  char v11; // cl
  unsigned __int8 *v12; // rsi
  unsigned int v13; // r8d
  unsigned int v14; // edx
  __int64 v15; // r9
  unsigned __int64 v16; // r11
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r9
  unsigned __int8 v21; // cl
  __int64 v22; // r9
  __int64 v23; // r9

  v5 = a2 / 3;
  v6 = a2 % 3;
  if ( a2 % 3 )
    v7 = (v6 != 1) + 3LL;
  else
    v7 = 1LL;
  v8 = v7 + 4 * v5;
  if ( v8 <= 0x81 )
  {
    v9 = 0LL;
    for ( i = 0; i < v5; LOBYTE(v8) = i )
    {
      v11 = *a1;
      ++i;
      v8 = *a1;
      v12 = a1 + 1;
      v13 = *v12++;
      v14 = *v12;
      a1 = v12 + 1;
      *(_BYTE *)(v9 + a3) = aAbcdefghijklmn[v8 >> 2];
      v15 = v9 + 1;
      *(_BYTE *)(v15 + a3) = aAbcdefghijklmn[((unsigned __int64)v13 >> 4) | (unsigned __int8)(16 * (v11 & 3))];
      *(_BYTE *)(++v15 + a3) = aAbcdefghijklmn[((unsigned __int64)v14 >> 6) | (unsigned __int8)(4 * (v13 & 0xF))];
      *(_BYTE *)(++v15 + a3) = aAbcdefghijklmn[v14 & 0x3F];
      v9 = v15 + 1;
    }
    v16 = v6 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
      {
LABEL_12:
        *(_BYTE *)(v9 + a3) = 0;
        return v8;
      }
      v17 = a1[1];
      v18 = (unsigned __int8)(16 * (*a1 & 3));
      *(_BYTE *)(v9 + a3) = aAbcdefghijklmn[(unsigned __int64)*a1 >> 2];
      v19 = v9 + 1;
      *(_BYTE *)(v19 + a3) = aAbcdefghijklmn[((unsigned __int64)v17 >> 4) | v18];
      v20 = v19 + 1;
      LOBYTE(v8) = aAbcdefghijklmn[(unsigned __int8)(4 * (v17 & 0xF))];
      *(_BYTE *)(v20 + a3) = v8;
    }
    else
    {
      v21 = 16 * (*a1 & 3);
      *(_BYTE *)(v9 + a3) = aAbcdefghijklmn[(unsigned __int64)*a1 >> 2];
      v22 = v9 + 1;
      LOBYTE(v8) = aAbcdefghijklmn[v21];
      *(_BYTE *)(v22 + a3) = v8;
      v20 = v22 + 1;
      *(_BYTE *)(v20 + a3) = 61;
    }
    v23 = v20 + 1;
    *(_BYTE *)(v23 + a3) = 61;
    v9 = v23 + 1;
    goto LABEL_12;
  }
  return v8;
}
