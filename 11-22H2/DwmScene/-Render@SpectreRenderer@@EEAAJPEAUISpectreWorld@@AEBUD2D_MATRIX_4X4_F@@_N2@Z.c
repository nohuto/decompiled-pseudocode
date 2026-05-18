/*
 * XREFs of ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?ReplaceBackBufferTexture@RenderOutputDwm@@QEAAXPEAUID3D11Texture2D@@II@Z @ 0x1800115D8 (-ReplaceBackBufferTexture@RenderOutputDwm@@QEAAXPEAUID3D11Texture2D@@II@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$GetComponent@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z @ 0x180016288 (--$GetComponent@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VLightPro.c)
 *     ??0RenderGuard@SpectreRenderer@@QEAA@XZ @ 0x180017818 (--0RenderGuard@SpectreRenderer@@QEAA@XZ.c)
 *     ??1RenderGuard@SpectreRenderer@@QEAA@XZ @ 0x180017A38 (--1RenderGuard@SpectreRenderer@@QEAA@XZ.c)
 *     ??DMath@Utils@Spectre@@YA?AUMatrix@012@AEBU3012@0@Z @ 0x180017E58 (--DMath@Utils@Spectre@@YA-AUMatrix@012@AEBU3012@0@Z.c)
 *     ?GetCamera@ImageProcessingManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VImageProcessingCamera@Engine@Spectre@@@std@@XZ @ 0x180018990 (-GetCamera@ImageProcessingManager@Engine@Spectre@@QEBA-AV-$shared_ptr@VImageProcessingCamera@Eng.c)
 *     ?Invert@Matrix@Math@Utils@Spectre@@QEBA?AU1234@XZ @ 0x1800189F4 (-Invert@Matrix@Math@Utils@Spectre@@QEBA-AU1234@XZ.c)
 *     ?SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z @ 0x18001AF10 (-SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z.c)
 *     ?SetProjectionType@Camera@Engine@Spectre@@QEAAXW4EProjectionType@123@@Z @ 0x18001AFFC (-SetProjectionType@Camera@Engine@Spectre@@QEAAXW4EProjectionType@123@@Z.c)
 *     ?XMMatrixOrthographicRH@DirectX@@YQ?AUXMMATRIX@1@MMMM@Z @ 0x18001B478 (-XMMatrixOrthographicRH@DirectX@@YQ-AUXMMATRIX@1@MMMM@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34 (-GetCamera@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV-$shared_ptr@VS.c)
 *     ?SetTransformMatrix@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z @ 0x18003D994 (-SetTransformMatrix@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z.c)
 *     ?SetSphericalHarmonics@LightProbe@Engine@Spectre@@QEAAXAEBVSphericalHarmonics@23@@Z @ 0x180051C30 (-SetSphericalHarmonics@LightProbe@Engine@Spectre@@QEAAXAEBVSphericalHarmonics@23@@Z.c)
 *     ?AddCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x180057404 (-AddCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z.c)
 *     ?RemoveCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x180057A70 (-RemoveCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z.c)
 *     ?Render@Display@Engine@Spectre@@QEAAXXZ @ 0x180057B28 (-Render@Display@Engine@Spectre@@QEAAXXZ.c)
 *     ?NotifyNodeTransformChanged@Camera@Engine@Spectre@@QEAAXXZ @ 0x18005BE28 (-NotifyNodeTransformChanged@Camera@Engine@Spectre@@QEAAXXZ.c)
 *     ?SetScissorRect@Camera@Engine@Spectre@@QEAAXUScissorRect@23@@Z @ 0x18005D3D4 (-SetScissorRect@Camera@Engine@Spectre@@QEAAXUScissorRect@23@@Z.c)
 *     ?SetViewport@Camera@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@0W4EViewportMode@123@@Z @ 0x18005D4E4 (-SetViewport@Camera@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@0W4EViewportMode@123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SpectreRenderer::Render(
        SpectreRenderer *this,
        struct ISpectreWorld *a2,
        const struct D2D_MATRIX_4X4_F *a3,
        unsigned __int8 a4)
{
  int v4; // r14d
  _QWORD *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __m128 v12; // xmm9
  __m128 v13; // xmm10
  Spectre::Engine::Camera *v14; // rax
  float v15; // xmm6_4
  float v16; // xmm7_4
  double v17; // xmm8_8
  int v18; // ecx
  int v19; // eax
  _QWORD *v20; // rax
  Spectre::Engine::SceneNode *v21; // rdi
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  _QWORD *Camera; // rax
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  _QWORD *v27; // rax
  char v28; // cl
  Spectre::Engine::Camera *v29; // rax
  int v30; // xmm4_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  const struct Spectre::Utils::Math::Matrix *v33; // rax
  __int128 v34; // xmm3
  __int128 v35; // xmm2
  __int128 v36; // xmm0
  __int64 result; // rax
  Spectre::Engine::LightProbe *v38; // [rsp+20h] [rbp-198h] BYREF
  std::_Ref_count_base *v39; // [rsp+28h] [rbp-190h]
  Spectre::Engine::Camera *v40; // [rsp+30h] [rbp-188h] BYREF
  std::_Ref_count_base *v41; // [rsp+38h] [rbp-180h]
  _BYTE v42[20]; // [rsp+40h] [rbp-178h] BYREF
  float v43; // [rsp+54h] [rbp-164h]
  __int128 v44; // [rsp+58h] [rbp-160h]
  int v45; // [rsp+68h] [rbp-150h]
  int v46; // [rsp+6Ch] [rbp-14Ch]
  float v47; // [rsp+70h] [rbp-148h]
  float v48; // [rsp+74h] [rbp-144h]
  int v49; // [rsp+78h] [rbp-140h]
  int v50; // [rsp+7Ch] [rbp-13Ch]
  Spectre::Engine::SceneNode *v51; // [rsp+80h] [rbp-138h] BYREF
  std::_Ref_count_base *v52; // [rsp+88h] [rbp-130h]
  _BYTE v53[8]; // [rsp+90h] [rbp-128h] BYREF
  __int64 v54; // [rsp+98h] [rbp-120h] BYREF
  std::_Ref_count_base *v55; // [rsp+A0h] [rbp-118h]
  _BYTE v56[64]; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-D0h] BYREF
  _BYTE v58[24]; // [rsp+F8h] [rbp-C0h] BYREF
  __int128 v59[9]; // [rsp+110h] [rbp-A8h] BYREF

  v4 = a4;
  try
  {
    SpectreRenderer::RenderGuard::RenderGuard((SpectreRenderer::RenderGuard *)v53);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v54,
      (_QWORD *)a2 + 2);
    v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v57,
           &v54);
    Spectre::Engine::Engine::GetCamera(v9, &v40, v9, v8);
    RenderOutputDwm::ReplaceBackBufferTexture(
      *((RenderOutputDwm **)this + 8),
      *((struct ID3D11Texture2D **)this + 15),
      *((_DWORD *)this + 34) - *((_DWORD *)this + 32),
      *((_DWORD *)this + 35) - *((_DWORD *)this + 33));
    v10 = v54;
    Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v54 + 16));
    v11 = std::wstring::wstring(v42, (__int64)&Spectre::Engine::SceneLayerStandardID::kLights);
    Spectre::Engine::Scene::GetComponent<Spectre::Engine::LightProbe>(v10, &v38, (__int64)v11);
    Spectre::Engine::LightProbe::SetSphericalHarmonics(v38, (struct ISpectreWorld *)((char *)a2 + 48));
    if ( v39 )
      std::_Ref_count_base::_Decref(v39);
    v12 = (__m128)COERCE_UNSIGNED_INT((float)(*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 88LL))(*((_QWORD *)this + 8)));
    v13 = (__m128)COERCE_UNSIGNED_INT((float)(*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 80LL))(*((_QWORD *)this + 8)));
    v38 = (Spectre::Engine::LightProbe *)*((_QWORD *)this + 18);
    LODWORD(v39) = *((_DWORD *)this + 38);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 280LL))(*((_QWORD *)this + 8)) )
    {
      *((_BYTE *)v40 + 465) |= 1u;
      v14 = v40;
      *((_QWORD *)v40 + 37) = 0LL;
      *((_QWORD *)v14 + 38) = 0LL;
      v15 = *(float *)&v38 - (float)*((int *)this + 32);
      v16 = *((float *)&v38 + 1) - (float)*((int *)this + 33);
      v17 = *(double *)_mm_unpacklo_ps(v13, v12).m128_u64;
      Spectre::Engine::Camera::SetViewport(v40, Spectre::Utils::Math::Vector2::Zero, *(_QWORD *)&v17, 1LL);
      v18 = *((_DWORD *)this + 35) - *((_DWORD *)this + 33);
      v19 = *((_DWORD *)this + 34) - *((_DWORD *)this + 32);
      v38 = 0LL;
      v39 = (std::_Ref_count_base *)__PAIR64__(v18, v19);
      Spectre::Engine::Camera::SetScissorRect(v40, &v38);
      v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 152LL))(*((_QWORD *)this + 8));
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        &v51,
        v20);
      v21 = v51;
      *((_DWORD *)v51 + 112) = 8 * (v4 ^ 1);
      v22 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 33));
      v23 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 32));
      Camera = (_QWORD *)Spectre::Engine::ImageProcessingManager::GetCamera((__int64)v21, v42);
      v23.m128_u64[0] = _mm_unpacklo_ps(v23, v22).m128_u64[0];
      v25 = 0LL;
      v25.m128_u64[0] = v23.m128_u64[0];
      v26 = 0LL;
      *(double *)v26.m128_u64 = v17;
      v38 = 0LL;
      Spectre::Engine::Camera::SetViewport(*Camera, v23.m128_u64[0], _mm_add_ps(v26, v25).m128_u64[0], 1LL);
      if ( *(_QWORD *)&v42[8] )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v42[8]);
      v27 = (_QWORD *)Spectre::Engine::ImageProcessingManager::GetCamera((__int64)v21, &v38);
      *(_OWORD *)v42 = *((_OWORD *)this + 8);
      Spectre::Engine::Camera::SetScissorRect(*v27, v42);
      if ( v39 )
        std::_Ref_count_base::_Decref(v39);
      if ( v52 )
        std::_Ref_count_base::_Decref(v52);
    }
    else
    {
      v28 = *((_BYTE *)v40 + 465) | 1;
      if ( !(_BYTE)v4 )
        v28 = *((_BYTE *)v40 + 465) & 0xFE;
      *((_BYTE *)v40 + 465) = v28;
      v29 = v40;
      *((_QWORD *)v40 + 37) = 0LL;
      *((_QWORD *)v29 + 38) = 0LL;
      *(_OWORD *)v42 = *((_OWORD *)this + 8);
      Spectre::Engine::Camera::SetScissorRect(v40, v42);
      v16 = *((float *)&v38 + 1);
      v15 = *(float *)&v38;
    }
    v30 = *((_DWORD *)this + 38) ^ _xmm;
    v31 = *((float *)this + 37);
    LODWORD(v32) = *((_DWORD *)this + 36) ^ _xmm;
    *(_DWORD *)v42 = 1065353216;
    *(_OWORD *)&v42[4] = 0LL;
    v43 = FLOAT_N1_0;
    v44 = 0LL;
    v45 = 1065353216;
    v46 = 0;
    v47 = v32;
    v48 = v31;
    v49 = v30;
    v50 = 1065353216;
    *(_OWORD *)v56 = *(_OWORD *)&a3->_11;
    *(_OWORD *)&v56[16] = *(_OWORD *)&a3->m[1][0];
    *(_OWORD *)&v56[32] = *(_OWORD *)&a3->m[2][0];
    *(_OWORD *)&v56[48] = *(_OWORD *)&a3->m[3][0];
    Spectre::Utils::Math::operator*((__int64)v59, (__int128 *)v56, v42);
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)v40 + 56, &v51);
    v33 = (const struct Spectre::Utils::Math::Matrix *)Spectre::Utils::Math::Matrix::Invert(v59, (__int64)v56);
    Spectre::Engine::SceneNode::SetTransformMatrix(v51, v33);
    if ( v52 )
      std::_Ref_count_base::_Decref(v52);
    Spectre::Engine::Camera::NotifyNodeTransformChanged(v40);
    *(float *)v42 = 2.0 / v13.m128_f32[0];
    *(_OWORD *)&v42[4] = 0LL;
    v43 = 2.0 / v12.m128_f32[0];
    v44 = 0LL;
    v45 = 1065353216;
    v46 = 0;
    v47 = (float)((float)(2.0 / v13.m128_f32[0]) * v15) - 1.0;
    v48 = 1.0 - (float)((float)(2.0 / v12.m128_f32[0]) * v16);
    v49 = 0;
    v50 = 1065353216;
    *(_OWORD *)&v56[4] = 0LL;
    *(_OWORD *)&v56[24] = 0LL;
    *(_OWORD *)&v56[44] = 0LL;
    v34 = *((unsigned int *)this + 40);
    v35 = *((unsigned int *)this + 39);
    v36 = LODWORD(FLOAT_2_0);
    *(double *)&v36 = DirectX::XMMatrixOrthographicRH();
    *(_OWORD *)v56 = v36;
    *(_OWORD *)&v56[16] = LODWORD(FLOAT_2_0);
    *(_OWORD *)&v56[32] = v35;
    *(_OWORD *)&v56[48] = v34;
    Spectre::Utils::Math::operator*((__int64)v59, (__int128 *)v56, v42);
    Spectre::Engine::Camera::SetProjectionType(v40, 5LL);
    Spectre::Engine::Camera::SetProjectionMatrix(v40, (const struct Spectre::Utils::Math::Matrix *)v59);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v58);
    Spectre::Engine::Display::AddCamera(*((_QWORD *)this + 6), &v40);
    Spectre::Engine::Display::Render(*((Spectre::Engine::Display **)this + 6));
    Spectre::Engine::Display::RemoveCamera(*((_QWORD *)this + 6), &v40);
    if ( v41 )
      std::_Ref_count_base::_Decref(v41);
    if ( v55 )
      std::_Ref_count_base::_Decref(v55);
    SpectreRenderer::RenderGuard::~RenderGuard((SpectreRenderer::RenderGuard *)v53);
    result = 0LL;
  }
  catch ( ... )
  {
    return 2147500037LL;
  }
  return result;
}
