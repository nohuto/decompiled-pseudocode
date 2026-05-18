/*
 * XREFs of ??0IndexBuffer@Engine@Spectre@@QEAA@XZ @ 0x180089AC8
 * Callers:
 *     ??$make_shared@VIndexBuffer@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VIndexBuffer@Engine@Spectre@@@0@XZ @ 0x1800478D4 (--$make_shared@VIndexBuffer@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VIndexBuffer@Engine@Spect.c)
 * Callees:
 *     ??0ArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x18008878C (--0ArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12.c)
 */

Spectre::Engine::IndexBuffer *__fastcall Spectre::Engine::IndexBuffer::IndexBuffer(Spectre::Engine::IndexBuffer *this)
{
  Spectre::Engine::ArrayBuffer::ArrayBuffer(this, 8, 6);
  *(_QWORD *)this = &Spectre::Engine::IndexBuffer::`vftable';
  return this;
}
