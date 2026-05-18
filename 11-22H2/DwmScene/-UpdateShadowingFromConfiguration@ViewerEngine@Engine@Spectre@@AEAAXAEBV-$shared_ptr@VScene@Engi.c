/*
 * XREFs of ?UpdateShadowingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006DDB4
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180067850 (-PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?SetFarClip@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D18C (-SetFarClip@Camera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetFieldOfView@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D1BC (-SetFieldOfView@Camera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetNearClip@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D268 (-SetNearClip@Camera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetOrthographicSize@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D2BC (-SetOrthographicSize@Camera@Engine@Spectre@@QEAAXM@Z.c)
 *     ??$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180062848 (--$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     ?SetBias@ShadowMapCamera@Engine@Spectre@@QEAAXM@Z @ 0x18008EC08 (-SetBias@ShadowMapCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetBlurEnabled@ShadowMapCamera@Engine@Spectre@@QEAAX_N@Z @ 0x18008EC18 (-SetBlurEnabled@ShadowMapCamera@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?SetBufferSize@ShadowMapCamera@Engine@Spectre@@QEAAXI@Z @ 0x18008EC28 (-SetBufferSize@ShadowMapCamera@Engine@Spectre@@QEAAXI@Z.c)
 *     ?SetCalculateNearFarClipEnabled@ShadowMapCamera@Engine@Spectre@@QEAAX_N@Z @ 0x18008EC50 (-SetCalculateNearFarClipEnabled@ShadowMapCamera@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?SetFrustumEdgeFalloff@ShadowMapCamera@Engine@Spectre@@QEAAXM@Z @ 0x18008EC60 (-SetFrustumEdgeFalloff@ShadowMapCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetZDirection@ShadowMapCamera@Engine@Spectre@@QEAAXW4ZDirection@123@@Z @ 0x18008ECAC (-SetZDirection@ShadowMapCamera@Engine@Spectre@@QEAAXW4ZDirection@123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ViewerEngine::UpdateShadowingFromConfiguration(
        Spectre::Engine::Engine *a1,
        __int64 *a2)
{
  struct Spectre::Utils::IConfigurationManager *Configuration; // r15
  int v4; // xmm12_4
  int v5; // xmm13_4
  int v6; // xmm14_4
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm0_8
  __int64 v10; // rdi
  _UNKNOWN **v11; // rbx
  std::_Ref_count_base **v12; // r12
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rdx
  char v16; // al
  char v17; // r14
  double v18; // xmm0_8
  float v19; // xmm11_4
  double v20; // xmm0_8
  float v21; // xmm9_4
  double v22; // xmm0_8
  float v23; // xmm8_4
  char v24; // bp
  bool v25; // al
  bool v26; // si
  double v27; // xmm0_8
  float v28; // xmm7_4
  int v29; // edi
  int v30; // eax
  int v31; // ebx
  double v32; // xmm0_8
  int v33; // xmm6_4
  Spectre::Engine::Camera *v34; // rcx
  Spectre::Engine::ShadowMapCamera *v35; // rcx
  double v36; // xmm0_8
  double v37; // xmm0_8
  __int64 v38; // [rsp+20h] [rbp-108h]
  std::_Ref_count_base *v39; // [rsp+28h] [rbp-100h]
  __int64 v40; // [rsp+30h] [rbp-F8h]
  __int64 v41; // [rsp+38h] [rbp-F0h] BYREF
  std::_Ref_count_base *v42; // [rsp+40h] [rbp-E8h]
  _QWORD v43[3]; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v44; // [rsp+138h] [rbp+10h]
  _UNKNOWN **v45; // [rsp+140h] [rbp+18h]
  __int64 v46; // [rsp+148h] [rbp+20h]

  Configuration = Spectre::Engine::Engine::GetConfiguration(a1, *(_DWORD *)(*a2 + 112));
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kLighting_ShadowBiasingMasterToggle,
         0LL) )
  {
    v7 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                          + 88LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kLighting_ShadowBufferCreationDepthBias);
    v4 = LODWORD(v7);
    v8 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                          + 88LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kLighting_ShadowBufferCreationSlopedDepthBias);
    v5 = LODWORD(v8);
    v9 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                          + 88LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kLighting_ShadowBufferCreationDepthBiasClamp);
    v6 = LODWORD(v9);
  }
  v44 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                                  + 72LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kLighting_ShadowZDirection,
          0LL);
  v40 = Spectre::Engine::Scene::GetCustomData<Spectre::Engine::ViewerEngine::ViewerSceneData>(*a2);
  v10 = 0LL;
  v46 = 0LL;
  v11 = &off_1801C8890;
  v45 = &off_1801C8890;
  v12 = (std::_Ref_count_base **)(v40 + 144);
  v13 = 3LL;
  v38 = 3LL;
  do
  {
    if ( *v12 )
      _InterlockedIncrement((volatile signed __int32 *)*v12 + 2);
    v14 = (__int64)*(v12 - 1);
    v43[0] = v14;
    v39 = *v12;
    v43[1] = *v12;
    if ( std::operator!=<Spectre::Engine::Scene>(v43) )
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v41,
        (_QWORD *)(v10 + v15 + 8));
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, _QWORD, _QWORD))(*(_QWORD *)Configuration
                                                                                             + 64LL))(
        Configuration,
        *(v11 - 2),
        0LL);
      v17 = v16;
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, _QWORD))(*(_QWORD *)Configuration + 88LL))(
        Configuration,
        *(v11 - 1));
      v18 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, _QWORD))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              *v11);
      v19 = *(float *)&v18;
      v20 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v11[3]);
      v21 = *(float *)&v20;
      v22 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v11[4]);
      v23 = *(float *)&v22;
      v24 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
              Configuration,
              v11[2],
              0LL);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                             + 64LL))(
        Configuration,
        v11[5],
        0LL);
      v26 = v25;
      v27 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v11[6]);
      v28 = *(float *)&v27;
      v29 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
              Configuration,
              v11[8],
              0LL);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration
                                                                                             + 72LL))(
        Configuration,
        v11[9],
        0LL);
      v31 = v30;
      v32 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              v45[10]);
      v33 = LODWORD(v32);
      *(float *)&v32 = _o_roundf();
      Spectre::Engine::ShadowMapCamera::SetBufferSize((Spectre::Engine::ShadowMapCamera *)v14, (int)*(float *)&v32);
      Spectre::Engine::ShadowMapCamera::SetZDirection(v14, v44);
      *(_BYTE *)(v14 + 72) = v17;
      Spectre::Engine::Camera::SetOrthographicSize((Spectre::Engine::Camera *)v14, v19);
      Spectre::Engine::ShadowMapCamera::SetCalculateNearFarClipEnabled((Spectre::Engine::ShadowMapCamera *)v14, v24);
      Spectre::Engine::Camera::SetNearClip(v34, v21);
      Spectre::Engine::Camera::SetFarClip((Spectre::Engine::Camera *)v14, v23);
      Spectre::Engine::ShadowMapCamera::SetBlurEnabled((Spectre::Engine::ShadowMapCamera *)v14, v26);
      Spectre::Engine::ShadowMapCamera::SetBias(v35, v28);
      *(_DWORD *)(v14 + 1960) = v29;
      *(_DWORD *)(v14 + 1964) = v31;
      *(_DWORD *)(v14 + 1968) = v33;
      if ( std::operator!=<Spectre::Engine::Scene>(&v41) && *(_DWORD *)(v41 + 120) == 1 )
      {
        Spectre::Engine::Camera::SetFieldOfView((Spectre::Engine::Camera *)v14, *(float *)(v41 + 112));
        Spectre::Engine::ShadowMapCamera::SetFrustumEdgeFalloff((Spectre::Engine::ShadowMapCamera *)v14, 0.0);
        v11 = v45;
      }
      else
      {
        v11 = v45;
        v36 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                               + 88LL))(
                Configuration,
                v45[1]);
        Spectre::Engine::Camera::SetFieldOfView((Spectre::Engine::Camera *)v14, *(float *)&v36);
        v37 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                               + 88LL))(
                Configuration,
                v45[7]);
        Spectre::Engine::ShadowMapCamera::SetFrustumEdgeFalloff((Spectre::Engine::ShadowMapCamera *)v14, *(float *)&v37);
      }
      *(_DWORD *)(v14 + 400) = v4;
      *(_DWORD *)(v14 + 404) = v5;
      *(_DWORD *)(v14 + 408) = v6;
      if ( v42 )
        std::_Ref_count_base::_Decref(v42);
      v13 = v38;
      v10 = v46;
    }
    if ( v39 )
      std::_Ref_count_base::_Decref(v39);
    v10 += 16LL;
    v46 = v10;
    v12 += 2;
    v11 += 13;
    v45 = v11;
    v38 = --v13;
  }
  while ( v13 );
}
