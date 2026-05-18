/*
 * XREFs of ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360
 * Callers:
 *     ?SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z @ 0x180044718 (-SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z.c)
 *     ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170 (-AttachDevice@Camera@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?UpdateRenderStateDepthSettings@ShaderPipeline@Engine@Spectre@@QEAAXMMM_NW4ComparisonFunction@23@@Z @ 0x180087C20 (-UpdateRenderStateDepthSettings@ShaderPipeline@Engine@Spectre@@QEAAXMMM_NW4ComparisonFunction@23.c)
 *     ?AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180098B0C (-AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV-$vect.c)
 *     ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68 (-AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0 (-GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ??8RenderStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z @ 0x180043B4C (--8RenderStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z.c)
 *     ??$make_shared@URenderStateDesc@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@URenderStateDesc@Engine@Spectre@@@0@XZ @ 0x18008808C (--$make_shared@URenderStateDesc@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@URenderStateDesc@Engi.c)
 *     ?AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088210 (-AttachDevice@RenderState@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?DetachDevice@RenderState@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180088580 (-DetachDevice@RenderState@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::RenderState::Create(
        Spectre::Engine::RenderState *this,
        const struct Spectre::Engine::RenderStateDesc *a2,
        struct Spectre::Engine::RenderDevice *a3)
{
  __int64 *v6; // r15
  __int64 v7; // rcx
  struct Spectre::Engine::Engine *Engine; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int ID; // eax
  __int64 *v13; // rax
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  Spectre::Engine::SharedResource *v19; // rcx
  struct Spectre::Engine::Engine *v20; // rax
  __int64 *v21; // rax
  int v22; // r8d
  __int64 v23; // rcx
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v28; // [rsp+28h] [rbp-28h]
  __int64 v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h]

  v6 = (__int64 *)((char *)this + 112);
  v7 = *((_QWORD *)this + 14);
  if ( v7 )
  {
    if ( Spectre::Engine::RenderStateDesc::operator==(v7, (__int64)a2) )
      return;
    Engine = Spectre::Engine::SharedResource::GetEngine(this);
    Spectre::Engine::Engine::SafeGetDeviceList((__int64)Engine, &v29);
    v9 = 0;
    v10 = v29;
    if ( (v30 - v29) >> 4 )
    {
      v11 = 0LL;
      do
      {
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v27,
          (_QWORD *)(v10 + 16 * v11));
        ID = Spectre::Engine::RenderDevice::GetID(v27);
        Spectre::Engine::RenderState::DetachDevice(this, ID);
        if ( v28 )
          std::_Ref_count_base::_Decref(v28);
        ++v9;
        v10 = v29;
        v11 = v9;
      }
      while ( v9 < (unsigned __int64)((v30 - v29) >> 4) );
    }
    std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)&v29);
  }
  else
  {
    v13 = std::make_shared<Spectre::Engine::RenderStateDesc,>(&v27);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v6, v13);
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
  }
  v14 = *((_OWORD *)a2 + 1);
  v15 = *((_OWORD *)a2 + 2);
  v16 = *((_OWORD *)a2 + 3);
  v17 = *((_QWORD *)a2 + 8);
  v18 = *v6;
  *(_OWORD *)v18 = *(_OWORD *)a2;
  *(_OWORD *)(v18 + 16) = v14;
  *(_OWORD *)(v18 + 32) = v15;
  *(_OWORD *)(v18 + 48) = v16;
  *(_QWORD *)(v18 + 64) = v17;
  if ( a3 )
    Spectre::Engine::RendererResource::SetOption((__int64)this, 1, 1);
  if ( Spectre::Engine::RendererResource::GetOption((__int64)this, 1) )
  {
    v20 = Spectre::Engine::SharedResource::GetEngine(v19);
    if ( a3 )
    {
      v21 = (__int64 *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this((__int64)a3 + 8, &v27);
      Spectre::Engine::RenderState::AttachDevice((__int64)this, v21);
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
      Spectre::Engine::RendererResource::SetOption((__int64)this, 2, 0);
      Spectre::Engine::RendererResource::SetOption(v23, v22 + 4, v22);
    }
    else
    {
      Spectre::Engine::Engine::SafeGetDeviceList((__int64)v20, &v29);
      v24 = 0;
      v25 = v29;
      if ( (v30 - v29) >> 4 )
      {
        v26 = 0LL;
        do
        {
          std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v27,
            (_QWORD *)(v25 + 16 * v26));
          Spectre::Engine::RenderState::AttachDevice((__int64)this, &v27);
          if ( v28 )
            std::_Ref_count_base::_Decref(v28);
          ++v24;
          v25 = v29;
          v26 = v24;
        }
        while ( v24 < (unsigned __int64)((v30 - v29) >> 4) );
      }
      std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)&v29);
    }
  }
}
