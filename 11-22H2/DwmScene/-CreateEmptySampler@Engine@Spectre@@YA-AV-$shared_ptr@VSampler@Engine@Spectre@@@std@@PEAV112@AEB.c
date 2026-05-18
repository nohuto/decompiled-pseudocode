/*
 * XREFs of ?CreateEmptySampler@Engine@Spectre@@YA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAV112@AEBUSamplerStateDesc@12@@Z @ 0x18006F990
 * Callers:
 *     ?AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18006F288 (-AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VDeviceDepthBuffer@Engin.c)
 * Callees:
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_1800161AC.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Spectre::Engine::CreateEmptySampler(
        __int64 *a1,
        __int64 a2,
        const struct Spectre::Engine::SamplerStateDesc *a3)
{
  int v5; // r8d
  int v6; // r8d
  struct Spectre::Engine::RenderDevice *v7; // r8

  Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>(a2, a1);
  Spectre::Engine::RendererResource::SetOption(*a1, 1, 0);
  Spectre::Engine::RendererResource::SetOption(*a1, v5 + 2, v5);
  Spectre::Engine::RendererResource::SetOption(*a1, v6 + 4, v6);
  Spectre::Engine::Sampler::CreateSampler((Spectre::Engine::Sampler *)*a1, a3, v7);
  return a1;
}
