/*
 * XREFs of ?DefineObjectPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x1800464D4
 * Callers:
 *     ?DefinePropertyLayouts@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007DE20 (-DefinePropertyLayouts@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 *     ?DefinePropertyLayouts@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007FC10 (-DefinePropertyLayouts@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$SetPropertyDefault@UMatrix@Math@Utils@Spectre@@@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4ShaderProperty@12@UMatrix@Math@Utils@2@@Z @ 0x180044BB0 (--$SetPropertyDefault@UMatrix@Math@Utils@Spectre@@@ShaderPropertyLayout@Engine@Spectre@@QEAAXW4S.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@@Z @ 0x180044DD0 (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@AEBUVector4@Math@Utils@2@@Z @ 0x180044EDC (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_180044EDC.c)
 *     ?CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x18004F698 (-CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyLayout@En.c)
 *     ?SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180061324 (-SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 *     ?AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@23@I@Z @ 0x1800820CC (-AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBV-$basic_str.c)
 *     ?AddProperties@ShaderPropertyLayout@Engine@Spectre@@QEAAXQEBUShaderPropertyDefinition@23@IW4EShaderPropertyLinkage@23@@Z @ 0x18008244C (-AddProperties@ShaderPropertyLayout@Engine@Spectre@@QEAAXQEBUShaderPropertyDefinition@23@IW4ESha.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 *     ?FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C58 (-FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall Spectre::Engine::DefineObjectPropertyLayouts(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // r10
  std::_Ref_count_base *v33; // rcx
  Spectre::Engine::ShaderPropertyLayout *v34; // [rsp+20h] [rbp-E0h] BYREF
  std::_Ref_count_base *v35; // [rsp+28h] [rbp-D8h]
  __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v37[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v38[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40; // [rsp+90h] [rbp-70h]
  __int128 v41; // [rsp+A0h] [rbp-60h]
  __int128 v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-40h]
  char v44[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v45[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v46[64]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v47[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v48[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v49[64]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v50[64]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v51[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v52[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v53[64]; // [rsp+310h] [rbp+210h] BYREF

  v43 = a2;
  Spectre::Engine::ShaderManager::CreatePropertyLayout(a1, &v34, 0LL);
  v4 = std::string::string(v37, (__int64)&Spectre::Engine::ShaderConstants::kObject_WorldMatrix);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v44, (__int64)v4, 7);
  v5 = std::string::string(v38, (__int64)&Spectre::Engine::ShaderConstants::kObject_WorldMatrixInverseTranspose);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v45, (__int64)v5, 7);
  v6 = std::string::string(v37, (__int64)&Spectre::Engine::ShaderConstants::kObject_HasUV);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v46, (__int64)v6, 2);
  v7 = std::string::string(v38, (__int64)&Spectre::Engine::ShaderConstants::kObject_HasColor);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v47, (__int64)v7, 2);
  v8 = std::string::string(v37, (__int64)&Spectre::Engine::ShaderConstants::kObject_HasNormal);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v48, (__int64)v8, 2);
  Spectre::Engine::ShaderPropertyLayout::AddProperties(v34, v44, 5LL, 0LL);
  Spectre::Engine::ShaderPropertyLayout::FindProperty(v34, &Spectre::Engine::ShaderConstants::kObject_WorldMatrix);
  v39 = Spectre::Utils::Math::Matrix::Identity;
  v40 = xmmword_180106A40;
  v41 = xmmword_180106A50;
  v42 = xmmword_180106A60;
  Spectre::Engine::ShaderPropertyLayout::SetPropertyDefault<Spectre::Utils::Math::Matrix>();
  Spectre::Engine::ShaderPropertyLayout::FindProperty(
    v34,
    &Spectre::Engine::ShaderConstants::kObject_WorldMatrixInverseTranspose);
  v39 = Spectre::Utils::Math::Matrix::Identity;
  v40 = xmmword_180106A40;
  v41 = xmmword_180106A50;
  v42 = xmmword_180106A60;
  Spectre::Engine::ShaderPropertyLayout::SetPropertyDefault<Spectre::Utils::Math::Matrix>();
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v34);
  v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v36,
         &v34);
  Spectre::Engine::ShaderFamily::SetPropertyLayout(v10, v9);
  `eh vector destructor iterator'(
    v44,
    64LL,
    5LL,
    (void (*)(void *))Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition);
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
  Spectre::Engine::ShaderManager::CreatePropertyLayout(a1, &v34, 9LL);
  Spectre::Engine::ShaderPropertyLayout::AddArrayProperty(
    v34,
    &Spectre::Engine::ShaderConstants::kLighting_LightViewProjectionMatrix_Array,
    7LL,
    3LL);
  v37[0] = 0LL;
  v11 = std::string::string(v38, (__int64)&Spectre::Engine::ShaderConstants::kLighting_IrradianceX);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v44, (__int64)v11, v12, v37);
  v37[0] = 0LL;
  v13 = std::string::string(&v39, (__int64)&Spectre::Engine::ShaderConstants::kLighting_IrradianceY);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v45, (__int64)v13, v14, v37);
  v37[0] = 0LL;
  v15 = std::string::string(v38, (__int64)&Spectre::Engine::ShaderConstants::kLighting_IrradianceZ);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v46, (__int64)v15, v16, v37);
  v37[0] = 0LL;
  v17 = std::string::string(&v39, (__int64)&Spectre::Engine::ShaderConstants::kLighting_IrradianceXX);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v47, (__int64)v17, v18, v37);
  v37[0] = 0LL;
  v19 = std::string::string(v38, (__int64)&Spectre::Engine::ShaderConstants::kLighting_IrradianceYY);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v48, (__int64)v19, v20, v37);
  v37[0] = 0LL;
  v21 = std::string::string(&v39, (__int64)&Spectre::Engine::ShaderConstants::kLighting_IrradianceZZ);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v49, (__int64)v21, v22, v37);
  v37[0] = 0LL;
  v23 = std::string::string(v38, (__int64)&Spectre::Engine::ShaderConstants::kLighting_IrradianceYZ);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v50, (__int64)v23, v24, v37);
  v37[0] = 0LL;
  v25 = std::string::string(&v39, (__int64)&Spectre::Engine::ShaderConstants::kLighting_IrradianceZX);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v51, (__int64)v25, v26, v37);
  v37[0] = 0LL;
  v27 = std::string::string(v38, (__int64)&Spectre::Engine::ShaderConstants::kLighting_IrradianceXY);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v52, (__int64)v27, v28, v37);
  v37[0] = 0LL;
  v29 = std::string::string(&v39, (__int64)&Spectre::Engine::ShaderConstants::kLighting_EnvironmentMapRotation);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v53, (__int64)v29, v30, v37);
  Spectre::Engine::ShaderPropertyLayout::AddProperties(v34, v44, 10LL, 0LL);
  Spectre::Engine::ShaderPropertyLayout::AddArrayProperty(
    v34,
    &Spectre::Engine::ShaderConstants::kLighting_LightPositionRadius_Array,
    5LL,
    3LL);
  Spectre::Engine::ShaderPropertyLayout::AddArrayProperty(
    v34,
    &Spectre::Engine::ShaderConstants::kLighting_LightDirectionSpread_Array,
    5LL,
    3LL);
  Spectre::Engine::ShaderPropertyLayout::AddArrayProperty(
    v34,
    &Spectre::Engine::ShaderConstants::kLighting_LightColorType_Array,
    5LL,
    3LL);
  Spectre::Engine::ShaderPropertyLayout::AddArrayProperty(
    v34,
    &Spectre::Engine::ShaderConstants::kLighting_ShadowMapControlsPerLight,
    5LL,
    3LL);
  Spectre::Engine::ShaderPropertyLayout::AddArrayProperty(
    v34,
    &Spectre::Engine::ShaderConstants::kLighting_ShadowMapControlsPerLight2,
    5LL,
    3LL);
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v34);
  v31 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v37,
          &v34);
  Spectre::Engine::ShaderFamily::SetPropertyLayout(v32, v31);
  `eh vector destructor iterator'(
    v44,
    64LL,
    10LL,
    (void (*)(void *))Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition);
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
  v33 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v33 )
    std::_Ref_count_base::_Decref(v33);
}
