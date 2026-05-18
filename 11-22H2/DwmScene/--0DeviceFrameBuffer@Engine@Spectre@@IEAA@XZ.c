/*
 * XREFs of ??0DeviceFrameBuffer@Engine@Spectre@@IEAA@XZ @ 0x180027DC8
 * Callers:
 *     ??0RenderTargetD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800CB5E0 (--0RenderTargetD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x1800290F8 (--0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@1.c)
 */

Spectre::Engine::DeviceFrameBuffer *__fastcall Spectre::Engine::DeviceFrameBuffer::DeviceFrameBuffer(
        Spectre::Engine::DeviceFrameBuffer *this)
{
  Spectre::Engine::DeviceBuffer::DeviceBuffer(this, 10LL, 3LL);
  *(_QWORD *)this = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  return this;
}
