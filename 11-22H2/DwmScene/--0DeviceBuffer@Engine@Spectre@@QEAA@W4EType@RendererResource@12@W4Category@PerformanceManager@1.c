/*
 * XREFs of ??0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x1800290F8
 * Callers:
 *     ??0DeviceFrameBuffer@Engine@Spectre@@IEAA@XZ @ 0x180027DC8 (--0DeviceFrameBuffer@Engine@Spectre@@IEAA@XZ.c)
 *     ??0DeviceTexture@Engine@Spectre@@QEAA@XZ @ 0x1800551EC (--0DeviceTexture@Engine@Spectre@@QEAA@XZ.c)
 *     ??0DeviceDepthBuffer@Engine@Spectre@@IEAA@XZ @ 0x18006F0DC (--0DeviceDepthBuffer@Engine@Spectre@@IEAA@XZ.c)
 *     ??0DeviceArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x18008B384 (--0DeviceArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceMana.c)
 *     ??0DeviceConstantBuffer@Engine@Spectre@@IEAA@XZ @ 0x18008B678 (--0DeviceConstantBuffer@Engine@Spectre@@IEAA@XZ.c)
 * Callees:
 *     ??0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029120 (--0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 */

_QWORD *__fastcall Spectre::Engine::DeviceBuffer::DeviceBuffer(_QWORD *a1)
{
  Spectre::Engine::DeviceResource::DeviceResource();
  *a1 = &Spectre::Engine::DeviceBuffer::`vftable';
  return a1;
}
