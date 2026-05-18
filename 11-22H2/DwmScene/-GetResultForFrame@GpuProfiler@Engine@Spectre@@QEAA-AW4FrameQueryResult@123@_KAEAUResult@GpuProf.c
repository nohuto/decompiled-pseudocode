/*
 * XREFs of ?GetResultForFrame@GpuProfiler@Engine@Spectre@@QEAA?AW4FrameQueryResult@123@_KAEAUResult@GpuProfilerFrame@23@@Z @ 0x1800A13A4
 * Callers:
 *     ?GetGpuProfilerResults@RenderOutput@Engine@Spectre@@IEAA?AV?$vector@UResult@GpuProfilerFrame@Engine@Spectre@@V?$allocator@UResult@GpuProfilerFrame@Engine@Spectre@@@std@@@std@@XZ @ 0x18002C040 (-GetGpuProfilerResults@RenderOutput@Engine@Spectre@@IEAA-AV-$vector@UResult@GpuProfilerFrame@Eng.c)
 * Callees:
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 */

__int64 __fastcall Spectre::Engine::GpuProfiler::GetResultForFrame(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // r8
  Spectre::Engine::Mutex *v3; // r9

  if ( std::atomic<bool>::operator bool(a1 + 184) && v1 <= *((_QWORD *)v3 + 24) )
    return Spectre::Engine::GpuProfiler::FramesData::GetResultForFrame(v3, v1, v2);
  else
    return 4LL;
}
