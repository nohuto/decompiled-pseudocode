/*
 * XREFs of ?CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x18009CAD4
 * Callers:
 *     ?Create@ImageProcessingEffectBlur@Engine@Spectre@@UEAAXPEAVRenderDevice@23@W4EKernelType@123@W4ESampleLevel@123@W4EDownsampleScale@123@@Z @ 0x18009CAB0 (-Create@ImageProcessingEffectBlur@Engine@Spectre@@UEAAXPEAVRenderDevice@23@W4EKernelType@123@W4E.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180011BA0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800134DC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_1800161AC.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050224 (-GetShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spectre@.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 *     ?GetProperties@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180060C2C (-GetProperties@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBloc_ea_180060C2C.c)
 */

void __fastcall Spectre::Engine::ImageProcessingEffectBlur::CreateBlurResources(
        Spectre::Engine::ImageProcessingEffectBlur *this,
        struct Spectre::Engine::RenderDevice *a2)
{
  Spectre::Engine::Engine *Engine; // rax
  struct Spectre::Engine::ShaderManager *ShaderManager; // rbx
  _QWORD *v6; // rax
  __int64 *ShaderFamily; // rax
  __int64 *v8; // rbx
  __int64 *Properties; // rax
  __int64 *v10; // rax
  int v11; // eax
  void **v12; // rdx
  struct Spectre::Engine::Engine *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rbx
  void **v16; // rax
  Spectre::Engine::Sampler *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v19; // [rsp+28h] [rbp-48h]
  __m128i si128; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+40h] [rbp-30h]
  int v22; // [rsp+44h] [rbp-2Ch]
  int v23; // [rsp+48h] [rbp-28h]
  __int128 v24; // [rsp+4Ch] [rbp-24h]
  int v25; // [rsp+5Ch] [rbp-14h]
  float v26; // [rsp+60h] [rbp-10h]

  Engine = Spectre::Engine::RenderDevice::GetEngine(a2);
  ShaderManager = Spectre::Engine::Engine::GetShaderManager(Engine);
  v6 = std::string::string(&si128, (__int64)&Spectre::Engine::ImageProcessingShaderExtension::kShaderFamilyName);
  ShaderFamily = Spectre::Engine::ShaderManager::GetShaderFamily((__int64)ShaderManager, &v18, v6);
  v8 = (__int64 *)((char *)this + 304);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 38, ShaderFamily);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  Properties = (__int64 *)Spectre::Engine::ShaderFamily::GetProperties(*v8, &v18);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 36, Properties);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  v10 = Spectre::Engine::ShaderFamily::CreateMaterial(*v8, &v18);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 34, v10);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  std::string::assign((void **)this + 42, word_180106082, 0LL);
  v11 = *((_DWORD *)this + 93);
  switch ( v11 )
  {
    case 8:
      v12 = (void **)&Spectre::Engine::ImageProcessingShaderExtension::kOption_Blur8;
      break;
    case 16:
      v12 = (void **)&Spectre::Engine::ImageProcessingShaderExtension::kOption_Blur16;
      break;
    case 32:
      v12 = (void **)&Spectre::Engine::ImageProcessingShaderExtension::kOption_Blur32;
      break;
    default:
      goto LABEL_14;
  }
  std::string::operator=((void **)this + 42, v12);
LABEL_14:
  v13 = Spectre::Engine::RenderDevice::GetEngine(a2);
  v14 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>((__int64)v13, &v18);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 40, v14);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  v15 = *((_QWORD *)this + 40);
  v16 = (void **)std::string::string(&si128, (__int64)"Image Processing Blur Sampler");
  Spectre::Engine::RendererResource::SetName(v15, v16);
  v21 = 0;
  v25 = 0;
  v17 = (Spectre::Engine::Sampler *)*((_QWORD *)this + 40);
  v26 = FLOAT_3_4028235e38;
  v24 = 0LL;
  v22 = 1;
  v23 = 7;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  Spectre::Engine::Sampler::CreateSampler(v17, (const struct Spectre::Engine::SamplerStateDesc *)&si128, 0LL);
}
