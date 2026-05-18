/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005FB10
 * Callers:
 *     ??$_Try_emplace@AEBW4EShaderModel@Engine@Spectre@@$$V@?$map@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@U?$less@W4EShaderModel@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@_N@1@AEBW4EShaderModel@Engine@Spectre@@@Z @ 0x18005F2F0 (--$_Try_emplace@AEBW4EShaderModel@Engine@Spectre@@$$V@-$map@W4EShaderModel@Engine@Spectre@@UShad.c)
 * Callees:
 *     ??1ShaderPipelineCollection@ShaderFamily@Engine@Spectre@@QEAA@XZ @ 0x18005FD1C (--1ShaderPipelineCollection@ShaderFamily@Engine@Spectre@@QEAA@XZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    Spectre::Engine::ShaderFamily::ShaderPipelineCollection::~ShaderPipelineCollection((Spectre::Engine::ShaderFamily::ShaderPipelineCollection *)(v2 + 40));
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,enum Spectre::Engine::ShaderOption>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,enum Spectre::Engine::ShaderOption>,void *>>>(a1);
}
