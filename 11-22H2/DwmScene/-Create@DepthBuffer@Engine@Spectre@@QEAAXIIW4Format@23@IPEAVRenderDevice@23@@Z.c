/*
 * XREFs of ?Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18006F640
 * Callers:
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@I@Z @ 0x18006F8B0 (-Create@DepthBuffer@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@.c)
 *     ?CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessingConfiguration@23@@Z @ 0x180072BE8 (-CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessi.c)
 *     ?GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073374 (-GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VDepthBuffer.c)
 *     ?RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E838 (-RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ??$CreateResource@VDeviceDepthBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@XZ @ 0x18006EDDC (--$CreateResource@VDeviceDepthBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shar.c)
 *     ?AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18006F288 (-AttachBufferInternal@DepthBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VDeviceDepthBuffer@Engin.c)
 *     ?CreateEmptyTexture@Engine@Spectre@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAV112@IIW4Format@12@W4Usage@12@I@Z @ 0x18006FA04 (-CreateEmptyTexture@Engine@Spectre@@YA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAV112@IIW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::DepthBuffer::Create(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  __int64 v10; // rsi
  __int64 *EmptyTexture; // rax
  __int64 v12; // rbx
  void **Name; // rax
  int v14; // r8d
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rbx
  void **v21; // rax
  __int64 v22; // [rsp+48h] [rbp-39h] BYREF
  std::_Ref_count_base *v23; // [rsp+50h] [rbp-31h]
  __int64 v24; // [rsp+58h] [rbp-29h] BYREF
  std::_Ref_count_base *v25; // [rsp+60h] [rbp-21h]
  __int64 v26; // [rsp+68h] [rbp-19h] BYREF
  __int64 v27; // [rsp+70h] [rbp-11h]
  _QWORD v28[4]; // [rsp+88h] [rbp+7h] BYREF

  if ( a6 )
    Spectre::Engine::RendererResource::SetOption((__int64)a1, 1, 1);
  v10 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
  EmptyTexture = (__int64 *)Spectre::Engine::CreateEmptyTexture((unsigned int)&v24, v10, a2, a3, a4, 0, a5);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 14, EmptyTexture);
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  if ( Spectre::Engine::RendererResource::GetOption((__int64)a1, 1) )
  {
    if ( a6 )
    {
      Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceDepthBuffer>(a6, &v22);
      v12 = v22;
      Name = (void **)Spectre::Engine::RendererResource::GetName((__int64)a1, &v26);
      Spectre::Engine::RendererResource::SetName(v12, Name);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v22 + 40LL))(v22, a2, a3, a4, a5);
      Spectre::Engine::DepthBuffer::AttachBufferInternal(a1, &v22);
      Spectre::Engine::RendererResource::SetOption((__int64)a1, 2, 0);
      Spectre::Engine::RendererResource::SetOption(v15, v14 + 4, v14);
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
    }
    else
    {
      Spectre::Engine::Engine::SafeGetDeviceList(v10, &v26);
      v16 = 0;
      v17 = v26;
      if ( (v27 - v26) >> 4 )
      {
        v18 = 0LL;
        do
        {
          std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v24,
            (_QWORD *)(v17 + 16 * v18));
          v19 = v24;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24) )
          {
            Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceDepthBuffer>(v19, &v22);
            v20 = v22;
            v21 = (void **)Spectre::Engine::RendererResource::GetName((__int64)a1, v28);
            Spectre::Engine::RendererResource::SetName(v20, v21);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v22 + 40LL))(v22, a2, a3, a4, a5);
            Spectre::Engine::DepthBuffer::AttachBufferInternal(a1, &v22);
            if ( v23 )
              std::_Ref_count_base::_Decref(v23);
          }
          if ( v25 )
            std::_Ref_count_base::_Decref(v25);
          ++v16;
          v17 = v26;
          v18 = v16;
        }
        while ( v16 < (unsigned __int64)((v27 - v26) >> 4) );
      }
      std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)&v26);
    }
  }
}
