/*
 * XREFs of sub_180030DE4 @ 0x180030DE4
 * Callers:
 *     sub_180036AD4 @ 0x180036AD4 (sub_180036AD4.c)
 * Callees:
 *     sub_18002E3D0 @ 0x18002E3D0 (sub_18002E3D0.c)
 *     sub_180030A8C @ 0x180030A8C (sub_180030A8C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180030DE4(__int64 *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // xmm0_8

  sub_180030A8C(a1);
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v6 = *a1;
  v7 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != v7 )
  {
    sub_18002E3D0(a1, v6, v5);
    v5 += 40LL;
  }
  return a1;
}
