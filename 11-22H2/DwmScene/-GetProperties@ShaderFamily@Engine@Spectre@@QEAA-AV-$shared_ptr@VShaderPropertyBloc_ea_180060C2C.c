/*
 * XREFs of ?GetProperties@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180060C2C
 * Callers:
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ?CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180096160 (-CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z.c)
 *     ?CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x18009CAD4 (-CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ?GetProperties@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x180060C00 (-GetProperties@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engine@Spec.c)
 */

__int64 __fastcall Spectre::Engine::ShaderFamily::GetProperties(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10

  Spectre::Engine::ShaderFamily::GetProperties(a1, a2, 6);
  return v2;
}
