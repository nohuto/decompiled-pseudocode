/*
 * XREFs of ??0DeviceVertexBuffer@Engine@Spectre@@IEAA@XZ @ 0x18008941C
 * Callers:
 *     ??R_lambda_76eddb9b03c24eac3632c1cece1b494c_@@QEBA@XZ @ 0x180052884 (--R_lambda_76eddb9b03c24eac3632c1cece1b494c_@@QEBA@XZ.c)
 *     ??R_lambda_973e7e53f49bf9ebe6ecec01f6a7b8f1_@@QEBA@XZ @ 0x1800C43EC (--R_lambda_973e7e53f49bf9ebe6ecec01f6a7b8f1_@@QEBA@XZ.c)
 * Callees:
 *     ??0DeviceArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x18008B384 (--0DeviceArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceMana.c)
 */

Spectre::Engine::DeviceVertexBuffer *__fastcall Spectre::Engine::DeviceVertexBuffer::DeviceVertexBuffer(
        Spectre::Engine::DeviceVertexBuffer *this)
{
  Spectre::Engine::DeviceArrayBuffer::DeviceArrayBuffer(this, 11LL, 5LL);
  *(_QWORD *)this = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return this;
}
