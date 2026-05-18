/*
 * XREFs of sub_1800414A0 @ 0x1800414A0
 * Callers:
 *     sub_180012CC0 @ 0x180012CC0 (sub_180012CC0.c)
 *     sub_180015920 @ 0x180015920 (sub_180015920.c)
 *     sub_180040BA4 @ 0x180040BA4 (sub_180040BA4.c)
 *     sub_180040FB8 @ 0x180040FB8 (sub_180040FB8.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     sub_180041688 @ 0x180041688 (sub_180041688.c)
 *     sub_180042D28 @ 0x180042D28 (sub_180042D28.c)
 *     sub_1800430F0 @ 0x1800430F0 (sub_1800430F0.c)
 *     sub_180043184 @ 0x180043184 (sub_180043184.c)
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 *     sub_180066258 @ 0x180066258 (sub_180066258.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_18009DA30 @ 0x18009DA30 (sub_18009DA30.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180018EB0 @ 0x180018EB0 (sub_180018EB0.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     sub_18004171C @ 0x18004171C (sub_18004171C.c)
 *     sub_180043510 @ 0x180043510 (sub_180043510.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_1800414A0(__m128 *a1, _OWORD *a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rcx
  __m128 *v9; // r14
  __m128 *v10; // rax
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm2
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  __int128 v18; // [rsp+28h] [rbp-79h] BYREF
  __m128 v19[4]; // [rsp+38h] [rbp-69h] BYREF
  char v20[64]; // [rsp+78h] [rbp-29h] BYREF
  __m128 v21[4]; // [rsp+B8h] [rbp+17h] BYREF

  sub_180043668(a1);
  v4 = sub_18004171C(a1);
  if ( v4 > a1[22].m128_u64[1] )
  {
    sub_180043668(a1);
    v18 = 0LL;
    v5 = a1[4].m128_i64[0];
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      while ( v6 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
        if ( v7 == v6 )
        {
          v8 = a1[3].m128_i64[1];
          v18 = *(__int128 *)((char *)&a1[3] + 8);
          goto LABEL_7;
        }
      }
    }
    v8 = v18;
LABEL_7:
    if ( v8 )
    {
      v9 = (__m128 *)sub_1800414A0(v8, v20);
      sub_180043668(a1);
      if ( a1[22].m128_u64[0] != a1[13].m128_u64[0] )
        sub_180043510(a1);
      v19[0] = a1[14];
      v19[1] = a1[15];
      v19[2] = a1[16];
      v19[3] = a1[17];
      v10 = sub_180018EB0(v21, v19, v9);
      v11 = v10[1];
      v12 = v10[2];
      v13 = v10[3];
      a1[18] = *v10;
      a1[19] = v11;
      a1[20] = v12;
      a1[21] = v13;
    }
    else
    {
      sub_180043668(a1);
      if ( a1[22].m128_u64[0] != a1[13].m128_u64[0] )
        sub_180043510(a1);
      v14 = a1[15];
      v15 = a1[16];
      v16 = a1[17];
      a1[18] = a1[14];
      a1[19] = v14;
      a1[20] = v15;
      a1[21] = v16;
    }
    a1[22].m128_u64[1] = v4;
    sub_180010910((__int64)&v18);
  }
  *a2 = a1[18];
  a2[1] = a1[19];
  a2[2] = a1[20];
  a2[3] = a1[21];
  return a2;
}
