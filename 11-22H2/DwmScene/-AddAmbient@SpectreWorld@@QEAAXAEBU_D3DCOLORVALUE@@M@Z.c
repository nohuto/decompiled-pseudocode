/*
 * XREFs of ?AddAmbient@SpectreWorld@@QEAAXAEBU_D3DCOLORVALUE@@M@Z @ 0x18001BB00
 * Callers:
 *     ?SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180012AA0 (-SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z.c)
 * Callees:
 *     ?SphericalHarmonicsFromPolynomial@SphericalHarmonics@Engine@Spectre@@SA?AV123@AEBVSphericalPolynomial@23@@Z @ 0x1800A3ABC (-SphericalHarmonicsFromPolynomial@SphericalHarmonics@Engine@Spectre@@SA-AV123@AEBVSphericalPolyn.c)
 *     ??0SphericalPolynomial@Engine@Spectre@@QEAA@XZ @ 0x1800A3CF8 (--0SphericalPolynomial@Engine@Spectre@@QEAA@XZ.c)
 *     ?AddAmbient@SphericalPolynomial@Engine@Spectre@@QEAAXAEBUColor@Math@Utils@3@@Z @ 0x1800A3D5C (-AddAmbient@SphericalPolynomial@Engine@Spectre@@QEAAXAEBUColor@Math@Utils@3@@Z.c)
 */

void __fastcall SpectreWorld::AddAmbient(SpectreWorld *this, const struct _D3DCOLORVALUE *a2, float a3)
{
  float *v3; // r8
  float v4; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  __m128 *v8; // r9
  __m128 v9; // xmm1
  _DWORD v10[4]; // [rsp+20h] [rbp-E0h] BYREF
  __m128 v11[10]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[144]; // [rsp+D0h] [rbp-30h] BYREF

  Spectre::Engine::SphericalPolynomial::SphericalPolynomial((Spectre::Engine::SphericalPolynomial *)v12);
  v4 = a3 * *v3;
  v6 = a3 * v3[2];
  v7 = a3 * v3[1];
  *(float *)v10 = v4;
  *(float *)&v10[3] = FLOAT_1_0;
  *(float *)&v10[1] = v7;
  *(float *)&v10[2] = v6;
  Spectre::Engine::SphericalPolynomial::AddAmbient(
    (Spectre::Engine::SphericalPolynomial *)v12,
    (const struct Spectre::Utils::Math::Color *)v10);
  Spectre::Engine::SphericalHarmonics::SphericalHarmonicsFromPolynomial(v11, v12);
  v8[3] = _mm_add_ps(v8[3], v11[0]);
  v8[4] = _mm_add_ps(v8[4], v11[1]);
  v8[5] = _mm_add_ps(v11[2], v8[5]);
  v8[6] = _mm_add_ps(v8[6], v11[3]);
  v8[7] = _mm_add_ps(v8[7], v11[4]);
  v9 = v11[6];
  v8[8] = _mm_add_ps(v8[8], v11[5]);
  v8[9] = _mm_add_ps(v9, v8[9]);
  v8[10] = _mm_add_ps(v8[10], v11[7]);
  v8[11] = _mm_add_ps(v8[11], v11[8]);
}
