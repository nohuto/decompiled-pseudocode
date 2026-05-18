/*
 * XREFs of ?SetLowFidelityEnabled@GpuProfiler@Engine@Spectre@@QEAAX_N@Z @ 0x1800A14EC
 * Callers:
 *     ?UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002CDC0 (-UpdateGpuProfiler@RenderOutput@Engine@Spectre@@UEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::GpuProfiler::SetLowFidelityEnabled(
        Spectre::Engine::GpuProfiler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  std::atomic<bool>::operator=((__int64)this + 185, a2, a3, a4);
}
