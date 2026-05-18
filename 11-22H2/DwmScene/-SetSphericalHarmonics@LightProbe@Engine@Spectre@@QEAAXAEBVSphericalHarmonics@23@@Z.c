/*
 * XREFs of ?SetSphericalHarmonics@LightProbe@Engine@Spectre@@QEAAXAEBVSphericalHarmonics@23@@Z @ 0x180051C30
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 * Callees:
 *     ??4SphericalHarmonics@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z @ 0x180051340 (--4SphericalHarmonics@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4SphericalPolynomial@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z @ 0x180051448 (--4SphericalPolynomial@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CreateDeviceTextureConstantColor@LightProbe@Engine@Spectre@@AEAAXUColor@Math@Utils@3@@Z @ 0x1800518C8 (-CreateDeviceTextureConstantColor@LightProbe@Engine@Spectre@@AEAAXUColor@Math@Utils@3@@Z.c)
 *     ?UpdateCachedState@LightProbe@Engine@Spectre@@AEAAXXZ @ 0x180051CA0 (-UpdateCachedState@LightProbe@Engine@Spectre@@AEAAXXZ.c)
 *     ?ConvertIrradianceToLambertianRadiance@SphericalHarmonics@Engine@Spectre@@QEAAXXZ @ 0x1800A3A18 (-ConvertIrradianceToLambertianRadiance@SphericalHarmonics@Engine@Spectre@@QEAAXXZ.c)
 *     ?SphericalPolynomialFromHarmonics@SphericalPolynomial@Engine@Spectre@@SA?AV123@AEBVSphericalHarmonics@23@@Z @ 0x1800A3D90 (-SphericalPolynomialFromHarmonics@SphericalPolynomial@Engine@Spectre@@SA-AV123@AEBVSphericalHarm.c)
 */

void __fastcall Spectre::Engine::LightProbe::SetSphericalHarmonics(
        Spectre::Engine::LightProbe *this,
        const struct Spectre::Engine::SphericalHarmonics *a2)
{
  __int64 v2; // r9
  Spectre::Engine::SphericalHarmonics *v3; // rcx
  __int64 v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // r9
  Spectre::Engine::LightProbe *v7; // r9
  __m128 *v8; // r9
  __m128 v9; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v10[152]; // [rsp+30h] [rbp-98h] BYREF

  Spectre::Engine::SphericalHarmonics::operator=((_DWORD *)this + 27, a2);
  *(_DWORD *)(v2 + 252) = 2;
  Spectre::Engine::SphericalHarmonics::ConvertIrradianceToLambertianRadiance(v3);
  v5 = (_DWORD *)Spectre::Engine::SphericalPolynomial::SphericalPolynomialFromHarmonics(v10, v4);
  Spectre::Engine::SphericalPolynomial::operator=((_DWORD *)(v6 + 256), v5);
  Spectre::Engine::LightProbe::UpdateCachedState(v7);
  v9 = (__m128)Spectre::Utils::Math::Color::Black;
  Spectre::Engine::LightProbe::CreateDeviceTextureConstantColor(v8, &v9);
}
