/*
 * XREFs of ??0GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@12@@Z @ 0x1800A0B40
 * Callers:
 *     ??$make_shared@VGpuProfiler@Engine@Spectre@@AEAVRenderDevice@23@@std@@YA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@0@AEAVRenderDevice@Engine@Spectre@@@Z @ 0x18002B124 (--$make_shared@VGpuProfiler@Engine@Spectre@@AEAVRenderDevice@23@@std@@YA-AV-$shared_ptr@VGpuProf.c)
 * Callees:
 *     ??0FramesData@GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@23@@Z @ 0x1800A0A04 (--0FramesData@GpuProfiler@Engine@Spectre@@QEAA@AEAVRenderDevice@23@@Z.c)
 */

Spectre::Engine::GpuProfiler *__fastcall Spectre::Engine::GpuProfiler::GpuProfiler(
        Spectre::Engine::GpuProfiler *this,
        struct Spectre::Engine::RenderDevice *a2)
{
  Spectre::Engine::GpuProfiler *result; // rax

  Spectre::Engine::GpuProfiler::FramesData::FramesData(this, a2);
  *((_WORD *)this + 92) = 257;
  result = this;
  *((_QWORD *)this + 24) = 1LL;
  return result;
}
