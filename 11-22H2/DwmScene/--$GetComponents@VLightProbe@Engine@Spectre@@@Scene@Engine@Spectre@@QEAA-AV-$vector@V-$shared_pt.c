/*
 * XREFs of ??$GetComponents@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA?AV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x18007C7D4
 * Callers:
 *     ?OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18007DF80 (-OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engine@Spec.c)
 *     ?OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180080C30 (-OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engi.c)
 * Callees:
 *     ??$GetComponents_Internal@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA?AV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x18007C7F4 (--$GetComponents_Internal@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@AEBA-AV-$vector@V-$.c)
 */

__int64 __fastcall Spectre::Engine::Scene::GetComponents<Spectre::Engine::LightProbe>(__int64 a1, __int64 a2)
{
  Spectre::Engine::Scene::GetComponents_Internal<Spectre::Engine::LightProbe>();
  return a2;
}
