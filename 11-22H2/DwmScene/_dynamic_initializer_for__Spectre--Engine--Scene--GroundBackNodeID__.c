/*
 * XREFs of _dynamic_initializer_for__Spectre::Engine::Scene::GroundBackNodeID__ @ 0x1800037C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GenerateUniqueID@SceneNode@Engine@Spectre@@SA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18003BF14 (-GenerateUniqueID@SceneNode@Engine@Spectre@@SA_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$all.c)
 */

__int64 dynamic_initializer_for__Spectre::Engine::Scene::GroundBackNodeID__()
{
  __int64 result; // rax

  result = Spectre::Engine::SceneNode::GenerateUniqueID(&Spectre::Engine::Scene::GroundBackNodeName);
  Spectre::Engine::Scene::GroundBackNodeID = result;
  return result;
}
