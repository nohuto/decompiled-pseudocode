/*
 * XREFs of ??$GetComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013E78
 * Callers:
 *     ??$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013D44 (--$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VMe.c)
 *     ?SetMaterial@SpectreMeshComponent@@UEAAJPEAUISpectreMaterial@@@Z @ 0x1800144E0 (-SetMaterial@SpectreMeshComponent@@UEAAJPEAUISpectreMaterial@@@Z.c)
 *     ?SetMesh@SpectreMeshComponent@@UEAAJPEAUISpectreMesh@@@Z @ 0x180014650 (-SetMesh@SpectreMeshComponent@@UEAAJPEAUISpectreMesh@@@Z.c)
 *     ?Uninitialize@SpectreMeshComponent@@IEAAXXZ @ 0x180014790 (-Uninitialize@SpectreMeshComponent@@IEAAXXZ.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ?PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18008E390 (-PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ??$dynamic_pointer_cast@VMeshInstance@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x18001402C (--$dynamic_pointer_cast@VMeshInstance@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VMes.c)
 *     ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_46c47ee4cea26ed081544c70f7e204b7_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_46c47ee4cea26ed081544c70f7e204b7_@@@Z @ 0x180014094 (--$find_if@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@_ea_180014094.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::MeshInstance>(
        Spectre::Engine::SceneNode *a1,
        _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  std::find_if<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Component>>>>,_lambda_46c47ee4cea26ed081544c70f7e204b7_>(
    &v5,
    *((_QWORD *)a1 + 47),
    *((_QWORD *)a1 + 48));
  if ( v5 == *((_QWORD *)a1 + 48) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    std::dynamic_pointer_cast<Spectre::Engine::MeshInstance,Spectre::Engine::Component>(a2);
  }
  return a2;
}
