/*
 * XREFs of ?UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_N@Z @ 0x18006BA5C
 * Callers:
 *     ?ApplyModelTransformFromConfiguration@ViewerEngine@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064DC0 (-ApplyModelTransformFromConfiguration@ViewerEngine@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VScene@.c)
 *     ?PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180067850 (-PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180012ED8 (-SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ??$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VBounds@Engine@Spectre@@@std@@XZ @ 0x180013E14 (--$GetComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VBounds@E.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?CreateFromAxisAngle@Quaternion@Math@Utils@Spectre@@SA?AU1234@AEBUVector3@234@M@Z @ 0x18003BD60 (-CreateFromAxisAngle@Quaternion@Math@Utils@Spectre@@SA-AU1234@AEBUVector3@234@M@Z.c)
 *     ?SetRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z @ 0x18003D868 (-SetRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z.c)
 *     ?SetScale@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x18003D8B8 (-SetScale@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 *     ?GetForegroundModel@ViewerEngine@Engine@Spectre@@IEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x180066C20 (-GetForegroundModel@ViewerEngine@Engine@Spectre@@IEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ViewerEngine::UpdateModelFromConfiguration(
        Spectre::Engine::Engine *a1,
        _QWORD *a2,
        char a3)
{
  __m128 v3; // xmm0
  struct Spectre::Utils::IConfigurationManager *Configuration; // rbx
  __m128 v8; // xmm13
  __int64 v9; // r8
  char v10; // al
  char v11; // r15
  double v12; // xmm0_8
  unsigned int v13; // xmm7_4
  double v14; // xmm0_8
  unsigned int v15; // xmm8_4
  double v16; // xmm0_8
  __int32 v17; // xmm9_4
  double v18; // xmm0_8
  unsigned int v19; // xmm10_4
  double v20; // xmm0_8
  unsigned int v21; // xmm11_4
  double v22; // xmm0_8
  __int32 v23; // xmm12_4
  double v24; // xmm0_8
  __int64 v25; // rcx
  Spectre::Engine::SceneNode *v26; // rbx
  __m128 v27; // xmm2
  __m128 v28; // xmm0
  unsigned __int64 v29; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int32 v30; // [rsp+30h] [rbp-71h]
  union __m128 v31; // [rsp+38h] [rbp-69h] BYREF
  std::_Ref_count_base *v32[2]; // [rsp+48h] [rbp-59h] BYREF
  Spectre::Engine::SceneNode *v33; // [rsp+58h] [rbp-49h] BYREF
  std::_Ref_count_base *v34[2]; // [rsp+60h] [rbp-41h]

  Configuration = Spectre::Engine::Engine::GetConfiguration(a1, *(_DWORD *)(*a2 + 112LL));
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kModel_TransformEnabled,
         0LL) )
  {
    *(double *)v3.m128_u64 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, __int64 *))(*(_QWORD *)Configuration + 88LL))(
                               Configuration,
                               &Spectre::Engine::ConfigurationProperties::kModel_RelativeModelLoadScale);
    v8 = v3;
    LOBYTE(v9) = 1;
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration
                                                                                            + 64LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kModel_PositionAlignBase,
      v9);
    v11 = v10;
    v12 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, __int64 *))(*(_QWORD *)Configuration
                                                                                              + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kModel_PositionOffsetX);
    v13 = LODWORD(v12);
    v14 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, __int64 *))(*(_QWORD *)Configuration
                                                                                              + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kModel_PositionOffsetY);
    v15 = LODWORD(v14);
    v16 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, __int64 *))(*(_QWORD *)Configuration
                                                                                              + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kModel_PositionOffsetZ);
    v17 = LODWORD(v16);
    v18 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, __int64 *))(*(_QWORD *)Configuration
                                                                                              + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAxisX);
    v19 = LODWORD(v18);
    v20 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, __int64 *))(*(_QWORD *)Configuration
                                                                                              + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAxisY);
    v21 = LODWORD(v20);
    v22 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, __int64 *))(*(_QWORD *)Configuration
                                                                                              + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAxisZ);
    v23 = LODWORD(v22);
    v24 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, __int64 *))(*(_QWORD *)Configuration
                                                                                              + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kModel_RotationOffsetAngle);
    Spectre::Engine::ViewerEngine::GetForegroundModel(v25, &v33, a2);
    v26 = v33;
    if ( v33 )
    {
      if ( a3 || std::atomic<bool>::operator bool((__int64)a1 + 1467) )
      {
        v31.m128_u64[0] = __PAIR64__(v15, v13);
        v31.m128_i32[2] = v17;
        v29 = 0LL;
        v30 = 0;
        if ( v11 )
        {
          Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::Bounds>(v26, v32);
          if ( v32[0] )
            *((float *)&v29 + 1) = *((float *)v32[0] + 26) + 0.0;
          if ( v32[1] )
            std::_Ref_count_base::_Decref(v32[1]);
        }
        v27 = _mm_add_ps(
                _mm_movelh_ps((__m128)v31.m128_u64[0], (__m128)v31.m128_u32[2]),
                _mm_movelh_ps((__m128)v29, (__m128)v30));
        v31.m128_u64[0] = 0LL;
        v31.m128_i32[2] = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
        v29 = v27.m128_u64[0];
        v30 = v31.m128_u32[2];
        Spectre::Engine::SceneNode::SetPosition(v26, &v29);
        if ( a3 )
          goto LABEL_19;
      }
      if ( std::atomic<bool>::operator bool((__int64)a1 + 1468) )
      {
LABEL_19:
        v31.m128_u64[0] = __PAIR64__(v21, v19);
        v31.m128_i32[2] = v23;
        Spectre::Utils::Math::Quaternion::CreateFromAxisAngle((__int64)v32, &v31, *(float *)&v24 * 0.017453292);
        Spectre::Engine::SceneNode::SetRotation(v26, v32);
        if ( a3 )
          goto LABEL_14;
      }
      if ( std::atomic<bool>::operator bool((__int64)a1 + 1466) )
      {
LABEL_14:
        Spectre::Engine::SceneNode::VerifyReadAccess(v26);
        v31.m128_i32[2] = *((_DWORD *)v26 + 45);
        v28 = _mm_mul_ps(
                _mm_shuffle_ps(v8, v8, 0),
                _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)v26 + 172), (__m128)v31.m128_u32[2]));
        v31.m128_i32[2] = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
        v29 = v28.m128_u64[0];
        v30 = v31.m128_u32[2];
        Spectre::Engine::SceneNode::SetScale(v26, &v29);
      }
    }
    if ( v34[0] )
      std::_Ref_count_base::_Decref(v34[0]);
  }
}
