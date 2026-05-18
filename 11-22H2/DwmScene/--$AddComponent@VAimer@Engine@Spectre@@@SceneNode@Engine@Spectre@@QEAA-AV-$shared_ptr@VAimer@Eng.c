/*
 * XREFs of ??$AddComponent@VAimer@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VAimer@Engine@Spectre@@@std@@XZ @ 0x180061878
 * Callers:
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ?AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z @ 0x18003B744 (-AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VComponent@Engine@Spectre.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??$GetComponent@VAimer@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VAimer@Engine@Spectre@@@std@@XZ @ 0x1800625C0 (--$GetComponent@VAimer@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VAimer@Eng.c)
 *     ??$make_shared@VAimer@Engine@Spectre@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VAimer@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180063810 (--$make_shared@VAimer@Engine@Spectre@@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA-AV.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::Aimer>(
        Spectre::Engine::SceneNode *this,
        _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v9; // [rsp+40h] [rbp-18h]

  Spectre::Engine::SceneNode::VerifyWriteAccess(this);
  v4 = *(_QWORD *)Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Aimer>(this, &v8);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v5 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v8);
    std::make_shared<Spectre::Engine::Aimer,std::shared_ptr<Spectre::Engine::SceneNode>>(v7, v5);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(&v8, v7);
    Spectre::Engine::SceneNode::AddComponentInternal((char **)this, &v8);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    *a2 = v7[0];
    a2[1] = v7[1];
  }
  return a2;
}
