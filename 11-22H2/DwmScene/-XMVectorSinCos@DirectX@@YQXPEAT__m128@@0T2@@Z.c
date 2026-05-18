/*
 * XREFs of ?XMVectorSinCos@DirectX@@YQXPEAT__m128@@0T2@@Z @ 0x18003ECA8
 * Callers:
 *     ?XMQuaternionRotationNormal@DirectX@@YQ?AT__m128@@T2@M@Z @ 0x18003EC40 (-XMQuaternionRotationNormal@DirectX@@YQ-AT__m128@@T2@M@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectX::XMVectorSinCos(__m128 *this, union __m128 *a2, union __m128 *a3, union __m128 *a4)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm4
  __m128 v6; // xmm3
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  __m128 v9; // xmm7
  __m128 v10; // xmm5
  __m128 v11; // xmm7
  __m128 v12; // xmm3
  __m128 v13; // xmm4

  v5 = _mm_mul_ps(v4, DirectX::g_XMReciprocalTwoPi);
  v6 = _mm_cmple_ps(_mm_and_ps(v5, DirectX::g_XMAbsMask), DirectX::g_XMNoFraction);
  v7 = _mm_or_ps(_mm_and_ps(DirectX::g_XMNegativeZero, v5), DirectX::g_XMNoFraction);
  v8 = _mm_sub_ps(
         v4,
         _mm_mul_ps(
           _mm_xor_ps(_mm_and_ps(_mm_sub_ps(_mm_add_ps(v7, v5), v7), v6), _mm_andnot_ps(v6, v5)),
           DirectX::g_XMTwoPi));
  v9 = _mm_and_ps(DirectX::g_XMNegativeZero, v8);
  v10 = _mm_sub_ps(_mm_or_ps(v9, DirectX::g_XMPi), v8);
  v11 = _mm_cmple_ps(_mm_andnot_ps(v9, v8), DirectX::g_XMHalfPi);
  v12 = _mm_or_ps(_mm_andnot_ps(v11, v10), _mm_and_ps(v11, v8));
  v13 = _mm_mul_ps(v12, v12);
  *this = _mm_mul_ps(
            _mm_add_ps(
              _mm_mul_ps(
                _mm_add_ps(
                  _mm_mul_ps(
                    _mm_add_ps(
                      _mm_mul_ps(
                        _mm_add_ps(
                          _mm_mul_ps(
                            _mm_add_ps(
                              _mm_mul_ps(
                                _mm_shuffle_ps(DirectX::g_XMSinCoefficients1, DirectX::g_XMSinCoefficients1, 0),
                                v13),
                              _mm_shuffle_ps(DirectX::g_XMSinCoefficients0, DirectX::g_XMSinCoefficients0, 255)),
                            v13),
                          _mm_shuffle_ps(DirectX::g_XMSinCoefficients0, DirectX::g_XMSinCoefficients0, 170)),
                        v13),
                      _mm_shuffle_ps(DirectX::g_XMSinCoefficients0, DirectX::g_XMSinCoefficients0, 85)),
                    v13),
                  _mm_shuffle_ps(DirectX::g_XMSinCoefficients0, DirectX::g_XMSinCoefficients0, 0)),
                v13),
              DirectX::g_XMOne),
            v12);
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
                            _mm_mul_ps(
                              _mm_shuffle_ps(DirectX::g_XMCosCoefficients1, DirectX::g_XMCosCoefficients1, 0),
                              v13),
                            _mm_shuffle_ps(DirectX::g_XMCosCoefficients0, DirectX::g_XMCosCoefficients0, 255)),
                          v13),
                        _mm_shuffle_ps(DirectX::g_XMCosCoefficients0, DirectX::g_XMCosCoefficients0, 170)),
                      v13),
                    _mm_shuffle_ps(DirectX::g_XMCosCoefficients0, DirectX::g_XMCosCoefficients0, 85)),
                  v13),
                _mm_shuffle_ps(DirectX::g_XMCosCoefficients0, DirectX::g_XMCosCoefficients0, 0)),
              v13),
            DirectX::g_XMOne),
          _mm_or_ps(_mm_andnot_ps(v11, DirectX::g_XMNegativeOne), _mm_and_ps(DirectX::g_XMOne, v11)));
}
