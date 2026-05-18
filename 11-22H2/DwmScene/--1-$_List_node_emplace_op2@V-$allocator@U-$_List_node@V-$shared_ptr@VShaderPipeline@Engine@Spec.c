/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005FA68
 * Callers:
 *     ??$_Emplace@AEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@?$list@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@1@@Z @ 0x18005EED0 (--$_Emplace@AEBV-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@-$list@V-$shared_ptr@VShader.c)
 * Callees:
 *     ??_G?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z @ 0x1800325D0 (--_G-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'(v2 + 16);
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>(a1);
}
