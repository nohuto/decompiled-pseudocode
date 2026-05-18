/*
 * XREFs of ??$?4VViewerCamera@Engine@Spectre@@@?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VViewerCamera@Engine@Spectre@@@1@@Z @ 0x1800617DC
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 */

__int64 *__fastcall std::shared_ptr<Spectre::Engine::Camera>::operator=<Spectre::Engine::ViewerCamera>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(v8, a2);
  v4 = *v3;
  *v3 = *a1;
  *a1 = v4;
  v5 = v3[1];
  v3[1] = a1[1];
  v6 = v8[1];
  a1[1] = v5;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a1;
}
