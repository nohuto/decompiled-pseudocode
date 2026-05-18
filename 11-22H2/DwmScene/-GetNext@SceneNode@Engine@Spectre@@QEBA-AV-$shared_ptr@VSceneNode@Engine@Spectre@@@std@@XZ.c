/*
 * XREFs of ?GetNext@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x18003C014
 * Callers:
 *     ?GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z @ 0x18003C050 (-GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z.c)
 *     ?RemoveChild@SceneNode@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003CFFC (-RemoveChild@SceneNode@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::GetNext(Spectre::Engine::SceneNode *a1, _QWORD *a2)
{
  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)a1 + 128, a2);
  return a2;
}
