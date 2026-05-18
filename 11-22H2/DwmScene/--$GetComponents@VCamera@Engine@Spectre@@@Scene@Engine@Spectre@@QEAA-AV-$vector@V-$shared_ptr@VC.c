/*
 * XREFs of ??$GetComponents@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA?AV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x180062750
 * Callers:
 *     ?RenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@5@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067B00 (-RenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEB.c)
 * Callees:
 *     ??$GetComponents_Internal@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA?AV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x180062770 (--$GetComponents_Internal@VCamera@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA-AV-$vector@V-$shar.c)
 */

__int64 __fastcall Spectre::Engine::Scene::GetComponents<Spectre::Engine::Camera>(__int64 a1, __int64 a2)
{
  Spectre::Engine::Scene::GetComponents_Internal<Spectre::Engine::Camera>();
  return a2;
}
