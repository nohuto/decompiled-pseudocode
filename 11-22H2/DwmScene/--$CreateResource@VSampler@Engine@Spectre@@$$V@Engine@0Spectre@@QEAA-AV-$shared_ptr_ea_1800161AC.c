/*
 * XREFs of ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC
 * Callers:
 *     ?CreateSampler@SpectreRenderer@@UEAAJPEAPEAUISpectreSampler@@@Z @ 0x180018570 (-CreateSampler@SpectreRenderer@@UEAAJPEAPEAUISpectreSampler@@@Z.c)
 *     ?CreateResources@LightProbe@Engine@Spectre@@UEAAXXZ @ 0x180051A50 (-CreateResources@LightProbe@Engine@Spectre@@UEAAXXZ.c)
 *     ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170 (-AttachDevice@Camera@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?CreateEmptySampler@Engine@Spectre@@YA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAV112@AEBUSamplerStateDesc@12@@Z @ 0x18006F990 (-CreateEmptySampler@Engine@Spectre@@YA-AV-$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAV112@AEB.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ?CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ @ 0x18008E0E0 (-CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ.c)
 *     ?RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E8DC (-RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 *     ?CreateReflectionResources@ImageProcessingEffectPlanarReflection@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180093CF0 (-CreateReflectionResources@ImageProcessingEffectPlanarReflection@Engine@Spectre@@MEAAXPEAVRender.c)
 *     ?CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180096160 (-CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z.c)
 *     ?DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAVRenderDevice@23@PEBUSamplerDefinition@Framework@3@@Z @ 0x18009A1BC (-DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA-AV-$shared_ptr@VSampler@Engine@Spectr.c)
 *     ?CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x18009CAD4 (-CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x1800160F8 (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VSampler@Eng.c)
 */

_QWORD *__fastcall Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>(__int64 a1, _QWORD *a2)
{
  Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>(a1, a2);
  return a2;
}
