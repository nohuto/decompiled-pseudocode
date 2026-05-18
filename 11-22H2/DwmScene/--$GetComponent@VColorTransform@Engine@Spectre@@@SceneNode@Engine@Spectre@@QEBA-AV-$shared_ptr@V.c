/*
 * XREFs of ??$GetComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@std@@XZ @ 0x180062624
 * Callers:
 *     ??$AddComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@std@@XZ @ 0x180061948 (--$AddComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@V.c)
 *     ??$FindClone@VColorTransform@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180061FA8 (--$FindClone@VColorTransform@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VColorTr.c)
 * Callees:
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??$dynamic_pointer_cast@VColorTransform@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x180063070 (--$dynamic_pointer_cast@VColorTransform@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VC.c)
 *     ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_6589aefbdba22523f4791605972ff884_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_6589aefbdba22523f4791605972ff884_@@@Z @ 0x180063598 (--$find_if@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@_ea_180063598.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::ColorTransform>(
        Spectre::Engine::SceneNode *a1,
        _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  std::find_if<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Component>>>>,_lambda_6589aefbdba22523f4791605972ff884_>(
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
    std::dynamic_pointer_cast<Spectre::Engine::ColorTransform,Spectre::Engine::Component>(a2);
  }
  return a2;
}
