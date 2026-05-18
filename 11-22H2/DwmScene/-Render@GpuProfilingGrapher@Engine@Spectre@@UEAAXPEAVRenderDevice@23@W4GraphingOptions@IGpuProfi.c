/*
 * XREFs of ?Render@GpuProfilingGrapher@Engine@Spectre@@UEAAXPEAVRenderDevice@23@W4GraphingOptions@IGpuProfilingGrapher@23@@Z @ 0x180074270
 * Callers:
 *     ?BeginGpuProfilerFrame@RenderOutput@Engine@Spectre@@UEAAXH@Z @ 0x18002BC20 (-BeginGpuProfilerFrame@RenderOutput@Engine@Spectre@@UEAAXH@Z.c)
 * Callees:
 *     ?GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ @ 0x180034800 (-GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ.c)
 */

__int64 __fastcall Spectre::Engine::GpuProfilingGrapher::Render(Spectre::Engine::Engine *a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = a3 & 0x7E;
  if ( (a3 & 1) != 0 || (a3 & 0x7E) != 0 )
    Spectre::Engine::Engine::GetSymbolManager(a1);
  return result;
}
