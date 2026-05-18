/*
 * XREFs of ?AddBackgroundShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@@Z @ 0x18007CC8C
 * Callers:
 *     ?AddShaderPipelines@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007D290 (-AddShaderPipelines@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@1@@Z @ 0x18004D844 (--$_Erase_head@V-$allocator@U-$_Tree_node@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@.c)
 *     ?GetOptionGroup@ShaderManager@Engine@Spectre@@QEBA_KV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x18004FB58 (-GetOptionGroup@ShaderManager@Engine@Spectre@@QEBA_KV-$set@V-$basic_string@DU-$char_traits@D@std.c)
 *     ??$?0V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@1@@Z @ 0x18005E994 (--$-0V-$allocator@U-$_Tree_node@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@PE.c)
 *     ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_K0_N@Z @ 0x1800602F8 (-CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPipeline@En_ea_1800602F8.c)
 *     ??0?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x180063CA4 (--0-$set@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@U-$less@V-$b_ea_180063CA4.c)
 *     ?SetRenderState@ShaderPipeline@Engine@Spectre@@QEAAXW4BlendMode@23@W4CullMode@23@W4DepthMode@23@W4RenderStateOptions@123@@Z @ 0x180087618 (-SetRenderState@ShaderPipeline@Engine@Spectre@@QEAAXW4BlendMode@23@W4CullMode@23@W4DepthMode@23@.c)
 *     ?SetVertexLayout@ShaderPipeline@Engine@Spectre@@QEAAXVVertexLayoutDesc@VertexLayoutBase@23@@Z @ 0x180087BBC (-SetVertexLayout@ShaderPipeline@Engine@Spectre@@QEAAXVVertexLayoutDesc@VertexLayoutBase@23@@Z.c)
 */

// Hidden C++ exception states: #wind=20
void __fastcall Spectre::Engine::StandardShaderExtension::AddBackgroundShaderPipelines(
        __int64 **this,
        struct Spectre::Engine::ShaderManager *a2)
{
  char v4; // r8
  __int64 OptionGroup; // r15
  char v6; // r8
  __int64 v7; // r12
  char v8; // r8
  __int64 v9; // r13
  char v10; // r8
  __int64 v11; // r14
  char v12; // r8
  __m128i *v13; // rsi
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  __m128i v23; // [rsp+30h] [rbp-D0h] BYREF
  char v24; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v25[2]; // [rsp+48h] [rbp-B8h] BYREF
  void *v26[2]; // [rsp+58h] [rbp-A8h] BYREF
  void *v27[2]; // [rsp+68h] [rbp-98h] BYREF
  void *v28[2]; // [rsp+78h] [rbp-88h] BYREF
  void *v29[2]; // [rsp+88h] [rbp-78h] BYREF
  void *v30[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-58h] BYREF
  std::_Ref_count_base *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h] BYREF
  std::_Ref_count_base *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h] BYREF
  std::_Ref_count_base *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v38; // [rsp+E8h] [rbp-18h]
  __int128 v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp+0h] BYREF
  __int64 v41; // [rsp+108h] [rbp+8h]
  __int64 v42; // [rsp+120h] [rbp+20h] BYREF
  std::_Ref_count_base *v43; // [rsp+128h] [rbp+28h]
  _QWORD v44[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v45[4]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v46[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v47[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v48; // [rsp+1C0h] [rbp+C0h] BYREF

  std::string::string(&v37, (__int64)&Spectre::Engine::ShaderConstants::kOption_Background);
  std::string::string(&v40, (__int64)&Spectre::Engine::ShaderConstants::kOption_AlphaBlend);
  v23.m128i_i64[0] = (__int64)&v37;
  v23.m128i_i64[1] = (__int64)&v42;
  std::set<std::string>::set<std::string>((__int64 *)v30, &v23);
  `eh vector destructor iterator'(
    (char *)&v37,
    32LL,
    2LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::string::string(&v42, (__int64)&Spectre::Engine::ShaderConstants::kOption_Background);
  v23.m128i_i64[0] = (__int64)&v42;
  v23.m128i_i64[1] = (__int64)v44;
  std::set<std::string>::set<std::string>((__int64 *)v29, &v23);
  `eh vector destructor iterator'(
    (char *)&v42,
    32LL,
    1LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::string::string(&v37, (__int64)Spectre::Engine::ShaderConstants::kOption_Diagnostics);
  std::string::string(&v40, (__int64)&Spectre::Engine::ShaderConstants::kOption_Background);
  v23.m128i_i64[0] = (__int64)&v37;
  v23.m128i_i64[1] = (__int64)&v42;
  std::set<std::string>::set<std::string>((__int64 *)v28, &v23);
  `eh vector destructor iterator'(
    (char *)&v37,
    32LL,
    2LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::string::string(v45, (__int64)Spectre::Engine::ShaderConstants::kOption_Diagnostics);
  std::string::string(v46, (__int64)&Spectre::Engine::ShaderConstants::kOption_Background);
  std::string::string(v47, (__int64)&Spectre::Engine::ShaderConstants::kOption_AlphaBlend);
  v23.m128i_i64[0] = (__int64)v45;
  v23.m128i_i64[1] = (__int64)&v48;
  std::set<std::string>::set<std::string>((__int64 *)v27, &v23);
  `eh vector destructor iterator'(
    (char *)v45,
    32LL,
    3LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v23,
    v29,
    v4);
  OptionGroup = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v23);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v23,
    v30,
    v6);
  v7 = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v23);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v23,
    v28,
    v8);
  v9 = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v23);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v23,
    v27,
    v10);
  v11 = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v23);
  *(_OWORD *)v25 = 0LL;
  std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kOption_GLTFMaterial);
  v23.m128i_i64[0] = (__int64)v44;
  v23.m128i_i64[1] = (__int64)v45;
  std::set<std::string>::set<std::string>((__int64 *)v26, &v23);
  `eh vector destructor iterator'(
    (char *)v44,
    32LL,
    1LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v23,
    v26,
    v12);
  v23 = (__m128i)(unsigned __int64)Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v23);
  v13 = &v23;
  do
  {
    v14 = v13->m128i_i64[0];
    v15 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v31, v11 | v13->m128i_i64[0], 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v25, v15);
    if ( v32 )
      std::_Ref_count_base::_Decref(v32);
    v16 = this[14];
    LODWORD(v37) = 0;
    v38 = v16;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v25[0], &v37);
    Spectre::Engine::ShaderPipeline::SetRenderState(v25[0], 1LL, 1LL, 3LL, 1);
    v17 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v33, v9 | v14, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v25, v17);
    if ( v34 )
      std::_Ref_count_base::_Decref(v34);
    v18 = this[14];
    LODWORD(v37) = 0;
    v38 = v18;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v25[0], &v37);
    Spectre::Engine::ShaderPipeline::SetRenderState(v25[0], 0LL, 1LL, 3LL, 1);
    v19 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v35, v7 | v14, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v25, v19);
    if ( v36 )
      std::_Ref_count_base::_Decref(v36);
    v20 = this[14];
    LODWORD(v37) = 0;
    v38 = v20;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v25[0], &v37);
    Spectre::Engine::ShaderPipeline::SetRenderState(v25[0], 1LL, 1LL, 3LL, 1);
    v21 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v42, OptionGroup | v14, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v25, v21);
    if ( v43 )
      std::_Ref_count_base::_Decref(v43);
    v22 = this[14];
    LODWORD(v37) = 0;
    v38 = v22;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v25[0], &v37);
    Spectre::Engine::ShaderPipeline::SetRenderState(v25[0], 0LL, 1LL, 3LL, 1);
    v13 = (__m128i *)((char *)v13 + 8);
  }
  while ( v13 != (__m128i *)&v24 );
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v26,
    (__int64)v26);
  if ( v25[1] )
    std::_Ref_count_base::_Decref(v25[1]);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v27,
    (__int64)v27);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v28,
    (__int64)v28);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v29,
    (__int64)v29);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v30,
    (__int64)v30);
}
