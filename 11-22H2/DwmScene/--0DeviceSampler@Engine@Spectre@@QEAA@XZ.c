/*
 * XREFs of ??0DeviceSampler@Engine@Spectre@@QEAA@XZ @ 0x1800543E4
 * Callers:
 *     ??0SamplerGeneric@Engine@Spectre@@QEAA@XZ @ 0x18008B50C (--0SamplerGeneric@Engine@Spectre@@QEAA@XZ.c)
 *     ??0SamplerD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D48AC (--0SamplerD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029120 (--0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 *     ??$make_shared@USamplerStateDesc@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@USamplerStateDesc@Engine@Spectre@@@0@XZ @ 0x180054350 (--$make_shared@USamplerStateDesc@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@USamplerStateDesc@En.c)
 */

Spectre::Engine::DeviceSampler *__fastcall Spectre::Engine::DeviceSampler::DeviceSampler(
        Spectre::Engine::DeviceSampler *this)
{
  Spectre::Engine::DeviceSampler *result; // rax

  Spectre::Engine::DeviceResource::DeviceResource((__int64)this);
  *(_QWORD *)this = &Spectre::Engine::DeviceSampler::`vftable';
  std::make_shared<Spectre::Engine::SamplerStateDesc,>((_QWORD *)this + 12);
  *((_QWORD *)this + 14) = 0LL;
  result = this;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}
