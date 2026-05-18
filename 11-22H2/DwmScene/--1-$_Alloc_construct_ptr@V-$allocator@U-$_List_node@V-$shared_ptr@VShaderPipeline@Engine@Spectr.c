/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800316CC
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180031738 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$shared_ptr@VDisplay@Engine@Spectre@@@s.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005FA68 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$shared_ptr@VShaderPipeline@Engine@Spec.c)
 *     _std::list_std::shared_ptr_Spectre::Engine::ShaderPipeline__std::allocator_std::shared_ptr_Spectre::Engine::ShaderPipeline_____::_Emplace_std::shared_ptr_Spectre::Engine::ShaderPipeline__const_&__::_1_::dtor$1 @ 0x1800E51ED (_std--list_std--shared_ptr_Spectre--Engine--ShaderPipeline__std--allocator_std--shared_ptr_Spect.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x20uLL);
}
