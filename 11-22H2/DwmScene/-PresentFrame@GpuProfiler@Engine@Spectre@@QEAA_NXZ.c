/*
 * XREFs of ?PresentFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ @ 0x1800A14A0
 * Callers:
 *     ?PresentFrame@RenderDevice@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEAV?$unique_lock@VMutex@Engine@Spectre@@@5@11@Z @ 0x180026FA0 (-PresentFrame@RenderDevice@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spectre@@.c)
 * Callees:
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 */

char __fastcall Spectre::Engine::GpuProfiler::PresentFrame(Spectre::Engine::GpuProfiler *this)
{
  char result; // al
  __int64 *v2; // r8

  result = std::atomic<bool>::operator bool((__int64)this + 184);
  if ( result )
    return Spectre::Engine::GpuProfiler::FramesData::PresentFrame(
             (Spectre::Engine::GpuProfiler::FramesData *)v2,
             v2[24]);
  return result;
}
