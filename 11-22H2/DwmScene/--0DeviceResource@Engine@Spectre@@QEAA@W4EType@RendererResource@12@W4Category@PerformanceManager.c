/*
 * XREFs of ??0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029120
 * Callers:
 *     ??0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x1800290F8 (--0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@1.c)
 *     ??0CommandList@Engine@Spectre@@QEAA@XZ @ 0x180038FEC (--0CommandList@Engine@Spectre@@QEAA@XZ.c)
 *     ??0DeviceSampler@Engine@Spectre@@QEAA@XZ @ 0x1800543E4 (--0DeviceSampler@Engine@Spectre@@QEAA@XZ.c)
 *     ??0DeviceShader@Engine@Spectre@@IEAA@XZ @ 0x18008A75C (--0DeviceShader@Engine@Spectre@@IEAA@XZ.c)
 *     ??0DeviceShaderPipeline@Engine@Spectre@@QEAA@XZ @ 0x18008A794 (--0DeviceShaderPipeline@Engine@Spectre@@QEAA@XZ.c)
 *     ??0DeviceRenderState@Engine@Spectre@@IEAA@XZ @ 0x18008B79C (--0DeviceRenderState@Engine@Spectre@@IEAA@XZ.c)
 *     ??0DeviceVertexLayout@Engine@Spectre@@IEAA@XZ @ 0x18008BCA4 (--0DeviceVertexLayout@Engine@Spectre@@IEAA@XZ.c)
 *     ??0GpuQuery@Engine@Spectre@@QEAA@XZ @ 0x1800E37A8 (--0GpuQuery@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z @ 0x18002918C (--0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z.c)
 */

__int64 __fastcall Spectre::Engine::DeviceResource::DeviceResource(__int64 a1)
{
  __int64 result; // rax

  Spectre::Engine::RendererResource::RendererResource();
  *(_QWORD *)a1 = &Spectre::Engine::DeviceResource::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return result;
}
