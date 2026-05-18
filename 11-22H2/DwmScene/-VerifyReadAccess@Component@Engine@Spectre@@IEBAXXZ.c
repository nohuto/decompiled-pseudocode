/*
 * XREFs of ?VerifyReadAccess@Component@Engine@Spectre@@IEBAXXZ @ 0x1800814EC
 * Callers:
 *     ?Render@Component@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x180081440 (-Render@Component@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEB.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?GetSceneNode@Component@Engine@Spectre@@QEBA?AV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@XZ @ 0x18004328C (-GetSceneNode@Component@Engine@Spectre@@QEBA-AV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Component::VerifyReadAccess(Spectre::Engine::Component *this)
{
  Spectre::Engine::SceneNode *v1; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v2; // [rsp+28h] [rbp-10h]

  Spectre::Engine::Component::GetSceneNode((__int64)this, &v1);
  if ( v1 )
    Spectre::Engine::SceneNode::VerifyReadAccess(v1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
