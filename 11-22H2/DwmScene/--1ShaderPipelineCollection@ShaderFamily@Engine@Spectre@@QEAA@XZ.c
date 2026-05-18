/*
 * XREFs of ??1ShaderPipelineCollection@ShaderFamily@Engine@Spectre@@QEAA@XZ @ 0x18005FD1C
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@1@@Z @ 0x18005F1A4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipe.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005FB10 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4EShaderModel@Engine@Spectre@@UShad.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18003FEB4 (--1-$_Tree@V-$_Tmap_traits@HV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U-$less@H@2@V-$alloc.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18005F270 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@.c)
 */

void __fastcall Spectre::Engine::ShaderFamily::ShaderPipelineCollection::~ShaderPipelineCollection(void **this)
{
  __int64 v2; // rcx

  std::_Tree<std::_Tmap_traits<int,std::shared_ptr<Spectre::Engine::LightProbe>,std::less<int>,std::allocator<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>>,0>>::~_Tree<std::_Tmap_traits<int,std::shared_ptr<Spectre::Engine::LightProbe>,std::less<int>,std::allocator<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>>,0>>(this + 2);
  std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>(
    v2,
    (_QWORD **)*this);
  std::_Deallocate<16,0>(*this, 0x20uLL);
}
