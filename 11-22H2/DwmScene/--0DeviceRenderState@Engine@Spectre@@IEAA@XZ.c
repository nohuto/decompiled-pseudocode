/*
 * XREFs of ??0DeviceRenderState@Engine@Spectre@@IEAA@XZ @ 0x18008B79C
 * Callers:
 *     ??0RenderStateGeneric@Engine@Spectre@@QEAA@XZ @ 0x18008B7D8 (--0RenderStateGeneric@Engine@Spectre@@QEAA@XZ.c)
 *     ??0RenderStateD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D4BEC (--0RenderStateD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029120 (--0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 */

Spectre::Engine::DeviceRenderState *__fastcall Spectre::Engine::DeviceRenderState::DeviceRenderState(
        Spectre::Engine::DeviceRenderState *this)
{
  Spectre::Engine::DeviceRenderState *result; // rax

  Spectre::Engine::DeviceResource::DeviceResource((__int64)this);
  *(_QWORD *)this = &Spectre::Engine::DeviceRenderState::`vftable';
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
