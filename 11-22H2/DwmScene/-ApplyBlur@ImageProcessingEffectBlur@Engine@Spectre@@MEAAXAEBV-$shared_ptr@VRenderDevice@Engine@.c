/*
 * XREFs of ?ApplyBlur@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V?$shared_ptr@VTexture@Engine@Spectre@@@5@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@@Z @ 0x18009C150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetOption@Material@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z @ 0x1800446D4 (-SetOption@Material@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z.c)
 *     ?SetOptions@Material@Engine@Spectre@@QEAAX_K_N@Z @ 0x1800446F0 (-SetOptions@Material@Engine@Spectre@@QEAAX_K_N@Z.c)
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C98C (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z.c)
 *     ?FindOption@ShaderManager@Engine@Spectre@@QEBA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004F988 (-FindOption@ShaderManager@Engine@Spectre@@QEBA-AW4ShaderOption@23@AEBV-$basic_string@DU-$char_tr.c)
 *     ?GetCommandList@Camera@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18005BA04 (-GetCommandList@Camera@Engine@Spectre@@QEBA-AV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AE.c)
 *     ?SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D038 (-SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@XZ @ 0x180060D1C (-GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderManager@Engine@Spectre.c)
 *     ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180085600 (-SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x1800857F0 (-SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?RenderTargetSwap@ImageProcessingCamera@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@V?$shared_ptr@VTexture@Engine@Spectre@@@5@I@Z @ 0x180097BD0 (-RenderTargetSwap@ImageProcessingCamera@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VRenderDevice@Engi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Spectre::Engine::ImageProcessingEffectBlur::ApplyBlur(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v8; // rbx
  __int64 *v9; // rax
  _QWORD *v10; // rax
  Spectre::Engine::Camera *v11; // r10
  __int64 *ShaderManager; // rax
  char Option; // bl
  Spectre::Engine::Material **v14; // r9
  char v15; // r8
  _QWORD *v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdi
  void (__fastcall *v23)(__int64, __int64, __int64, __int64, __int64 *); // rbx
  __int64 v24; // rax
  std::_Ref_count_base *v25; // rcx
  std::_Ref_count_base *v26; // rcx
  __int64 v27; // [rsp+38h] [rbp-69h] BYREF
  std::_Ref_count_base *v28; // [rsp+40h] [rbp-61h]
  __int64 v29; // [rsp+48h] [rbp-59h]
  _QWORD *v30; // [rsp+50h] [rbp-51h]
  __int64 v31; // [rsp+58h] [rbp-49h]
  __int64 v32; // [rsp+60h] [rbp-41h] BYREF
  std::_Ref_count_base *v33; // [rsp+68h] [rbp-39h]
  __int64 v34; // [rsp+70h] [rbp-31h] BYREF
  std::_Ref_count_base *v35; // [rsp+78h] [rbp-29h]
  __int64 v36[4]; // [rsp+80h] [rbp-21h] BYREF

  v29 = a3;
  v30 = a4;
  v31 = a5;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = (__int64 *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(*a2 + 8, &v32);
  Spectre::Engine::Camera::GetCommandList(v8, &v34, v9);
  if ( v33 )
    std::_Ref_count_base::_Decref(v33);
  v10 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v27,
          a4);
  *(_OWORD *)v36 = *(_OWORD *)a5;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  Spectre::Engine::ImageProcessingCamera::RenderTargetSwap(v11, a2, v36, (__int64)v10, 0);
  *(_OWORD *)v36 = 0LL;
  Spectre::Engine::Camera::SetDepthBuffer(*(Spectre::Engine::Camera **)(a1 + 24), v36);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  ShaderManager = (__int64 *)Spectre::Engine::ShaderFamily::GetShaderManager(*(_QWORD *)(a1 + 304), &v27);
  Option = Spectre::Engine::ShaderManager::FindOption(*ShaderManager, (_QWORD *)(a1 + 336));
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  Spectre::Engine::Material::SetOptions(*(Spectre::Engine::Material **)(a1 + 272), -1LL, 0);
  Spectre::Engine::Material::SetOption(*v14, Option, 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 72LL) = v15;
  v17 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v27,
          v16);
  Spectre::Engine::MeshInstance::SetMaterial(v18, v17);
  v19 = *(_QWORD *)(a1 + 288);
  *(_OWORD *)v36 = *(_OWORD *)a4;
  *a4 = 0LL;
  a4[1] = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetTexture(
    v19,
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    v36);
  v20 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v27,
          (_QWORD *)(a1 + 320));
  Spectre::Engine::ShaderPropertyBlock::SetTextureSampler(
    v21,
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    v20);
  v22 = *(_QWORD *)(a1 + 24);
  v23 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v22 + 208LL);
  std::string::string(v36, (__int64)"Blurring");
  v24 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(*a2 + 8, &v27);
  v23(v22, v24, v29, a1 + 72, v36);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  std::string::_Tidy_deallocate((__int64)v36);
  *(_OWORD *)v36 = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetTexture(
    *(_QWORD *)(a1 + 288),
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    v36);
  *(_OWORD *)v36 = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetTextureSampler(
    *(_QWORD *)(a1 + 288),
    Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    v36);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 72LL) = 0;
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
  v25 = (std::_Ref_count_base *)a4[1];
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  v26 = *(std::_Ref_count_base **)(a5 + 8);
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
}
