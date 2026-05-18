/*
 * XREFs of ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30
 * Callers:
 *     ?PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067590 (-PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34 (-GetCamera@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV-$shared_ptr@VS.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?SetAttribute@SceneNode@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z @ 0x18003D348 (-SetAttribute@SceneNode@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z.c)
 *     ?GetProperties@Material@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180044344 (-GetProperties@Material@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyBlock@Engine@Spectre@.c)
 *     ?SetColor@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUColor@Math@Utils@3@@Z @ 0x180044630 (-SetColor@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?SetOption@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044658 (-SetOption@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?SetScalar@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180044878 (-SetScalar@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?SetTexture@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x1800448BC (-SetTexture@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?SetVector4@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVector4@Math@Utils@3@@Z @ 0x180044A9C (-SetVector4@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050224 (-GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spectre@.c)
 *     ?UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D88C (-UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ??$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180062848 (--$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     Spectre::Engine::GetColorGradingData @ 0x180066AC0 (Spectre--Engine--GetColorGradingData.c)
 *     ?UpdateImageProcessingColorCurveConstants@ViewerEngine@Engine@Spectre@@AEAAXUColor@Math@Utils@3@000AEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@8@22@Z @ 0x18006ABE0 (-UpdateImageProcessingColorCurveConstants@ViewerEngine@Engine@Spectre@@AEAAXUColor@Math@Utils@3@.c)
 *     ?UpdateImageProcessingExposureConstants@ViewerEngine@Engine@Spectre@@AEAAXM_NAEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18006AD14 (-UpdateImageProcessingExposureConstants@ViewerEngine@Engine@Spectre@@AEAAXM_NAEAV-$shared_ptr@VS.c)
 *     ?UpdateImageProcessingVignetteConstants@ViewerEngine@Engine@Spectre@@AEAAXMMMMMMMMMMMW4EVignetteBlendMode@23@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@AEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@6@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@333@Z @ 0x18006AD5C (-UpdateImageProcessingVignetteConstants@ViewerEngine@Engine@Spectre@@AEAAXMMMMMMMMMMMW4EVignette.c)
 *     ?CalculateGradientRingParams@BackgroundUnlitShaderExtension@Engine@Spectre@@SAXMMMAEAUVector4@Math@Utils@3@0@Z @ 0x18007FE4C (-CalculateGradientRingParams@BackgroundUnlitShaderExtension@Engine@Spectre@@SAXMMMAEAUVector4@Ma.c)
 *     ?SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180085588 (-SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Spectre::Engine::ViewerEngine::UpdateBackground(
        Spectre::Engine::Engine *this,
        __int64 *a2,
        char a3,
        float a4)
{
  _QWORD *v7; // r15
  Spectre::Engine::SceneNode **v8; // rcx
  __int64 v9; // rcx
  struct Spectre::Utils::IConfigurationManager *Configuration; // r14
  double v11; // xmm0_8
  float v12; // xmm11_4
  double v13; // xmm0_8
  float v14; // xmm10_4
  double v15; // xmm0_8
  float v16; // xmm9_4
  double v17; // xmm0_8
  unsigned int v18; // xmm8_4
  double v19; // xmm0_8
  unsigned int v20; // xmm7_4
  double v21; // xmm0_8
  unsigned int v22; // xmm6_4
  double v23; // xmm0_8
  double v24; // xmm0_8
  float v25; // xmm8_4
  double v26; // xmm0_8
  float v27; // xmm7_4
  double v28; // xmm0_8
  float v29; // xmm6_4
  double v30; // xmm0_8
  double v31; // xmm0_8
  unsigned int v32; // xmm8_4
  double v33; // xmm0_8
  unsigned int v34; // xmm7_4
  double v35; // xmm0_8
  int v36; // xmm6_4
  double v37; // xmm0_8
  double v38; // xmm0_8
  unsigned int v39; // xmm8_4
  double v40; // xmm0_8
  unsigned int v41; // xmm7_4
  double v42; // xmm0_8
  unsigned int v43; // xmm6_4
  __int64 v44; // rcx
  struct Spectre::Engine::ShaderManager *ShaderManager; // rbx
  _QWORD *v46; // rax
  char v47; // al
  int v48; // r8d
  int v49; // edx
  int v50; // ecx
  _QWORD *v51; // rsi
  int v52; // edi
  _QWORD *v53; // rax
  __int64 v54; // r8
  Spectre::Engine::Camera *v55; // rbx
  int v56; // xmm15_4
  _QWORD *v57; // rax
  __int64 v58; // r8
  int v59; // xmm14_4
  double v60; // xmm0_8
  int v61; // xmm13_4
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
  int v72; // edx
  int v73; // ecx
  int v74; // r8d
  int v75; // r9d
  double v76; // xmm0_8
  float v77; // xmm7_4
  __int64 v78; // rdx
  __int64 v79; // r8
  __int128 v80; // xmm10
  double v81; // xmm0_8
  float v82; // xmm7_4
  __int64 v83; // rdx
  __int64 v84; // r8
  __int128 v85; // xmm9
  double v86; // xmm0_8
  float v87; // xmm7_4
  __int64 v88; // rdx
  __int64 v89; // r8
  __int128 v90; // xmm8
  double v91; // xmm0_8
  float v92; // xmm7_4
  __int64 v93; // rdx
  __int64 v94; // r8
  int v95; // ecx
  __int64 v96; // r8
  char v97; // bl
  unsigned __int64 v98; // [rsp+A8h] [rbp-80h] BYREF
  std::_Ref_count_base *v99; // [rsp+B0h] [rbp-78h]
  __int128 v100; // [rsp+B8h] [rbp-70h] BYREF
  float v101[4]; // [rsp+C8h] [rbp-60h] BYREF
  unsigned __int64 v102; // [rsp+D8h] [rbp-50h] BYREF
  int v103; // [rsp+E0h] [rbp-48h]
  int v104; // [rsp+E4h] [rbp-44h]
  __int128 v105; // [rsp+E8h] [rbp-40h] BYREF
  std::_Ref_count_base *v106[2]; // [rsp+F8h] [rbp-30h] BYREF
  std::_Ref_count_base *v107[2]; // [rsp+108h] [rbp-20h] BYREF
  std::_Ref_count_base *v108[2]; // [rsp+118h] [rbp-10h] BYREF
  float v109[8]; // [rsp+128h] [rbp+0h] BYREF
  float v110[44]; // [rsp+148h] [rbp+20h] BYREF

  v7 = (_QWORD *)Spectre::Engine::Scene::GetCustomData<Spectre::Engine::ViewerEngine::ViewerSceneData>(*a2);
  if ( std::operator!=<Spectre::Engine::Scene>(v7 + 25) )
    Spectre::Engine::SceneNode::SetAttribute(*v8, 1, a3);
  v9 = v7[27];
  if ( v9 )
  {
    v98 = 0x3F8000003F800000LL;
    LODWORD(v99) = 1065353216;
    *((float *)&v99 + 1) = a4;
    Spectre::Engine::Material::SetColor(v9);
  }
  Configuration = Spectre::Engine::Engine::GetConfiguration(this, *(_DWORD *)(*a2 + 112));
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kBackground_BackgroundCube_Enabled,
         0LL) )
  {
    if ( v7[39] )
    {
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_ShadowWeight);
      Spectre::Engine::Material::SetScalar(v7[39]);
      v11 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing1Width);
      v12 = *(float *)&v11;
      v13 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing2Width);
      v14 = *(float *)&v13;
      v15 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing3Width);
      v16 = *(float *)&v15;
      v17 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientOriginColorR);
      v18 = LODWORD(v17);
      v19 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientOriginColorG);
      v20 = LODWORD(v19);
      v21 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientOriginColorB);
      v22 = LODWORD(v21);
      v23 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientOriginColorA);
      v98 = __PAIR64__(v20, v18);
      v99 = (std::_Ref_count_base *)__PAIR64__(LODWORD(v23), v22);
      v24 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing1ColorR);
      v25 = *(float *)&v24;
      v26 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing1ColorG);
      v27 = *(float *)&v26;
      v28 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing1ColorB);
      v29 = *(float *)&v28;
      v30 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing1ColorA);
      v101[0] = v25;
      v101[1] = v27;
      v101[2] = v29;
      v101[3] = *(float *)&v30;
      v31 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing2ColorR);
      v32 = LODWORD(v31);
      v33 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing2ColorG);
      v34 = LODWORD(v33);
      v35 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing2ColorB);
      v36 = LODWORD(v35);
      v37 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing2ColorA);
      v102 = __PAIR64__(v34, v32);
      v103 = v36;
      v104 = LODWORD(v37);
      v38 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing3ColorR);
      v39 = LODWORD(v38);
      v40 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing3ColorG);
      v41 = LODWORD(v40);
      v42 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing3ColorB);
      v43 = LODWORD(v42);
      *(float *)&v42 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                         Configuration,
                         &Spectre::Engine::ConfigurationProperties::kBackground_GroundPlane_GradientRing3ColorA);
      *(_QWORD *)&v100 = __PAIR64__(v41, v39);
      *((_QWORD *)&v100 + 1) = __PAIR64__(LODWORD(v42), v43);
      v105 = 0LL;
      *(_OWORD *)v106 = 0LL;
      Spectre::Engine::BackgroundUnlitShaderExtension::CalculateGradientRingParams(
        v12,
        v14,
        v16,
        (struct Spectre::Utils::Math::Vector4 *)&v105,
        (struct Spectre::Utils::Math::Vector4 *)v106);
      Spectre::Engine::Material::SetVector4(v7[39]);
      Spectre::Engine::Material::SetVector4(v7[39]);
      Spectre::Engine::Material::SetColor(v7[39]);
      Spectre::Engine::Material::SetColor(v7[39]);
      Spectre::Engine::Material::SetColor(v7[39]);
      Spectre::Engine::Material::SetColor(v7[39]);
    }
    v44 = v7[37];
    if ( v44 )
    {
      Spectre::Engine::Material::SetTexture(
        v44,
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kMaterial_Texture,
        v7 + 33);
      ShaderManager = Spectre::Engine::Engine::GetShaderManager(this);
      v46 = std::string::string(v109, (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kShaderFamilyName);
      Spectre::Engine::ShaderManager::GetShaderFamily((__int64)ShaderManager, v106, v46);
      Spectre::Engine::Material::GetProperties(v7[37], &v98);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                             + 64LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_Camera_ExposureValueIsBrightness,
        0LL);
      LOBYTE(ShaderManager) = v47;
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_Camera_ExposureValue);
      LOBYTE(v48) = (_BYTE)ShaderManager;
      Spectre::Engine::ViewerEngine::UpdateImageProcessingExposureConstants(
        v50,
        v49,
        v48,
        (unsigned int)&v98,
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kMaterial_CameraExposureLinear);
      v51 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v105,
              v106);
      v52 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ImageProcessing_VignetteBlendMode,
              0LL);
      v53 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v100,
              a2);
      v55 = (Spectre::Engine::Camera *)*Spectre::Engine::Engine::GetCamera((__int64)this, v108, v54, v53);
      Spectre::Engine::Camera::UpdateAspectRatioAutomatic(v55);
      v56 = *((_DWORD *)v55 + 83);
      v57 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v102,
              a2);
      v59 = *(_DWORD *)(*Spectre::Engine::Engine::GetCamera((__int64)this, v107, v58, v57) + 328LL);
      v60 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ImageProcessing_VignetteColorB);
      v61 = LODWORD(v60);
      v62 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ImageProcessing_VignetteColorG);
      v63 = LODWORD(v62);
      v64 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ImageProcessing_VignetteColorR);
      v65 = LODWORD(v64);
      v66 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ImageProcessing_VignetteStretch);
      v67 = LODWORD(v66);
      v68 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ImageProcessing_VignetteCentreY);
      v69 = LODWORD(v68);
      v70 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ImageProcessing_VignetteCentreX);
      v71 = LODWORD(v70);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ImageProcessing_VignetteWeight);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kRenderer_ResolutionScalingY);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kRenderer_ResolutionScalingX);
      Spectre::Engine::ViewerEngine::UpdateImageProcessingVignetteConstants(
        v73,
        v72,
        v74,
        v75,
        v71,
        v69,
        v67,
        v65,
        v63,
        v61,
        v59,
        v56,
        v52,
        (__int64)v51,
        (__int64)&v98,
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kMaterial_VignetteSettings1,
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kMaterial_VignetteSettings2,
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kMaterial_VignetteSettings3,
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kMaterial_VignetteSettings4);
      if ( v107[1] )
        std::_Ref_count_base::_Decref(v107[1]);
      if ( v108[1] )
        std::_Ref_count_base::_Decref(v108[1]);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_Exposure_Shadows);
      v76 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_Saturation_Shadows);
      v77 = *(float *)&v76;
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_ColorFilterDensity_Shadows);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_ColorFilterHue_Shadows);
      v80 = *(_OWORD *)Spectre::Engine::GetColorGradingData((float *)&v102, v78, v79, v77);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_Exposure_Midtones);
      v81 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_Saturation_Midtones);
      v82 = *(float *)&v81;
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_ColorFilterDensity_Midtones);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_ColorFilterHue_Midtones);
      v85 = *(_OWORD *)Spectre::Engine::GetColorGradingData(v101, v83, v84, v82);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_Exposure_Highlights);
      v86 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_Saturation_Highlights);
      v87 = *(float *)&v86;
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_ColorFilterDensity_Highlights);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_ColorFilterHue_Highlights);
      v90 = *(_OWORD *)Spectre::Engine::GetColorGradingData(v110, v88, v89, v87);
      v91 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_Saturation_Global);
      v92 = *(float *)&v91;
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_ColorFilterDensity_Global);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_ColorGrading_ColorFilterHue_Global);
      *(_OWORD *)v108 = v80;
      *(_OWORD *)v107 = v85;
      v105 = v90;
      v100 = *(_OWORD *)Spectre::Engine::GetColorGradingData(v109, v93, v94, v92);
      Spectre::Engine::ViewerEngine::UpdateImageProcessingColorCurveConstants(
        v95,
        (unsigned int)&v100,
        (unsigned int)&v105,
        (unsigned int)v107,
        (__int64)v108,
        (__int64)&v98,
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kMaterial_ColorCurveNeutral,
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kMaterial_ColorCurvePositive,
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kMaterial_ColorCurveNegative);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                             + 64LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_Camera_ToneMappingEnabled,
        0LL);
      Spectre::Engine::ShaderPropertyBlock::SetScalar(v98);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kBackground_Camera_Contrast);
      Spectre::Engine::ShaderPropertyBlock::SetScalar(v98);
      LOBYTE(v96) = 1;
      v97 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 64LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kBackground_ImageProcessing_Enabled,
              v96);
      Spectre::Engine::Material::SetOption(
        v7[37],
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kOption_ColorGrading,
        v97);
      Spectre::Engine::Material::SetOption(
        v7[37],
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kOption_ContrastCurve,
        v97);
      Spectre::Engine::Material::SetOption(
        v7[37],
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kOption_ToneMapping,
        v97);
      Spectre::Engine::Material::SetOption(
        v7[37],
        (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kOption_Vignette,
        v97);
      if ( v99 )
        std::_Ref_count_base::_Decref(v99);
      if ( v106[1] )
        std::_Ref_count_base::_Decref(v106[1]);
    }
  }
}
