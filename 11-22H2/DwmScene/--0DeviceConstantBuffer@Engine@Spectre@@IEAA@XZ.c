/*
 * XREFs of ??0DeviceConstantBuffer@Engine@Spectre@@IEAA@XZ @ 0x18008B678
 * Callers:
 *     ??0ConstantBufferGeneric@Engine@Spectre@@QEAA@XZ @ 0x18008B63C (--0ConstantBufferGeneric@Engine@Spectre@@QEAA@XZ.c)
 *     ??0ConstantBufferD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D70C0 (--0ConstantBufferD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x1800290F8 (--0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@1.c)
 */

Spectre::Engine::DeviceConstantBuffer *__fastcall Spectre::Engine::DeviceConstantBuffer::DeviceConstantBuffer(
        Spectre::Engine::DeviceConstantBuffer *this)
{
  Spectre::Engine::DeviceBuffer::DeviceBuffer(this);
  *(_QWORD *)this = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
