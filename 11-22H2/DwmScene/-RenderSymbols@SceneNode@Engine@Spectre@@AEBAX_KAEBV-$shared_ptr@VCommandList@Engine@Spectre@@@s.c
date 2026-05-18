/*
 * XREFs of ?RenderSymbols@SceneNode@Engine@Spectre@@AEBAX_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18003D310
 * Callers:
 *     ?Render@SceneNode@Engine@Spectre@@QEBAX_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18003D264 (-Render@SceneNode@Engine@Spectre@@QEBAX_KAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEB.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ @ 0x180034800 (-GetSymbolManager@Engine@1Spectre@@QEAAAEAVISymbolManager@12@XZ.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

void __fastcall __noreturn Spectre::Engine::SceneNode::RenderSymbols(Spectre::Engine::SceneNode *a1)
{
  std::_Ref_count_base *v2; // rcx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-10h]

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  Spectre::Engine::SceneNode::GetScene((__int64)a1, &v3);
  v2 = v4;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  Spectre::Engine::Engine::GetSymbolManager(v2);
}
