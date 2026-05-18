/*
 * XREFs of ?GetCpuProfiler@RenderOutput@Engine@Spectre@@UEBA?AV?$weak_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18002BF20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18002B398 (--0-$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::RenderOutput::GetCpuProfiler(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  std::weak_ptr<Spectre::Engine::Material>::weak_ptr<Spectre::Engine::Material>(a2, (_QWORD *)(a1 + 488));
  return v2;
}
