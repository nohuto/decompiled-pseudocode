/*
 * XREFs of sub_140A81A74 @ 0x140A81A74
 * Callers:
 *     sub_140A7FA0C @ 0x140A7FA0C (sub_140A7FA0C.c)
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140A81A74(__m128i *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // xmm0_8

  v3 = *a1;
  v4 = a1->m128i_i64[0];
  v5 = _mm_srli_si128(v3, 8).m128i_u64[0];
  if ( v4 >= v5 )
    return 0LL;
  if ( a2 > v4 )
    goto LABEL_5;
  if ( a3 >= v5 )
    return 1LL;
  if ( a2 >= v4 )
  {
LABEL_5:
    if ( a2 >= v5 )
      return a3 > v4 && a3 <= v5;
    return 1LL;
  }
  return a3 > v4 && a3 <= v5;
}
