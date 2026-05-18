/*
 * XREFs of sub_18003ED28 @ 0x18003ED28
 * Callers:
 *     sub_18003ECC0 @ 0x18003ECC0 (sub_18003ECC0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall sub_18003ED28(__m128 *a1, __m128 *a2, double a3)
{
  __m128 v3; // xmm4
  __m128 v4; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm7
  __m128 v8; // xmm5
  __m128 v9; // xmm7
  __m128 v10; // xmm3
  __m128 v11; // xmm4

  v3 = _mm_mul_ps(*(__m128 *)&a3, (__m128)xmmword_180106520);
  v4 = _mm_cmple_ps(_mm_and_ps(v3, (__m128)xmmword_180106410), (__m128)xmmword_180106500);
  v5 = _mm_or_ps(_mm_and_ps((__m128)xmmword_180106430, v3), (__m128)xmmword_180106500);
  v6 = _mm_sub_ps(
         *(__m128 *)&a3,
         _mm_mul_ps(
           _mm_xor_ps(_mm_and_ps(_mm_sub_ps(_mm_add_ps(v5, v3), v5), v4), _mm_andnot_ps(v4, v3)),
           (__m128)xmmword_1801063A0));
  v7 = _mm_and_ps((__m128)xmmword_180106430, v6);
  v8 = _mm_sub_ps(_mm_or_ps(v7, (__m128)xmmword_1801063B0), v6);
  v9 = _mm_cmple_ps(_mm_andnot_ps(v7, v6), (__m128)xmmword_180106580);
  v10 = _mm_or_ps(_mm_andnot_ps(v9, v8), _mm_and_ps(v9, v6));
  v11 = _mm_mul_ps(v10, v10);
  *a1 = _mm_mul_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_180106450, (__m128)xmmword_180106450, 0), v11),
                            _mm_shuffle_ps((__m128)xmmword_180106420, (__m128)xmmword_180106420, 255)),
                          v11),
                        _mm_shuffle_ps((__m128)xmmword_180106420, (__m128)xmmword_180106420, 170)),
                      v11),
                    _mm_shuffle_ps((__m128)xmmword_180106420, (__m128)xmmword_180106420, 85)),
                  v11),
                _mm_shuffle_ps((__m128)xmmword_180106420, (__m128)xmmword_180106420, 0)),
              v11),
            (__m128)xmmword_180106540),
          v10);
  *a2 = _mm_mul_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_180106370, (__m128)xmmword_180106370, 0), v11),
                            _mm_shuffle_ps((__m128)xmmword_180106530, (__m128)xmmword_180106530, 255)),
                          v11),
                        _mm_shuffle_ps((__m128)xmmword_180106530, (__m128)xmmword_180106530, 170)),
                      v11),
                    _mm_shuffle_ps((__m128)xmmword_180106530, (__m128)xmmword_180106530, 85)),
                  v11),
                _mm_shuffle_ps((__m128)xmmword_180106530, (__m128)xmmword_180106530, 0)),
              v11),
            (__m128)xmmword_180106540),
          _mm_or_ps(_mm_andnot_ps(v9, (__m128)xmmword_1801064E0), _mm_and_ps((__m128)xmmword_180106540, v9)));
}
