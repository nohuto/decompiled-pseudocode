/*
 * XREFs of ?Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180072F50
 * Callers:
 *     ?ApplyCameraEffects_ResolveOutput@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x1800724B0 (-ApplyCameraEffects_ResolveOutput@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@V.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z @ 0x180044718 (-SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z.c)
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C98C (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z.c)
 *     ?GetActiveSize@Texture@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x180056618 (-GetActiveSize@Texture@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?ResetScissorRect@Camera@Engine@Spectre@@QEAAXXZ @ 0x18005CD18 (-ResetScissorRect@Camera@Engine@Spectre@@QEAAXXZ.c)
 *     ?SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D038 (-SetDepthBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18005D1EC (-SetFrameBuffer@Camera@Engine@Spectre@@QEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z.c)
 *     ?SetScissorRect@Camera@Engine@Spectre@@QEAAXUScissorRect@23@@Z @ 0x18005D3D4 (-SetScissorRect@Camera@Engine@Spectre@@QEAAXUScissorRect@23@@Z.c)
 *     ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180085600 (-SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x1800857F0 (-SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?RenderTargetSwap@ImageProcessingCamera@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@V?$shared_ptr@VTexture@Engine@Spectre@@@5@I@Z @ 0x180097BD0 (-RenderTargetSwap@ImageProcessingCamera@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VRenderDevice@Engi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ImageProcessingManager::Display(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  void (__fastcall *v8)(__int64, _QWORD *); // r8
  __int64 v9; // r9
  Spectre::Engine::Camera *v10; // r10
  _QWORD *v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  void (__fastcall *v18)(__int64, __int64 *, _QWORD *, __int64, _QWORD *); // rbx
  Spectre::Engine::Camera *v19; // r10
  __int64 v20; // [rsp+30h] [rbp-59h] BYREF
  __int128 v21; // [rsp+40h] [rbp-49h] BYREF
  __int64 v22; // [rsp+50h] [rbp-39h] BYREF
  std::_Ref_count_base *v23; // [rsp+58h] [rbp-31h]
  std::_Ref_count_base *v24[2]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v25[8]; // [rsp+70h] [rbp-19h] BYREF
  std::_Ref_count_base *v26; // [rsp+78h] [rbp-11h]
  _QWORD v27[4]; // [rsp+80h] [rbp-9h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 376LL))(*a2, v25);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v6, &v22);
  if ( v26 )
    std::_Ref_count_base::_Decwref(v26);
  v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v21,
         &v22);
  v8(v9, v7);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v27, a3);
  v21 = 0LL;
  Spectre::Engine::ImageProcessingCamera::RenderTargetSwap(v10, -1);
  v21 = 0LL;
  Spectre::Engine::Camera::SetDepthBuffer(*(Spectre::Engine::Camera **)(a1 + 272), (__int64 *)&v21);
  *(_BYTE *)(*(_QWORD *)(a1 + 272) + 465LL) &= 0xF8u;
  (*(void (__fastcall **)(_QWORD, std::_Ref_count_base **))(*(_QWORD *)*a2 + 32LL))(*a2, v24);
  v21 = *(_OWORD *)v24;
  *(_OWORD *)v24 = 0LL;
  Spectre::Engine::Camera::SetFrameBuffer(*(Spectre::Engine::Camera **)(a1 + 272), (__int64 *)&v21);
  if ( (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2) != 1.0
    || (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2) != 1.0 )
  {
    Spectre::Engine::Texture::GetActiveSize(*a3, &v20);
    *(_QWORD *)&v21 = 0LL;
    DWORD2(v21) = (int)*(float *)&v20;
    HIDWORD(v21) = (int)*((float *)&v20 + 1);
    Spectre::Engine::Camera::SetScissorRect(*(_QWORD *)(a1 + 272), &v21);
  }
  v11 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v27,
          a3);
  Spectre::Engine::ShaderPropertyBlock::SetTexture(
    v12,
    &Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    v11);
  v13 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v27,
          (_QWORD *)(a1 + 304));
  Spectre::Engine::ShaderPropertyBlock::SetTextureSampler(
    v14,
    &Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    v13);
  Spectre::Engine::Material::SetRenderState(*(_QWORD *)(a1 + 400), *(_DWORD *)(a1 + 448), 0, 2);
  v15 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v27,
          (_QWORD *)(a1 + 400));
  Spectre::Engine::MeshInstance::SetMaterial(v16, v15);
  v17 = *(_QWORD *)(a1 + 272);
  v18 = *(void (__fastcall **)(__int64, __int64 *, _QWORD *, __int64, _QWORD *))(*(_QWORD *)v17 + 208LL);
  std::string::string(v27, (__int64)"Display");
  v18(v17, &v22, a2, a1 + 336, v27);
  std::string::_Tidy_deallocate((__int64)v27);
  Spectre::Engine::Camera::ResetScissorRect(*(Spectre::Engine::Camera **)(a1 + 272));
  v21 = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetTexture(
    *(_QWORD *)(a1 + 416),
    &Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    &v21);
  v21 = 0LL;
  Spectre::Engine::ShaderPropertyBlock::SetTextureSampler(
    *(_QWORD *)(a1 + 416),
    &Spectre::Engine::ImageProcessingShaderExtension::kShader_Texture,
    &v21);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v27, a3);
  v21 = 0LL;
  Spectre::Engine::ImageProcessingCamera::RenderTargetSwap(v19, -1);
  if ( v24[1] )
    std::_Ref_count_base::_Decref(v24[1]);
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
}
