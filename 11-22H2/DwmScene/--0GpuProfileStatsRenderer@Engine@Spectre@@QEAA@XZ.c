/*
 * XREFs of ??0GpuProfileStatsRenderer@Engine@Spectre@@QEAA@XZ @ 0x180073E18
 * Callers:
 *     ??$make_unique@VGpuProfileStatsRenderer@Engine@Spectre@@$$V$0A@@std@@YA?AV?$unique_ptr@VGpuProfileStatsRenderer@Engine@Spectre@@U?$default_delete@VGpuProfileStatsRenderer@Engine@Spectre@@@std@@@0@XZ @ 0x18002B290 (--$make_unique@VGpuProfileStatsRenderer@Engine@Spectre@@$$V$0A@@std@@YA-AV-$unique_ptr@VGpuProfi.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??0?$StatsMap@N$0BE@$0A@@Engine@Spectre@@QEAA@XZ @ 0x180073DB0 (--0-$StatsMap@N$0BE@$0A@@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Engine::GpuProfileStatsRenderer *__fastcall Spectre::Engine::GpuProfileStatsRenderer::GpuProfileStatsRenderer(
        Spectre::Engine::GpuProfileStatsRenderer *this)
{
  memset_0(this, 0, 0xC8uLL);
  Spectre::Engine::StatsMap<double,20,0>::StatsMap<double,20,0>((__int64)this);
  Spectre::Engine::StatsMap<double,20,0>::StatsMap<double,20,0>((__int64)this + 200);
  return this;
}
