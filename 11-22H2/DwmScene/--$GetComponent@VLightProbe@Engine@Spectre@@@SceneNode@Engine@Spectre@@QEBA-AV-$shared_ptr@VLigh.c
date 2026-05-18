/*
 * XREFs of ??$GetComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@XZ @ 0x18001636C
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_e4f8b105d577d0521f3737a824532f0c_@@_NAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@EEAA_NAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@2@@Z @ 0x18001B7A0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_e4f8b105d577d0521f3737a824532f0c_@@_NAEBV-$shared_ptr@V.c)
 *     ??$AddComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@XZ @ 0x180061A68 (--$AddComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VLigh.c)
 *     ??$FindClone@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180062218 (--$FindClone@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VLightProbe@.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_7184ac0b1d10aa8b036768733263c113_@@XAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@std@@EEAAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@2@@Z @ 0x18007E630 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_7184ac0b1d10aa8b036768733263c113_@@XAEBV-$shared_ptr@$$.c)
 * Callees:
 *     ??$dynamic_pointer_cast@VLightProbe@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x18001717C (--$dynamic_pointer_cast@VLightProbe@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VLight.c)
 *     ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_4ecc0afe20f12c65eb1b793624a6b673_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_4ecc0afe20f12c65eb1b793624a6b673_@@@Z @ 0x1800171E4 (--$find_if@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@_ea_1800171E4.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::LightProbe>(
        Spectre::Engine::SceneNode *a1,
        _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  std::find_if<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Component>>>>,_lambda_4ecc0afe20f12c65eb1b793624a6b673_>(
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
    std::dynamic_pointer_cast<Spectre::Engine::LightProbe,Spectre::Engine::Component>(a2);
  }
  return a2;
}
