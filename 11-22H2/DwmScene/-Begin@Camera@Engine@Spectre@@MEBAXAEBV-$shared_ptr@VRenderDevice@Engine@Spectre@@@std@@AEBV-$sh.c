/*
 * XREFs of ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?SetRenderTarget@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@5@@Z @ 0x180039738 (-SetRenderTarget@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@@.c)
 *     ?SetScissorRect@CommandList@Engine@Spectre@@QEAAXUScissorRect@23@@Z @ 0x1800397AC (-SetScissorRect@CommandList@Engine@Spectre@@QEAAXUScissorRect@23@@Z.c)
 *     ?SetViewport@CommandList@Engine@Spectre@@QEAAXMMMMMM@Z @ 0x180039954 (-SetViewport@CommandList@Engine@Spectre@@QEAAXMMMMMM@Z.c)
 *     ?GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003BFCC (-GetLocalToWorld@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetWorldPosition@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@XZ @ 0x18003C334 (-GetWorldPosition@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@XZ.c)
 *     ?GetSceneNode@Component@Engine@Spectre@@QEBA?AV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@XZ @ 0x18004328C (-GetSceneNode@Component@Engine@Spectre@@QEBA-AV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@.c)
 *     ?SetGlobalMatrix@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMatrix@Math@Utils@3@@Z @ 0x18005072C (-SetGlobalMatrix@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ?SetGlobalScalar@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180050748 (-SetGlobalScalar@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ?SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180050764 (-SetGlobalTexture@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UVector4@Math@Utils@3@@Z @ 0x1800507D4 (-SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?GetActiveRenderTargetSize@Camera@Engine@Spectre@@IEBA?AUVector2@Math@Utils@3@XZ @ 0x18005B994 (-GetActiveRenderTargetSize@Camera@Engine@Spectre@@IEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetCommandList@Camera@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18005BA04 (-GetCommandList@Camera@Engine@Spectre@@QEBA-AV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AE.c)
 *     ?GetRenderTargetSize@Camera@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18005BAB8 (-GetRenderTargetSize@Camera@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetScissorRect@Camera@Engine@Spectre@@QEBA?AV?$Optional@UScissorRect@Engine@Spectre@@@Utils@3@XZ @ 0x18005BAFC (-GetScissorRect@Camera@Engine@Spectre@@QEBA-AV-$Optional@UScissorRect@Engine@Spectre@@@Utils@3@X.c)
 *     ?GetViewProjectionMatrix@Camera@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18005BB7C (-GetViewProjectionMatrix@Camera@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?GetViewportActive@Camera@Engine@Spectre@@IEBA?AU?$ViewportBounds@UVector3@Math@Utils@Spectre@@@123@XZ @ 0x18005BBC0 (-GetViewportActive@Camera@Engine@Spectre@@IEBA-AU-$ViewportBounds@UVector3@Math@Utils@Spectre@@@.c)
 *     ?Intersect@ScissorRect@Engine@Spectre@@SA?AU123@AEBU123@0@Z @ 0x18005BCDC (-Intersect@ScissorRect@Engine@Spectre@@SA-AU123@AEBU123@0@Z.c)
 *     ?Transpose@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z @ 0x18005D800 (-Transpose@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Spectre::Engine::Camera::Begin(Spectre::Engine::Camera *this, __int64 a2, _QWORD *a3)
{
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Engine::ShaderManager *ShaderManager; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  Spectre::Engine::CommandList *v12; // rbx
  float v13; // xmm6_4
  int v14; // eax
  __int128 v15; // xmm14
  float v16; // xmm10_4
  float v17; // xmm9_4
  __m128i v18; // xmm6
  char v19; // r12
  __m128 v20; // xmm6
  float v21; // xmm4_4
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  double v24; // xmm5_8
  __m128 v25; // xmm2
  __m128 v26; // xmm3
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  float v29; // xmm9_4
  float v30; // xmm10_4
  float v31; // xmm12_4
  float v32; // xmm13_4
  __int64 v33; // r9
  __int64 v34; // r8
  bool v35; // zf
  const char *v36; // rsi
  const char *v37; // r9
  __int64 v38; // rax
  Spectre::Engine::Engine *v39; // rax
  struct Spectre::Engine::ShaderManager *v40; // rbx
  Spectre::Engine::SceneNode **SceneNode; // rax
  __int64 *v42; // rax
  unsigned int *LocalToWorld; // rax
  __m128 v44; // xmm1
  __m128 v45; // xmm0
  __m128 v46; // xmm2
  __m128 v47; // xmm6
  unsigned __int32 v48; // xmm6_4
  Spectre::Utils::Math::Matrix *ViewProjectionMatrix; // rax
  int v50; // [rsp+30h] [rbp-D8h]
  _BYTE v51[20]; // [rsp+48h] [rbp-C0h] BYREF
  float v52; // [rsp+5Ch] [rbp-ACh]
  __m128i v53; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v54; // [rsp+78h] [rbp-90h] BYREF
  std::_Ref_count_base *v55[2]; // [rsp+88h] [rbp-80h] BYREF
  Spectre::Engine::CommandList *v56; // [rsp+98h] [rbp-70h] BYREF
  std::_Ref_count_base *v57; // [rsp+A0h] [rbp-68h]
  __int128 v58; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-50h]
  __int128 v60; // [rsp+C8h] [rbp-40h]
  __int128 v61; // [rsp+D8h] [rbp-30h]
  __m128i v62; // [rsp+E8h] [rbp-20h] BYREF
  char v63; // [rsp+F8h] [rbp-10h]
  _OWORD v64[12]; // [rsp+108h] [rbp+0h] BYREF
  std::_Ref_count_base *v65; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned __int64 v66; // [rsp+210h] [rbp+108h]

  Spectre::Engine::Camera::GetCommandList(this, &v56, a2);
  if ( (*((_BYTE *)this + 440) & 1) != 0 )
  {
    Engine = Spectre::Engine::Component::GetEngine(this);
    ShaderManager = Spectre::Engine::Engine::GetShaderManager(Engine);
    if ( !std::string::empty((__int64)this + 184) )
    {
      v54 = 0LL;
      Spectre::Engine::ShaderManager::SetGlobalTexture((__int64)ShaderManager, v7, &v54);
    }
    if ( !std::string::empty((__int64)this + 216) )
    {
      v54 = 0LL;
      Spectre::Engine::ShaderManager::SetGlobalTexture((__int64)ShaderManager, v8, &v54);
    }
    if ( !std::string::empty((__int64)this + 248) )
    {
      v58 = Spectre::Utils::Math::Matrix::Identity;
      v59 = xmmword_180106A40;
      v60 = xmmword_180106A50;
      v61 = xmmword_180106A60;
      Spectre::Engine::ShaderManager::SetGlobalMatrix((__int64)ShaderManager);
    }
  }
  if ( std::operator==<Spectre::Engine::Scene>((_QWORD *)this + 17)
    && std::operator==<Spectre::Engine::Scene>((_QWORD *)this + 19) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, std::_Ref_count_base **))(*(_QWORD *)*a3 + 40LL))(*a3, v55);
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 32LL))(*a3, &v54);
    v11 = v9;
    v12 = v56;
    Spectre::Engine::CommandList::SetRenderTarget((__int64)v56, v10, v11);
    if ( *((_QWORD *)&v54 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v54 + 1));
    if ( v55[1] )
      std::_Ref_count_base::_Decref(v55[1]);
    v13 = (float)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 88LL))(*a3);
    v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 80LL))(*a3);
    Spectre::Engine::CommandList::SetViewport(v12, 0.0, 0.0, (float)v14, v13, 0.0, 1.0);
  }
  else
  {
    v12 = v56;
    Spectre::Engine::CommandList::SetRenderTarget((__int64)v56, (__int64)this + 136, (__int64)this + 152);
  }
  v15 = _xmm;
  *(_OWORD *)v55 = _xmm;
  Spectre::Engine::Camera::GetActiveRenderTargetSize(this, &v65);
  *(_QWORD *)&v54 = 0LL;
  v16 = *(float *)&v65;
  DWORD2(v54) = (int)_o_roundf();
  v17 = *((float *)&v65 + 1);
  HIDWORD(v54) = (int)_o_roundf();
  Spectre::Engine::Camera::GetScissorRect(this, &v62);
  if ( v63 )
  {
    v53 = v62;
  }
  else
  {
    Spectre::Engine::Camera::GetViewportActive(this);
    v53.m128i_i32[0] = (int)_o_roundf();
    v53.m128i_i32[1] = (int)_o_roundf();
    v53.m128i_i32[2] = (int)_o_roundf();
    v53.m128i_i32[3] = (int)_o_roundf();
  }
  v18 = *(__m128i *)Spectre::Engine::ScissorRect::Intersect(v51, &v53, &v54);
  v53 = v18;
  v19 = 0;
  Spectre::Engine::Camera::GetViewportActive(this);
  if ( (*((_DWORD *)this + 110) & 0x1000000) != 0 )
  {
    v20 = (__m128)LODWORD(v52);
    Spectre::Engine::CommandList::SetViewport(v12, 0.0, 0.0, v16, v17, *(float *)&v51[8], v52);
    if ( v16 == 0.0 || v17 == 0.0 )
      v19 = 1;
    v22 = 0LL;
    v22.m128_f32[0] = v21;
    v23 = 0LL;
    v23.m128_u64[0] = _mm_movelh_ps((__m128)*(unsigned __int64 *)v51, v22).m128_u64[0];
    v24 = *(double *)_mm_div_ps(v23, (__m128)(unsigned __int64)v65).m128_u64;
    v25 = 0LL;
    v25.m128_u64[0] = _mm_movelh_ps((__m128)*(unsigned __int64 *)&v51[12], v20).m128_u64[0];
    v26 = 0LL;
    v26.m128_u64[0] = _mm_div_ps(v25, (__m128)(unsigned __int64)v65).m128_u64[0];
    v27 = 0LL;
    *(double *)v27.m128_u64 = v24;
    v65 = (std::_Ref_count_base *)_mm_sub_ps(v26, v27).m128_u64[0];
    v28 = 0LL;
    v28.m128_u64[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
    v66 = _mm_sub_ps(_mm_add_ps(v27, v26), v28).m128_u64[0];
    v55[0] = v65;
    LODWORD(v55[1]) = v66;
    HIDWORD(v55[1]) = HIDWORD(v66) ^ _xmm;
    v29 = *(float *)v51;
    LODWORD(v54) = (int)_o_roundf();
    v30 = *(float *)&v51[4];
    DWORD1(v54) = (int)_o_roundf();
    v31 = *(float *)&v51[12];
    DWORD2(v54) = (int)_o_roundf();
    v32 = *(float *)&v51[16];
    HIDWORD(v54) = (int)_o_roundf();
    Spectre::Engine::ScissorRect::Intersect(v51, &v53, &v54);
    Spectre::Engine::CommandList::SetScissorRect((__int64)v12, (__int128 *)v51);
    v34 = (unsigned int)((v53.m128i_i32[2] - v53.m128i_i32[0]) * (v53.m128i_i32[3] - v53.m128i_i32[1]));
    v35 = (_DWORD)v34 == 0;
    v15 = *(_OWORD *)v55;
  }
  else
  {
    v31 = *(float *)&v51[12];
    v29 = *(float *)v51;
    v32 = *(float *)&v51[16];
    v30 = *(float *)&v51[4];
    Spectre::Engine::CommandList::SetViewport(
      v12,
      *(float *)v51,
      *(float *)&v51[4],
      *(float *)&v51[12] - *(float *)v51,
      *(float *)&v51[16] - *(float *)&v51[4],
      *(float *)&v51[8],
      v52);
    *(__m128i *)v51 = v18;
    Spectre::Engine::CommandList::SetScissorRect((__int64)v12, (__int128 *)v51);
    v35 = (_mm_cvtsi128_si32(_mm_srli_si128(v18, 8)) - _mm_cvtsi128_si32(v18))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v18, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v18, 4))) == 0;
  }
  if ( v29 == v31 || v30 == v32 )
    v19 = 1;
  v36 = (char *)this + 24;
  if ( v35 )
  {
    v37 = (char *)this + 24;
    if ( *((_QWORD *)this + 6) >= 0x10uLL )
      v37 = *(const char **)v36;
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsNativeRenderer_Camera,
      4,
      "Warning: camera '%s' scissor rectangle is empty -- no pixels will be rendered",
      v37);
  }
  if ( v19 )
  {
    if ( *((_QWORD *)this + 6) >= 0x10uLL )
      v36 = *(const char **)v36;
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsNativeRenderer_Camera,
      4,
      "Warning: camera '%s' viewport rectangle is empty -- no pixels will be rendered",
      v36);
  }
  if ( (*((_BYTE *)this + 465) & 1) != 0 && *((_QWORD *)this + 17) )
  {
    v38 = *(_QWORD *)v12;
    *(_OWORD *)v51 = *(_OWORD *)((char *)this + 296);
    (*(void (__fastcall **)(Spectre::Engine::CommandList *, char *, _BYTE *))(v38 + 88))(v12, (char *)this + 136, v51);
  }
  LOBYTE(v34) = *((_BYTE *)this + 465);
  if ( (v34 & 6) != 0 && *((_QWORD *)this + 19) )
  {
    LOBYTE(v33) = (v34 & 4) != 0;
    LOBYTE(v34) = (v34 & 2) != 0;
    LOBYTE(v50) = *((_BYTE *)this + 464);
    (*(void (__fastcall **)(Spectre::Engine::CommandList *, char *, __int64, __int64, _DWORD, int))(*(_QWORD *)v12
                                                                                                  + 104LL))(
      v12,
      (char *)this + 152,
      v34,
      v33,
      *((_DWORD *)this + 78),
      v50);
  }
  v39 = Spectre::Engine::Component::GetEngine(this);
  v40 = Spectre::Engine::Engine::GetShaderManager(v39);
  SceneNode = (Spectre::Engine::SceneNode **)Spectre::Engine::Component::GetSceneNode((__int64)this, v51);
  Spectre::Engine::SceneNode::GetWorldPosition(*SceneNode, (__int64)&v53);
  if ( *(_QWORD *)&v51[8] )
    std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v51[8]);
  v55[0] = (std::_Ref_count_base *)v53.m128i_i64[0];
  v55[1] = (std::_Ref_count_base *)(v53.m128i_u32[2] | 0x3F80000000000000LL);
  if ( *((_DWORD *)this + 79) == 3 )
  {
    v42 = Spectre::Engine::Component::GetSceneNode((__int64)this, v51);
    LocalToWorld = (unsigned int *)Spectre::Engine::SceneNode::GetLocalToWorld(*v42, (__int64)v64);
    v44 = _mm_xor_ps((__m128)LocalToWorld[9], (__m128)_xmm);
    v45 = _mm_xor_ps((__m128)LocalToWorld[8], (__m128)_xmm);
    v53.m128i_i32[2] = LocalToWorld[10] ^ _xmm;
    v46 = 0LL;
    v46.m128_u64[0] = _mm_unpacklo_ps(v45, v44).m128_u64[0];
    v47 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps(v46, (__m128)v53.m128i_u32[2]));
    v53.m128i_i64[0] = v47.m128_u64[0];
    v48 = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
    if ( *(_QWORD *)&v51[8] )
      std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v51[8]);
    v55[0] = (std::_Ref_count_base *)v53.m128i_i64[0];
    v55[1] = (std::_Ref_count_base *)v48;
  }
  *(_OWORD *)v51 = *(_OWORD *)v55;
  Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)v40);
  *(_OWORD *)v51 = v15;
  Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)v40);
  Spectre::Engine::ShaderManager::SetGlobalScalar((__int64)v40);
  v58 = _xmm;
  v59 = _xmm;
  v60 = _xmm;
  v61 = _xmm;
  ViewProjectionMatrix = (Spectre::Utils::Math::Matrix *)Spectre::Engine::Camera::GetViewProjectionMatrix(this, v64);
  Spectre::Utils::Math::Matrix::Transpose(ViewProjectionMatrix, (struct Spectre::Utils::Math::Matrix *)&v58);
  v64[0] = v58;
  v64[1] = v59;
  v64[2] = v60;
  v64[3] = v61;
  Spectre::Engine::ShaderManager::SetGlobalMatrix((__int64)v40);
  Spectre::Engine::Camera::GetRenderTargetSize(this, &v65);
  *(_QWORD *)&v54 = v65;
  *((float *)&v54 + 2) = 1.0 / *(float *)&v65;
  *((float *)&v54 + 3) = 1.0 / *((float *)&v65 + 1);
  *(_OWORD *)v51 = v54;
  Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)v40);
  if ( v57 )
    std::_Ref_count_base::_Decref(v57);
}
