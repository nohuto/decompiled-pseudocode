/*
 * XREFs of ?SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z @ 0x180051B8C
 * Callers:
 *     ?CreateResources@LightProbe@Engine@Spectre@@UEAAXXZ @ 0x180051A50 (-CreateResources@LightProbe@Engine@Spectre@@UEAAXXZ.c)
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     ??4SphericalHarmonics@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z @ 0x180051340 (--4SphericalHarmonics@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4SphericalPolynomial@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z @ 0x180051448 (--4SphericalPolynomial@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CreateDeviceTextureConstantColor@LightProbe@Engine@Spectre@@AEAAXUColor@Math@Utils@3@@Z @ 0x1800518C8 (-CreateDeviceTextureConstantColor@LightProbe@Engine@Spectre@@AEAAXUColor@Math@Utils@3@@Z.c)
 *     ?UpdateCachedState@LightProbe@Engine@Spectre@@AEAAXXZ @ 0x180051CA0 (-UpdateCachedState@LightProbe@Engine@Spectre@@AEAAXXZ.c)
 *     ?SphericalHarmonicsFromPolynomial@SphericalHarmonics@Engine@Spectre@@SA?AV123@AEBVSphericalPolynomial@23@@Z @ 0x1800A3ABC (-SphericalHarmonicsFromPolynomial@SphericalHarmonics@Engine@Spectre@@SA-AV123@AEBVSphericalPolyn.c)
 *     ??0SphericalPolynomial@Engine@Spectre@@QEAA@XZ @ 0x1800A3CF8 (--0SphericalPolynomial@Engine@Spectre@@QEAA@XZ.c)
 *     ?AddAmbient@SphericalPolynomial@Engine@Spectre@@QEAAXAEBUColor@Math@Utils@3@@Z @ 0x1800A3D5C (-AddAmbient@SphericalPolynomial@Engine@Spectre@@QEAAXAEBUColor@Math@Utils@3@@Z.c)
 */

void Spectre::Engine::LightProbe::SetAmbient()
{
  _DWORD *v0; // rax
  _DWORD *v1; // r8
  Spectre::Engine::SphericalPolynomial *v2; // rcx
  const struct Spectre::Utils::Math::Color *v3; // r9
  __int64 v4; // r8
  _DWORD *v5; // rax
  __int64 v6; // r10
  Spectre::Engine::LightProbe *v7; // r10
  __m128 *v8; // r9
  __m128 *v9; // r10
  __m128 v10; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v11[168]; // [rsp+30h] [rbp-A8h] BYREF

  v0 = (_DWORD *)Spectre::Engine::SphericalPolynomial::SphericalPolynomial((Spectre::Engine::SphericalPolynomial *)v11);
  Spectre::Engine::SphericalPolynomial::operator=(v1, v0);
  Spectre::Engine::SphericalPolynomial::AddAmbient(v2, v3);
  v5 = (_DWORD *)Spectre::Engine::SphericalHarmonics::SphericalHarmonicsFromPolynomial(v11, v4);
  Spectre::Engine::SphericalHarmonics::operator=((_DWORD *)(v6 + 108), v5);
  Spectre::Engine::LightProbe::UpdateCachedState(v7);
  v10 = *v8;
  Spectre::Engine::LightProbe::CreateDeviceTextureConstantColor(v9, &v10);
}
