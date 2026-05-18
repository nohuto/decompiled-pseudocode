/*
 * XREFs of sub_180043D84 @ 0x180043D84
 * Callers:
 *     sub_1800406D4 @ 0x1800406D4 (sub_1800406D4.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall sub_180043D84(__m128 *a1, __m128 *a2, double a3)
{
  __m128 v3; // xmm4
  __m128 v4; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm5
  __m128 v8; // xmm7
  __m128 v9; // xmm3
  __m128 v10; // xmm4

  v3 = _mm_mul_ps((__m128)xmmword_1801284C0, *(__m128 *)&a3);
  v4 = _mm_cmple_ps(_mm_and_ps(v3, (__m128)xmmword_1801283B0), (__m128)xmmword_1801284A0);
  v5 = _mm_or_ps(_mm_and_ps((__m128)xmmword_1801283D0, v3), (__m128)xmmword_1801284A0);
  v6 = _mm_sub_ps(
         *(__m128 *)&a3,
         _mm_mul_ps(
           _mm_xor_ps(_mm_and_ps(_mm_sub_ps(_mm_add_ps(v5, v3), v5), v4), _mm_andnot_ps(v4, v3)),
           (__m128)xmmword_180128340));
  v7 = _mm_and_ps((__m128)xmmword_1801283D0, v6);
  v8 = _mm_cmple_ps(_mm_andnot_ps(v7, v6), (__m128)xmmword_180128520);
  v9 = _mm_or_ps(_mm_andnot_ps(v8, _mm_sub_ps(_mm_or_ps((__m128)xmmword_180128350, v7), v6)), _mm_and_ps(v8, v6));
  v10 = _mm_mul_ps(v9, v9);
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
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1801283F0, (__m128)xmmword_1801283F0, 0), v10),
                            _mm_shuffle_ps((__m128)xmmword_1801283C0, (__m128)xmmword_1801283C0, 255)),
                          v10),
                        _mm_shuffle_ps((__m128)xmmword_1801283C0, (__m128)xmmword_1801283C0, 170)),
                      v10),
                    _mm_shuffle_ps((__m128)xmmword_1801283C0, (__m128)xmmword_1801283C0, 85)),
                  v10),
                _mm_shuffle_ps((__m128)xmmword_1801283C0, (__m128)xmmword_1801283C0, 0)),
              v10),
            (__m128)xmmword_1801284E0),
          v9);
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
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_180128310, (__m128)xmmword_180128310, 0), v10),
                            _mm_shuffle_ps((__m128)xmmword_1801284D0, (__m128)xmmword_1801284D0, 255)),
                          v10),
                        _mm_shuffle_ps((__m128)xmmword_1801284D0, (__m128)xmmword_1801284D0, 170)),
                      v10),
                    _mm_shuffle_ps((__m128)xmmword_1801284D0, (__m128)xmmword_1801284D0, 85)),
                  v10),
                _mm_shuffle_ps((__m128)xmmword_1801284D0, (__m128)xmmword_1801284D0, 0)),
              v10),
            (__m128)xmmword_1801284E0),
          _mm_or_ps(_mm_andnot_ps(v8, (__m128)xmmword_180128480), _mm_and_ps((__m128)xmmword_1801284E0, v8)));
}
