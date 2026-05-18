/*
 * XREFs of ??$AddComponent@VImageProcessingCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@XZ @ 0x180070F94
 * Callers:
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ?AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z @ 0x18003B744 (-AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VComponent@Engine@Spectre.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??$dynamic_pointer_cast@VImageProcessingCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x180071BC4 (--$dynamic_pointer_cast@VImageProcessingCamera@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared.c)
 *     ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_13782e26b83e9934321d75ffb0f67783_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_13782e26b83e9934321d75ffb0f67783_@@@Z @ 0x180071C2C (--$find_if@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@_ea_180071C2C.c)
 *     ??$make_shared@VImageProcessingCamera@Engine@Spectre@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@0@@Z @ 0x180071CD0 (--$make_shared@VImageProcessingCamera@Engine@Spectre@@V-$shared_ptr@VSceneNode@Engine@Spectre@@@.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Spectre::Engine::SceneNode::AddComponent<Spectre::Engine::ImageProcessingCamera>(
        Spectre::Engine::SceneNode *this,
        _QWORD *a2)
{
  std::_Ref_count_base *v4; // rdi
  std::_Ref_count_base *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v10[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF
  std::_Ref_count_base *v12; // [rsp+58h] [rbp-8h]
  __int64 v13; // [rsp+70h] [rbp+10h] BYREF

  Spectre::Engine::SceneNode::VerifyWriteAccess(this);
  Spectre::Engine::SceneNode::VerifyReadAccess(this);
  std::find_if<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Component>>>>,_lambda_13782e26b83e9934321d75ffb0f67783_>(
    &v13,
    *((_QWORD *)this + 47),
    *((_QWORD *)this + 48));
  if ( v13 == *((_QWORD *)this + 48) )
  {
    v5 = 0LL;
    v10[1] = 0LL;
    v4 = 0LL;
  }
  else
  {
    std::dynamic_pointer_cast<Spectre::Engine::ImageProcessingCamera,Spectre::Engine::Component>(v10);
    v4 = v10[0];
    v5 = v10[1];
  }
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v6 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)this + 8, &v11);
    std::make_shared<Spectre::Engine::ImageProcessingCamera,std::shared_ptr<Spectre::Engine::SceneNode>>(&v9, v6);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    v7 = *((_QWORD *)&v9 + 1);
    if ( *((_QWORD *)&v9 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL));
      v7 = *((_QWORD *)&v9 + 1);
    }
    *(_OWORD *)v10 = v9;
    Spectre::Engine::SceneNode::AddComponentInternal((char **)this, v10);
    if ( v10[1] )
      std::_Ref_count_base::_Decref(v10[1]);
    *a2 = v9;
    a2[1] = v7;
  }
  return a2;
}
