/*
 * XREFs of ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_13782e26b83e9934321d75ffb0f67783_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_13782e26b83e9934321d75ffb0f67783_@@@Z @ 0x180071C2C
 * Callers:
 *     ??$AddComponent@VImageProcessingCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@XZ @ 0x180070F94 (--$AddComponent@VImageProcessingCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$share.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$dynamic_pointer_cast@VImageProcessingCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x180071BC4 (--$dynamic_pointer_cast@VImageProcessingCamera@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared.c)
 */

_QWORD *__fastcall std::find_if<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Component>>>>,_lambda_13782e26b83e9934321d75ffb0f67783_>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rdi
  _QWORD *v6; // rbp
  bool v7; // r14
  std::_Ref_count_base *v8; // rcx
  _QWORD *result; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-20h]
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  for ( i = a2; i != a3; i += 2 )
  {
    v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v12,
           i);
    std::dynamic_pointer_cast<Spectre::Engine::ImageProcessingCamera,Spectre::Engine::Component>(&v10, v6);
    v7 = std::operator!=<Spectre::Engine::Scene>(&v10);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    v8 = (std::_Ref_count_base *)v6[1];
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    if ( v7 )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
