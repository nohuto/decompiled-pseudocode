/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180031738
 * Callers:
 *     ??$_Emplace@AEBV?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@?$list@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@VDisplay@Engine@Spectre@@@1@@Z @ 0x18002E2A4 (--$_Emplace@AEBV-$shared_ptr@VDisplay@Engine@Spectre@@@std@@@-$list@V-$shared_ptr@VDisplay@Engin.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::Display>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::Display>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(std::_Ref_count_base **)(v2 + 24);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
  }
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>(a1);
}
