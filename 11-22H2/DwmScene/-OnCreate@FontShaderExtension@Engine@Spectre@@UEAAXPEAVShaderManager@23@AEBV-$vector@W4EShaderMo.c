/*
 * XREFs of ?OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F7A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180017CDC (--4-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spectre@@@std@@@st.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@@Z @ 0x180044DD0 (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x18004F698 (-CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyLayout@En.c)
 *     ?CreateShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@5@@Z @ 0x18004F6E0 (-CreateShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spect.c)
 *     ?BeginShaderModel@ShaderFamily@Engine@Spectre@@QEAAXW4EShaderModel@23@@Z @ 0x1800600B8 (-BeginShaderModel@ShaderFamily@Engine@Spectre@@QEAAXW4EShaderModel@23@@Z.c)
 *     ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_K0_N@Z @ 0x1800602F8 (-CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPipeline@En_ea_1800602F8.c)
 *     ?EndDeclaration@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060780 (-EndDeclaration@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 *     ?EndShaderModel@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060900 (-EndShaderModel@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 *     ?SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180061324 (-SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 *     ?SetShaderGroup@ShaderFamily@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18007F2BC (-SetShaderGroup@ShaderFamily@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?AddProperties@ShaderPropertyLayout@Engine@Spectre@@QEAAXQEBUShaderPropertyDefinition@23@IW4EShaderPropertyLinkage@23@@Z @ 0x18008244C (-AddProperties@ShaderPropertyLayout@Engine@Spectre@@QEAAXQEBUShaderPropertyDefinition@23@IW4ESha.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 *     ?SetRenderState@ShaderPipeline@Engine@Spectre@@QEAAXW4BlendMode@23@W4CullMode@23@W4DepthMode@23@W4RenderStateOptions@123@@Z @ 0x180087618 (-SetRenderState@ShaderPipeline@Engine@Spectre@@QEAAXW4BlendMode@23@W4CullMode@23@W4DepthMode@23@.c)
 *     ?SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K0@Z @ 0x180087868 (-SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@s_ea_180087868.c)
 *     ?SetVertexLayout@ShaderPipeline@Engine@Spectre@@QEAAXVVertexLayoutDesc@VertexLayoutBase@23@@Z @ 0x180087BBC (-SetVertexLayout@ShaderPipeline@Engine@Spectre@@QEAAXVVertexLayoutDesc@VertexLayoutBase@23@@Z.c)
 *     ?ColorLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C0D0 (-ColorLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?PositionLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3E0 (-PositionLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?TextureCoord0Layout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C400 (-TextureCoord0Layout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Spectre::Engine::FontShaderExtension::OnCreate(__int64 a1, __int64 a2, int **a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  void **v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  int *v19; // r14
  int *v20; // r15
  __int64 *v21; // rax
  _QWORD *v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // r9
  std::_Ref_count_base *v25; // rbx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r9
  Spectre::Engine::ShaderPropertyLayout *v30; // [rsp+38h] [rbp-C8h] BYREF
  std::_Ref_count_base *v31; // [rsp+40h] [rbp-C0h]
  std::_Ref_count_base *v32[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  std::_Ref_count_base *v34; // [rsp+60h] [rbp-A0h]
  _QWORD v35[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v36[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  char v40[64]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v41[64]; // [rsp+100h] [rbp+0h] BYREF

  v30 = (Spectre::Engine::ShaderPropertyLayout *)v32;
  v6 = std::enable_shared_from_this<Spectre::Engine::Component>::shared_from_this(a1 + 8, v32);
  v7 = std::string::string(v35, (__int64)&Spectre::Engine::FontShaderExtension::kShaderFamilyName);
  v8 = Spectre::Engine::ShaderManager::CreateShaderFamily(a2, &v33, v7, v6);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 56), v8);
  if ( v34 )
    std::_Ref_count_base::_Decref(v34);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = (void **)std::string::string(v35, (__int64)"Font");
  Spectre::Engine::ShaderFamily::SetShaderGroup(v9, v10);
  std::vector<enum Spectre::Engine::EShaderModel>::operator=((_QWORD *)(*(_QWORD *)(a1 + 56) + 528LL), (__int64)a3);
  v12 = Spectre::Engine::VertexLayoutBase::PositionLayout(v11);
  v15 = Spectre::Engine::VertexLayoutBase::TextureCoord0Layout(v14, v13) | v12;
  v18 = Spectre::Engine::VertexLayoutBase::ColorLayout(v17, v16) | v15;
  *(_OWORD *)v32 = 0LL;
  v19 = *a3;
  v20 = a3[1];
  while ( v19 != v20 )
  {
    Spectre::Engine::ShaderFamily::BeginShaderModel(*(_QWORD *)(a1 + 56), *v19);
    v21 = Spectre::Engine::ShaderFamily::CreatePipeline(*(__int64 **)(a1 + 56), &v33, 0LL, 0LL, 1);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v32, v21);
    if ( v34 )
      std::_Ref_count_base::_Decref(v34);
    v22 = std::string::string(v35, (__int64)word_180106082);
    v23 = std::string::string(v36, (__int64)"Font");
    v24 = v22;
    v25 = v32[0];
    Spectre::Engine::ShaderPipeline::SetShaders(v32[0], v23, 0LL, v24);
    Spectre::Engine::ShaderPipeline::SetRenderState(v25, 8LL, 2LL, 0LL, 1);
    LODWORD(v36[0]) = 0;
    v36[1] = v18;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    Spectre::Engine::ShaderPipeline::SetVertexLayout(v25, v36);
    Spectre::Engine::ShaderFamily::EndShaderModel(*(Spectre::Engine::ShaderFamily **)(a1 + 56));
    ++v19;
  }
  Spectre::Engine::ShaderManager::CreatePropertyLayout(a2, &v30, 2u);
  v26 = std::string::string(v36, (__int64)&Spectre::Engine::FontShaderExtension::kShader_InvTextureSize);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v40, (__int64)v26, 5);
  v27 = std::string::string(v35, (__int64)&Spectre::Engine::FontShaderExtension::kShader_Texture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v41, (__int64)v27, 8);
  Spectre::Engine::ShaderPropertyLayout::AddProperties(v30, v40, 2LL, 0LL);
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v30);
  v28 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v33,
          &v30);
  Spectre::Engine::ShaderFamily::SetPropertyLayout(v29, v28);
  `eh vector destructor iterator'(
    v40,
    64LL,
    2LL,
    (void (*)(void *))Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition);
  if ( v31 )
    std::_Ref_count_base::_Decref(v31);
  Spectre::Engine::ShaderFamily::EndDeclaration(*(Spectre::Engine::ShaderFamily **)(a1 + 56));
  if ( v32[1] )
    std::_Ref_count_base::_Decref(v32[1]);
}
