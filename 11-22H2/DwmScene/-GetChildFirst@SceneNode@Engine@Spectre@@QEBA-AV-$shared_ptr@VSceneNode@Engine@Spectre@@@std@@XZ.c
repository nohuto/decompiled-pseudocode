/*
 * XREFs of ?GetChildFirst@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@XZ @ 0x18003BF78
 * Callers:
 *     ?GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z @ 0x18003C050 (-GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z.c)
 *     ?GetForegroundModel@ViewerEngine@Engine@Spectre@@IEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x180066C20 (-GetForegroundModel@ViewerEngine@Engine@Spectre@@IEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::GetChildFirst(Spectre::Engine::SceneNode *a1, _QWORD *a2)
{
  _QWORD *v4; // rdx

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  v4 = (_QWORD *)*((_QWORD *)a1 + 4);
  if ( v4 == *((_QWORD **)a1 + 5) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a2, v4);
  }
  return a2;
}
