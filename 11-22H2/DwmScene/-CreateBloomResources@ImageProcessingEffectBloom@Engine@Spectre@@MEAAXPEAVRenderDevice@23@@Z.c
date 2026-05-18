/*
 * XREFs of ?CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180096160
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_1800161AC.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050224 (-GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spectre@.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 *     ?GetProperties@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180060C2C (-GetProperties@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBloc_ea_180060C2C.c)
 *     ??$CreateInternalEffect@VImageProcessingEffectBlur@Engine@Spectre@@@ImageProcessingEffect@Engine@Spectre@@IEAA?AV?$shared_ptr@VImageProcessingEffectBlur@Engine@Spectre@@@std@@XZ @ 0x180093990 (--$CreateInternalEffect@VImageProcessingEffectBlur@Engine@Spectre@@@ImageProcessingEffect@Engine.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ImageProcessingEffectBloom::CreateBloomResources(
        Spectre::Engine::ImageProcessingEffectBloom *this,
        struct Spectre::Engine::RenderDevice *a2)
{
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Engine::ShaderManager *ShaderManager; // rbx
  _QWORD *v6; // rax
  __int64 *ShaderFamily; // rax
  __int64 *v8; // rbx
  __int64 *Properties; // rax
  __int64 *v10; // rax
  struct Spectre::Engine::Engine *v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rbx
  void **v15; // rax
  Spectre::Engine::Sampler *v16; // rcx
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v20; // [rsp+38h] [rbp-48h]
  __m128i si128; // [rsp+40h] [rbp-40h] BYREF
  int v22; // [rsp+50h] [rbp-30h]
  int v23; // [rsp+54h] [rbp-2Ch]
  int v24; // [rsp+58h] [rbp-28h]
  __int128 v25; // [rsp+5Ch] [rbp-24h]
  int v26; // [rsp+6Ch] [rbp-14h]
  float v27; // [rsp+70h] [rbp-10h]

  Engine = Spectre::Engine::RenderDevice::GetEngine(a2);
  ShaderManager = Spectre::Engine::Engine::GetShaderManager(Engine);
  v6 = std::string::string(&si128, (__int64)&Spectre::Engine::ImageProcessingShaderExtension::kShaderFamilyName);
  ShaderFamily = Spectre::Engine::ShaderManager::GetShaderFamily((__int64)ShaderManager, &v19, v6);
  v8 = (__int64 *)((char *)this + 216);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 27, ShaderFamily);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  Properties = (__int64 *)Spectre::Engine::ShaderFamily::GetProperties(*v8, &v19);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 25, Properties);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  v10 = Spectre::Engine::ShaderFamily::CreateMaterial(*v8, &v19);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 31, v10);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  v11 = Spectre::Engine::RenderDevice::GetEngine(a2);
  v12 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>((__int64)v11, &v19);
  v13 = (__int64 *)((char *)this + 264);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 33, v12);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  v14 = *v13;
  v15 = (void **)std::string::string(&si128, (__int64)"Image Processing Bloom Sampler");
  Spectre::Engine::RendererResource::SetName(v14, v15);
  v16 = (Spectre::Engine::Sampler *)*v13;
  v22 = 0;
  v26 = 0;
  v27 = FLOAT_3_4028235e38;
  v25 = 0LL;
  v23 = 1;
  v24 = 7;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  Spectre::Engine::Sampler::CreateSampler(v16, (const struct Spectre::Engine::SamplerStateDesc *)&si128, 0LL);
  v17 = *((int *)this + 36);
  v18 = Spectre::Engine::ImageProcessingEffect::CreateInternalEffect<Spectre::Engine::ImageProcessingEffectBlur>(
          (__int64)this,
          &v19);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 23, v18);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  (*(void (__fastcall **)(_QWORD, struct Spectre::Engine::RenderDevice *, __int64, _QWORD, int))(**((_QWORD **)this + 23)
                                                                                               + 40LL))(
    *((_QWORD *)this + 23),
    a2,
    2LL,
    (unsigned int)dword_180115230[v17],
    dword_180115360[v17]);
}
