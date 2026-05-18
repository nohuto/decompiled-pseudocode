/*
 * XREFs of ?UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z @ 0x180069CB0
 * Callers:
 *     ?PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067590 (-PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FromHSB@Color@Math@Utils@Spectre@@SA?AU1234@MMM@Z @ 0x18001C1C0 (-FromHSB@Color@Math@Utils@Spectre@@SA-AU1234@MMM@Z.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?GetGlobalProperties@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x18004FA88 (-GetGlobalProperties@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engi.c)
 *     ??$GetEnum@W4EGeometryDebugDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAA?AW4EGeometryDebugDisplayMode@Engine@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4342@@Z @ 0x180062AD4 (--$GetEnum@W4EGeometryDebugDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEA.c)
 *     ??$GetEnum@W4EGeometryNormalDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAA?AW4EGeometryNormalDisplayMode@Engine@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4342@@Z @ 0x180062AFC (--$GetEnum@W4EGeometryNormalDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QE.c)
 *     ?ToLinearRGB@Color@Math@Utils@Spectre@@QEBA?AU1234@XZ @ 0x180067DC0 (-ToLinearRGB@Color@Math@Utils@Spectre@@QEBA-AU1234@XZ.c)
 *     ?SetBoolean@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180085368 (-SetBoolean@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetInteger@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z @ 0x180085474 (-SetInteger@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVector4@Math@Utils@3@@Z @ 0x1800859E4 (-SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ViewerEngine::UpdateDebugConstants(
        __m128i *this,
        struct Spectre::Engine::IRenderOutput *a2,
        int a3)
{
  struct Spectre::Utils::IConfigurationManager *Configuration; // rdi
  int v6; // r15d
  int v7; // r13d
  __m128 v8; // xmm6
  int v9; // eax
  char v10; // bl
  float v11; // xmm11_4
  float v12; // xmm9_4
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm14_4
  float v17; // xmm13_4
  char v18; // al
  float v19; // xmm12_4
  int v20; // r12d
  float v21; // xmm15_4
  int v22; // ebx
  double v23; // xmm0_8
  double v24; // xmm0_8
  float v25; // xmm7_4
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  double v29; // xmm0_8
  float v30; // xmm7_4
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  double v34; // xmm0_8
  __int128 v35; // xmm6
  __int128 v36; // xmm0
  struct Spectre::Engine::ShaderManager *ShaderManager; // rax
  __int64 v38; // rbx
  __int128 v39; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v40; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A8h] BYREF
  std::_Ref_count_base *v43; // [rsp+68h] [rbp-A0h]
  float v44; // [rsp+70h] [rbp-98h]
  float v45; // [rsp+74h] [rbp-94h]
  float v46; // [rsp+78h] [rbp-90h]
  float v47; // [rsp+7Ch] [rbp-8Ch]
  float v48; // [rsp+80h] [rbp-88h]
  float v49; // [rsp+84h] [rbp-84h]
  float v50; // [rsp+88h] [rbp-80h]
  float v51; // [rsp+8Ch] [rbp-7Ch]
  __m128 v52; // [rsp+90h] [rbp-78h]
  float v53; // [rsp+1A0h] [rbp+98h]

  Configuration = Spectre::Engine::Engine::GetConfiguration((Spectre::Engine::Engine *)this, a3);
  v6 = Spectre::Utils::IConfigurationManager::GetEnum<enum Spectre::Engine::EGeometryNormalDisplayMode>((__int64)Configuration);
  LODWORD(v41) = v6;
  v7 = Spectre::Utils::IConfigurationManager::GetEnum<enum Spectre::Engine::EGeometryDebugDisplayMode>((__int64)Configuration);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                         + 64LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kRenderer_Grid,
    0LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                         + 64LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kRenderer_CompatibilityGLTFComplianceEnabled,
    0LL);
  v8 = (__m128)_mm_loadu_si128(this + 92);
  v9 = (*(__int64 (__fastcall **)(struct Spectre::Engine::IRenderOutput *))(*(_QWORD *)a2 + 88LL))(a2);
  v52 = _mm_mul_ps(
          v8,
          _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v9), (__m128)COERCE_UNSIGNED_INT((float)v9), 0));
  if ( _mm_movemask_ps(_mm_cmpneq_ps((__m128)Spectre::Utils::Math::Vector4::One, (__m128)this[92])) )
    this[91].m128i_i8[1] = 1;
  else
    v52.m128_i32[1] = 0;
  v10 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                                  + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kRenderer_Textures,
          0LL);
  v11 = FLOAT_1_0;
  if ( v10
    && (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kRenderer_TexturesNormal,
         0LL) )
  {
    v12 = FLOAT_1_0;
  }
  else
  {
    v12 = 0.0;
    if ( !v10 )
      goto LABEL_10;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kRenderer_TexturesDiffuse,
         0LL) )
  {
    v13 = FLOAT_1_0;
    goto LABEL_11;
  }
LABEL_10:
  v13 = 0.0;
  if ( !v10 )
    goto LABEL_13;
LABEL_11:
  if ( !(*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kRenderer_TexturesOpacity,
          0LL) )
  {
LABEL_13:
    v14 = 0.0;
    if ( !v10 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v14 = FLOAT_1_0;
LABEL_14:
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kRenderer_TexturesSpecular,
         0LL) )
  {
    v15 = FLOAT_1_0;
    goto LABEL_17;
  }
LABEL_16:
  v15 = 0.0;
  if ( !v10 )
    goto LABEL_19;
LABEL_17:
  if ( !(*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kRenderer_TexturesEmissive,
          0LL) )
  {
LABEL_19:
    v16 = 0.0;
    if ( !v10 )
      goto LABEL_22;
    goto LABEL_20;
  }
  v16 = FLOAT_1_0;
LABEL_20:
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kRenderer_TexturesOcclusion,
         0LL) )
  {
    v17 = FLOAT_1_0;
    goto LABEL_23;
  }
LABEL_22:
  v17 = 0.0;
  if ( !v10 )
  {
LABEL_30:
    v18 = 1;
    goto LABEL_31;
  }
LABEL_23:
  if ( v12 == 0.0 || v13 == 0.0 || v14 == 0.0 || v15 == 0.0 || v16 == 0.0 || v17 == 0.0 )
    goto LABEL_30;
  v18 = 0;
LABEL_31:
  if ( v7 || v6 != 2 || v18 )
    this[91].m128i_i8[1] = 1;
  v39 = _xmm;
  v40 = _xmm;
  v53 = 0.0;
  v19 = FLOAT_1_0;
  v20 = (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kMaterial_OpacityOverride,
          0LL);
  v21 = 0.0;
  v22 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                                  + 72LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kMaterial_OpacityFresnel,
          0LL);
  if ( (_BYTE)v20 )
  {
    v23 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                           + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kMaterial_Opacity);
    v19 = *(float *)&v23 / 100.0;
    this[91].m128i_i8[1] = 1;
  }
  if ( v22 )
  {
    if ( v22 == 2 )
      v21 = FLOAT_1_0;
    this[91].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kMaterial_DiffuseOverride,
         0LL) )
  {
    v24 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                           + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kMaterial_DiffuseV);
    v25 = *(float *)&v24;
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kMaterial_DiffuseS);
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kMaterial_DiffuseH);
    v28 = Spectre::Utils::Math::Color::FromHSB((__int64)&v42, v26, v27, v25);
    *(_QWORD *)&v39 = *(_QWORD *)v28;
    DWORD2(v39) = *(_DWORD *)(v28 + 8);
    HIDWORD(v39) = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                     Configuration,
                     &Spectre::Engine::ConfigurationProperties::kMaterial_DiffuseOverrideMode);
    this[91].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kMaterial_SpecularOverride,
         0LL) )
  {
    v29 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                           + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kMaterial_SpecularV);
    v30 = *(float *)&v29;
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kMaterial_SpecularS);
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kMaterial_SpecularH);
    v33 = Spectre::Utils::Math::Color::FromHSB((__int64)&v42, v31, v32, v30);
    *(_QWORD *)&v40 = *(_QWORD *)v33;
    DWORD2(v40) = *(_DWORD *)(v33 + 8);
    HIDWORD(v40) = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                     Configuration,
                     &Spectre::Engine::ConfigurationProperties::kMaterial_SpecularOverrideMode);
    this[91].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kMaterial_SmoothnessOverride,
         0LL) )
  {
    v34 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                           + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kMaterial_Smoothness);
    v11 = *(float *)&v34 / 100.0;
    v53 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                          + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kMaterial_SmoothnessOverrideMode);
    this[91].m128i_i8[1] = 1;
  }
  v35 = *(_OWORD *)Spectre::Utils::Math::Color::ToLinearRGB((__int64)&v39, (__int64)&v42);
  v36 = *(_OWORD *)Spectre::Utils::Math::Color::ToLinearRGB((__int64)&v40, (__int64)&v42);
  v40 = v35;
  v39 = v36;
  v44 = v11;
  v45 = v11;
  v46 = v11;
  v47 = v53;
  v48 = v19;
  v49 = (float)v20;
  v50 = v21;
  v51 = (float)(v22 != 0);
  ShaderManager = Spectre::Engine::Engine::GetShaderManager((Spectre::Engine::Engine *)this);
  Spectre::Engine::ShaderManager::GetGlobalProperties((__int64)ShaderManager, &v42);
  v38 = v42;
  Spectre::Engine::ShaderPropertyBlock::SetInteger(v42, &Spectre::Engine::ShaderConstants::kDebug_GeometryNormalMode);
  Spectre::Engine::ShaderPropertyBlock::SetInteger(
    v38,
    &Spectre::Engine::ShaderConstants::kDebug_GeometryDebugDisplayMode);
  Spectre::Engine::ShaderPropertyBlock::SetBoolean(v38);
  Spectre::Engine::ShaderPropertyBlock::SetBoolean(v38);
  Spectre::Engine::ShaderPropertyBlock::SetBoolean(v38);
  Spectre::Engine::ShaderPropertyBlock::SetBoolean(v38);
  Spectre::Engine::ShaderPropertyBlock::SetBoolean(v38);
  Spectre::Engine::ShaderPropertyBlock::SetBoolean(v38);
  Spectre::Engine::ShaderPropertyBlock::SetBoolean(v38);
  Spectre::Engine::ShaderPropertyBlock::SetBoolean(v38);
  Spectre::Engine::ShaderPropertyBlock::SetVector4(v38);
  Spectre::Engine::ShaderPropertyBlock::SetVector4(v38);
  Spectre::Engine::ShaderPropertyBlock::SetVector4(v38);
  Spectre::Engine::ShaderPropertyBlock::SetVector4(v38);
  Spectre::Engine::ShaderPropertyBlock::SetVector4(v38);
  if ( v43 )
    std::_Ref_count_base::_Decref(v43);
}
