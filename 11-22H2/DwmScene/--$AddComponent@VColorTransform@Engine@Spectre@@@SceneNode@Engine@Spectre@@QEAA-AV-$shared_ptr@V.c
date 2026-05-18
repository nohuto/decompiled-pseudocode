/*
 * XREFs of ??$AddComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@std@@XZ @ 0x180061948
 * Callers:
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z @ 0x18003B744 (-AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VComponent@Engine@Spectre.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??$GetComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@std@@XZ @ 0x180062624 (--$GetComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@V.c)
 *     ??$_Set_ptr_rep_and_enable_shared@VColorTransform@Engine@Spectre@@@?$shared_ptr@VColorTransform@Engine@Spectre@@@std@@AEAAXQEAVColorTransform@Engine@Spectre@@QEAV_Ref_count_base@1@@Z @ 0x180062D28 (--$_Set_ptr_rep_and_enable_shared@VColorTransform@Engine@Spectre@@@-$shared_ptr@VColorTransform@.c)
 *     ??0ColorTransform@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18008F4C8 (--0ColorTransform@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::ColorTransform>(
        Spectre::Engine::SceneNode *this,
        _QWORD *a2)
{
  __int64 v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  __int128 v8; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+40h] [rbp-10h]

  Spectre::Engine::SceneNode::VerifyWriteAccess(this);
  v4 = *(_QWORD *)Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::ColorTransform>(this, &v9);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v9);
    v5 = operator new(0xB8uLL);
    v6 = v5;
    if ( v5 )
    {
      *(_OWORD *)v5 = 0LL;
      v5[2] = 1;
      v5[3] = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj2<Spectre::Engine::ColorTransform>::`vftable';
      Spectre::Engine::ColorTransform::ColorTransform((Spectre::Engine::ColorTransform *)(v5 + 4));
    }
    else
    {
      v6 = 0LL;
    }
    v8 = 0LL;
    std::shared_ptr<Spectre::Engine::ColorTransform>::_Set_ptr_rep_and_enable_shared<Spectre::Engine::ColorTransform>(
      &v8,
      v6 + 4,
      v6);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(&v9, &v8);
    Spectre::Engine::SceneNode::AddComponentInternal((char **)this, &v9);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    *(_OWORD *)a2 = v8;
  }
  return a2;
}
