/*
 * XREFs of ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0
 * Callers:
 *     ?SetSamplerProperties@SpectreSampler@@UEAAJIII@Z @ 0x18001B8F0 (-SetSamplerProperties@SpectreSampler@@UEAAJIII@Z.c)
 *     ?CreateResources@LightProbe@Engine@Spectre@@UEAAXXZ @ 0x180051A50 (-CreateResources@LightProbe@Engine@Spectre@@UEAAXXZ.c)
 *     ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170 (-AttachDevice@Camera@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?CreateEmptySampler@Engine@Spectre@@YA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAV112@AEBUSamplerStateDesc@12@@Z @ 0x18006F990 (-CreateEmptySampler@Engine@Spectre@@YA-AV-$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAV112@AEB.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ?RecreateColorSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E7D8 (-RecreateColorSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 *     ?RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E8DC (-RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 *     ?CreateReflectionResources@ImageProcessingEffectPlanarReflection@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180093CF0 (-CreateReflectionResources@ImageProcessingEffectPlanarReflection@Engine@Spectre@@MEAAXPEAVRender.c)
 *     ?CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180096160 (-CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z.c)
 *     ?DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAVRenderDevice@23@PEBUSamplerDefinition@Framework@3@@Z @ 0x18009A1BC (-DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA-AV-$shared_ptr@VSampler@Engine@Spectr.c)
 *     ?CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x18009CAD4 (-CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ?AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180054610 (-AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::Sampler::CreateSampler(
        Spectre::Engine::Sampler *this,
        const struct Spectre::Engine::SamplerStateDesc *a2,
        struct Spectre::Engine::RenderDevice *a3)
{
  _DWORD *v4; // r9
  Spectre::Engine::SharedResource *v5; // rcx
  __int64 v6; // r10
  __int64 *v7; // rax
  int v8; // r8d
  __int64 v9; // rcx
  struct Spectre::Engine::Engine *Engine; // rax
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]

  v4 = (_DWORD *)*((_QWORD *)this + 14);
  *v4 = *(_DWORD *)a2;
  v4[1] = *((_DWORD *)a2 + 1);
  v4[2] = *((_DWORD *)a2 + 2);
  v4[3] = *((_DWORD *)a2 + 3);
  v4[4] = *((_DWORD *)a2 + 4);
  v4[5] = *((_DWORD *)a2 + 5);
  v4[6] = *((_DWORD *)a2 + 6);
  v4[7] = *((_DWORD *)a2 + 7);
  v4[8] = *((_DWORD *)a2 + 8);
  v4[9] = *((_DWORD *)a2 + 9);
  v4[10] = *((_DWORD *)a2 + 10);
  v4[11] = *((_DWORD *)a2 + 11);
  v4[12] = *((_DWORD *)a2 + 12);
  if ( a3 )
    Spectre::Engine::RendererResource::SetOption((__int64)this, 1, 1);
  if ( Spectre::Engine::RendererResource::GetOption((__int64)this, 1) )
  {
    if ( v6 )
    {
      v7 = (__int64 *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(v6 + 8, &v14);
      Spectre::Engine::Sampler::AttachDevice((__int64)this, v7);
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      Spectre::Engine::RendererResource::SetOption((__int64)this, 2, 0);
      Spectre::Engine::RendererResource::SetOption(v9, v8 + 4, v8);
    }
    else
    {
      Engine = Spectre::Engine::SharedResource::GetEngine(v5);
      Spectre::Engine::Engine::SafeGetDeviceList((__int64)Engine, &v16);
      v11 = 0;
      v12 = v16;
      if ( (v17 - v16) >> 4 )
      {
        v13 = 0LL;
        do
        {
          std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v14,
            (_QWORD *)(v12 + 16 * v13));
          Spectre::Engine::Sampler::AttachDevice((__int64)this, &v14);
          if ( v15 )
            std::_Ref_count_base::_Decref(v15);
          ++v11;
          v12 = v16;
          v13 = v11;
        }
        while ( v11 < (unsigned __int64)((v17 - v16) >> 4) );
      }
      std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)&v16);
    }
  }
}
