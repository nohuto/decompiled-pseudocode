/*
 * XREFs of _dynamic_initializer_for__Spectre::Engine::Scene::GroundNodeID__ @ 0x180003820
 * Callers:
 *     <none>
 * Callees:
 *     ?GenerateUniqueID@SceneNode@Engine@Spectre@@SA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18003BF14 (-GenerateUniqueID@SceneNode@Engine@Spectre@@SA_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$all.c)
 */

__int64 dynamic_initializer_for__Spectre::Engine::Scene::GroundNodeID__()
{
  __int64 result; // rax

  result = Spectre::Engine::SceneNode::GenerateUniqueID(&Spectre::Engine::Scene::GroundNodeName);
  Spectre::Engine::Scene::GroundNodeID = result;
  return result;
}
