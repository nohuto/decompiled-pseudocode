/*
 * XREFs of ?SetPreviousNode@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D834
 * Callers:
 *     ?AddChild@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003B6A8 (-AddChild@SceneNode@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?RemoveChild@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003CFFC (-RemoveChild@SceneNode@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

__int64 *__fastcall Spectre::Engine::SceneNode::SetPreviousNode(__int64 *a1, _QWORD *a2)
{
  Spectre::Engine::SceneNode::VerifyWriteAccess((Spectre::Engine::SceneNode *)a1);
  return std::weak_ptr<Spectre::Engine::Scene>::operator=<Spectre::Engine::Scene>(a1 + 14, a2);
}
