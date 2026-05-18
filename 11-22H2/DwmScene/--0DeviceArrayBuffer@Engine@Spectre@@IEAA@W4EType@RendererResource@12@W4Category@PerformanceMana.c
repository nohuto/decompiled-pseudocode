/*
 * XREFs of ??0DeviceArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x18008B384
 * Callers:
 *     ??0DeviceVertexBuffer@Engine@Spectre@@IEAA@XZ @ 0x18008941C (--0DeviceVertexBuffer@Engine@Spectre@@IEAA@XZ.c)
 *     ??0DeviceIndexBuffer@Engine@Spectre@@QEAA@XZ @ 0x180089A94 (--0DeviceIndexBuffer@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x1800290F8 (--0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@1.c)
 */

_QWORD *__fastcall Spectre::Engine::DeviceArrayBuffer::DeviceArrayBuffer(_QWORD *a1)
{
  _QWORD *result; // rax

  Spectre::Engine::DeviceBuffer::DeviceBuffer(a1);
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  return result;
}
