/*
 * XREFs of ?SetCpuProfiler@RenderOutput@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@@Z @ 0x18002C9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall Spectre::Engine::RenderOutput::SetCpuProfiler(__int64 a1, _QWORD *a2)
{
  return std::weak_ptr<Spectre::Engine::Scene>::operator=<Spectre::Engine::Scene>((__int64 *)(a1 + 488), a2);
}
