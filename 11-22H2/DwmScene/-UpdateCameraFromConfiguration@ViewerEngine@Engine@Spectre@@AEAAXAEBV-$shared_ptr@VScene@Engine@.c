/*
 * XREFs of ?UpdateCameraFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@5@@Z @ 0x180068DE8
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180067850 (-PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180012ED8 (-SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34 (-GetCamera@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV-$shared_ptr@VS.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?SetRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z @ 0x18003D868 (-SetRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?SetFieldOfView@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D1BC (-SetFieldOfView@Camera@Engine@Spectre@@QEAAXM@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180062FB8 (--$count@X@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 *     ??$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VCamera@23@@std@@YA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VCamera@Engine@Spectre@@@0@@Z @ 0x180063140 (--$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VCamera@23@@std@@YA-AV-$shared_ptr@VViewer.c)
 *     ?UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@_N1@Z @ 0x18006B874 (-UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VViewerCa.c)
 *     ?SetAzimuth@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092F50 (-SetAzimuth@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetBehaviour@ViewerCamera@Engine@Spectre@@QEAAXW4EBehaviour@123@@Z @ 0x180092F60 (-SetBehaviour@ViewerCamera@Engine@Spectre@@QEAAXW4EBehaviour@123@@Z.c)
 *     ?SetDefaultElevation@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092F70 (-SetDefaultElevation@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetDistance@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092F80 (-SetDistance@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetElevation@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092F90 (-SetElevation@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetElevationLowerLimit@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092FA0 (-SetElevationLowerLimit@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetElevationReturnTime@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092FD8 (-SetElevationReturnTime@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetElevationReturnWaitTime@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092FE8 (-SetElevationReturnWaitTime@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetElevationUpperLimit@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092FF8 (-SetElevationUpperLimit@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetFramingBehaviour@ViewerCamera@Engine@Spectre@@QEAAXW4EFramingBehaviour@123@@Z @ 0x180093030 (-SetFramingBehaviour@ViewerCamera@Engine@Spectre@@QEAAXW4EFramingBehaviour@123@@Z.c)
 *     ?SetIdleRotationSpeed@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180093074 (-SetIdleRotationSpeed@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetIdleRotationSpinupTime@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180093084 (-SetIdleRotationSpinupTime@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetIdleRotationWaitTime@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180093094 (-SetIdleRotationWaitTime@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetMaxDistance@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x1800930A4 (-SetMaxDistance@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetMinDistance@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x1800930B4 (-SetMinDistance@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?SetZoomShouldStopIdleAnimations@ViewerCamera@Engine@Spectre@@QEAAX_N@Z @ 0x1800930FC (-SetZoomShouldStopIdleAnimations@ViewerCamera@Engine@Spectre@@QEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ViewerEngine::UpdateCameraFromConfiguration(
        Spectre::Engine::Engine *this,
        _QWORD *a2,
        _QWORD *a3)
{
  struct Spectre::Utils::IConfigurationManager *Configuration; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  Spectre::Engine::Camera *v9; // r14
  float v10; // xmm6_4
  bool v11; // r13
  bool v12; // r15
  std::_Ref_count_base *v13; // rsi
  __m128 v14; // xmm2
  double v15; // xmm0_8
  __m128 v16; // xmm4
  __m128 v17; // xmm1
  __m128 v18; // xmm4
  __m128 v19; // xmm4
  __m128 v20; // xmm4
  __m128 v21; // xmm4
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  __m128 v24; // xmm7
  _BOOL8 v25; // rax
  Spectre::Engine::ViewerCamera *v26; // rsi
  double v27; // xmm0_8
  double v28; // xmm0_8
  double v29; // xmm0_8
  double v30; // xmm0_8
  double v31; // xmm0_8
  double v32; // xmm0_8
  double v33; // xmm0_8
  double v34; // xmm0_8
  double v35; // xmm0_8
  double v36; // xmm0_8
  double v37; // xmm0_8
  double v38; // xmm0_8
  double v39; // xmm0_8
  unsigned int v40; // eax
  unsigned int v41; // eax
  char v42; // al
  __int64 v43; // [rsp+28h] [rbp-49h]
  float v44; // [rsp+30h] [rbp-41h]
  __int64 v45; // [rsp+38h] [rbp-39h] BYREF
  std::_Ref_count_base *v46; // [rsp+40h] [rbp-31h]
  __int128 v47; // [rsp+48h] [rbp-29h] BYREF
  std::_Ref_count_base *v48[2]; // [rsp+58h] [rbp-19h] BYREF
  Spectre::Engine::ViewerCamera *v49; // [rsp+68h] [rbp-9h] BYREF
  std::_Ref_count_base *v50; // [rsp+70h] [rbp-1h]
  Spectre::Engine::Camera *v51; // [rsp+78h] [rbp+7h] BYREF
  std::_Ref_count_base *v52; // [rsp+80h] [rbp+Fh]

  if ( a3[2] )
  {
    Configuration = Spectre::Engine::Engine::GetConfiguration(this, *(_DWORD *)(*a2 + 112LL));
    v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v49,
           a2);
    Spectre::Engine::Engine::GetCamera((__int64)this, &v51, v8, v7);
    v9 = v51;
    if ( (*((_DWORD *)v51 + 110) & 0x2000000) != 0 )
    {
      std::dynamic_pointer_cast<Spectre::Engine::ViewerCamera,Spectre::Engine::Camera>((__int64 *)&v49, &v51);
      v43 = 0LL;
      v44 = 0.0;
      v47 = _xmm;
      v10 = 0.0;
      *(_OWORD *)v48 = 0LL;
      v11 = std::operator!=<Spectre::Engine::Scene>(&v51);
      if ( v11 )
      {
        std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)v9 + 56, &v45);
        std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v48, &v45);
        if ( v46 )
          std::_Ref_count_base::_Decref(v46);
        v10 = *((float *)v9 + 82);
      }
      v12 = std::operator!=<Spectre::Engine::Scene>(v48);
      v13 = v48[0];
      if ( v12 )
      {
        Spectre::Engine::SceneNode::VerifyReadAccess(v48[0]);
        v45 = *((_QWORD *)v13 + 18);
        LODWORD(v46) = *((_DWORD *)v13 + 38);
        v43 = v45;
        v44 = *(float *)&v46;
        Spectre::Engine::SceneNode::VerifyReadAccess(v13);
        v14 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v13 + 156));
        LODWORD(v47) = v14.m128_i32[0];
        DWORD1(v47) = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
        DWORD2(v47) = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
        HIDWORD(v47) = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
      }
      if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
             a3,
             (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_PositionX) )
      {
        LODWORD(v43) = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                         Configuration,
                         &Spectre::Engine::ConfigurationProperties::kCamera_PositionX);
      }
      if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
             a3,
             (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_PositionY) )
      {
        HIDWORD(v43) = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                         Configuration,
                         &Spectre::Engine::ConfigurationProperties::kCamera_PositionY);
      }
      if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
             a3,
             (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_PositionZ) )
      {
        v44 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                              + 88LL))(
                Configuration,
                &Spectre::Engine::ConfigurationProperties::kCamera_PositionZ);
      }
      if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
             a3,
             (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_RotationX) )
      {
        LODWORD(v47) = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                         Configuration,
                         &Spectre::Engine::ConfigurationProperties::kCamera_RotationX);
      }
      if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
             a3,
             (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_RotationY) )
      {
        DWORD1(v47) = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                        Configuration,
                        &Spectre::Engine::ConfigurationProperties::kCamera_RotationY);
      }
      if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
             a3,
             (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_RotationZ) )
      {
        DWORD2(v47) = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                        Configuration,
                        &Spectre::Engine::ConfigurationProperties::kCamera_RotationZ);
      }
      if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
             a3,
             (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_RotationW) )
      {
        HIDWORD(v47) = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                         Configuration,
                         &Spectre::Engine::ConfigurationProperties::kCamera_RotationW);
      }
      if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
             a3,
             (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_FieldOfView) )
      {
        v15 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                               + 88LL))(
                Configuration,
                &Spectre::Engine::ConfigurationProperties::kCamera_FieldOfView);
        v10 = *(float *)&v15;
      }
      v16 = _mm_mul_ps((__m128)v47, (__m128)v47);
      v17 = _mm_shuffle_ps(v16, v16, 238);
      v18 = _mm_add_ps(v16, v17);
      v19 = _mm_shuffle_ps(v18, v18, 64);
      v20 = _mm_add_ps(v19, _mm_shuffle_ps(v17, v19, 240));
      v21 = _mm_shuffle_ps(v20, v20, 170);
      v22 = _mm_sqrt_ps(v21);
      v23 = _mm_cmpneq_ps(DirectX::g_XMInfinity, v21);
      v24 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps((__m128)v47, v22), _mm_cmpneq_ps(v22, (__m128)0LL)), v23),
              _mm_andnot_ps(v23, DirectX::g_XMQNaN));
      if ( v11 )
        Spectre::Engine::Camera::SetFieldOfView(v9, v10);
      if ( v12 )
      {
        v45 = v43;
        *(float *)&v46 = v44;
        Spectre::Engine::SceneNode::SetPosition(v13, &v45);
        v47 = (__int128)v24;
        Spectre::Engine::SceneNode::SetRotation(v13, &v47);
      }
      if ( std::operator!=<Spectre::Engine::Scene>(&v49) )
      {
        v25 = std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
                a3,
                (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_DEBehvr_CurrentState_Elevation);
        v26 = v49;
        if ( v25 )
        {
          v27 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_DEBehvr_CurrentState_Elevation);
          Spectre::Engine::ViewerCamera::SetElevation(v26, *(float *)&v27 * 0.017453292);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_DEBehvr_CurrentState_Rotation) )
        {
          v28 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_DEBehvr_CurrentState_Rotation);
          Spectre::Engine::ViewerCamera::SetAzimuth(v26, *(float *)&v28 * 0.017453292);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_DEBehvr_CurrentState_Distance) )
        {
          v29 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_DEBehvr_CurrentState_Distance);
          Spectre::Engine::ViewerCamera::SetDistance(v26, *(float *)&v29);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_ElevationReturnTime) )
        {
          v30 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_ElevationReturnTime);
          Spectre::Engine::ViewerCamera::SetElevationReturnTime(v26, *(float *)&v30);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_ElevationReturnWaitTime) )
        {
          v31 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_ElevationReturnWaitTime);
          Spectre::Engine::ViewerCamera::SetElevationReturnWaitTime(v26, *(float *)&v31);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_ElevationUpperLimit) )
        {
          v32 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_ElevationUpperLimit);
          Spectre::Engine::ViewerCamera::SetElevationUpperLimit(v26, *(float *)&v32 * 0.017453292);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_ElevationLowerLimit) )
        {
          v33 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_ElevationLowerLimit);
          Spectre::Engine::ViewerCamera::SetElevationLowerLimit(v26, *(float *)&v33 * 0.017453292);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_DefaultElevation) )
        {
          v34 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_DefaultElevation);
          Spectre::Engine::ViewerCamera::SetDefaultElevation(v26, *(float *)&v34 * 0.017453292);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationSpeed) )
        {
          v35 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationSpeed);
          Spectre::Engine::ViewerCamera::SetIdleRotationSpeed(v26, *(float *)&v35 * 0.017453292);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationWaitTime) )
        {
          v36 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationWaitTime);
          Spectre::Engine::ViewerCamera::SetIdleRotationWaitTime(v26, *(float *)&v36);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationSpinupTime) )
        {
          v37 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationSpinupTime);
          Spectre::Engine::ViewerCamera::SetIdleRotationSpinupTime(v26, *(float *)&v37);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_MinDistance) )
        {
          v38 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_MinDistance);
          Spectre::Engine::ViewerCamera::SetMinDistance(v26, *(float *)&v38);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_MaxDistance) )
        {
          v39 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                                 + 88LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_MaxDistance);
          Spectre::Engine::ViewerCamera::SetMaxDistance(v26, *(float *)&v39);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_Behaviour) )
        {
          v40 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_Behaviour,
                  0LL);
          Spectre::Engine::ViewerCamera::SetBehaviour(v26, v40);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_FramingBehaviour) )
        {
          v41 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_FramingBehaviour,
                  0LL);
          Spectre::Engine::ViewerCamera::SetFramingBehaviour(v26, v41);
        }
        if ( std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
               a3,
               (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_ZoomStopsAnimations) )
        {
          v42 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
                  Configuration,
                  &Spectre::Engine::ConfigurationProperties::kCamera_ZoomStopsAnimations,
                  0LL);
          Spectre::Engine::ViewerCamera::SetZoomShouldStopIdleAnimations(v26, v42);
        }
        std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
          a3,
          (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_FramingRadius);
        std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::count<void>(
          a3,
          (__int64)&Spectre::Engine::ConfigurationProperties::kCamera_FramingPositionY);
        Spectre::Engine::ViewerEngine::UpdateModelFromCameraConfiguration(this);
      }
      if ( v48[1] )
        std::_Ref_count_base::_Decref(v48[1]);
      if ( v50 )
        std::_Ref_count_base::_Decref(v50);
    }
    if ( v52 )
      std::_Ref_count_base::_Decref(v52);
  }
}
