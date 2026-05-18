/*
 * XREFs of ??1?$unique_ptr@VGpuProfileStatsRenderer@Engine@Spectre@@U?$default_delete@VGpuProfileStatsRenderer@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18002B888
 * Callers:
 *     ??1RenderOutput@Engine@Spectre@@MEAA@XZ @ 0x18002B928 (--1RenderOutput@Engine@Spectre@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1GpuProfileStatsRenderer@Engine@Spectre@@QEAA@XZ @ 0x18002B8C4 (--1GpuProfileStatsRenderer@Engine@Spectre@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<Spectre::Engine::GpuProfileStatsRenderer>::~unique_ptr<Spectre::Engine::GpuProfileStatsRenderer>(
        Spectre::Engine::GpuProfileStatsRenderer **a1)
{
  Spectre::Engine::GpuProfileStatsRenderer *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    Spectre::Engine::GpuProfileStatsRenderer::~GpuProfileStatsRenderer(*a1);
    operator delete(v1);
  }
}
