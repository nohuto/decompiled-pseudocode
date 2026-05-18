/*
 * XREFs of ?DefineVolumePropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180046A68
 * Callers:
 *     ?DefinePropertyLayouts@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007DE20 (-DefinePropertyLayouts@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$SetPropertyDefault@M@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@12@M@Z @ 0x180044BA4 (--$SetPropertyDefault@M@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@12@M@Z.c)
 *     ??$SetPropertyDefault@UVector4@Math@Utils@Spectre@@@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@12@UVector4@Math@Utils@2@@Z @ 0x180044BC8 (--$SetPropertyDefault@UVector4@Math@Utils@Spectre@@@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@@Z @ 0x180044DD0 (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ??1ShaderPropertyDefinition@Engine@Spectre@@QEAA@XZ @ 0x1800451F0 (--1ShaderPropertyDefinition@Engine@Spectre@@QEAA@XZ.c)
 *     ?CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x18004F698 (-CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyLayout@En.c)
 *     ?SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180061324 (-SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 *     ?AddProperties@ShaderPropertyLayout@Engine@Spectre@@QEAAXQEBUShaderPropertyDefinition@23@IW4EShaderPropertyLinkage@23@@Z @ 0x18008244C (-AddProperties@ShaderPropertyLayout@Engine@Spectre@@QEAAXQEBUShaderPropertyDefinition@23@IW4ESha.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 *     ?FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C58 (-FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@.c)
 *     ?SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@23@I@Z @ 0x180083864 (-SetTexturePropertySlot@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@23@I@Z.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall Spectre::Engine::DefineVolumePropertyLayout(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  Spectre::Engine::ShaderPropertyLayout *v15; // rbx
  _QWORD *v16; // rax
  Spectre::Engine::ShaderPropertyLayout *v17; // rbx
  _QWORD *v18; // rax
  Spectre::Engine::ShaderPropertyLayout *v19; // rbx
  _QWORD *v20; // rax
  Spectre::Engine::ShaderPropertyLayout *v21; // rbx
  _QWORD *v22; // rax
  Spectre::Engine::ShaderPropertyLayout *v23; // rbx
  _QWORD *v24; // rax
  Spectre::Engine::ShaderPropertyLayout *v25; // rbx
  _QWORD *v26; // rax
  Spectre::Engine::ShaderPropertyLayout *v27; // rbx
  _QWORD *v28; // rax
  Spectre::Engine::ShaderPropertyLayout *v29; // rbx
  _QWORD *v30; // rax
  Spectre::Engine::ShaderPropertyLayout *v31; // rbx
  _QWORD *v32; // rax
  unsigned __int16 v33; // r14
  Spectre::Engine::ShaderPropertyLayout *v34; // rbx
  _QWORD *v35; // rax
  unsigned __int16 v36; // si
  Spectre::Engine::ShaderPropertyLayout *v37; // rbx
  _QWORD *v38; // rax
  unsigned __int16 v39; // di
  Spectre::Engine::ShaderPropertyLayout *v40; // rbx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // r9
  std::_Ref_count_base *v44; // rcx
  Spectre::Engine::ShaderPropertyLayout *v45; // [rsp+20h] [rbp-E0h] BYREF
  std::_Ref_count_base *v46; // [rsp+28h] [rbp-D8h]
  _QWORD v47[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v48[6]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v49[8]; // [rsp+70h] [rbp-90h] BYREF
  char v50[64]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v51[64]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v52[64]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v53[64]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v54[64]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v55[64]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v56[64]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v57[64]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v58[64]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v59[64]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v60[64]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v61[64]; // [rsp+370h] [rbp+270h] BYREF

  v48[4] = a2;
  Spectre::Engine::ShaderManager::CreatePropertyLayout(a1, &v45, 7LL);
  v3 = std::string::string(v49, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_WorldMatrix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v50, (__int64)v3, 7);
  v4 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_WorldMatrixInverseTranspose);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v51, (__int64)v4, 7);
  v5 = std::string::string(v49, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_TreeDimensions);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v52, (__int64)v5, 5);
  v6 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_SurfaceDimensions);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v53, (__int64)v6, 5);
  v7 = std::string::string(v49, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_MinBounds);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v54, (__int64)v7, 5);
  v8 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_MaxBounds);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v55, (__int64)v8, 5);
  v9 = std::string::string(v49, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_InvSize);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v56, (__int64)v9, 5);
  v10 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_BindMatrix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v57, (__int64)v10, 7);
  v11 = std::string::string(v49, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_DecalProj);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v58, (__int64)v11, 7);
  v12 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_DecalVector);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v59, (__int64)v12, 5);
  v13 = std::string::string(v49, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_DecalColor);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v60, (__int64)v13, 6);
  v14 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_BaseColor);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v61, (__int64)v14, 6);
  Spectre::Engine::ShaderPropertyLayout::AddProperties(v45, v50, 12LL, 0LL);
  v15 = v45;
  v16 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_ZGuidancePlane);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v16, 5);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v15, v49, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  v17 = v45;
  v18 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_ZGuidanceEnabled);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v18, 2);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v17, v49, 1LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  v19 = v45;
  v20 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_OctexEnabled);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v20, 2);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v19, v49, 0LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  v21 = v45;
  v22 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_IsEnvironment);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v22, 2);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v21, v49, 0LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  v23 = v45;
  v24 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_IsDoubleSided);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v24, 2);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v23, v49, 0LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  v25 = v45;
  v26 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_ScratchSpecularColor);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v26, 6);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v25, v49, 0LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  v27 = v45;
  v28 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_DecalMipmapLevel);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v28, 2);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v27, v49, 0LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  v29 = v45;
  v30 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_DecalDiffuseOverride);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v30, 2);
  Spectre::Engine::ShaderPropertyLayout::AddProperty(v29, v49, 0LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  Spectre::Engine::ShaderPropertyLayout::FindProperty(v45, &Spectre::Engine::ShaderConstants::kVolumeOctex_OctexEnabled);
  Spectre::Engine::ShaderPropertyLayout::SetPropertyDefault<float>();
  Spectre::Engine::ShaderPropertyLayout::FindProperty(
    v45,
    &Spectre::Engine::ShaderConstants::kVolumeOctex_ZGuidanceEnabled);
  Spectre::Engine::ShaderPropertyLayout::SetPropertyDefault<float>();
  Spectre::Engine::ShaderPropertyLayout::FindProperty(
    v45,
    &Spectre::Engine::ShaderConstants::kVolumeOctex_ZGuidancePlane);
  v47[0] = _xmm;
  v47[1] = _mm_srli_si128((__m128i)_xmm, 8).m128i_u64[0];
  Spectre::Engine::ShaderPropertyLayout::SetPropertyDefault<Spectre::Utils::Math::Vector4>();
  Spectre::Engine::ShaderPropertyLayout::FindProperty(
    v45,
    &Spectre::Engine::ShaderConstants::kVolumeOctex_IsEnvironment);
  Spectre::Engine::ShaderPropertyLayout::SetPropertyDefault<float>();
  Spectre::Engine::ShaderPropertyLayout::FindProperty(
    v45,
    &Spectre::Engine::ShaderConstants::kVolumeOctex_IsDoubleSided);
  Spectre::Engine::ShaderPropertyLayout::SetPropertyDefault<float>();
  Spectre::Engine::ShaderPropertyLayout::FindProperty(
    v45,
    &Spectre::Engine::ShaderConstants::kVolumeOctex_DecalDiffuseOverride);
  Spectre::Engine::ShaderPropertyLayout::SetPropertyDefault<float>();
  v31 = v45;
  v32 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_DiffuseTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v32, 8);
  v33 = Spectre::Engine::ShaderPropertyLayout::AddProperty(v31, v49, 0LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  v34 = v45;
  v35 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_SpecularTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v35, 8);
  v36 = Spectre::Engine::ShaderPropertyLayout::AddProperty(v34, v49, 0LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  v37 = v45;
  v38 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_ScratchTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v38, 8);
  v39 = Spectre::Engine::ShaderPropertyLayout::AddProperty(v37, v49, 0LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  v40 = v45;
  v41 = std::string::string(v48, (__int64)&Spectre::Engine::ShaderConstants::kVolumeOctex_TreeTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v41, 8);
  LOWORD(v40) = Spectre::Engine::ShaderPropertyLayout::AddProperty(v40, v49, 0LL);
  Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition((Spectre::Engine::ShaderPropertyDefinition *)v49);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v45, v33, 0LL);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v45, v36, 2LL);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v45, v39, 13LL);
  Spectre::Engine::ShaderPropertyLayout::SetTexturePropertySlot(v45, (unsigned __int16)v40, 12LL);
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v45);
  v42 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v47,
          &v45);
  Spectre::Engine::ShaderFamily::SetPropertyLayout(v43, v42);
  `eh vector destructor iterator'(
    v50,
    64LL,
    12LL,
    (void (*)(void *))Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition);
  if ( v46 )
    std::_Ref_count_base::_Decref(v46);
  v44 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v44 )
    std::_Ref_count_base::_Decref(v44);
}
