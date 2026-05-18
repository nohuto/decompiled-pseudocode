/*
 * XREFs of ?StampMarker@GpuProfiler@Engine@Spectre@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A15B8
 * Callers:
 *     ?StampPost@GpuProfiler@Engine@Spectre@@QEAA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A15F4 (-StampPost@GpuProfiler@Engine@Spectre@@QEAA_NAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@.c)
 * Callees:
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 */

char __fastcall Spectre::Engine::GpuProfiler::StampMarker(__int64 a1)
{
  char result; // al
  _QWORD *v2; // r8
  __int64 *v3; // r10

  result = std::atomic<bool>::operator bool(a1 + 184);
  if ( result )
    return Spectre::Engine::GpuProfiler::FramesData::StampMarker((Spectre::Engine::Mutex *)v3, v3[24], (__int64)v2, v2);
  return result;
}
