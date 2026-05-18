/*
 * XREFs of sub_18003DA14 @ 0x18003DA14
 * Callers:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180015090 @ 0x180015090 (sub_180015090.c)
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     GsDriverEntry @ 0x18003D48C (GsDriverEntry.c)
 * Callees:
 *     sub_18003CC60 @ 0x18003CC60 (sub_18003CC60.c)
 *     sub_18003D980 @ 0x18003D980 (sub_18003D980.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

char __fastcall sub_18003DA14(__int64 a1, __int32 *a2)
{
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int128 v6; // xmm0
  unsigned __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+28h] [rbp-38h]
  unsigned __int64 v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+38h] [rbp-28h]
  unsigned __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+48h] [rbp-18h]
  __int128 v14; // [rsp+50h] [rbp-10h] BYREF

  sub_18003E370();
  v10 = 0LL;
  v11 = 0;
  v8 = 0LL;
  v9 = 0;
  v14 = xmmword_18019BA00;
  if ( !sub_18003CC60(a2, &v8, &v14) )
    return 0;
  v12 = v8;
  v13 = v9;
  v9 = v11;
  v8 = v10;
  sub_18003D980((_DWORD *)a1, (__int64)&v8, &v14, (__int64)&v12);
  v4 = *((_OWORD *)a2 + 2);
  v5 = *((_OWORD *)a2 + 3);
  v6 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 240) = *((_OWORD *)a2 + 1);
  *(_OWORD *)(a1 + 224) = v6;
  *(_OWORD *)(a1 + 256) = v4;
  *(_OWORD *)(a1 + 272) = v5;
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 208);
  return 1;
}
