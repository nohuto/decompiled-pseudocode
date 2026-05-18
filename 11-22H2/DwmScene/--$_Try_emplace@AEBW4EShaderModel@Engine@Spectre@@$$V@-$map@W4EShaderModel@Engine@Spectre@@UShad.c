/*
 * XREFs of ??$_Try_emplace@AEBW4EShaderModel@Engine@Spectre@@$$V@?$map@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@U?$less@W4EShaderModel@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@_N@1@AEBW4EShaderModel@Engine@Spectre@@@Z @ 0x18005F2F0
 * Callers:
 *     ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_K0_N@Z @ 0x1800602F8 (-CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPipeline@En_ea_1800602F8.c)
 *     ?GetPipeline@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_KW4EShaderModel@23@@Z @ 0x180060A74 (-GetPipeline@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPipeline@Engine@Spectre@@@s.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4EShaderModel@Engine@Spectre@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4EShaderModel@Engine@Spectre@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18005E8A8 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBW4EShaderModel@Engine@Spectre@@@1@V-$tuple@$$V@1.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005FB10 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4EShaderModel@Engine@Spectre@@UShad.c)
 */

__int64 __fastcall std::map<enum Spectre::Engine::EShaderModel,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>::_Try_emplace<enum Spectre::Engine::EShaderModel const &,>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]
  _DWORD *v15; // [rsp+70h] [rbp+8h] BYREF

  v14 = 0;
  v5 = *a1;
  v7 = v5;
  v8 = *(_QWORD *)(v5 + 8);
  v13 = v8;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    a4 = (unsigned int)*a3;
    do
    {
      v13 = v8;
      if ( *(_DWORD *)(v8 + 32) >= (int)a4 )
      {
        v7 = v8;
        v14 = 1;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        v14 = 0;
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( *(_BYTE *)(v7 + 25) || *a3 < *(_DWORD *)(v7 + 32) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      std::_Throw_tree_length_error();
    v15 = a3;
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>,void *>>>(
           v12,
           (__int64)a1,
           v5,
           a4,
           &v15);
    v10 = v9[1];
    v9[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>,void *>>>(v12);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v13,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
