/*
 * XREFs of ?ConvertIrradianceToLambertianRadiance@SphericalHarmonics@Engine@Spectre@@QEAAXXZ @ 0x1800A3A18
 * Callers:
 *     ?SetSphericalHarmonics@LightProbe@Engine@Spectre@@QEAAXAEBVSphericalHarmonics@23@@Z @ 0x180051C30 (-SetSphericalHarmonics@LightProbe@Engine@Spectre@@QEAAXAEBVSphericalHarmonics@23@@Z.c)
 * Callees:
 *     ?Scale@SphericalPolynomial@Engine@Spectre@@QEAAXM@Z @ 0x1800A3A40 (-Scale@SphericalPolynomial@Engine@Spectre@@QEAAXM@Z.c)
 */

void __fastcall Spectre::Engine::SphericalHarmonics::ConvertIrradianceToLambertianRadiance(
        Spectre::Engine::SphericalHarmonics *this)
{
  __int64 v1; // rcx

  Spectre::Engine::SphericalPolynomial::Scale(this, 0.31830987);
  *(_DWORD *)(v1 + 144) = 4;
}
