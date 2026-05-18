/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@1@@Z @ 0x18003F354
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@1@@Z @ 0x18003F354 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$shared_ptr@VShaderPipeline@Engine@Spe.c)
 *     ??1?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18003FEB4 (--1-$_Tree@V-$_Tmap_traits@HV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U-$less@H@2@V-$alloc.c)
 *     ?ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060FAC (-ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@1@@Z @ 0x18003F354 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$shared_ptr@VShaderPipeline@Engine@Spe.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<Spectre::Engine::ShaderPipeline>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<Spectre::Engine::ShaderPipeline>>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  _QWORD *v6; // rdi
  std::_Ref_count_base *v7; // rcx

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<Spectre::Engine::ShaderPipeline>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<Spectre::Engine::ShaderPipeline>>,void *>>>(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (__int64 *)*v3;
    v7 = (std::_Ref_count_base *)v6[6];
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    std::_Deallocate<16,0>(v6, 0x38uLL);
  }
}
