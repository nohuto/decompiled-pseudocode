/*
 * XREFs of ?AddAmbient@SphericalPolynomial@Engine@Spectre@@QEAAXAEBUColor@Math@Utils@3@@Z @ 0x1800A3D5C
 * Callers:
 *     ?AddAmbient@SpectreWorld@@QEAAXAEBU_D3DCOLORVALUE@@M@Z @ 0x18001BB00 (-AddAmbient@SpectreWorld@@QEAAXAEBU_D3DCOLORVALUE@@M@Z.c)
 *     ?SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z @ 0x180051B8C (-SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::SphericalPolynomial::AddAmbient(__m128 *this, __m128 *a2)
{
  this[3] = _mm_add_ps(this[3], *a2);
  this[4] = _mm_add_ps(this[4], *a2);
  this[5] = _mm_add_ps(*a2, this[5]);
}
