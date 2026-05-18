/*
 * XREFs of ??$_Construct_n@AEBQEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBQEAV12@@?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@AEAAX_KAEBQEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@1@1@Z @ 0x18002E178
 * Callers:
 *     ??0?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180030F18 (--0-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VRender.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x18001203C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YA.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x18003178C (--1-$_Tidy_guard@V-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator@V.c)
 */

void __fastcall std::vector<std::shared_ptr<Spectre::Engine::RenderDevice>>::_Construct_n<std::shared_ptr<Spectre::Engine::RenderDevice> * const &,std::shared_ptr<Spectre::Engine::RenderDevice> * const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD **a3,
        _QWORD *a4)
{
  unsigned __int64 size_of; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // r8
  _QWORD *i; // rdx
  __int64 v13; // rdx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
    size_of = std::_Get_size_of_n<16>(a2);
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v9;
    v10 = v9;
    a1[1] = v9;
    a1[2] = &v9[2 * a2];
    v11 = (_QWORD *)*a4;
    for ( i = *a3; i != v11; i = (_QWORD *)(v13 + 16) )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v10, i);
      v10 += 2;
    }
    std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>((__int64)v10, (__int64)v10);
    v14 = 0LL;
    a1[1] = v10;
    std::_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>::~_Tidy_guard<std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>(&v14);
  }
}
