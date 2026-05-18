/*
 * XREFs of ?CreateReflectionResources@ImageProcessingEffectPlanarReflection@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180093CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_1800161AC.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ??$CreateInternalEffect@VImageProcessingEffectBlur@Engine@Spectre@@@ImageProcessingEffect@Engine@Spectre@@IEAA?AV?$shared_ptr@VImageProcessingEffectBlur@Engine@Spectre@@@std@@XZ @ 0x180093990 (--$CreateInternalEffect@VImageProcessingEffectBlur@Engine@Spectre@@@ImageProcessingEffect@Engine.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ImageProcessingEffectPlanarReflection::CreateReflectionResources(
        Spectre::Engine::ImageProcessingEffectPlanarReflection *this,
        struct Spectre::Engine::RenderDevice *a2)
{
  struct Spectre::Engine::Engine *Engine; // rax
  __int64 *v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rbx
  void **v8; // rax
  Spectre::Engine::Sampler *v9; // rcx
  __int64 v10; // rbx
  __int64 *v11; // rax
  std::_Ref_count_base *v12[2]; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+40h] [rbp-30h]
  int v14; // [rsp+44h] [rbp-2Ch]
  int v15; // [rsp+48h] [rbp-28h]
  __int128 v16; // [rsp+4Ch] [rbp-24h]
  int v17; // [rsp+5Ch] [rbp-14h]
  float v18; // [rsp+60h] [rbp-10h]

  Engine = Spectre::Engine::RenderDevice::GetEngine(a2);
  v5 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>((__int64)Engine, v12);
  v6 = (__int64 *)((char *)this + 216);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 27, v5);
  if ( v12[1] )
    std::_Ref_count_base::_Decref(v12[1]);
  v7 = *v6;
  v8 = (void **)std::string::string(v12, (__int64)"Image Processing Blur Sampler");
  Spectre::Engine::RendererResource::SetName(v7, v8);
  v9 = (Spectre::Engine::Sampler *)*v6;
  v13 = 0;
  v17 = 0;
  v18 = FLOAT_3_4028235e38;
  v16 = 0LL;
  v14 = 1;
  v15 = 7;
  *(__m128i *)v12 = _mm_load_si128((const __m128i *)&_xmm);
  Spectre::Engine::Sampler::CreateSampler(v9, (const struct Spectre::Engine::SamplerStateDesc *)v12, 0LL);
  v10 = *((int *)this + 36);
  v11 = Spectre::Engine::ImageProcessingEffect::CreateInternalEffect<Spectre::Engine::ImageProcessingEffectBlur>(
          (__int64)this,
          (__int64 *)v12);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 23, v11);
  if ( v12[1] )
    std::_Ref_count_base::_Decref(v12[1]);
  (*(void (__fastcall **)(_QWORD, struct Spectre::Engine::RenderDevice *, __int64, _QWORD, int))(**((_QWORD **)this + 23)
                                                                                               + 40LL))(
    *((_QWORD *)this + 23),
    a2,
    2LL,
    (unsigned int)dword_180115230[v10],
    dword_180115240[v10]);
}
