/*
 * XREFs of sub_180042C3C @ 0x180042C3C
 * Callers:
 *     sub_180013030 @ 0x180013030 (sub_180013030.c)
 *     sub_180015C60 @ 0x180015C60 (sub_180015C60.c)
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     GsDriverEntry @ 0x18004247C (GsDriverEntry.c)
 * Callees:
 *     sub_180041B64 @ 0x180041B64 (sub_180041B64.c)
 *     sub_180042BA8 @ 0x180042BA8 (sub_180042BA8.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 */

char __fastcall sub_180042C3C(__int64 a1, unsigned int *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int128 v7; // xmm0
  char result; // al
  unsigned __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+28h] [rbp-38h]
  unsigned __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  int v12; // [rsp+38h] [rbp-28h]
  unsigned __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+48h] [rbp-18h]
  __int128 v15; // [rsp+50h] [rbp-10h] BYREF

  sub_1800436D4(a1);
  v11 = 0LL;
  v12 = 0;
  v9 = 0LL;
  v10 = 0;
  v15 = xmmword_1801BD980;
  if ( !sub_180041B64(a2, &v9, (__m128 *)&v15, (__int64)&v11) )
    return 0;
  v13 = v9;
  v14 = v10;
  v10 = v12;
  v9 = v11;
  sub_180042BA8(a1, (__int64)&v9, &v15, (__int64)&v13);
  v4 = *((_OWORD *)a2 + 1);
  v5 = *((_OWORD *)a2 + 2);
  v6 = *((_OWORD *)a2 + 3);
  v7 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 208);
  result = 1;
  *(_OWORD *)(a1 + 240) = v4;
  *(_OWORD *)(a1 + 224) = v7;
  *(_OWORD *)(a1 + 256) = v5;
  *(_OWORD *)(a1 + 272) = v6;
  return result;
}
