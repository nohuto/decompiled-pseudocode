/*
 * XREFs of ?DefineMaterialPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180045F78
 * Callers:
 *     ?DefinePropertyLayouts@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007DE20 (-DefinePropertyLayouts@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 *     ?DefinePropertyLayouts@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007FC10 (-DefinePropertyLayouts@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@0@Z @ 0x18001338C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@@Z @ 0x180044DD0 (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@AEBUColor@Math@Utils@2@@Z @ 0x180044E2C (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_180044E2C.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@AEBUVector4@Math@Utils@2@@Z @ 0x180044EDC (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_180044EDC.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@H@Z @ 0x180044F8C (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_180044F8C.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@M@Z @ 0x1800450A0 (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_1800450A0.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@_N@Z @ 0x18004514C (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_18004514C.c)
 *     ?CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x18004F698 (-CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyLayout@En.c)
 *     ?SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180061324 (-SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 *     ?AddProperties@ShaderPropertyLayout@Engine@Spectre@@QEAAXQEBUShaderPropertyDefinition@23@IW4EShaderPropertyLinkage@23@@Z @ 0x18008244C (-AddProperties@ShaderPropertyLayout@Engine@Spectre@@QEAAXQEBUShaderPropertyDefinition@23@IW4ESha.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=32
void __fastcall Spectre::Engine::DefineMaterialPropertyLayout(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // r8
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // r9
  std::_Ref_count_base *v42; // rcx
  _QWORD v43[4]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v44[4]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-98h] BYREF
  Spectre::Engine::ShaderPropertyLayout *v46; // [rsp+78h] [rbp-88h] BYREF
  std::_Ref_count_base *v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  char v49[64]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v50[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v51[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v52[64]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v53[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v54[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v55[64]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v56[64]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v57[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v58[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v59[64]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v60[64]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v61[64]; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v62[64]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _BYTE v63[64]; // [rsp+410h] [rbp+310h] BYREF
  _BYTE v64[64]; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v65[64]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v66[64]; // [rsp+4D0h] [rbp+3D0h] BYREF
  _BYTE v67[64]; // [rsp+510h] [rbp+410h] BYREF
  _BYTE v68[64]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v69[64]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v70[64]; // [rsp+5D0h] [rbp+4D0h] BYREF
  _BYTE v71[64]; // [rsp+610h] [rbp+510h] BYREF
  _BYTE v72[64]; // [rsp+650h] [rbp+550h] BYREF
  _BYTE v73[64]; // [rsp+690h] [rbp+590h] BYREF
  _BYTE v74[64]; // [rsp+6D0h] [rbp+5D0h] BYREF
  _BYTE v75[64]; // [rsp+710h] [rbp+610h] BYREF
  _BYTE v76[64]; // [rsp+750h] [rbp+650h] BYREF
  _BYTE v77[64]; // [rsp+790h] [rbp+690h] BYREF
  _BYTE v78[64]; // [rsp+7D0h] [rbp+6D0h] BYREF

  v48 = a2;
  Spectre::Engine::ShaderManager::CreatePropertyLayout(a1, &v46, 2LL);
  si128 = (__m128i)_xmm;
  v3 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_DiffuseColor);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition(
    (__int64)v49,
    (__int64)v3,
    v4,
    (__int128 *)si128.m128i_i8);
  si128 = (__m128i)_xmm;
  v5 = std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_SpecularColor);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition(
    (__int64)v50,
    (__int64)v5,
    v6,
    (__int128 *)si128.m128i_i8);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_OpacityFresnel);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition(
    (__int64)v51,
    (__int64)v7,
    v8,
    (__int128 *)si128.m128i_i8);
  v9 = std::operator+<char>(
         v44,
         (__int64)&Spectre::Engine::ShaderConstants::kMaterial_DiffuseTexture,
         Spectre::Engine::ShaderConstants::kEnabledSuffix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v52, (__int64)v9);
  v10 = std::operator+<char>(
          v43,
          (__int64)&Spectre::Engine::ShaderConstants::kMaterial_NormalTexture,
          Spectre::Engine::ShaderConstants::kEnabledSuffix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v53, (__int64)v10);
  v11 = std::operator+<char>(
          v44,
          (__int64)&Spectre::Engine::ShaderConstants::kMaterial_SpecularTexture,
          Spectre::Engine::ShaderConstants::kEnabledSuffix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v54, (__int64)v11);
  v12 = std::operator+<char>(
          v43,
          (__int64)&Spectre::Engine::ShaderConstants::kMaterial_EmissiveTexture,
          Spectre::Engine::ShaderConstants::kEnabledSuffix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v55, (__int64)v12);
  v13 = std::operator+<char>(
          v44,
          (__int64)&Spectre::Engine::ShaderConstants::kMaterial_DepthTexture,
          Spectre::Engine::ShaderConstants::kEnabledSuffix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v56, (__int64)v13);
  v14 = std::operator+<char>(
          v43,
          (__int64)&Spectre::Engine::ShaderConstants::kMaterial_OcclusionTexture,
          Spectre::Engine::ShaderConstants::kEnabledSuffix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v57, (__int64)v14);
  v15 = std::operator+<char>(
          v44,
          (__int64)&Spectre::Engine::ShaderConstants::kMaterial_DetailTexture,
          Spectre::Engine::ShaderConstants::kEnabledSuffix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v58, (__int64)v15);
  v16 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_GridOnly);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v59, (__int64)v16, 0);
  v17 = std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_DualSourceBlending);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v60, (__int64)v17, 0);
  v18 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_OcclusionStrength);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v61, (__int64)v18, v19, 1.0);
  v20 = std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_GLTFMaterialType);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v62, (__int64)v20);
  v21 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_AlphaMaskCutoff);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v63, (__int64)v21, v22, 0.5);
  v23 = std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_SpecularControl);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v64, (__int64)v23, 5);
  si128 = 0LL;
  v24 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_EmissiveColor);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition(
    (__int64)v65,
    (__int64)v24,
    v25,
    (__int128 *)si128.m128i_i8);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v26 = std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_NormalScale);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition(
    (__int64)v66,
    (__int64)v26,
    v27,
    (__int128 *)si128.m128i_i8);
  v28 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_TexNormalUseUV1);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v67, (__int64)v28);
  v29 = std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_TexDiffuseUseUV1);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v68, (__int64)v29);
  v30 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_TexSpecularUseUV1);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v69, (__int64)v30);
  v31 = std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_TexEmissiveUseUV1);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v70, (__int64)v31);
  v32 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_TexOcclusionUseUV1);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v71, (__int64)v32);
  v33 = std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_DiffuseTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v72, (__int64)v33, 8);
  v34 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_NormalTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v73, (__int64)v34, 8);
  v35 = std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_SpecularTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v74, (__int64)v35, 8);
  v36 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_EmissiveTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v75, (__int64)v36, 8);
  v37 = std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_OcclusionTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v76, (__int64)v37, 8);
  v38 = std::string::string(v43, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_DepthTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v77, (__int64)v38, 8);
  v39 = std::string::string(v44, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_DetailTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v78, (__int64)v39, 8);
  Spectre::Engine::ShaderPropertyLayout::AddProperties(v46, v49, 30LL, 0LL);
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v46);
  v40 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &si128,
          &v46);
  Spectre::Engine::ShaderFamily::SetPropertyLayout(v41, v40);
  `eh vector destructor iterator'(
    v49,
    64LL,
    30LL,
    (void (*)(void *))Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition);
  if ( v47 )
    std::_Ref_count_base::_Decref(v47);
  v42 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v42 )
    std::_Ref_count_base::_Decref(v42);
}
