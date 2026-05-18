/*
 * XREFs of ??0GpuQuery@Engine@Spectre@@QEAA@XZ @ 0x1800E37A8
 * Callers:
 *     ??0GpuQueryD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D7BC4 (--0GpuQueryD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029120 (--0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 */

Spectre::Engine::GpuQuery *__fastcall Spectre::Engine::GpuQuery::GpuQuery(Spectre::Engine::GpuQuery *this)
{
  Spectre::Engine::DeviceResource::DeviceResource((__int64)this);
  *(_QWORD *)this = &Spectre::Engine::GpuQuery::`vftable';
  return this;
}
