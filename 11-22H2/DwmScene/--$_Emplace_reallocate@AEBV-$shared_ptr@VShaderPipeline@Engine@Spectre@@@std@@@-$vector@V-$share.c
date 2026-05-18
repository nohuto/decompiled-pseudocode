/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x1800983CC
 * Callers:
 *     ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68 (-AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800118B0 (-_Calculate_growth@-$vector@V-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V-$allocator@V-$weak_p.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@0@@Z @ 0x18002FFB8 (--$_Uninitialized_move@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VCamera@Engine@Spectre@@@2@_K1@Z @ 0x180037F1C (-_Change_array@-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@V.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<Spectre::Engine::ShaderPipeline>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::ShaderPipeline> const &>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 size_of; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  char *v13; // rdx
  _QWORD *v14; // r8
  char *v15; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<std::weak_ptr<Spectre::Engine::LoaderBase>>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (_QWORD *)((char *)v11 + ((a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL));
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::Camera> *,std::allocator<std::shared_ptr<Spectre::Engine::Camera>>>(
      v15,
      a2,
      v11);
    v13 = a1[1];
    v14 = v12 + 2;
    v15 = a2;
  }
  std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::Camera> *,std::allocator<std::shared_ptr<Spectre::Engine::Camera>>>(
    v15,
    v13,
    v14);
  std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Change_array((__int64)a1, (__int64)v11, v8, v9);
  return v12;
}
