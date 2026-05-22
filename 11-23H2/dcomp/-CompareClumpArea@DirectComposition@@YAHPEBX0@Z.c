/*
 * XREFs of ?CompareClumpArea@DirectComposition@@YAHPEBX0@Z @ 0x18000DCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DirectComposition::CompareClumpArea(const void *a1, const void *a2)
{
  __m128i v2; // xmm1
  __int64 v3; // rcx
  unsigned __int64 v4; // xmm0_8
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned __int64 v7; // xmm0_8
  unsigned __int64 result; // rax
  signed __int64 v9; // r10

  v2 = *(__m128i *)(*(_QWORD *)a1 + 56LL);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v4 = _mm_srli_si128(v2, 8).m128i_u64[0];
  v5 = v4 - v3;
  v6 = HIDWORD(v4) - HIDWORD(v3);
  v7 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)a2 + 56LL), 8).m128i_u64[0];
  result = 0x7FFFFFFFLL;
  v9 = ((unsigned int)v7 - (unsigned int)*(_QWORD *)(*(_QWORD *)a2 + 56LL))
     * (unsigned __int64)(unsigned int)(HIDWORD(v7) - HIDWORD(*(_QWORD *)(*(_QWORD *)a2 + 56LL)))
     - v5 * (unsigned __int64)v6;
  if ( v9 < 0x7FFFFFFF )
  {
    result = ((unsigned int)v7 - (unsigned int)*(_QWORD *)(*(_QWORD *)a2 + 56LL))
           * (unsigned __int64)(unsigned int)(HIDWORD(v7) - HIDWORD(*(_QWORD *)(*(_QWORD *)a2 + 56LL)))
           - v5 * (unsigned __int64)v6;
    if ( v9 <= (__int64)0xFFFFFFFF80000000uLL )
      return 0xFFFFFFFF80000000uLL;
  }
  return result;
}
