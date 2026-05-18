/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@1@@Z @ 0x18005F1A4
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@1@@Z @ 0x18005F1A4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipe.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@U?$less@W4EShaderModel@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x18005FA98 (--1-$_Tree@V-$_Tmap_traits@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@1@@Z @ 0x18005F1A4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipe.c)
 *     ??1ShaderPipelineCollection@ShaderFamily@Engine@Spectre@@QEAA@XZ @ 0x18005FD1C (--1ShaderPipelineCollection@ShaderFamily@Engine@Spectre@@QEAA@XZ.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rdi
  __int64 *v6; // rbx

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>,void *>>>(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (__int64 *)*v3;
    Spectre::Engine::ShaderFamily::ShaderPipelineCollection::~ShaderPipelineCollection((Spectre::Engine::ShaderFamily::ShaderPipelineCollection *)(v6 + 5));
    std::_Deallocate<16,0>(v6, 0x48uLL);
  }
}
