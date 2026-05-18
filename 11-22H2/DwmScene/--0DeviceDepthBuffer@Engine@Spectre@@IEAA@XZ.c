/*
 * XREFs of ??0DeviceDepthBuffer@Engine@Spectre@@IEAA@XZ @ 0x18006F0DC
 * Callers:
 *     ??0DepthBufferGeneric@Engine@Spectre@@QEAA@XZ @ 0x18008C4E0 (--0DepthBufferGeneric@Engine@Spectre@@QEAA@XZ.c)
 *     ??0DepthBufferD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D58D8 (--0DepthBufferD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x1800290F8 (--0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@1.c)
 */

Spectre::Engine::DeviceDepthBuffer *__fastcall Spectre::Engine::DeviceDepthBuffer::DeviceDepthBuffer(
        Spectre::Engine::DeviceDepthBuffer *this)
{
  Spectre::Engine::DeviceDepthBuffer *result; // rax

  Spectre::Engine::DeviceBuffer::DeviceBuffer(this);
  *(_QWORD *)this = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
