/*
 * XREFs of ??$AddComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@XZ @ 0x180061A68
 * Callers:
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??$GetComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@XZ @ 0x18001636C (--$GetComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VLigh.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z @ 0x18003B744 (-AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VComponent@Engine@Spectre.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??$_Set_ptr_rep_and_enable_shared@VLightProbe@Engine@Spectre@@@?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@AEAAXQEAVLightProbe@Engine@Spectre@@QEAV_Ref_count_base@1@@Z @ 0x180050D7C (--$_Set_ptr_rep_and_enable_shared@VLightProbe@Engine@Spectre@@@-$shared_ptr@VLightProbe@Engine@S.c)
 *     ??0LightProbe@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800510A8 (--0LightProbe@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::LightProbe>(
        Spectre::Engine::SceneNode *this,
        _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  _DWORD *v6; // rax
  __int64 v7; // rdi
  __int128 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-10h]

  Spectre::Engine::SceneNode::VerifyWriteAccess(this);
  v4 = *Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::LightProbe>(this, &v10);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v5 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v10);
    v6 = operator new(0x228uLL);
    v7 = (__int64)v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      v6[2] = 1;
      v6[3] = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::LightProbe>::`vftable';
      Spectre::Engine::LightProbe::LightProbe((Spectre::Engine::Component *)(v6 + 4), v5);
    }
    else
    {
      v7 = 0LL;
    }
    v9 = 0LL;
    std::shared_ptr<Spectre::Engine::LightProbe>::_Set_ptr_rep_and_enable_shared<Spectre::Engine::LightProbe>(
      &v9,
      v7 + 16,
      v7);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(&v10, &v9);
    Spectre::Engine::SceneNode::AddComponentInternal((char **)this, &v10);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    *(_OWORD *)a2 = v9;
  }
  return a2;
}
