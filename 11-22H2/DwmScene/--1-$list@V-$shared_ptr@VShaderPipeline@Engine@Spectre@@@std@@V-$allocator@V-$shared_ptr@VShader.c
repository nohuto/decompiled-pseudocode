/*
 * XREFs of ??1?$list@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18005FB9C
 * Callers:
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderModel_const__Spectre::Engine::ShaderFamily::ShaderPipelineCollection__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_enum_Spectre::Engine::EShaderModel_const__Spectre::Engine::ShaderFamily::ShaderPipelineCollection__void________std::piecewise_construct_t_const_&_std::tuple_enum_Spectre::Engine::EShaderModel_const_&__std::tuple_____::_1_::dtor$4 @ 0x1800E7AC8 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_enum_Spectre--Engine_ea_1800E7AC8.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18005F270 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@.c)
 */

void __fastcall std::list<std::shared_ptr<Spectre::Engine::ShaderPipeline>>::~list<std::shared_ptr<Spectre::Engine::ShaderPipeline>>(
        void **a1)
{
  std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
