/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4EShaderModel@Engine@Spectre@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4EShaderModel@Engine@Spectre@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18005E8A8
 * Callers:
 *     ??$_Try_emplace@AEBW4EShaderModel@Engine@Spectre@@$$V@?$map@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@U?$less@W4EShaderModel@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@_N@1@AEBW4EShaderModel@Engine@Spectre@@@Z @ 0x18005F2F0 (--$_Try_emplace@AEBW4EShaderModel@Engine@Spectre@@$$V@-$map@W4EShaderModel@Engine@Spectre@@UShad.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD **a5)
{
  char *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = (char *)operator new(0x48uLL);
  a1[1] = v7;
  *((_DWORD *)v7 + 8) = **a5;
  v8 = v7 + 40;
  *(_OWORD *)(v7 + 40) = 0LL;
  *(_OWORD *)(v7 + 56) = 0LL;
  *((_QWORD *)v7 + 5) = 0LL;
  *((_QWORD *)v7 + 6) = 0LL;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v9 = v9;
  v9[1] = v9;
  *v8 = v9;
  v8[2] = 0LL;
  v8[3] = 0LL;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  v8[2] = v10;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
