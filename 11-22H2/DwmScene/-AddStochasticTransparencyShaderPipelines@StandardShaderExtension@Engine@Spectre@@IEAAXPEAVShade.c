/*
 * XREFs of ?AddStochasticTransparencyShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@@Z @ 0x18007D3B0
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

// Hidden C++ exception states: #wind=38
void __fastcall Spectre::Engine::StandardShaderExtension::AddStochasticTransparencyShaderPipelines(
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
  char v11; // r8
  char v12; // r8
  char v13; // r8
  __int64 v14; // r14
  char v15; // r8
  char v16; // r8
  std::_Ref_count_base **v17; // rsi
  std::_Ref_count_base *v18; // rbx
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int64 *v26; // rax
  __int64 *v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 *v30; // rax
  __int64 *v31; // rax
  __int64 *v32; // rax
  __int64 *v33; // rax
  __int64 *v34; // rax
  __m128i v35; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  void *v41[2]; // [rsp+78h] [rbp-88h] BYREF
  void *v42[2]; // [rsp+88h] [rbp-78h] BYREF
  void *v43[2]; // [rsp+98h] [rbp-68h] BYREF
  void *v44[2]; // [rsp+A8h] [rbp-58h] BYREF
  void *v45[2]; // [rsp+B8h] [rbp-48h] BYREF
  void *v46[2]; // [rsp+C8h] [rbp-38h] BYREF
  void *v47[2]; // [rsp+D8h] [rbp-28h] BYREF
  void *v48[2]; // [rsp+E8h] [rbp-18h] BYREF
  void *v49[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v50; // [rsp+108h] [rbp+8h] BYREF
  std::_Ref_count_base *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h] BYREF
  std::_Ref_count_base *v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h] BYREF
  std::_Ref_count_base *v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h] BYREF
  std::_Ref_count_base *v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h] BYREF
  std::_Ref_count_base *v59; // [rsp+150h] [rbp+50h]
  __int64 v60; // [rsp+158h] [rbp+58h] BYREF
  std::_Ref_count_base *v61; // [rsp+160h] [rbp+60h]
  __int64 v62; // [rsp+168h] [rbp+68h] BYREF
  std::_Ref_count_base *v63; // [rsp+170h] [rbp+70h]
  __int64 v64; // [rsp+180h] [rbp+80h] BYREF
  __int64 *v65; // [rsp+188h] [rbp+88h]
  __int128 v66; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v68; // [rsp+1A8h] [rbp+A8h]
  _QWORD v69[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v70; // [rsp+1E0h] [rbp+E0h] BYREF
  std::_Ref_count_base *v71; // [rsp+1E8h] [rbp+E8h]
  _QWORD v72[4]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v73[4]; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v74[4]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v75[4]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v76; // [rsp+280h] [rbp+180h] BYREF

  std::string::string(&v70, (__int64)&Spectre::Engine::ShaderConstants::kOption_DepthToColor);
  v35.m128i_i64[0] = (__int64)&v70;
  v35.m128i_i64[1] = (__int64)v72;
  std::set<std::string>::set<std::string>((__int64 *)v49, &v35);
  `eh vector destructor iterator'(
    (char *)&v70,
    32LL,
    1LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::string::string(&v64, (__int64)&Spectre::Engine::ShaderConstants::kOption_DepthToColor);
  std::string::string(&v67, (__int64)&Spectre::Engine::ShaderConstants::kOption_Skinning);
  v35.m128i_i64[0] = (__int64)&v64;
  v35.m128i_i64[1] = (__int64)v69;
  std::set<std::string>::set<std::string>((__int64 *)v48, &v35);
  `eh vector destructor iterator'(
    (char *)&v64,
    32LL,
    2LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::string::string(&v70, (__int64)&Spectre::Engine::ShaderConstants::kOption_StochasticTransparency);
  v35.m128i_i64[0] = (__int64)&v70;
  v35.m128i_i64[1] = (__int64)v72;
  std::set<std::string>::set<std::string>((__int64 *)v47, &v35);
  `eh vector destructor iterator'(
    (char *)&v70,
    32LL,
    1LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::string::string(&v64, (__int64)&Spectre::Engine::ShaderConstants::kOption_DepthToColor);
  std::string::string(&v67, (__int64)&Spectre::Engine::ShaderConstants::kOption_StochasticTransparency);
  v35.m128i_i64[0] = (__int64)&v64;
  v35.m128i_i64[1] = (__int64)v69;
  std::set<std::string>::set<std::string>((__int64 *)v46, &v35);
  `eh vector destructor iterator'(
    (char *)&v64,
    32LL,
    2LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::string::string(v72, (__int64)&Spectre::Engine::ShaderConstants::kOption_DepthToColor);
  std::string::string(v73, (__int64)&Spectre::Engine::ShaderConstants::kOption_AlphaMask);
  v35.m128i_i64[0] = (__int64)v72;
  v35.m128i_i64[1] = (__int64)v74;
  std::set<std::string>::set<std::string>((__int64 *)v45, &v35);
  `eh vector destructor iterator'(
    (char *)v72,
    32LL,
    2LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::string::string(&v64, (__int64)&Spectre::Engine::ShaderConstants::kOption_DepthToColor);
  std::string::string(&v67, (__int64)&Spectre::Engine::ShaderConstants::kOption_StochasticTransparency);
  std::string::string(v69, (__int64)&Spectre::Engine::ShaderConstants::kOption_AlphaBlend);
  v35.m128i_i64[0] = (__int64)&v64;
  v35.m128i_i64[1] = (__int64)&v70;
  std::set<std::string>::set<std::string>((__int64 *)v44, &v35);
  `eh vector destructor iterator'(
    (char *)&v64,
    32LL,
    3LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::string::string(v72, (__int64)&Spectre::Engine::ShaderConstants::kOption_DepthToColor);
  std::string::string(v73, (__int64)&Spectre::Engine::ShaderConstants::kOption_StochasticTransparency);
  std::string::string(v74, (__int64)&Spectre::Engine::ShaderConstants::kOption_AlphaMask);
  std::string::string(v75, (__int64)&Spectre::Engine::ShaderConstants::kOption_AlphaBlend);
  v35.m128i_i64[0] = (__int64)v72;
  v35.m128i_i64[1] = (__int64)&v76;
  std::set<std::string>::set<std::string>((__int64 *)v43, &v35);
  `eh vector destructor iterator'(
    (char *)v72,
    32LL,
    4LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::string::string(&v64, (__int64)&Spectre::Engine::ShaderConstants::kOption_DepthToColor);
  std::string::string(&v67, (__int64)&Spectre::Engine::ShaderConstants::kOption_StochasticTransparency);
  std::string::string(v69, (__int64)&Spectre::Engine::ShaderConstants::kOption_AlphaMask);
  v35.m128i_i64[0] = (__int64)&v64;
  v35.m128i_i64[1] = (__int64)&v70;
  std::set<std::string>::set<std::string>((__int64 *)v42, &v35);
  `eh vector destructor iterator'(
    (char *)&v64,
    32LL,
    3LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v35,
    v49,
    v4);
  OptionGroup = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v35);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v35,
    v48,
    v6);
  v7 = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v35);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v35,
    v47,
    v8);
  v9 = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v35);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v35,
    v46,
    v10);
  v40 = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v35);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v35,
    v45,
    v11);
  v37 = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v35);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v35,
    v44,
    v12);
  v39 = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v35);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v35,
    v43,
    v13);
  v14 = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v35);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v35,
    v42,
    v15);
  v38 = Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v35);
  *(_OWORD *)v36 = 0LL;
  std::string::string(v72, (__int64)&Spectre::Engine::ShaderConstants::kOption_GLTFMaterial);
  v35.m128i_i64[0] = (__int64)v72;
  v35.m128i_i64[1] = (__int64)v73;
  std::set<std::string>::set<std::string>((__int64 *)v41, &v35);
  `eh vector destructor iterator'(
    (char *)v72,
    32LL,
    1LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>(
    &v35,
    v41,
    v16);
  v35 = (__m128i)(unsigned __int64)Spectre::Engine::ShaderManager::GetOptionGroup((__int64)a2, (void **)&v35);
  v17 = (std::_Ref_count_base **)&v35;
  do
  {
    v18 = *v17;
    v19 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v50, v14 | (unsigned __int64)*v17, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v36, v19);
    if ( v51 )
      std::_Ref_count_base::_Decref(v51);
    v20 = this[14];
    LODWORD(v64) = 0;
    v65 = v20;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v36[0], &v64);
    Spectre::Engine::ShaderPipeline::SetRenderState(v36[0], 15LL, 2LL, 1LL, 1);
    v21 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v52, v38 | (unsigned __int64)v18, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v36, v21);
    if ( v53 )
      std::_Ref_count_base::_Decref(v53);
    v22 = this[14];
    LODWORD(v64) = 0;
    v65 = v22;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v36[0], &v64);
    Spectre::Engine::ShaderPipeline::SetRenderState(v36[0], 15LL, 2LL, 1LL, 1);
    v23 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v54, v39 | (unsigned __int64)v18, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v36, v23);
    if ( v55 )
      std::_Ref_count_base::_Decref(v55);
    v24 = this[14];
    LODWORD(v64) = 0;
    v65 = v24;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v36[0], &v64);
    Spectre::Engine::ShaderPipeline::SetRenderState(v36[0], 15LL, 2LL, 1LL, 1);
    v25 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v56, v40 | (unsigned __int64)v18, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v36, v25);
    if ( v57 )
      std::_Ref_count_base::_Decref(v57);
    v26 = this[14];
    LODWORD(v64) = 0;
    v65 = v26;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v36[0], &v64);
    Spectre::Engine::ShaderPipeline::SetRenderState(v36[0], 15LL, 2LL, 1LL, 1);
    v27 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v58, v37 | (unsigned __int64)v18, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v36, v27);
    if ( v59 )
      std::_Ref_count_base::_Decref(v59);
    v28 = this[14];
    LODWORD(v64) = 0;
    v65 = v28;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v36[0], &v64);
    Spectre::Engine::ShaderPipeline::SetRenderState(v36[0], 15LL, 2LL, 3LL, 1);
    v29 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v60, OptionGroup | (unsigned __int64)v18, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v36, v29);
    if ( v61 )
      std::_Ref_count_base::_Decref(v61);
    v30 = this[14];
    LODWORD(v64) = 0;
    v65 = v30;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v36[0], &v64);
    Spectre::Engine::ShaderPipeline::SetRenderState(v36[0], 0LL, 2LL, 3LL, 1);
    v31 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v62, v9 | (unsigned __int64)v18, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v36, v31);
    if ( v63 )
      std::_Ref_count_base::_Decref(v63);
    v32 = this[14];
    LODWORD(v64) = 0;
    v65 = v32;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v36[0], &v64);
    Spectre::Engine::ShaderPipeline::SetRenderState(v36[0], 15LL, 2LL, 1LL, 1);
    v33 = Spectre::Engine::ShaderFamily::CreatePipeline(this[7], &v70, v7 | (unsigned __int64)v18, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v36, v33);
    if ( v71 )
      std::_Ref_count_base::_Decref(v71);
    v34 = this[14];
    LODWORD(v64) = 0;
    v65 = v34;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v36[0], &v64);
    Spectre::Engine::ShaderPipeline::SetRenderState(v36[0], 0LL, 2LL, 3LL, 1);
    ++v17;
  }
  while ( v17 != v36 );
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v41,
    (__int64)v41);
  if ( v36[1] )
    std::_Ref_count_base::_Decref(v36[1]);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v42,
    (__int64)v42);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v43,
    (__int64)v43);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v44,
    (__int64)v44);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v45,
    (__int64)v45);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v46,
    (__int64)v46);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v47,
    (__int64)v47);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v48,
    (__int64)v48);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v49,
    (__int64)v49);
}
