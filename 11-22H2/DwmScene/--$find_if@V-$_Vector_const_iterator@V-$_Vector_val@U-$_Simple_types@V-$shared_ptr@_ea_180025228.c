/*
 * XREFs of ??$find_if@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@V_lambda_632fb79f88d3ed46eeafc2127b86a5c0_@@@std@@YA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@V10@V10@V_lambda_632fb79f88d3ed46eeafc2127b86a5c0_@@@Z @ 0x180025228
 * Callers:
 *     ??$GetComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x180024ADC (--$GetComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VCamera@E.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$dynamic_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x1800250F8 (--$dynamic_pointer_cast@VCamera@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VCamera@En.c)
 */

_QWORD *__fastcall std::find_if<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Engine::Component>>>>,_lambda_632fb79f88d3ed46eeafc2127b86a5c0_>(
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
    std::dynamic_pointer_cast<Spectre::Engine::Camera,Spectre::Engine::Component>(&v10, v6);
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
