/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18001207C
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_38672d4837fba783512361a26dc8aa1f_@@XAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@std@@EEAAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@2@@Z @ 0x1800131D0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_38672d4837fba783512361a26dc8aa1f_@@XAEBV-$shared_ptr@$$.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_7184ac0b1d10aa8b036768733263c113_@@XAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@std@@EEAAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@2@@Z @ 0x18007E630 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_7184ac0b1d10aa8b036768733263c113_@@XAEBV-$shared_ptr@$$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x180012228 (--$_Uninitialized_move@PEAV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V-$allocator@V-$sha.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@2@_K1@Z @ 0x18001306C (-_Change_array@-$vector@V-$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V-$allocator@V-$share.c)
 */

char *__fastcall std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::LightProbe> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  char *v14; // r14
  char *v15; // rsi
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v15 = v13;
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::IRenderOutput> *,std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(
      v18,
      a2,
      v15);
    v16 = a1[1];
    v17 = v14 + 16;
    v18 = a2;
  }
  std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::IRenderOutput> *,std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(
    v18,
    v16,
    v17);
  std::vector<std::shared_ptr<Spectre::Utils::Tweening::Tween>>::_Change_array(a1, v15, v9, v3);
  return v14;
}
