/*
 * XREFs of ?Scale@SphericalPolynomial@Engine@Spectre@@QEAAXM@Z @ 0x1800A3A40
 * Callers:
 *     ?ConvertIrradianceToLambertianRadiance@SphericalHarmonics@Engine@Spectre@@QEAAXXZ @ 0x1800A3A18 (-ConvertIrradianceToLambertianRadiance@SphericalHarmonics@Engine@Spectre@@QEAAXXZ.c)
 *     ?SphericalHarmonicsFromPolynomial@SphericalHarmonics@Engine@Spectre@@SA?AV123@AEBVSphericalPolynomial@23@@Z @ 0x1800A3ABC (-SphericalHarmonicsFromPolynomial@SphericalHarmonics@Engine@Spectre@@SA-AV123@AEBVSphericalPolyn.c)
 *     ?SphericalPolynomialFromHarmonics@SphericalPolynomial@Engine@Spectre@@SA?AV123@AEBVSphericalHarmonics@23@@Z @ 0x1800A3D90 (-SphericalPolynomialFromHarmonics@SphericalPolynomial@Engine@Spectre@@SA-AV123@AEBVSphericalHarm.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall Spectre::Engine::SphericalPolynomial::Scale(__m128 *this, double a2)
{
  __m128 v2; // xmm2

  v2 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0);
  *this = _mm_mul_ps(v2, *this);
  this[1] = _mm_mul_ps(this[1], v2);
  this[2] = _mm_mul_ps(this[2], v2);
  this[3] = _mm_mul_ps(this[3], v2);
  this[4] = _mm_mul_ps(this[4], v2);
  this[5] = _mm_mul_ps(v2, this[5]);
  this[6] = _mm_mul_ps(this[6], v2);
  this[7] = _mm_mul_ps(this[7], v2);
  this[8] = _mm_mul_ps(this[8], v2);
}
