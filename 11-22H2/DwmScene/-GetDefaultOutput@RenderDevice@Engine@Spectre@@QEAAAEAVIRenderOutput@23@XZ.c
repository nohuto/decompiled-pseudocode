/*
 * XREFs of ?GetDefaultOutput@RenderDevice@Engine@Spectre@@QEAAAEAVIRenderOutput@23@XZ @ 0x180026528
 * Callers:
 *     ?SetRenderTargetDynamicScaling@RenderDevice@Engine@Spectre@@UEAA_NMM@Z @ 0x1800270E0 (-SetRenderTargetDynamicScaling@RenderDevice@Engine@Spectre@@UEAA_NMM@Z.c)
 *     ?GetGpuProfiler@CommandList@Engine@Spectre@@QEBA?BV?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@XZ @ 0x1800393A8 (-GetGpuProfiler@CommandList@Engine@Spectre@@QEBA-BV-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@.c)
 * Callees:
 *     ?at@?$vector@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@2@_K@Z @ 0x18002783C (-at@-$vector@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VIRen.c)
 */

struct Spectre::Engine::IRenderOutput *__fastcall Spectre::Engine::RenderDevice::GetDefaultOutput(
        Spectre::Engine::RenderDevice *this)
{
  return *(struct Spectre::Engine::IRenderOutput **)std::vector<std::shared_ptr<Spectre::Engine::IRenderOutput>>::at((char *)this + 248);
}
