/*
 * XREFs of ??$GetComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VLight@Engine@Spectre@@@std@@XZ @ 0x180011ED4
 * Callers:
 *     ??$AddComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VLight@Engine@Spectre@@@std@@XZ @ 0x180011E04 (--$AddComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VLight@Eng.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_38672d4837fba783512361a26dc8aa1f_@@XAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@std@@EEAAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@2@@Z @ 0x1800131D0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_38672d4837fba783512361a26dc8aa1f_@@XAEBV-$shared_ptr@$$.c)
 *     ??$FindClone@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x1800620E0 (--$FindClone@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VLight@Engine@Spe.c)
 *     ?RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18008E9C0 (-RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 * Callees:
 *     ??$dynamic_pointer_cast@VLight@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VLight@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x180012288 (--$dynamic_pointer_cast@VLight@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VLight@Engi.c)
 *     ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_71be64dab14c64d18e4e0986bc1df118_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_71be64dab14c64d18e4e0986bc1df118_@@@Z @ 0x1800122F0 (--$find_if@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VComponent@En.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Light>(
        Spectre::Engine::SceneNode *a1,
        _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  std::find_if<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Component>>>>,_lambda_71be64dab14c64d18e4e0986bc1df118_>(
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
    std::dynamic_pointer_cast<Spectre::Engine::Light,Spectre::Engine::Component>(a2);
  }
  return a2;
}
