/*
 * XREFs of sub_140416678 @ 0x140416678
 * Callers:
 *     sub_140416650 @ 0x140416650 (sub_140416650.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall sub_140416678(__int64 a1, unsigned int a2, __m128i *a3)
{
  const __m128i *v3; // rax
  __m128i v4; // xmm11
  __m128i v5; // xmm1
  __m128i v6; // xmm3
  __m128i v7; // xmm4
  __m128i v8; // xmm5
  __m128i v9; // xmm6
  __m128i v10; // xmm7
  __m128i v11; // xmm8
  __m128i v12; // xmm10
  __m128i v13; // xmm9
  __m128i si128; // xmm12
  const __m128i *result; // rax
  __m128i v16; // xmm10
  int v17; // edx
  __m128i v18; // xmm2
  __m128i v19; // xmm0
  __m128i v20; // xmm1

  v3 = *(const __m128i **)(a1 + 16);
  v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0);
  v5 = _mm_cmpeq_epi32(v4, (__m128i)0LL);
  v6 = _mm_and_si128(_mm_loadu_si128(v3), v5);
  v7 = _mm_and_si128(_mm_loadu_si128(v3 + 1), v5);
  v8 = _mm_and_si128(_mm_loadu_si128(v3 + 2), v5);
  v9 = _mm_and_si128(_mm_loadu_si128(v3 + 3), v5);
  v10 = _mm_and_si128(_mm_loadu_si128(v3 + 4), v5);
  v11 = _mm_and_si128(_mm_loadu_si128(v3 + 5), v5);
  v12 = _mm_loadu_si128(v3 + 7);
  v13 = _mm_and_si128(_mm_loadu_si128(v3 + 6), v5);
  si128 = _mm_load_si128((const __m128i *)&xmmword_140027ED0);
  result = v3 + 8;
  v16 = _mm_and_si128(v12, v5);
  v17 = *(_DWORD *)(a1 + 8) - 1;
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    do
    {
      v18 = _mm_cmpeq_epi32(v4, si128);
      si128 = _mm_add_epi32(si128, (__m128i)xmmword_140027ED0);
      v6 = _mm_or_si128(v6, _mm_and_si128(_mm_loadu_si128(result), v18));
      v7 = _mm_or_si128(v7, _mm_and_si128(_mm_loadu_si128(result + 1), v18));
      v8 = _mm_or_si128(v8, _mm_and_si128(_mm_loadu_si128(result + 2), v18));
      v9 = _mm_or_si128(v9, _mm_and_si128(_mm_loadu_si128(result + 3), v18));
      v10 = _mm_or_si128(v10, _mm_and_si128(_mm_loadu_si128(result + 4), v18));
      v11 = _mm_or_si128(v11, _mm_and_si128(_mm_loadu_si128(result + 5), v18));
      v19 = _mm_loadu_si128(result + 7);
      v20 = _mm_and_si128(_mm_loadu_si128(result + 6), v18);
      result += 8;
      v13 = _mm_or_si128(v13, v20);
      v16 = _mm_or_si128(v16, _mm_and_si128(v19, v18));
      --v17;
    }
    while ( v17 );
  }
  a3[3] = v9;
  a3[4] = v10;
  a3[5] = v11;
  a3[6] = v13;
  a3[7] = v16;
  *a3 = v6;
  a3[1] = v7;
  a3[2] = v8;
  return result;
}
