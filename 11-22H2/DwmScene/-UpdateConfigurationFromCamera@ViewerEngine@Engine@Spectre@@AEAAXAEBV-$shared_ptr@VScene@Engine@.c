/*
 * XREFs of ?UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800696D0
 * Callers:
 *     ?PostUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800672C0 (-PostUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34 (-GetCamera@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV-$shared_ptr@VS.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetWorldPosition@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@XZ @ 0x18003C334 (-GetWorldPosition@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@XZ.c)
 *     ?GetWorldRotation@SceneNode@Engine@Spectre@@QEBA?AUQuaternion@Math@Utils@3@XZ @ 0x18003C440 (-GetWorldRotation@SceneNode@Engine@Spectre@@QEBA-AUQuaternion@Math@Utils@3@XZ.c)
 *     ??$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VCamera@23@@std@@YA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VCamera@Engine@Spectre@@@0@@Z @ 0x180063140 (--$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VCamera@23@@std@@YA-AV-$shared_ptr@VViewer.c)
 *     ?GetAzimuth@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092C44 (-GetAzimuth@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetBehaviour@ViewerCamera@Engine@Spectre@@QEBA?AW4EBehaviour@123@XZ @ 0x180092C54 (-GetBehaviour@ViewerCamera@Engine@Spectre@@QEBA-AW4EBehaviour@123@XZ.c)
 *     ?GetDefaultElevation@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092CB0 (-GetDefaultElevation@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092CC0 (-GetDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetElevation@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092CD0 (-GetElevation@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetElevationLowerLimit@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092CE0 (-GetElevationLowerLimit@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetElevationReturnTime@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092CF0 (-GetElevationReturnTime@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetElevationReturnWaitTime@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092D00 (-GetElevationReturnWaitTime@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetElevationUpperLimit@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092D10 (-GetElevationUpperLimit@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetFramingBehaviour@ViewerCamera@Engine@Spectre@@QEBA?AW4EFramingBehaviour@123@XZ @ 0x180092D20 (-GetFramingBehaviour@ViewerCamera@Engine@Spectre@@QEBA-AW4EFramingBehaviour@123@XZ.c)
 *     ?GetIdleRotationSpeed@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092D30 (-GetIdleRotationSpeed@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetIdleRotationSpinupTime@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092D40 (-GetIdleRotationSpinupTime@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetIdleRotationWaitTime@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092D50 (-GetIdleRotationWaitTime@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetMaxDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092D60 (-GetMaxDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetMinDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092D70 (-GetMinDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?GetZoomShouldStopIdleAnimations@ViewerCamera@Engine@Spectre@@QEBA_NXZ @ 0x180092DA0 (-GetZoomShouldStopIdleAnimations@ViewerCamera@Engine@Spectre@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ViewerEngine::UpdateConfigurationFromCamera(Spectre::Engine::Engine *this, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  struct Spectre::Utils::IConfigurationManager *Configuration; // rdi
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  Spectre::Engine::ViewerCamera *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r8
  unsigned int Behaviour; // eax
  void (__fastcall *v38)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64); // r11
  unsigned int FramingBehaviour; // eax
  void (__fastcall *v40)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64); // r11
  __int64 v41; // r8
  void (__fastcall *v42)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64); // r11
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // r8
  int v49; // [rsp+30h] [rbp-50h] BYREF
  __m128 v50; // [rsp+40h] [rbp-40h] BYREF
  Spectre::Engine::SceneNode *v51; // [rsp+50h] [rbp-30h] BYREF
  std::_Ref_count_base *v52; // [rsp+58h] [rbp-28h]
  __int64 v53; // [rsp+60h] [rbp-20h] BYREF
  std::_Ref_count_base *v54; // [rsp+68h] [rbp-18h]

  if ( *(_BYTE *)(*a2 + 116LL) )
  {
    v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v51,
           a2);
    Spectre::Engine::Engine::GetCamera((__int64)this, &v53, v5, v4);
    Configuration = Spectre::Engine::Engine::GetConfiguration(this, *(_DWORD *)(*a2 + 112LL));
    if ( std::operator!=<Spectre::Engine::Scene>(&v53) )
    {
      v8 = v53;
      if ( (*(_DWORD *)(v53 + 440) & 0x2000000) != 0 )
      {
        (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kCamera_FieldOfView,
          v7,
          1LL);
        std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v8 + 56, &v51);
        if ( std::operator!=<Spectre::Engine::Scene>(&v51) )
        {
          Spectre::Engine::SceneNode::GetWorldPosition(v51, (__int64)&v49);
          Spectre::Engine::SceneNode::GetWorldRotation((__int64)v51, &v50);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_PositionX,
            v9,
            1LL);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_PositionY,
            v10,
            1LL);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_PositionZ,
            v11,
            1LL);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_RotationX,
            v12,
            1LL);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_RotationY,
            v13,
            1LL);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_RotationZ,
            v14,
            1LL);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_RotationW,
            v15,
            1LL);
        }
        std::dynamic_pointer_cast<Spectre::Engine::ViewerCamera,Spectre::Engine::Camera>((__int64 *)&v50, &v53);
        if ( std::operator!=<Spectre::Engine::Scene>(&v50) )
        {
          v16 = (Spectre::Engine::ViewerCamera *)v50.m128_u64[0];
          Spectre::Engine::ViewerCamera::GetElevationReturnTime((Spectre::Engine::ViewerCamera *)v50.m128_u64[0]);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v17 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_ElevationReturnTime,
            v18,
            1LL);
          Spectre::Engine::ViewerCamera::GetElevationReturnWaitTime(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v19 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_ElevationReturnWaitTime,
            v20,
            1LL);
          Spectre::Engine::ViewerCamera::GetElevationUpperLimit(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v21 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_ElevationUpperLimit,
            v22,
            1LL);
          Spectre::Engine::ViewerCamera::GetElevationLowerLimit(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v23 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_ElevationLowerLimit,
            v24,
            1LL);
          Spectre::Engine::ViewerCamera::GetDefaultElevation(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v25 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_DefaultElevation,
            v26,
            1LL);
          Spectre::Engine::ViewerCamera::GetIdleRotationSpeed(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v27 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationSpeed,
            v28,
            1LL);
          Spectre::Engine::ViewerCamera::GetIdleRotationWaitTime(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v29 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationWaitTime,
            v30,
            1LL);
          Spectre::Engine::ViewerCamera::GetIdleRotationSpinupTime(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v31 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationSpinupTime,
            v32,
            1LL);
          Spectre::Engine::ViewerCamera::GetMinDistance(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v33 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_MinDistance,
            v34,
            1LL);
          Spectre::Engine::ViewerCamera::GetMaxDistance(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v35 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_MaxDistance,
            v36,
            1LL);
          Behaviour = Spectre::Engine::ViewerCamera::GetBehaviour(v16);
          v38(Configuration, &Spectre::Engine::ConfigurationProperties::kCamera_Behaviour, Behaviour, 1LL);
          FramingBehaviour = Spectre::Engine::ViewerCamera::GetFramingBehaviour(v16);
          v40(Configuration, &Spectre::Engine::ConfigurationProperties::kCamera_FramingBehaviour, FramingBehaviour, 1LL);
          LOBYTE(v41) = Spectre::Engine::ViewerCamera::GetZoomShouldStopIdleAnimations(v16);
          v42(Configuration, &Spectre::Engine::ConfigurationProperties::kCamera_ZoomStopsAnimations, v41, 1LL);
          Spectre::Engine::ViewerCamera::GetDistance(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v43 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_DEBehvr_CurrentState_Distance,
            v44,
            1LL);
          Spectre::Engine::ViewerCamera::GetElevation(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v45 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_DEBehvr_CurrentState_Elevation,
            v46,
            1LL);
          Spectre::Engine::ViewerCamera::GetAzimuth(v16);
          (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(v47 + 168))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kCamera_DEBehvr_CurrentState_Rotation,
            v48,
            1LL);
        }
        if ( v50.m128_u64[1] )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v50.m128_u64[1]);
        if ( v52 )
          std::_Ref_count_base::_Decref(v52);
      }
    }
    if ( v54 )
      std::_Ref_count_base::_Decref(v54);
  }
}
