/*
 * XREFs of ??$GetComponent@VShadowMapCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@XZ @ 0x180062688
 * Callers:
 *     ??$AddComponent@VShadowMapCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@XZ @ 0x180061B88 (--$AddComponent@VShadowMapCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@.c)
 *     ??$FindClone@VShadowMapCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180062350 (--$FindClone@VShadowMapCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VShadow.c)
 *     ?UpdateLightConstants@LightGatherer@Engine@Spectre@@CA?AV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@std@@AEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4764 (-UpdateLightConstants@LightGatherer@Engine@Spectre@@CA-AV-$array@V-$shared_ptr@$$CBVShadowMapCam.c)
 * Callees:
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??$dynamic_pointer_cast@VShadowMapCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x1800630D8 (--$dynamic_pointer_cast@VShadowMapCamera@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@V.c)
 *     ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_4b00b539b6be2090d516454a4f76d032_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_4b00b539b6be2090d516454a4f76d032_@@@Z @ 0x1800634F4 (--$find_if@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@_ea_1800634F4.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::ShadowMapCamera>(
        Spectre::Engine::SceneNode *a1,
        _QWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  std::find_if<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Component>>>>,_lambda_4b00b539b6be2090d516454a4f76d032_>(
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
    std::dynamic_pointer_cast<Spectre::Engine::ShadowMapCamera,Spectre::Engine::Component>(a2);
  }
  return a2;
}
