/*
 * XREFs of sub_18001D23C @ 0x18001D23C
 * Callers:
 *     sub_180013140 @ 0x180013140 (sub_180013140.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall sub_18001D23C(__m128 *a1, unsigned int *a2, double a3)
{
  __m128 v3; // xmm5

  v3 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 0);
  a1[3] = _mm_add_ps(
            _mm_mul_ps(
              _mm_movelh_ps(
                _mm_unpacklo_ps((__m128)*a2, (__m128)a2[9]),
                _mm_unpacklo_ps((__m128)a2[18], (__m128)0x3F800000u)),
              v3),
            a1[3]);
  a1[4] = _mm_add_ps(
            _mm_mul_ps(
              _mm_movelh_ps(
                _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[10]),
                _mm_unpacklo_ps((__m128)a2[19], (__m128)0x3F800000u)),
              v3),
            a1[4]);
  a1[5] = _mm_add_ps(
            _mm_mul_ps(
              _mm_movelh_ps(
                _mm_unpacklo_ps((__m128)a2[2], (__m128)a2[11]),
                _mm_unpacklo_ps((__m128)a2[20], (__m128)0x3F800000u)),
              v3),
            a1[5]);
  a1[6] = _mm_add_ps(
            _mm_mul_ps(
              _mm_movelh_ps(
                _mm_unpacklo_ps((__m128)a2[3], (__m128)a2[12]),
                _mm_unpacklo_ps((__m128)a2[21], (__m128)0x3F800000u)),
              v3),
            a1[6]);
  a1[7] = _mm_add_ps(
            _mm_mul_ps(
              _mm_movelh_ps(
                _mm_unpacklo_ps((__m128)a2[4], (__m128)a2[13]),
                _mm_unpacklo_ps((__m128)a2[22], (__m128)0x3F800000u)),
              v3),
            a1[7]);
  a1[8] = _mm_add_ps(
            _mm_mul_ps(
              _mm_movelh_ps(
                _mm_unpacklo_ps((__m128)a2[5], (__m128)a2[14]),
                _mm_unpacklo_ps((__m128)a2[23], (__m128)0x3F800000u)),
              v3),
            a1[8]);
  a1[9] = _mm_add_ps(
            _mm_mul_ps(
              _mm_movelh_ps(
                _mm_unpacklo_ps((__m128)a2[6], (__m128)a2[15]),
                _mm_unpacklo_ps((__m128)a2[24], (__m128)0x3F800000u)),
              v3),
            a1[9]);
  a1[10] = _mm_add_ps(
             _mm_mul_ps(
               _mm_movelh_ps(
                 _mm_unpacklo_ps((__m128)a2[7], (__m128)a2[16]),
                 _mm_unpacklo_ps((__m128)a2[25], (__m128)0x3F800000u)),
               v3),
             a1[10]);
  a1[11] = _mm_add_ps(
             _mm_mul_ps(
               _mm_movelh_ps(
                 _mm_unpacklo_ps((__m128)a2[8], (__m128)a2[17]),
                 _mm_unpacklo_ps((__m128)a2[26], (__m128)0x3F800000u)),
               v3),
             a1[11]);
}
