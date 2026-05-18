/*
 * XREFs of ?GetRoot@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x18003C228
 * Callers:
 *     ?GetNodeLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180041110 (-GetNodeLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$sha.c)
 *     ?Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180096B80 (-Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetParent@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x180012624 (-GetParent@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Spectre::Engine::SceneNode::GetRoot(Spectre::Engine::SceneNode *a1, __int64 *a2)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v6; // [rsp+30h] [rbp-18h]

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)a1 + 8, a2);
  while ( 1 )
  {
    Spectre::Engine::SceneNode::GetParent((Spectre::Engine::SceneNode *)*a2, &v5);
    if ( !v5 )
      break;
    std::shared_ptr<Spectre::Engine::Light>::operator=(a2, &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a2;
}
