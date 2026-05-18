/*
 * XREFs of sub_180030E58 @ 0x180030E58
 * Callers:
 *     sub_18003678C @ 0x18003678C (sub_18003678C.c)
 * Callees:
 *     sub_18002E4C4 @ 0x18002E4C4 (sub_18002E4C4.c)
 *     sub_180030ACC @ 0x180030ACC (sub_180030ACC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180030E58(__int64 *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // xmm0_8

  sub_180030ACC(a1);
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v6 = *a1;
  v7 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != v7 )
  {
    sub_18002E4C4(a1, v6, v5);
    v5 += 64LL;
  }
  return a1;
}
