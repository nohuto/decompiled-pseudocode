/*
 * XREFs of ?GetSerializableProperties@BaseShaderExtension@Engine@Spectre@@UEBA?AV?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@XZ @ 0x18009A3B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@@Z @ 0x180044DD0 (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ??$_Construct_n@PEBUShaderPropertyDefinition@Engine@Spectre@@PEBU123@@?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBUShaderPropertyDefinition@Engine@Spectre@@1@Z @ 0x180098368 (--$_Construct_n@PEBUShaderPropertyDefinition@Engine@Spectre@@PEBU123@@-$vector@UShaderPropertyDe.c)
 *     ?size@?$initializer_list@UShaderPropertyDefinition@Engine@Spectre@@@std@@QEBA_KXZ @ 0x18009BB94 (-size@-$initializer_list@UShaderPropertyDefinition@Engine@Spectre@@@std@@QEBA_KXZ.c)
 */

// Hidden C++ exception states: #wind=12
_QWORD *__fastcall Spectre::Engine::BaseShaderExtension::GetSerializableProperties(__int64 a1, _QWORD *a2)
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
  __int64 v14; // rax
  char *v16; // [rsp+20h] [rbp-E0h] BYREF
  int v17; // [rsp+28h] [rbp-D8h]
  _QWORD *v18; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[3]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v20[4]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[4]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v22[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v23[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v24[4]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v25[4]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v26[4]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v27[4]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v28[4]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v29[4]; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v30[5]; // [rsp+198h] [rbp+98h] BYREF
  char v31[64]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v32[64]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v33[64]; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v34[64]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v35[64]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v36[64]; // [rsp+300h] [rbp+200h] BYREF
  _BYTE v37[64]; // [rsp+340h] [rbp+240h] BYREF
  _BYTE v38[64]; // [rsp+380h] [rbp+280h] BYREF
  _BYTE v39[64]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _BYTE v40[64]; // [rsp+400h] [rbp+300h] BYREF
  _BYTE v41[64]; // [rsp+440h] [rbp+340h] BYREF
  _QWORD v42[2]; // [rsp+480h] [rbp+380h] BYREF

  v19[2] = a2;
  v17 = 0;
  v3 = std::string::string(v20, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_DiffuseTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v31, (__int64)v3, 8);
  v4 = std::string::string(v21, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_DiffuseColor);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v32, (__int64)v4, 6);
  v5 = std::string::string(v22, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_SpecularTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v33, (__int64)v5, 8);
  v6 = std::string::string(v23, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_SpecularColor);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v34, (__int64)v6, 6);
  v7 = std::string::string(v24, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_NormalTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v35, (__int64)v7, 8);
  v8 = std::string::string(v25, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_NormalScale);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v36, (__int64)v8, 5);
  v9 = std::string::string(v26, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_EmissiveTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v37, (__int64)v9, 8);
  v10 = std::string::string(v27, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_EmissiveColor);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v38, (__int64)v10, 6);
  v11 = std::string::string(v28, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_OcclusionTexture);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v39, (__int64)v11, 8);
  v12 = std::string::string(v29, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_OcclusionStrength);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v40, (__int64)v12, 2);
  v13 = std::string::string(v30, (__int64)&Spectre::Engine::ShaderConstants::kMaterial_AlphaMaskCutoff);
  Spectre::Engine::ShaderPropertyDefinition::ShaderPropertyDefinition((__int64)v41, (__int64)v13, 2);
  v19[0] = v31;
  v19[1] = v42;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v18 = v42;
  v16 = v31;
  v14 = std::initializer_list<Spectre::Engine::ShaderPropertyDefinition>::size(v19);
  std::vector<Spectre::Engine::ShaderPropertyDefinition>::_Construct_n<Spectre::Engine::ShaderPropertyDefinition const *,Spectre::Engine::ShaderPropertyDefinition const *>(
    a2,
    v14,
    &v16,
    &v18);
  v17 = 1;
  `eh vector destructor iterator'(
    v31,
    64LL,
    11LL,
    (void (*)(void *))Spectre::Engine::ShaderPropertyDefinition::~ShaderPropertyDefinition);
  return a2;
}
