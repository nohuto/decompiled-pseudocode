/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@U?$less@W4EShaderModel@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x18005FA98
 * Callers:
 *     ??1?$map@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@U?$less@W4EShaderModel@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@7@@std@@QEAA@XZ @ 0x18005FBC8 (--1-$map@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@U-$less@W4ESha.c)
 *     ??1ShaderFamily@Engine@Spectre@@QEAA@XZ @ 0x18005FC40 (--1ShaderFamily@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@1@@Z @ 0x18005F1A4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipe.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::EShaderModel,Spectre::Engine::ShaderFamily::ShaderPipelineCollection,std::less<enum Spectre::Engine::EShaderModel>,std::allocator<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::EShaderModel,Spectre::Engine::ShaderFamily::ShaderPipelineCollection,std::less<enum Spectre::Engine::EShaderModel>,std::allocator<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x48uLL);
}
