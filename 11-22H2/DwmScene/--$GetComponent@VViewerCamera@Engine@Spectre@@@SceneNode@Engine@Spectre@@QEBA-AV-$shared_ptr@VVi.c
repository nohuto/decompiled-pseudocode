/*
 * XREFs of ??$GetComponent@VViewerCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@XZ @ 0x1800626EC
 * Callers:
 *     ??$AddComponent@VViewerCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@XZ @ 0x180061CA8 (--$AddComponent@VViewerCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VVi.c)
 *     ??$FindClone@VViewerCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180062488 (--$FindClone@VViewerCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VViewerCam.c)
 * Callees:
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x1800631A8 (--$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VVie.c)
 *     ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_7f567e8ce061655687aabb115dd223d0_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_7f567e8ce061655687aabb115dd223d0_@@@Z @ 0x18006363C (--$find_if@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@_ea_18006363C.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::ViewerCamera>(
        Spectre::Engine::SceneNode *a1,
        _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  std::find_if<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Component>>>>,_lambda_7f567e8ce061655687aabb115dd223d0_>(
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
    std::dynamic_pointer_cast<Spectre::Engine::ViewerCamera,Spectre::Engine::Component>(a2);
  }
  return a2;
}
