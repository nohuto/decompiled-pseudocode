/*
 * XREFs of ?ApplyDownsample@ImageProcessingEffectBlur@Engine@Spectre@@MEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@@Z @ 0x18009C400
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ?SetOptions@Material@Engine@Spectre@@QEAAX_K_N@Z @ 0x1800446F0 (-SetOptions@Material@Engine@Spectre@@QEAAX_K_N@Z.c)
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C98C (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z.c)
 *     ?GetCommandList@Camera@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18005BA04 (-GetCommandList@Camera@Engine@Spectre@@QEBA-AV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AE.c)
 *     ?SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D038 (-SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180085600 (-SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x1800857F0 (-SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?RenderTargetSwap@ImageProcessingCamera@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@V?$shared_ptr@VTexture@Engine@Spectre@@@5@I@Z @ 0x180097BD0 (-RenderTargetSwap@ImageProcessingCamera@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VRenderDevice@Engi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Spectre::Engine::ImageProcessingEffectBlur::ApplyDownsample(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v9; // rbx
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r9
  Spectre::Engine::Camera *v13; // r10
  _QWORD *v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 v22; // rax
  std::_Ref_count_base *v23; // rcx
  std::_Ref_count_base *v24; // rcx
  __int128 v26; // [rsp+30h] [rbp-89h] BYREF
  __int64 v27; // [rsp+40h] [rbp-79h] BYREF
  std::_Ref_count_base *v28; // [rsp+48h] [rbp-71h]
  __int64 v29; // [rsp+58h] [rbp-61h]
  _QWORD *v30; // [rsp+60h] [rbp-59h]
  _QWORD *v31; // [rsp+68h] [rbp-51h]
  __int64 v32; // [rsp+70h] [rbp-49h] BYREF
  std::_Ref_count_base *v33; // [rsp+78h] [rbp-41h]
  __int64 v34; // [rsp+80h] [rbp-39h] BYREF
  std::_Ref_count_base *v35; // [rsp+88h] [rbp-31h]
  _QWORD v36[4]; // [rsp+90h] [rbp-29h] BYREF

  v29 = a4;
  v30 = a5;
  v31 = a6;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = (__int64 *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(*a3 + 8, &v32);
  Spectre::Engine::Camera::GetCommandList(v9, &v34, v10);
  if ( v33 )
    std::_Ref_count_base::_Decref(v33);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v36, a5);
  v11 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v27,
          a6);
  Spectre::Engine::ImageProcessingCamera::RenderTargetSwap(v13, a3, v11, v12, 0xFFFFFFFF);
  v26 = 0LL;
  Spectre::Engine::Camera::SetDepthBuffer(*(Spectre::Engine::Camera **)(a1 + 24), (__int64 *)&v26);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  Spectre::Engine::Material::SetOptions(*(Spectre::Engine::Material **)(a1 + 272), -1LL, 0);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 72LL) = 1;
  v15 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v27,
          v14);
  Spectre::Engine::MeshInstance::SetMaterial(v16, v15);
  v17 = *(_QWORD *)(a1 + 288);
  v26 = *(_OWORD *)a5;
  *a5 = 0LL;
  a5[1] = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetTexture(
    v17,
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    &v26);
  v18 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v27,
          (_QWORD *)(a1 + 320));
  Spectre::Engine::ShaderPropertyBlock::SetTextureSampler(
    v19,
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    v18);
  v20 = *(_QWORD *)(a1 + 24);
  v21 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v20 + 208LL);
  std::string::string(v36, (__int64)"Downsampling");
  v22 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(*a3 + 8, &v27);
  v21(v20, v22, v29, a1 + 72, v36);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  std::string::_Tidy_deallocate((__int64)v36);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 72LL) = 0;
  v26 = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetTexture(
    *(_QWORD *)(a1 + 288),
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    &v26);
  v26 = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetTextureSampler(
    *(_QWORD *)(a1 + 288),
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    &v26);
  Spectre::Engine::FrameBuffer::GetTexture(*a6, a2);
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
  v23 = (std::_Ref_count_base *)a5[1];
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  v24 = (std::_Ref_count_base *)a6[1];
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  return a2;
}
