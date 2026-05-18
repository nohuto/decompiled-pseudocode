/*
 * XREFs of ?LoadFromStream@Component@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@PEBXII@Z @ 0x1800813E0
 * Callers:
 *     ?LoadFromStream@MeshInstance@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@PEBXII@Z @ 0x18004BC20 (-LoadFromStream@MeshInstance@Engine@Spectre@@UEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@S.c)
 * Callees:
 *     ?GetCompletedTaskHandler@Utils@Spectre@@YA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@XZ @ 0x1800DF714 (-GetCompletedTaskHandler@Utils@Spectre@@YA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@.c)
 */

__int64 __fastcall Spectre::Engine::Component::LoadFromStream(__int64 a1, __int64 a2)
{
  Spectre::Utils::GetCompletedTaskHandler(a2);
  return a2;
}
