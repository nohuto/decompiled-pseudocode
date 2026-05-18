/*
 * XREFs of ??1GpuProfiler@Engine@Spectre@@QEAA@XZ @ 0x1800A0CE4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VGpuProfiler@Engine@Spectre@@@std@@EEAAXXZ @ 0x18002D4A0 (-_Destroy@-$_Ref_count_obj2@VGpuProfiler@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?Clear@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ @ 0x1800A1110 (-Clear@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::GpuProfiler::~GpuProfiler(Spectre::Engine::GpuProfiler *this)
{
  Spectre::Engine::GpuProfiler::FramesData::Clear(this);
  Spectre::Engine::GpuProfiler::FramesData::~FramesData(this);
}
