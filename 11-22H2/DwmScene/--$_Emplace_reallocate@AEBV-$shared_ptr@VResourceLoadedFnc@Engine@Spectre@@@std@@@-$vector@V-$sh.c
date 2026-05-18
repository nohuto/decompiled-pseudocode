/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x180097208
 * Callers:
 *     ??0ResourceData@Engine@Spectre@@QEAA@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@Z @ 0x1800974F0 (--0ResourceData@Engine@Spectre@@QEAA@_KV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@Z.c)
 *     ?Request@ResourceData@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x180097654 (-Request@ResourceData@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800118B0 (-_Calculate_growth@-$vector@V-$weak_ptr@VLoaderBase@Engine@Spectre@@@std@@V-$allocator@V-$weak_p.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x180012228 (--$_Uninitialized_move@PEAV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V-$allocator@V-$sha.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@2@_K1@Z @ 0x18001306C (-_Change_array@-$vector@V-$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V-$allocator@V-$share.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> const &>(
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
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
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
    std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::IRenderOutput> *,std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(
      v15,
      a2,
      v11);
    v13 = a1[1];
    v14 = v12 + 2;
    v15 = a2;
  }
  std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::IRenderOutput> *,std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(
    v15,
    v13,
    v14);
  std::vector<std::shared_ptr<Spectre::Utils::Tweening::Tween>>::_Change_array((__int64)a1, (__int64)v11, v8, v9);
  return v12;
}
