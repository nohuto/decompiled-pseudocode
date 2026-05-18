/*
 * XREFs of ?ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@6@2@Z @ 0x180095DA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?Clamp@Math@Utils@Spectre@@YAMMMM@Z @ 0x18001112C (-Clamp@Math@Utils@Spectre@@YAMMMM@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?SetOption@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044658 (-SetOption@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?SetOptions@Material@Engine@Spectre@@QEAAX_K_N@Z @ 0x1800446F0 (-SetOptions@Material@Engine@Spectre@@QEAAX_K_N@Z.c)
 *     ?SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z @ 0x180044718 (-SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z.c)
 *     ?GetMaterial@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x18004B964 (-GetMaterial@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ.c)
 *     ?SetBlendFactors@MeshInstance@Engine@Spectre@@QEAAXUVector4@Math@Utils@3@@Z @ 0x18004C934 (-SetBlendFactors@MeshInstance@Engine@Spectre@@QEAAXUVector4@Math@Utils@3@@Z.c)
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C98C (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z.c)
 *     ?SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D038 (-SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D1EC (-SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180085600 (-SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x1800857F0 (-SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Spectre::Engine::ImageProcessingEffectBloom::ApplyBloom(
        __int64 a1,
        Spectre::Engine::RenderDevice *a2,
        __int64 a3,
        std::_Ref_count_base **a4,
        std::_Ref_count_base **a5)
{
  float v5; // xmm3_4
  __int64 *v9; // rax
  Spectre::Engine::Camera *v10; // r8
  __int64 *v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // r8
  int v14; // r8d
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdi
  void (__fastcall *v19)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 v20; // rax
  Spectre::Utils::Math *v21; // rcx
  __m128 v22; // xmm0
  __int64 v23; // rcx
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Utils::IConfigurationManager *Configuration; // rax
  int v26; // ebx
  __int64 *Material; // rax
  __int64 v28; // rdi
  void (__fastcall *v29)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 v30; // rax
  std::_Ref_count_base *v31; // rcx
  std::_Ref_count_base *v32; // rcx
  std::_Ref_count_base *v33[2]; // [rsp+38h] [rbp-51h] BYREF
  Spectre::Engine::RenderDevice *v34; // [rsp+48h] [rbp-41h]
  std::_Ref_count_base **v35; // [rsp+50h] [rbp-39h]
  std::_Ref_count_base **v36; // [rsp+58h] [rbp-31h]
  _QWORD v37[4]; // [rsp+60h] [rbp-29h] BYREF

  v34 = a2;
  v35 = a4;
  v36 = a5;
  v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v33,
         (_QWORD *)(a1 + 232));
  Spectre::Engine::Camera::SetFrameBuffer(v10, v9);
  *(_OWORD *)v33 = 0LL;
  Spectre::Engine::Camera::SetDepthBuffer(*(Spectre::Engine::Camera **)(a1 + 24), (__int64 *)v33);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v11 = (__int64 *)(a1 + 72);
  v12 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v33,
          (_QWORD *)(a1 + 248));
  Spectre::Engine::MeshInstance::SetMaterial(v13, v12);
  Spectre::Engine::Material::SetOptions(*(Spectre::Engine::Material **)(a1 + 248), -1LL, 0);
  Spectre::Engine::Material::SetRenderState(*(_QWORD *)(a1 + 248), 0, v14, v14 + 2);
  v15 = *(_QWORD *)(a1 + 200);
  v33[0] = *a5;
  v33[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetTexture(
    v15,
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    v33);
  v16 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v33,
          (_QWORD *)(a1 + 40));
  Spectre::Engine::ShaderPropertyBlock::SetTextureSampler(
    v17,
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    v16);
  v18 = *(_QWORD *)(a1 + 24);
  v19 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v18 + 208LL);
  std::string::string(v37, (__int64)"Bloom Phase 1");
  v20 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)v34 + 8, v33);
  v19(v18, v20, a3, a1 + 72, v37);
  if ( v33[1] )
    std::_Ref_count_base::_Decref(v33[1]);
  std::string::_Tidy_deallocate((__int64)v37);
  v22 = (__m128)*(unsigned int *)(a1 + 280);
  v22.m128_f32[0] = Spectre::Utils::Math::Clamp(v21, 0.0, 1.0, v5);
  v23 = *(_QWORD *)(a1 + 200);
  v33[0] = *a4;
  v33[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetTexture(
    v23,
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    v33);
  Spectre::Engine::Material::SetOption(
    *(_QWORD *)(a1 + 248),
    (__int64)&Spectre::Engine::ImageProcessingShaderExtension::kOption_AlphaBlend,
    1);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  Engine = Spectre::Engine::RenderDevice::GetEngine(v34);
  Configuration = Spectre::Engine::Engine::GetConfiguration(Engine, 1);
  v26 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64))(*(_QWORD *)Configuration + 72LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kImageProcessing_BloomBlurBlendMode,
          14LL);
  Material = (__int64 *)Spectre::Engine::MeshInstance::GetMaterial(*v11, (__int64)v33);
  Spectre::Engine::Material::SetRenderState(*Material, v26, 0, 2);
  if ( v33[1] )
    std::_Ref_count_base::_Decref(v33[1]);
  *(__m128 *)v33 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), (__m128)Spectre::Utils::Math::Vector4::One);
  Spectre::Engine::MeshInstance::SetBlendFactors((_DWORD *)*v11, v33);
  v28 = *(_QWORD *)(a1 + 24);
  v29 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v28 + 208LL);
  std::string::string(v37, (__int64)"Bloom Scene Overlay");
  v30 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)v34 + 8, v33);
  v29(v28, v30, a3, a1 + 72, v37);
  if ( v33[1] )
    std::_Ref_count_base::_Decref(v33[1]);
  std::string::_Tidy_deallocate((__int64)v37);
  *(_OWORD *)v33 = Spectre::Utils::Math::Vector4::One;
  Spectre::Engine::MeshInstance::SetBlendFactors((_DWORD *)*v11, v33);
  *(_OWORD *)v33 = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetTexture(
    *(_QWORD *)(a1 + 200),
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    v33);
  v31 = a4[1];
  if ( v31 )
    std::_Ref_count_base::_Decref(v31);
  v32 = a5[1];
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
}
