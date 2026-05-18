/*
 * XREFs of _lambda_00b1ad2c531e814b011f91a69053b44d_::operator() @ 0x180098A9C
 * Callers:
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     ?DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAVRenderDevice@23@PEBUSamplerDefinition@Framework@3@@Z @ 0x18009A1BC (-DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA-AV-$shared_ptr@VSampler@Engine@Spectr.c)
 */

__int64 __fastcall lambda_00b1ad2c531e814b011f91a69053b44d_::operator()(_QWORD *a1, __int64 a2)
{
  Spectre::Engine::BaseShaderExtension::DeserializeSampler(a2, *a1);
  return a2;
}
