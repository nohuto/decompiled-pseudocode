/*
 * XREFs of ?EndFrame@GpuProfiler@Engine@Spectre@@QEAA_NXZ @ 0x1800A1254
 * Callers:
 *     ?EndGpuProfilerFrame@RenderOutput@Engine@Spectre@@UEAAXXZ @ 0x18002BED0 (-EndGpuProfilerFrame@RenderOutput@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 */

char __fastcall Spectre::Engine::GpuProfiler::EndFrame(Spectre::Engine::GpuProfiler *this)
{
  char result; // al
  __int64 *v2; // r8

  result = std::atomic<bool>::operator bool((__int64)this + 184);
  if ( result )
    return Spectre::Engine::GpuProfiler::FramesData::EndFrame((Spectre::Engine::GpuProfiler::FramesData *)v2, v2[24]);
  return result;
}
