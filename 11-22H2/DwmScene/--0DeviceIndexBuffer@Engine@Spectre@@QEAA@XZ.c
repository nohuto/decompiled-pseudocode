/*
 * XREFs of ??0DeviceIndexBuffer@Engine@Spectre@@QEAA@XZ @ 0x180089A94
 * Callers:
 *     ??R_lambda_55ce5d336e7bc116043b5e90d1e00759_@@QEBA@XZ @ 0x1800527E0 (--R_lambda_55ce5d336e7bc116043b5e90d1e00759_@@QEBA@XZ.c)
 *     ??R_lambda_d7f4d8d432685ceaae68a7b31eb4d631_@@QEBA@XZ @ 0x1800C4494 (--R_lambda_d7f4d8d432685ceaae68a7b31eb4d631_@@QEBA@XZ.c)
 * Callees:
 *     ??0DeviceArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x18008B384 (--0DeviceArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceMana.c)
 */

Spectre::Engine::DeviceIndexBuffer *__fastcall Spectre::Engine::DeviceIndexBuffer::DeviceIndexBuffer(
        Spectre::Engine::DeviceIndexBuffer *this)
{
  Spectre::Engine::DeviceArrayBuffer::DeviceArrayBuffer(this, 8LL, 6LL);
  *(_QWORD *)this = &Spectre::Engine::DeviceIndexBuffer::`vftable';
  return this;
}
