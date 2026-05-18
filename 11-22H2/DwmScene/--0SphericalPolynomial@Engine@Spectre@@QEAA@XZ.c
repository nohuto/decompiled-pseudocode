/*
 * XREFs of ??0SphericalPolynomial@Engine@Spectre@@QEAA@XZ @ 0x1800A3CF8
 * Callers:
 *     ?AddAmbient@SpectreWorld@@QEAAXAEBU_D3DCOLORVALUE@@M@Z @ 0x18001BB00 (-AddAmbient@SpectreWorld@@QEAAXAEBU_D3DCOLORVALUE@@M@Z.c)
 *     ??0LightProbe@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800510A8 (--0LightProbe@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z @ 0x180051B8C (-SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z.c)
 *     ?SphericalPolynomialFromHarmonics@SphericalPolynomial@Engine@Spectre@@SA?AV123@AEBVSphericalHarmonics@23@@Z @ 0x1800A3D90 (-SphericalPolynomialFromHarmonics@SphericalPolynomial@Engine@Spectre@@SA-AV123@AEBVSphericalHarm.c)
 * Callees:
 *     <none>
 */

Spectre::Engine::SphericalPolynomial *__fastcall Spectre::Engine::SphericalPolynomial::SphericalPolynomial(
        Spectre::Engine::SphericalPolynomial *this)
{
  Spectre::Engine::SphericalPolynomial *result; // rax

  *(_QWORD *)((char *)this + 12) = 1065353216LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 28) = 1065353216LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 44) = 1065353216LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 60) = 1065353216LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 76) = 1065353216LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *(_QWORD *)((char *)this + 92) = 1065353216LL;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *(_QWORD *)((char *)this + 108) = 1065353216LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 124) = 1065353216LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *((_DWORD *)this + 35) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 132) = 0LL;
  return result;
}
