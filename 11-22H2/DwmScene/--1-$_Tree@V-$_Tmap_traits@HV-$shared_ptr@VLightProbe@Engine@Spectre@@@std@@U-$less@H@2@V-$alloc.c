/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18003FEB4
 * Callers:
 *     ??1Scene@Engine@Spectre@@QEAA@XZ @ 0x18003FFBC (--1Scene@Engine@Spectre@@QEAA@XZ.c)
 *     ??1ShaderPipelineCollection@ShaderFamily@Engine@Spectre@@QEAA@XZ @ 0x18005FD1C (--1ShaderPipelineCollection@ShaderFamily@Engine@Spectre@@QEAA@XZ.c)
 *     ??1?$map@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800640B0 (--1-$map@HV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U-$less@H@2@V-$allocator@U-$pair@$$CBH.c)
 *     ??1ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA@XZ @ 0x180064110 (--1ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@1@@Z @ 0x18003F354 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$shared_ptr@VShaderPipeline@Engine@Spe.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<int,std::shared_ptr<Spectre::Engine::LightProbe>,std::less<int>,std::allocator<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>>,0>>::~_Tree<std::_Tmap_traits<int,std::shared_ptr<Spectre::Engine::LightProbe>,std::less<int>,std::allocator<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<Spectre::Engine::ShaderPipeline>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<Spectre::Engine::ShaderPipeline>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x38uLL);
}
