/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_750ab9e5186891eb31094975a637ff02_@@XAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@std@@EEAAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@2@@Z @ 0x18006E660
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$GetComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x180024ADC (--$GetComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VCamera@E.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x180056C54 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@-$vector@V-$shared_ptr@VC.c)
 */

void __fastcall std::_Func_impl_no_alloc<_lambda_750ab9e5186891eb31094975a637ff02_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::_Do_call(
        __int64 a1,
        Spectre::Engine::SceneNode **a2)
{
  __int64 v3; // r9
  _QWORD *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]

  Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Camera>(*a2, &v6);
  if ( std::operator!=<Spectre::Engine::Scene>(&v6) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD **)(v3 + 8);
    if ( v4 == *(_QWORD **)(v3 + 16) )
    {
      std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::Camera> const &>(
        *(char ***)(a1 + 8),
        *(char **)(v3 + 8),
        &v6);
    }
    else
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v4, &v6);
      *(_QWORD *)(v5 + 8) += 16LL;
    }
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
