/*
 * XREFs of ??0SphericalHarmonics@Engine@Spectre@@QEAA@XZ @ 0x1800A3994
 * Callers:
 *     ??$MakeAndInitialize@VSpectreWorld@@V1@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreWorld@@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180016A78 (--$MakeAndInitialize@VSpectreWorld@@V1@AEAV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Details@WR.c)
 *     ??0LightProbe@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800510A8 (--0LightProbe@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?SphericalHarmonicsFromPolynomial@SphericalHarmonics@Engine@Spectre@@SA?AV123@AEBVSphericalPolynomial@23@@Z @ 0x1800A3ABC (-SphericalHarmonicsFromPolynomial@SphericalHarmonics@Engine@Spectre@@SA-AV123@AEBVSphericalPolyn.c)
 * Callees:
 *     <none>
 */

Spectre::Engine::SphericalHarmonics *__fastcall Spectre::Engine::SphericalHarmonics::SphericalHarmonics(
        Spectre::Engine::SphericalHarmonics *this)
{
  Spectre::Engine::SphericalHarmonics *result; // rax

  *(_QWORD *)((char *)this + 12) = 1065353216LL;
  *(_QWORD *)this = 0LL;
  result = this;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 1065353216LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 1065353216LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 60) = 1065353216LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *(_QWORD *)((char *)this + 76) = 1065353216LL;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *(_QWORD *)((char *)this + 92) = 1065353216LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 108) = 1065353216LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *(_QWORD *)((char *)this + 124) = 1065353216LL;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *(_QWORD *)((char *)this + 140) = 1065353216LL;
  return result;
}
