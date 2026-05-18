/*
 * XREFs of ?UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@_N1@Z @ 0x18006B874
 * Callers:
 *     ?ApplyModelTransformFromConfiguration@ViewerEngine@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064DC0 (-ApplyModelTransformFromConfiguration@ViewerEngine@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VScene@.c)
 *     ?UpdateCameraFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@5@@Z @ 0x180068DE8 (-UpdateCameraFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ??$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VBounds@Engine@Spectre@@@std@@XZ @ 0x180013E14 (--$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VBounds@E.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetForegroundModel@ViewerEngine@Engine@Spectre@@IEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x180066C20 (-GetForegroundModel@ViewerEngine@Engine@Spectre@@IEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@.c)
 *     ?SetFramingPosition@ViewerCamera@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180093040 (-SetFramingPosition@ViewerCamera@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?SetFramingRadius@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180093064 (-SetFramingRadius@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ViewerEngine::UpdateModelFromCameraConfiguration(
        Spectre::Engine::Engine *this,
        Spectre::Engine::ViewerCamera **a2,
        char a3,
        char a4)
{
  struct Spectre::Utils::IConfigurationManager *Configuration; // rdi
  float v9; // xmm6_4
  __int64 v10; // rcx
  float v11; // xmm2_4
  int v12; // xmm1_4
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  __m128 v15; // xmm0
  float v16; // xmm7_4
  Spectre::Engine::ViewerCamera *v17; // rbx
  float v18; // xmm0_4
  Spectre::Engine::ViewerCamera *v19; // rbx
  float v20; // xmm0_4
  __int64 v21; // [rsp+20h] [rbp-60h] BYREF
  std::_Ref_count_base *v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v24; // [rsp+38h] [rbp-48h]
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v26; // [rsp+48h] [rbp-38h]
  Spectre::Engine::SceneNode *v27; // [rsp+50h] [rbp-30h] BYREF
  std::_Ref_count_base *v28; // [rsp+58h] [rbp-28h]

  if ( *a2 )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)*a2 + 56, &v21);
    Spectre::Engine::SceneNode::GetScene(v21, &v23);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    Configuration = Spectre::Engine::Engine::GetConfiguration(this, *(_DWORD *)(v23 + 112));
    v21 = 0x3F8000003F800000LL;
    LODWORD(v22) = 1065353216;
    v9 = 0.0;
    Spectre::Engine::ViewerEngine::GetForegroundModel(v10, &v27, &v23);
    if ( v27 )
    {
      Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Bounds>(v27, &v25);
      if ( v25 )
      {
        v11 = *(float *)(v25 + 104);
        v9 = v11 + v11;
        v12 = *(_DWORD *)(v25 + 108);
        LODWORD(v21) = *(_DWORD *)(v25 + 100);
        *((float *)&v21 + 1) = v11;
        LODWORD(v22) = v12;
      }
      if ( v26 )
        std::_Ref_count_base::_Decref(v26);
    }
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    v13 = _mm_movelh_ps((__m128)(unsigned __int64)v21, (__m128)(unsigned int)v22);
    v14 = _mm_mul_ps(v13, v13);
    v15 = _mm_shuffle_ps(v14, v14, 102);
    v14.m128_f32[0] = (float)(v14.m128_f32[0] + v15.m128_f32[0]) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
    LODWORD(v16) = _mm_sqrt_ps(_mm_shuffle_ps(v14, v14, 0)).m128_u32[0];
    if ( a3 )
    {
      v17 = *a2;
      v18 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                            + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kCamera_FramingPositionY);
      LODWORD(v21) = 0;
      *((float *)&v21 + 1) = v18 * v9;
      LODWORD(v22) = 0;
      Spectre::Engine::ViewerCamera::SetFramingPosition(v17, &v21);
    }
    if ( a4 )
    {
      v19 = *a2;
      v20 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                            + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kCamera_FramingRadius);
      Spectre::Engine::ViewerCamera::SetFramingRadius(v19, v20 * v16);
    }
    if ( v24 )
      std::_Ref_count_base::_Decref(v24);
  }
}
