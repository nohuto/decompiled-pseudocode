/*
 * XREFs of ?Update@GpuProfiler@Engine@Spectre@@QEAAXXZ @ 0x1800A16DC
 * Callers:
 *     ?UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002CDC0 (-UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Engine::GpuProfiler::Update(__int64 **this)
{
  Spectre::Engine::GpuProfiler::FramesData::Update(this);
}
