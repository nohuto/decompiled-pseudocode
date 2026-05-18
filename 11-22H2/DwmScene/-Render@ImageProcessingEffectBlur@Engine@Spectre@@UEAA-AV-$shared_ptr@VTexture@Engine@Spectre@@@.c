/*
 * XREFs of ?Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV45@@Z @ 0x18009CCA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ?GetHeight@FrameBuffer@Engine@Spectre@@QEBAIXZ @ 0x1800289C0 (-GetHeight@FrameBuffer@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetWidth@FrameBuffer@Engine@Spectre@@QEBAIXZ @ 0x180028A10 (-GetWidth@FrameBuffer@Engine@Spectre@@QEBAIXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002945C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UVector4@Math@Utils@3@@Z @ 0x1800507D4 (-SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C58 (-FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@.c)
 *     ?GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@XZ @ 0x1800850B0 (-GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 *     ?SetVector4Array@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@QEBUVector4@Math@Utils@3@I@Z @ 0x180085A7C (-SetVector4Array@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@QEBUVector4@Math@U.c)
 *     ?CalculateBlurConstants@ImageProcessingEffectBlur@Engine@Spectre@@IEBAXAEAV?$array@UVector4@Math@Utils@Spectre@@$0BA@@std@@0MM@Z @ 0x18009C688 (-CalculateBlurConstants@ImageProcessingEffectBlur@Engine@Spectre@@IEBAXAEAV-$array@UVector4@Math.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
Spectre::Engine::Engine *__fastcall Spectre::Engine::ImageProcessingEffectBlur::Render(
        __int64 a1,
        Spectre::Engine::Engine *a2,
        Spectre::Engine::RenderDevice *a3,
        __int64 a4,
        _QWORD *a5)
{
  Spectre::Engine::Engine *v6; // r13
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, __int64); // rbx
  __int64 v10; // rax
  int *v11; // rcx
  __m128 v12; // xmm6
  float v13; // xmm1_4
  int v14; // eax
  struct Spectre::Engine::Engine *Engine; // r12
  Spectre::Engine::FrameBuffer **v16; // r15
  __int64 v17; // r12
  Spectre::Engine::FrameBuffer **v18; // r13
  int *v19; // rcx
  __m128 v20; // xmm2
  int v21; // eax
  __m128 v22; // xmm1
  double v23; // xmm0_8
  __m128 v24; // xmm2
  double v25; // xmm3_8
  __m128 v26; // xmm2
  __m128 v27; // xmm0
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  double v30; // xmm5_8
  __m128 v31; // xmm2
  __m128 v32; // xmm3
  struct Spectre::Engine::ShaderManager *ShaderManager; // rax
  void (__fastcall *v34)(__int64, unsigned __int64 *, __int64, __int64, _QWORD *, _QWORD *); // rsi
  _QWORD *v35; // rdi
  _QWORD *v36; // rbx
  __int64 v37; // rax
  Spectre::Engine::FrameBuffer **v38; // r15
  float Height; // xmm0_4
  __int64 v40; // rdi
  int *v41; // rax
  int v42; // ecx
  __int64 v43; // rbx
  unsigned __int16 Property; // bx
  int *v45; // rcx
  int v46; // eax
  __m128 v47; // xmm1
  __m128 v48; // xmm2
  double v49; // xmm3_8
  __m128 v50; // xmm2
  __m128 v51; // xmm0
  __m128 v52; // xmm2
  __m128 v53; // xmm2
  __m128 v54; // xmm3
  struct Spectre::Engine::ShaderManager *v55; // rax
  void (__fastcall *v56)(__int64, __int64, __int64, _QWORD *, _QWORD *); // rsi
  _QWORD *v57; // rdi
  _QWORD *v58; // rbx
  __int64 v59; // rax
  __m128 v60; // xmm2
  __m128 v61; // xmm1
  __m128 v62; // xmm6
  double v63; // xmm0_8
  __m128 v64; // xmm2
  __m128 v65; // xmm2
  __m128 v66; // xmm0
  __m128 v67; // xmm2
  __m128 v68; // xmm3
  __m128 v69; // xmm2
  struct Spectre::Engine::ShaderManager *v70; // rax
  void (__fastcall *v71)(__int64, __int64, __int64, __int64, _QWORD *); // rsi
  _QWORD *v72; // rdi
  __int64 Texture; // rbx
  __int64 v74; // rax
  struct Spectre::Engine::ShaderManager *v75; // rax
  unsigned __int64 v77; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v78; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v79; // [rsp+50h] [rbp-B8h]
  unsigned __int16 v80; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v82; // [rsp+78h] [rbp-90h] BYREF
  std::_Ref_count_base *v83; // [rsp+80h] [rbp-88h]
  unsigned __int64 v84; // [rsp+88h] [rbp-80h]
  Spectre::Engine::Engine *v85; // [rsp+90h] [rbp-78h]
  __int64 v86; // [rsp+98h] [rbp-70h]
  __int64 v87; // [rsp+A0h] [rbp-68h]
  __int64 v88; // [rsp+A8h] [rbp-60h] BYREF
  std::_Ref_count_base *v89; // [rsp+B0h] [rbp-58h]
  __int64 v90; // [rsp+B8h] [rbp-50h] BYREF
  std::_Ref_count_base *v91; // [rsp+C0h] [rbp-48h]
  __int64 *v92; // [rsp+C8h] [rbp-40h]
  __int64 v93; // [rsp+D0h] [rbp-38h] BYREF
  std::_Ref_count_base *v94; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v95; // [rsp+E8h] [rbp-20h]
  __int64 v96; // [rsp+F0h] [rbp-18h]
  _QWORD v97[4]; // [rsp+F8h] [rbp-10h] BYREF
  char v98[256]; // [rsp+118h] [rbp+10h] BYREF
  char v99[256]; // [rsp+218h] [rbp+110h] BYREF

  v87 = a4;
  v6 = a2;
  v85 = a2;
  `vector constructor iterator'(v98, 16LL, 16LL, (void (__fastcall *)(char *))Spectre::Utils::Math::Vector4::Vector4);
  `vector constructor iterator'(v99, 16LL, 16LL, (void (__fastcall *)(char *))Spectre::Utils::Math::Vector4::Vector4);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 88LL);
  v86 = (__int64)a3 + 8;
  v10 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)a3 + 8, &v82);
  v9(v8, v10);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v88, a5);
  v11 = *(int **)(*a5 + 128LL);
  v12 = 0LL;
  v13 = 0.0;
  if ( v11 )
  {
    v13 = (float)v11[1];
    v14 = *v11;
  }
  else
  {
    v14 = 0;
  }
  *(float *)&v78 = (float)v14;
  *((float *)&v78 + 1) = v13;
  Engine = Spectre::Engine::RenderDevice::GetEngine(a3);
  v85 = Engine;
  v16 = *(Spectre::Engine::FrameBuffer ***)(a1 + 216);
  if ( v16 != *(Spectre::Engine::FrameBuffer ***)(a1 + 224) )
  {
    v17 = 0LL;
    v18 = *(Spectre::Engine::FrameBuffer ***)(a1 + 224);
    do
    {
      v84 = *(_QWORD *)(v17 + *(_QWORD *)(a1 + 240));
      v19 = *(int **)(v88 + 128);
      v20 = 0LL;
      if ( v19 )
      {
        v20.m128_f32[0] = (float)v19[1];
        v21 = *v19;
      }
      else
      {
        v21 = 0;
      }
      v22 = 0LL;
      v22.m128_f32[0] = (float)v21;
      v23 = *(double *)_mm_unpacklo_ps(v22, v20).m128_u64;
      v24 = 0LL;
      *(double *)v24.m128_u64 = v23;
      v25 = *(double *)_mm_div_ps((__m128)v78, v24).m128_u64;
      v26 = 0LL;
      v26.m128_f32[0] = (float)(int)Spectre::Engine::FrameBuffer::GetHeight(*v16);
      v27 = 0LL;
      v27.m128_f32[0] = (float)(int)Spectre::Engine::FrameBuffer::GetWidth(*v16);
      v22.m128_u64[0] = _mm_unpacklo_ps(v27, v26).m128_u64[0];
      v28 = 0LL;
      v28.m128_u64[0] = v22.m128_u64[0];
      v29 = 0LL;
      *(double *)v29.m128_u64 = v30;
      v29.m128_u64[0] = _mm_div_ps(v28, v29).m128_u64[0];
      v31 = 0LL;
      *(double *)v31.m128_u64 = v25;
      v32 = 0LL;
      v32.m128_u64[0] = v29.m128_u64[0];
      ShaderManager = Spectre::Engine::Engine::GetShaderManager(v85);
      v95 = _mm_mul_ps(v32, v31).m128_u64[0];
      v96 = 0LL;
      Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)ShaderManager);
      v34 = *(void (__fastcall **)(__int64, unsigned __int64 *, __int64, __int64, _QWORD *, _QWORD *))(*(_QWORD *)a1 + 56LL);
      v35 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v93,
              v16);
      v92 = v97;
      v36 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              v97,
              &v88);
      v37 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(v86, &v90);
      v34(a1, &v82, v37, v87, v36, v35);
      if ( v91 )
        std::_Ref_count_base::_Decref(v91);
      std::shared_ptr<Spectre::Engine::Light>::operator=(&v88, &v82);
      v78 = v84;
      v17 += 8LL;
      if ( v83 )
        std::_Ref_count_base::_Decref(v83);
      v16 += 2;
    }
    while ( v16 != v18 );
    v6 = a2;
    Engine = v85;
  }
  if ( std::operator!=<Spectre::Engine::Scene>(&v88) )
  {
    v38 = (Spectre::Engine::FrameBuffer **)(a1 + 184);
    Height = (float)(int)Spectre::Engine::FrameBuffer::GetHeight(*(Spectre::Engine::FrameBuffer **)(a1 + 184));
    v40 = v88;
    v41 = *(int **)(v88 + 128);
    if ( v41 )
      v42 = *v41;
    else
      v42 = 0;
    Spectre::Engine::ImageProcessingEffectBlur::CalculateBlurConstants(
      a1,
      (__int64)v98,
      (__int64)v99,
      (float)v42,
      Height);
    v43 = *(_QWORD *)Spectre::Engine::ShaderPropertyBlock::GetLayout(*(_QWORD *)(a1 + 288), &v90);
    std::string::string(v97, (__int64)"BlurSampleArray");
    Property = Spectre::Engine::ShaderPropertyLayout::FindProperty(v43, v97);
    v80 = Property;
    std::string::_Tidy_deallocate((__int64)v97);
    if ( v91 )
      std::_Ref_count_base::_Decref(v91);
    Spectre::Engine::ShaderPropertyBlock::SetVector4Array(*(_QWORD *)(a1 + 288), Property, v98, 0x10u);
    v45 = *(int **)(v40 + 128);
    if ( v45 )
    {
      v12 = 0LL;
      v12.m128_f32[0] = (float)v45[1];
      v46 = *v45;
    }
    else
    {
      v46 = 0;
    }
    v47 = 0LL;
    v47.m128_f32[0] = (float)v46;
    v48 = 0LL;
    v48.m128_u64[0] = _mm_unpacklo_ps(v47, v12).m128_u64[0];
    v49 = *(double *)_mm_div_ps((__m128)v78, v48).m128_u64;
    v50 = 0LL;
    v50.m128_f32[0] = (float)(int)Spectre::Engine::FrameBuffer::GetHeight(*v38);
    v51 = 0LL;
    v51.m128_f32[0] = (float)(int)Spectre::Engine::FrameBuffer::GetWidth(*v38);
    v47.m128_u64[0] = _mm_unpacklo_ps(v51, v50).m128_u64[0];
    v52 = 0LL;
    v52.m128_u64[0] = v47.m128_u64[0];
    v47.m128_u64[0] = _mm_div_ps(v52, (__m128)*(unsigned __int64 *)(a1 + 264)).m128_u64[0];
    v53 = 0LL;
    *(double *)v53.m128_u64 = v49;
    v54 = 0LL;
    v54.m128_u64[0] = v47.m128_u64[0];
    v55 = Spectre::Engine::Engine::GetShaderManager(Engine);
    v82 = _mm_mul_ps(v54, v53).m128_u64[0];
    v83 = 0LL;
    Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)v55);
    v56 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _QWORD *))(*(_QWORD *)a1 + 48LL);
    v92 = &v90;
    v57 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v90,
            (_QWORD *)(a1 + 184));
    v58 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            v97,
            &v88);
    v59 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(v86, &v93);
    v56(a1, v59, v87, v58, v57);
    if ( v94 )
      std::_Ref_count_base::_Decref(v94);
    Spectre::Engine::ShaderPropertyBlock::SetVector4Array(*(_QWORD *)(a1 + 288), v80, v99, 0x10u);
    v60 = 0LL;
    v60.m128_f32[0] = (float)(int)Spectre::Engine::FrameBuffer::GetHeight(*v38);
    v61 = 0LL;
    v61.m128_f32[0] = (float)(int)Spectre::Engine::FrameBuffer::GetWidth(*v38);
    v62 = (__m128)*(unsigned __int64 *)(a1 + 264);
    v63 = *(double *)_mm_unpacklo_ps(v61, v60).m128_u64;
    v64 = 0LL;
    *(double *)v64.m128_u64 = v63;
    v77 = _mm_div_ps(v62, v64).m128_u64[0];
    v65 = 0LL;
    v65.m128_f32[0] = (float)(int)Spectre::Engine::FrameBuffer::GetHeight(*(Spectre::Engine::FrameBuffer **)(a1 + 200));
    v66 = 0LL;
    v66.m128_f32[0] = (float)(int)Spectre::Engine::FrameBuffer::GetWidth(*(Spectre::Engine::FrameBuffer **)(a1 + 200));
    v61.m128_u64[0] = _mm_unpacklo_ps(v66, v65).m128_u64[0];
    v67 = 0LL;
    v67.m128_u64[0] = v61.m128_u64[0];
    v79 = _mm_div_ps(v67, v62).m128_u64[0];
    v68 = 0LL;
    v68.m128_u64[0] = _mm_unpacklo_ps((__m128)(unsigned int)v77, (__m128)HIDWORD(v77)).m128_u64[0];
    v69 = 0LL;
    v69.m128_u64[0] = _mm_unpacklo_ps((__m128)(unsigned int)v79, (__m128)HIDWORD(v79)).m128_u64[0];
    v70 = Spectre::Engine::Engine::GetShaderManager(Engine);
    v82 = _mm_mul_ps(v69, v68).m128_u64[0];
    v83 = 0LL;
    Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)v70);
    v71 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)a1 + 48LL);
    v92 = &v90;
    v72 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v90,
            (_QWORD *)(a1 + 200));
    Texture = Spectre::Engine::FrameBuffer::GetTexture((__int64)*v38, v97);
    v74 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(v86, &v93);
    v71(a1, v74, v87, Texture, v72);
    if ( v94 )
      std::_Ref_count_base::_Decref(v94);
  }
  v75 = Spectre::Engine::Engine::GetShaderManager(Engine);
  v82 = _xmm;
  v83 = (std::_Ref_count_base *)_mm_srli_si128((__m128i)_xmm, 8).m128i_u64[0];
  Spectre::Engine::ShaderManager::SetGlobalVector4((__int64)v75);
  Spectre::Engine::FrameBuffer::GetTexture(*(_QWORD *)(a1 + 200), v6);
  if ( v89 )
    std::_Ref_count_base::_Decref(v89);
  return v6;
}
