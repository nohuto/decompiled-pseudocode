/*
 * XREFs of sub_14099CD30 @ 0x14099CD30
 * Callers:
 *     sub_1409A5B64 @ 0x1409A5B64 (sub_1409A5B64.c)
 * Callees:
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 *     sub_1407FE700 @ 0x1407FE700 (sub_1407FE700.c)
 */

__int64 __fastcall sub_14099CD30(unsigned __int8 a1, int a2, unsigned int a3)
{
  int v6; // [rsp+20h] [rbp-30h] BYREF
  char v7; // [rsp+24h] [rbp-2Ch]
  __int16 v8; // [rsp+25h] [rbp-2Bh]
  char v9; // [rsp+27h] [rbp-29h]
  __int64 v10; // [rsp+28h] [rbp-28h]
  int *v11; // [rsp+30h] [rbp-20h]
  __int64 v12; // [rsp+38h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  int v14; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF
  int v16; // [rsp+88h] [rbp+38h] BYREF
  int v17; // [rsp+8Ch] [rbp+3Ch]

  v15 = a3;
  v14 = 0;
  *(_WORD *)((char *)&v16 + 1) = 0;
  HIBYTE(v16) = 0;
  sub_1407FE700(1, &v14);
  v11 = &v16;
  v17 = a2;
  v16 = a1;
  v8 = 0;
  v9 = 0;
  v10 = 8LL;
  v12 = 0LL;
  v6 = 6;
  v7 = 0;
  v13 = 0LL;
  sub_1407F2AD0(5, (__int64)&v6, 1, &v15);
  return sub_1407FE700(0, &v14);
}
