/*
 * XREFs of ?PreRenderCamera@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x1800672D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?SetDisplayScaleFactor@Camera@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x18005D160 (-SetDisplayScaleFactor@Camera@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ?SetFieldOfView@Camera@Engine@Spectre@@QEAAXM@Z @ 0x18005D1BC (-SetFieldOfView@Camera@Engine@Spectre@@QEAAXM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ViewerEngine::PreRenderCamera(
        Spectre::Engine::Engine *this,
        Spectre::Engine::Camera **a2,
        __int64 a3,
        _QWORD *a4)
{
  __m128 v4; // xmm0
  struct Spectre::Utils::IConfigurationManager *Configuration; // rdi
  double v9; // xmm0_8
  unsigned int v10; // xmm8_4
  double v11; // xmm0_8
  unsigned int v12; // xmm7_4
  double v13; // xmm0_8
  unsigned int v14; // xmm6_4
  __m128 v15; // xmm3
  Spectre::Engine::Camera *v16; // rax
  Spectre::Engine::Camera *v17; // rax
  int v18; // ecx
  double v19; // xmm0_8
  Spectre::Engine::Camera *v20; // rbx
  __m128 v21; // xmm6
  std::_Ref_count_base *v22[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v24; // [rsp+48h] [rbp-38h]

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)*a2 + 56, v22);
  Spectre::Engine::SceneNode::GetScene((__int64)v22[0], &v23);
  if ( v22[1] )
    std::_Ref_count_base::_Decref(v22[1]);
  Configuration = Spectre::Engine::Engine::GetConfiguration(this, *(_DWORD *)(v23 + 112));
  if ( (*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
         Configuration,
         &Spectre::Engine::ConfigurationProperties::kRenderer_ClearColorOverride,
         0LL) )
  {
    v9 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                          + 88LL))(
           Configuration,
           &Spectre::Engine::ConfigurationProperties::kRenderer_ClearColor_R);
    v10 = LODWORD(v9);
    v11 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                           + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_ClearColor_G);
    v12 = LODWORD(v11);
    v13 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                           + 88LL))(
            Configuration,
            &Spectre::Engine::ConfigurationProperties::kRenderer_ClearColor_B);
    v14 = LODWORD(v13);
    *(float *)&v13 = (*(float (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
                       Configuration,
                       &Spectre::Engine::ConfigurationProperties::kRenderer_ClearColor_A);
    v22[0] = (std::_Ref_count_base *)__PAIR64__(v12, v10);
    v22[1] = (std::_Ref_count_base *)__PAIR64__(LODWORD(v13), v14);
    v15 = _mm_mul_ps(
            _mm_or_ps(
              _mm_and_ps(_mm_shuffle_ps(*(__m128 *)v22, *(__m128 *)v22, 255), DirectX::g_XMMask3),
              _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3)),
            *(__m128 *)v22);
    v16 = *a2;
    *((_DWORD *)v16 + 74) = v15.m128_i32[0];
    v4 = _mm_shuffle_ps(v15, v15, 85);
    *((_DWORD *)v16 + 75) = v4.m128_i32[0];
    *((_DWORD *)v16 + 76) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
    *((_DWORD *)v16 + 77) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  }
  if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, std::_Ref_count_base **))(*(_QWORD *)*a4 + 8LL))(*a4, v22) == 2 )
  {
    v17 = *a2;
    *((_DWORD *)v17 + 74) = 0;
    *((_DWORD *)v17 + 75) = 0;
    *((_DWORD *)v17 + 76) = 0;
    *((_DWORD *)v17 + 77) = 0;
  }
  v18 = *((_DWORD *)*a2 + 110);
  if ( (v18 & 0x100) != 0 )
  {
    if ( (v18 & 0x2000000) != 0 )
    {
      v19 = (*(double (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration
                                                                                             + 88LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kCamera_FieldOfView);
      Spectre::Engine::Camera::SetFieldOfView(*a2, *(float *)&v19);
    }
    v20 = *a2;
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 112LL))(*a4);
    v21 = v4;
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 120LL))(*a4);
    Spectre::Engine::Camera::SetDisplayScaleFactor((__int64)v20, _mm_unpacklo_ps(v21, v4).m128_i64[0]);
  }
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
}
