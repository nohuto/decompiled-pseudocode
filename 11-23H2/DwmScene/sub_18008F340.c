/*
 * XREFs of sub_18008F340 @ 0x18008F340
 * Callers:
 *     sub_18008F230 @ 0x18008F230 (sub_18008F230.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18008F51C @ 0x18008F51C (sub_18008F51C.c)
 */

__int64 __fastcall sub_18008F340(__int128 **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  _OWORD *v11; // r10
  __int128 *v12; // rcx
  _OWORD *v13; // rdx
  __int128 *v14; // r8
  __int128 v15; // xmm0

  v2 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v5 = (char *)a1[1] - (char *)*a1;
  v6 = a1[2] - *a1;
  v7 = v5 >> 4;
  v8 = v6 >> 1;
  if ( v6 <= 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  v9 = sub_180010B48(v2);
  v10 = sub_18001090C(v9);
  sub_18008F51C(v10 + 16 * v7, a2 - v7);
  v12 = *a1;
  v13 = v11;
  v14 = a1[1];
  while ( v12 != v14 )
  {
    v15 = *v12++;
    *v13++ = v15;
  }
  return sub_1800912C0(a1, v11, a2, v2);
}
