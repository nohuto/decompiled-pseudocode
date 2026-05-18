/*
 * XREFs of ??0CpuProfileStatsRenderer@Engine@Spectre@@QEAA@XZ @ 0x18007C5BC
 * Callers:
 *     ??$make_unique@VCpuProfileStatsRenderer@Engine@Spectre@@$$V$0A@@std@@YA?AV?$unique_ptr@VCpuProfileStatsRenderer@Engine@Spectre@@U?$default_delete@VCpuProfileStatsRenderer@Engine@Spectre@@@std@@@0@XZ @ 0x180030900 (--$make_unique@VCpuProfileStatsRenderer@Engine@Spectre@@$$V$0A@@std@@YA-AV-$unique_ptr@VCpuProfi.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

Spectre::Engine::CpuProfileStatsRenderer *__fastcall Spectre::Engine::CpuProfileStatsRenderer::CpuProfileStatsRenderer(
        Spectre::Engine::CpuProfileStatsRenderer *this)
{
  _QWORD *v2; // rax
  Spectre::Engine::CpuProfileStatsRenderer *result; // rax

  memset_0(this, 0, 0x78uLL);
  *((_QWORD *)this + 1) = 0LL;
  *(_BYTE *)this = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v2 = operator new(0xA8uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 2) = v2;
  result = this;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  return result;
}
