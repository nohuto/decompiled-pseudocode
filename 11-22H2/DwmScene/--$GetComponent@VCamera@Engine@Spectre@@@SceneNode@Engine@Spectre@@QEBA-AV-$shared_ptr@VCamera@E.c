/*
 * XREFs of ??$GetComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x180024ADC
 * Callers:
 *     ??$AddComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x18002DAEC (--$AddComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VCamera@E.c)
 *     ?UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006B21C (-UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engin.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_750ab9e5186891eb31094975a637ff02_@@XAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@std@@EEAAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@2@@Z @ 0x18006E660 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_750ab9e5186891eb31094975a637ff02_@@XAEBV-$shared_ptr@$$.c)
 * Callees:
 *     ??$dynamic_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x1800250F8 (--$dynamic_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VCamera@En.c)
 *     ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_632fb79f88d3ed46eeafc2127b86a5c0_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_632fb79f88d3ed46eeafc2127b86a5c0_@@@Z @ 0x180025228 (--$find_if@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@_ea_180025228.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Camera>(
        Spectre::Engine::SceneNode *a1,
        _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  std::find_if<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Component>>>>,_lambda_632fb79f88d3ed46eeafc2127b86a5c0_>(
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
    std::dynamic_pointer_cast<Spectre::Engine::Camera,Spectre::Engine::Component>(a2);
  }
  return a2;
}
