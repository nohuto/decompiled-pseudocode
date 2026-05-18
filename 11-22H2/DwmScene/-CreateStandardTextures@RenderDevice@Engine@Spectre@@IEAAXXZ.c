/*
 * XREFs of ?CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ @ 0x1800261B8
 * Callers:
 *     ?InitializeRenderer@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026C70 (-InitializeRenderer@RenderDevice@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@3@@Z @ 0x180024A24 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180024A24.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetStandardTextureManager@RenderDevice@Engine@Spectre@@QEAAAEAVResourceManager@23@XZ @ 0x18002685C (-GetStandardTextureManager@RenderDevice@Engine@Spectre@@QEAAAEAVResourceManager@23@XZ.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?CreatePatternTexture@Texture@Engine@Spectre@@QEAAXW4EPatternType@123@IPEAVRenderDevice@23@@Z @ 0x180056470 (-CreatePatternTexture@Texture@Engine@Spectre@@QEAAXW4EPatternType@123@IPEAVRenderDevice@23@@Z.c)
 *     ?Add@ResourceManager@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x180070160 (-Add@ResourceManager@Engine@Spectre@@QEAAXV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::RenderDevice::CreateStandardTextures(Spectre::Engine::RenderDevice *this)
{
  struct Spectre::Engine::Engine *Engine; // rsi
  Spectre::Engine::RenderDevice *v3; // rcx
  struct Spectre::Engine::ResourceManager *StandardTextureManager; // r14
  __int64 v5; // rcx
  __m128i *p_si128; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rax
  Spectre::Engine::SharedResource *v10; // [rsp+20h] [rbp-29h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-21h]
  __int64 v12; // [rsp+38h] [rbp-11h] BYREF
  std::_Ref_count_base *v13; // [rsp+40h] [rbp-9h]
  __int64 v14; // [rsp+48h] [rbp-1h] BYREF
  __int64 v15; // [rsp+58h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+68h] [rbp+1Fh] BYREF
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  __int64 v19; // [rsp+80h] [rbp+37h] BYREF

  Engine = Spectre::Engine::RenderDevice::GetEngine(this);
  StandardTextureManager = Spectre::Engine::RenderDevice::GetStandardTextureManager(v3);
  std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(v5 + 8, &v12);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v17 = 4;
  v18 = 5;
  p_si128 = &si128;
  do
  {
    v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v14,
           &v12);
    Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(Engine, &v10, v7);
    Spectre::Engine::RendererResource::SetOption(v10, 2LL);
    Spectre::Engine::Texture::CreatePatternTexture(v10, p_si128->m128i_u32[0], v8, this);
    v9 = std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(
           &v15,
           &v10);
    Spectre::Engine::ResourceManager::Add(StandardTextureManager, v9, p_si128->m128i_u32[0]);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    p_si128 = (__m128i *)((char *)p_si128 + 4);
  }
  while ( p_si128 != (__m128i *)&v19 );
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
}
