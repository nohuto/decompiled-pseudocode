/*
 * XREFs of ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30
 * Callers:
 *     ?PostRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067130 (-PostRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@.c)
 *     ?PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067590 (-PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34 (-GetCamera@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV-$shared_ptr@VS.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?CreateFromAxisAngle@Quaternion@Math@Utils@Spectre@@SA?AU1234@AEBUVector3@234@M@Z @ 0x18003BD60 (-CreateFromAxisAngle@Quaternion@Math@Utils@Spectre@@SA-AU1234@AEBUVector3@234@M@Z.c)
 *     ?SetRenderingModeOverride@Material@Engine@Spectre@@SAXW4ERenderingMode@23@0@Z @ 0x180044860 (-SetRenderingModeOverride@Material@Engine@Spectre@@SAXW4ERenderingMode@23@0@Z.c)
 *     ?GetGlobalProperties@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x18004FA88 (-GetGlobalProperties@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engi.c)
 *     ?GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050224 (-GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spectre@.c)
 *     ?SetGlobalColor@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UColor@Math@Utils@3@@Z @ 0x180050708 (-SetGlobalColor@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ?SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180050764 (-SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetGlobalTextureSampler@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x18005079C (-SetGlobalTextureSampler@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UVector4@Math@Utils@3@@Z @ 0x1800507D4 (-SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?GetRadianceTexture@LightProbe@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180051B58 (-GetRadianceTexture@LightProbe@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std.c)
 *     ?SetEnabled@LightProbe@Engine@Spectre@@QEAAX_N@Z @ 0x180051C04 (-SetEnabled@LightProbe@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D88C (-UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ?SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180061184 (-SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ??$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180062848 (--$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     ??$GetEnum@W4EGeometryDebugDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAA?AW4EGeometryDebugDisplayMode@Engine@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4342@@Z @ 0x180062AD4 (--$GetEnum@W4EGeometryDebugDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEA.c)
 *     Spectre::Engine::GetColorGradingData @ 0x180066AC0 (Spectre--Engine--GetColorGradingData.c)
 *     ?SetEnvironmentLightingOrientation@ViewerEngine@Engine@Spectre@@QEAAXAEBUQuaternion@Math@Utils@3@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180067D40 (-SetEnvironmentLightingOrientation@ViewerEngine@Engine@Spectre@@QEAAXAEBUQuaternion@Math@Utils@3.c)
 *     ?UpdateCameraEffectsDiagnostics@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180068BA0 (-UpdateCameraEffectsDiagnostics@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine.c)
 *     ?UpdateImageProcessingColorCurveConstants@ViewerEngine@Engine@Spectre@@AEAAXUColor@Math@Utils@3@000AEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@8@22@Z @ 0x18006ABE0 (-UpdateImageProcessingColorCurveConstants@ViewerEngine@Engine@Spectre@@AEAAXUColor@Math@Utils@3@.c)
 *     ?UpdateImageProcessingExposureConstants@ViewerEngine@Engine@Spectre@@AEAAXM_NAEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18006AD14 (-UpdateImageProcessingExposureConstants@ViewerEngine@Engine@Spectre@@AEAAXM_NAEAV-$shared_ptr@VS.c)
 *     ?UpdateImageProcessingVignetteConstants@ViewerEngine@Engine@Spectre@@AEAAXMMMMMMMMMMMW4EVignetteBlendMode@23@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@AEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@6@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@333@Z @ 0x18006AD5C (-UpdateImageProcessingVignetteConstants@ViewerEngine@Engine@Spectre@@AEAAXMMMMMMMMMMMW4EVignette.c)
 *     ?SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180085588 (-SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ?SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVector4@Math@Utils@3@@Z @ 0x1800859E4 (-SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?GetVolumeTexture@ColorTransform@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x18008FF6C (-GetVolumeTexture@ColorTransform@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@s.c)
 *     ?GetVolumeTextureSettings@ColorTransform@Engine@Spectre@@QEBA?AUVector4@Math@Utils@3@XZ @ 0x18008FF90 (-GetVolumeTextureSettings@ColorTransform@Engine@Spectre@@QEBA-AUVector4@Math@Utils@3@XZ.c)
 *     ?SetWeight@ColorTransform@Engine@Spectre@@QEAAXM@Z @ 0x180091124 (-SetWeight@ColorTransform@Engine@Spectre@@QEAAXM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall Spectre::Engine::ViewerEngine::UpdatePipelineConstants(
        Spectre::Engine::Engine *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __m128 v4; // xmm0
  __int64 v7; // rsi
  struct Spectre::Utils::IConfigurationManager *Configuration; // r14
  __m128 v9; // xmm13
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 *v13; // rbx
  int v14; // r8d
  __int64 **v15; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  std::_Ref_count_base *v18; // rdi
  __int64 *RadianceTexture; // rax
  char v20; // bl
  std::_Ref_count_base *v21; // r13
  float v22; // xmm12_4
  int v23; // ebx
  int *v24; // rax
  struct Spectre::Engine::ShaderManager *v25; // rdi
  double v26; // xmm0_8
  unsigned int v27; // xmm9_4
  double v28; // xmm0_8
  unsigned int v29; // xmm8_4
  double v30; // xmm0_8
  unsigned int v31; // xmm7_4
  double v32; // xmm0_8
  unsigned int v33; // xmm6_4
  double v34; // xmm0_8
  __int64 v35; // rcx
  double v36; // xmm0_8
  double v37; // xmm0_8
  double v38; // xmm0_8
  double v39; // xmm0_8
  double v40; // xmm0_8
  double v41; // xmm0_8
  double v42; // xmm0_8
  double v43; // xmm0_8
  double v44; // xmm0_8
  float v45; // xmm6_4
  struct Spectre::Engine::ShaderManager *v46; // rax
  char v47; // al
  char v48; // bl
  double v49; // xmm0_8
  __int64 v50; // rcx
  char v51; // bl
  _QWORD *v52; // rax
  _QWORD *v53; // rsi
  int v54; // edi
  _QWORD *v55; // rax
  __int64 v56; // r8
  float *v57; // rbx
  float v58; // xmm14_4
  _QWORD *v59; // rax
  __int64 v60; // r8
  float v61; // xmm13_4
  double v62; // xmm0_8
  int v63; // xmm12_4
  double v64; // xmm0_8
  int v65; // xmm11_4
  double v66; // xmm0_8
  int v67; // xmm10_4
  double v68; // xmm0_8
  int v69; // xmm9_4
  double v70; // xmm0_8
  int v71; // xmm8_4
  double v72; // xmm0_8
  int v73; // xmm7_4
  float v74; // xmm7_4
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  std::_Ref_count_base *v79; // rbx
  std::_Ref_count_base *v80; // rdi
  double v81; // xmm0_8
  float v82; // xmm7_4
  __int64 v83; // rdx
  __int64 v84; // r8
  __int128 v85; // xmm10
  double v86; // xmm0_8
  float v87; // xmm7_4
  __int64 v88; // rdx
  __int64 v89; // r8
  __int128 v90; // xmm9
  double v91; // xmm0_8
  float v92; // xmm7_4
  __int64 v93; // rdx
  __int64 v94; // r8
  __m128 v95; // xmm8
  double v96; // xmm0_8
  float v97; // xmm7_4
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // rcx
  double v101; // xmm0_8
  __int64 v102; // rsi
  struct Spectre::Engine::ShaderManager *v103; // rbx
  int v104; // esi
  unsigned int v105; // eax
  unsigned int v106; // eax
  unsigned int v107; // eax
  unsigned int v108; // eax
  int v109; // [rsp+28h] [rbp-100h]
  std::_Ref_count_base *v110[2]; // [rsp+A8h] [rbp-80h] BYREF
  std::_Ref_count_base *v111[2]; // [rsp+B8h] [rbp-70h] BYREF
  float v112; // [rsp+C8h] [rbp-60h]
  float v113; // [rsp+CCh] [rbp-5Ch]
  __int64 v114; // [rsp+D0h] [rbp-58h] BYREF
  std::_Ref_count_base *v115; // [rsp+D8h] [rbp-50h]
  int v116; // [rsp+E0h] [rbp-48h]
  int v117; // [rsp+E4h] [rbp-44h]
  int v118; // [rsp+E8h] [rbp-40h]
  float v119; // [rsp+ECh] [rbp-3Ch]
  int v120; // [rsp+F0h] [rbp-38h]
  int v121; // [rsp+F4h] [rbp-34h]
  int v122; // [rsp+F8h] [rbp-30h]
  int v123; // [rsp+FCh] [rbp-2Ch]
  int v124; // [rsp+100h] [rbp-28h]
  int v125; // [rsp+104h] [rbp-24h]
  float v126; // [rsp+108h] [rbp-20h]
  std::_Ref_count_base *v127[2]; // [rsp+118h] [rbp-10h] BYREF
  __int64 v128; // [rsp+128h] [rbp+0h]
  struct Spectre::Engine::ShaderManager *ShaderManager; // [rsp+130h] [rbp+8h]
  float v130[4]; // [rsp+138h] [rbp+10h] BYREF
  float *v131; // [rsp+148h] [rbp+20h] BYREF
  std::_Ref_count_base *v132; // [rsp+150h] [rbp+28h]
  std::_Ref_count_base *v133[2]; // [rsp+158h] [rbp+30h] BYREF
  __m128 v134; // [rsp+168h] [rbp+40h] BYREF
  __m128 v135; // [rsp+178h] [rbp+50h] BYREF
  std::_Ref_count_base *v136[2]; // [rsp+188h] [rbp+60h] BYREF
  _QWORD v137[2]; // [rsp+198h] [rbp+70h] BYREF
  float v138[4]; // [rsp+1A8h] [rbp+80h] BYREF
  _QWORD v139[24]; // [rsp+1B8h] [rbp+90h] BYREF

  v7 = 0LL;
  Configuration = Spectre::Engine::Engine::GetConfiguration(this, *(_DWORD *)(*a4 + 112));
  v112 = 0.0;
  v9 = 0LL;
  v10 = 0;
  LOBYTE(v11) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kLighting_DirectEnabled,
         v11) )
  {
    v112 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                           + 88LL))(
             Configuration,
             &Spectre::Engine::ConfigurationProperties::kLighting_DirectIntensity);
  }
  LOBYTE(v12) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentEnabled,
         v12) )
  {
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                               Configuration,
                               &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentIntensity);
    v9 = v4;
  }
  if ( (*(unsigned int (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentIndex,
         0LL) )
  {
    v10 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentIndex,
            0LL);
  }
  *(_OWORD *)v133 = 0LL;
  v128 = Spectre::Engine::Scene::GetCustomData<Spectre::Engine::ViewerEngine::ViewerSceneData>(*a4);
  v13 = **(__int64 ***)(v128 + 104);
  while ( !*((_BYTE *)v13 + 25) )
  {
    Spectre::Engine::LightProbe::SetEnabled((Spectre::Engine::LightProbe *)v13[5], *((_DWORD *)v13 + 8) == v10);
    if ( v14 == v10 )
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)v133, v13 + 5);
    v15 = (__int64 **)v13[2];
    if ( *((_BYTE *)v15 + 25) )
    {
      for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v13 = i;
      v13 = i;
    }
    else
    {
      v13 = (__int64 *)v13[2];
      for ( j = *v15; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v13 = j;
    }
  }
  ShaderManager = Spectre::Engine::Engine::GetShaderManager(this);
  v18 = v133[0];
  if ( v133[0] )
  {
    RadianceTexture = (__int64 *)Spectre::Engine::LightProbe::GetRadianceTexture((__int64)v133[0], &v114);
    v20 = 1;
    v7 = *RadianceTexture;
  }
  else
  {
    v111[1] = 0LL;
    RadianceTexture = (__int64 *)v111;
    v20 = 2;
  }
  v137[0] = v7;
  v21 = (std::_Ref_count_base *)RadianceTexture[1];
  v137[1] = v21;
  *RadianceTexture = 0LL;
  RadianceTexture[1] = 0LL;
  if ( (v20 & 2) != 0 )
  {
    v20 &= ~2u;
    if ( v111[1] )
      std::_Ref_count_base::_Decref(v111[1]);
  }
  if ( (v20 & 1) != 0 && v115 )
    std::_Ref_count_base::_Decref(v115);
  if ( v18 )
    v22 = *((float *)v18 + 132);
  else
    v22 = FLOAT_1_0;
  v23 = 0;
  if ( v7 )
  {
    v24 = *(int **)(v7 + 128);
    if ( v24 )
      v23 = *v24;
  }
  v25 = ShaderManager;
  Spectre::Engine::ShaderManager::SetGlobalTexture(
    (__int64)ShaderManager,
    (__int64)&Spectre::Engine::ShaderConstants::kGlobal_EnvironmentMap_Radiance,
    v137);
  Spectre::Engine::ShaderManager::SetGlobalTextureSampler(
    (__int64)v25,
    (__int64)&Spectre::Engine::ShaderConstants::kGlobal_EnvironmentMap_Radiance,
    (_QWORD *)(v128 + 248));
  v26 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentFilterScale);
  v27 = LODWORD(v26);
  v28 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentFilterOffset);
  v29 = LODWORD(v28);
  v30 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentColorR);
  v31 = LODWORD(v30);
  v32 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentColorG);
  v33 = LODWORD(v32);
  *(float *)&v32 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                     Configuration,
                     &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentColorB);
  v110[0] = (std::_Ref_count_base *)__PAIR64__(v33, v31);
  v110[1] = (std::_Ref_count_base *)(LODWORD(v32) | 0x3F80000000000000LL);
  *(__m128 *)v111 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *(__m128 *)v110);
  Spectre::Engine::ShaderManager::SetGlobalColor((__int64)v25);
  *(float *)v110 = (float)v23;
  *((float *)v110 + 1) = v22;
  v110[1] = (std::_Ref_count_base *)__PAIR64__(v29, v27);
  *(_OWORD *)v111 = *(_OWORD *)v110;
  Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)v25);
  v34 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_EmissiveIntensity);
  v116 = LODWORD(v34);
  *(float *)&v34 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                     Configuration,
                     &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentRotation);
  Spectre::Utils::Math::Quaternion::CreateFromAxisAngle(
    (__int64)v111,
    (union __m128 *)&Spectre::Utils::Math::Vector3::UnitY,
    *(float *)&v34 * 0.017453292);
  Spectre::Engine::ViewerEngine::SetEnvironmentLightingOrientation(
    v35,
    (const struct Spectre::Utils::Math::Quaternion *)v111,
    a4);
  v36 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_BackgroundShadowFalloff);
  v118 = LODWORD(v36);
  v119 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kLighting_BackgroundShadowAmount);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                         + 64LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ToneMappingEnabled,
    0LL);
  v37 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kCamera_Contrast);
  v113 = *(float *)&v37;
  v38 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kDebug_Value);
  v117 = LODWORD(v38);
  v39 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_BackgroundColorR);
  v120 = LODWORD(v39);
  v40 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_BackgroundColorG);
  v121 = LODWORD(v40);
  v41 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_BackgroundColorB);
  v122 = LODWORD(v41);
  v42 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_BackgroundColorAmount);
  v123 = LODWORD(v42);
  v43 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_BackgroundLighting);
  v124 = LODWORD(v43);
  v44 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentDisplay);
  v45 = *(float *)&v44;
  v125 = LODWORD(v44);
  v126 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentDisplayLOD);
  if ( v45 > 0.0 )
    *((_BYTE *)this + 1457) = 1;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                         + 64LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_ReceiverSlopePlaneBiasEnabled,
    0LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                         + 64LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kShader_ForceNormalsForwardEnabled,
    0LL);
  v46 = Spectre::Engine::Engine::GetShaderManager(this);
  Spectre::Engine::ShaderManager::GetGlobalProperties((__int64)v46, v110);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                         + 64LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ExposureValueIsBrightness,
    0LL);
  v48 = v47;
  v49 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kCamera_ExposureValue);
  Spectre::Engine::ViewerEngine::UpdateImageProcessingExposureConstants(
    v50,
    *(float *)&v49,
    v48,
    v110,
    (__int64)&Spectre::Engine::ShaderConstants::kPipeline_CameraExposure);
  v51 = 0;
  if ( (unsigned int)Spectre::Utils::IConfigurationManager::GetEnum<enum Spectre::Engine::EGeometryDebugDisplayMode>((__int64)Configuration) )
  {
    v51 = 1;
    v113 = FLOAT_1_0;
  }
  v52 = std::string::string(v139, (__int64)&Spectre::Engine::ImageProcessingShaderExtension::kShaderFamilyName);
  Spectre::Engine::ShaderManager::GetShaderFamily((__int64)v25, v111, v52);
  if ( v51 )
    v130[0] = 0.0;
  else
    v130[0] = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                              + 88LL))(
                Configuration,
                &Spectre::Engine::ConfigurationProperties::kImageProcessing_VignetteWeight);
  v131 = v138;
  v53 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v138,
          v111);
  v54 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                                  + 72LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kImageProcessing_VignetteBlendMode,
          0LL);
  v55 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v134,
          a4);
  v57 = (float *)*Spectre::Engine::Engine::GetCamera((__int64)this, v127, v56, v55);
  Spectre::Engine::Camera::UpdateAspectRatioAutomatic((Spectre::Engine::Camera *)v57);
  v58 = v57[83];
  v59 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v135,
          a4);
  v61 = *(float *)(*Spectre::Engine::Engine::GetCamera((__int64)this, v136, v60, v59) + 328LL);
  v62 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kImageProcessing_VignetteColorB);
  v63 = LODWORD(v62);
  v64 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kImageProcessing_VignetteColorG);
  v65 = LODWORD(v64);
  v66 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kImageProcessing_VignetteColorR);
  v67 = LODWORD(v66);
  v68 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kImageProcessing_VignetteStretch);
  v69 = LODWORD(v68);
  v70 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kImageProcessing_VignetteCentreY);
  v71 = LODWORD(v70);
  v72 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kImageProcessing_VignetteCentreX);
  v73 = LODWORD(v72);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kRenderer_ResolutionScalingY);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kRenderer_ResolutionScalingX);
  v109 = v73;
  v74 = v130[0];
  Spectre::Engine::ViewerEngine::UpdateImageProcessingVignetteConstants(
    v76,
    v75,
    v77,
    v78,
    v109,
    v71,
    v69,
    v67,
    v65,
    v63,
    v61,
    v58,
    v54,
    (__int64)v53,
    v110);
  if ( v136[1] )
    std::_Ref_count_base::_Decref(v136[1]);
  if ( v127[1] )
    std::_Ref_count_base::_Decref(v127[1]);
  v79 = v111[0];
  Spectre::Engine::ShaderFamily::SetOption(
    (__int64)v111[0],
    Spectre::Engine::ImageProcessingShaderExtension::kOption_Vignette,
    v74 > 0.0);
  Spectre::Engine::ShaderFamily::SetOption(
    (__int64)v79,
    Spectre::Engine::ImageProcessingShaderExtension::kOption_ColorGrading,
    1);
  Spectre::Engine::ShaderFamily::SetOption(
    (__int64)v79,
    Spectre::Engine::ImageProcessingShaderExtension::kOption_ContrastCurve,
    1);
  Spectre::Engine::ShaderFamily::SetOption(
    (__int64)v79,
    Spectre::Engine::ImageProcessingShaderExtension::kOption_GammaEncoding,
    1);
  Spectre::Engine::ShaderFamily::SetOption(
    (__int64)v79,
    Spectre::Engine::ImageProcessingShaderExtension::kOption_ToneMapping,
    1);
  v80 = v110[0];
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v110[0]);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  Spectre::Engine::ShaderPropertyBlock::SetScalar(v80);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kColorGrading_Exposure_Shadows);
  v81 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kColorGrading_Saturation_Shadows);
  v82 = *(float *)&v81;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kColorGrading_ColorFilterDensity_Shadows);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kColorGrading_ColorFilterHue_Shadows);
  v85 = *(_OWORD *)Spectre::Engine::GetColorGradingData(v138, v83, v84, v82);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kColorGrading_Exposure_Midtones);
  v86 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kColorGrading_Saturation_Midtones);
  v87 = *(float *)&v86;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kColorGrading_ColorFilterDensity_Midtones);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kColorGrading_ColorFilterHue_Midtones);
  v90 = *(_OWORD *)Spectre::Engine::GetColorGradingData((float *)&v114, v88, v89, v87);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kColorGrading_Exposure_Highlights);
  v91 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kColorGrading_Saturation_Highlights);
  v92 = *(float *)&v91;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kColorGrading_ColorFilterDensity_Highlights);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kColorGrading_ColorFilterHue_Highlights);
  v95 = *(__m128 *)Spectre::Engine::GetColorGradingData((float *)&v131, v93, v94, v92);
  v96 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                         + 88LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kColorGrading_Saturation_Global);
  v97 = *(float *)&v96;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kColorGrading_ColorFilterDensity_Global);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kColorGrading_ColorFilterHue_Global);
  *(_OWORD *)v127 = v85;
  *(_OWORD *)v136 = v90;
  v135 = v95;
  v134 = *(__m128 *)Spectre::Engine::GetColorGradingData(v130, v98, v99, v97);
  Spectre::Engine::ViewerEngine::UpdateImageProcessingColorCurveConstants(
    v100,
    &v134,
    &v135,
    (__m128 *)v136,
    (__m128 *)v127,
    v110);
  v101 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                          + 88LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kColorGrading_TransformWeight);
  v102 = v128;
  Spectre::Engine::ColorTransform::SetWeight(*(Spectre::Engine::ColorTransform **)(v128 + 120), *(float *)&v101);
  Spectre::Engine::ColorTransform::GetVolumeTexture(*(_QWORD *)(v102 + 120), &v131);
  Spectre::Engine::ColorTransform::GetVolumeTextureSettings(*(_QWORD *)(v102 + 120), v127);
  v103 = ShaderManager;
  Spectre::Engine::ShaderManager::SetGlobalTexture(
    (__int64)ShaderManager,
    (__int64)&Spectre::Engine::ImageProcessingShaderExtension::kShader_ColorTransformVolumeTexture,
    &v131);
  Spectre::Engine::ShaderManager::SetGlobalTextureSampler(
    (__int64)v103,
    (__int64)&Spectre::Engine::ImageProcessingShaderExtension::kShader_ColorTransformVolumeTexture,
    (_QWORD *)(v102 + 232));
  Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)v103);
  LODWORD(v103) = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
                    Configuration,
                    &Spectre::Engine::ConfigurationProperties::kRenderer_CompatibilityStandard,
                    0LL);
  v104 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kRenderer_CompatibilitySmoothnessMode,
           0LL);
  v105 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kRenderer_RendereringModeOverride_Opaque,
           0LL);
  Spectre::Engine::Material::SetRenderingModeOverride(0, v105);
  v106 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 72LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kRenderer_RendereringModeOverride_Mask,
           1LL);
  Spectre::Engine::Material::SetRenderingModeOverride(1, v106);
  v107 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 72LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kRenderer_RendereringModeOverride_MaskBlend,
           2LL);
  Spectre::Engine::Material::SetRenderingModeOverride(2, v107);
  v108 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 72LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kRenderer_RendereringModeOverride_Blend,
           3LL);
  Spectre::Engine::Material::SetRenderingModeOverride(3, v108);
  *(float *)&v114 = (float)(int)v103;
  *((float *)&v114 + 1) = (float)v104;
  v115 = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetVector4(v80);
  if ( (_DWORD)v103 || v104 )
    *((_BYTE *)this + 1457) = 1;
  Spectre::Engine::ViewerEngine::UpdateCameraEffectsDiagnostics(this, (__int64)a4);
  if ( v132 )
    std::_Ref_count_base::_Decref(v132);
  if ( v111[1] )
    std::_Ref_count_base::_Decref(v111[1]);
  if ( v110[1] )
    std::_Ref_count_base::_Decref(v110[1]);
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  if ( v133[1] )
    std::_Ref_count_base::_Decref(v133[1]);
}
