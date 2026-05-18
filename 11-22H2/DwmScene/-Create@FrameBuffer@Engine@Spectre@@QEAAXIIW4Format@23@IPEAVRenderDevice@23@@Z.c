/*
 * XREFs of ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C
 * Callers:
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x180028204 (-Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@st.c)
 *     ?CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessingConfiguration@23@@Z @ 0x180072BE8 (-CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessi.c)
 *     ?GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073438 (-GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VFrameBuffe.c)
 *     ?RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z @ 0x18008E728 (-RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z.c)
 *     ?UpdateBuffers@ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x180093EC0 (-UpdateBuffers@ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAAXPEAVRenderDevice@23@II.c)
 *     ?UpdateBuffers@ImageProcessingEffectBloom@Engine@Spectre@@UEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x180096430 (-UpdateBuffers@ImageProcessingEffectBloom@Engine@Spectre@@UEAAXPEAVRenderDevice@23@IIW4Format@23.c)
 *     ?UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x18009D410 (-UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180011BA0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180016268 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180016268.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x18001C600 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C600.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ?CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x180028690 (-CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 *     ?SetActiveSize@FrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x180028B1C (-SetActiveSize@FrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?SafeGetDeviceList@Engine@1Spectre@@QEAA?AV?$vector@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800364DC (-SafeGetDeviceList@Engine@1Spectre@@QEAA-AV-$vector@V-$shared_ptr@VRenderDevice@Engine@Spectre@@.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::FrameBuffer::Create(
        Spectre::Engine::FrameBuffer *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        struct Spectre::Engine::RenderDevice *a6)
{
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  __int64 v9; // r15
  __int64 *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  _QWORD *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rbx
  char *v20; // rax
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  __m128 v24; // xmm2
  __m128 v25; // xmm0
  Spectre::Engine::FrameBuffer *v26; // rcx
  int v27; // r8d
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  _QWORD *v30; // rsi
  struct Spectre::Engine::RenderDevice *v32; // [rsp+58h] [rbp-51h] BYREF
  std::_Ref_count_base *v33; // [rsp+60h] [rbp-49h]
  unsigned int v34; // [rsp+68h] [rbp-41h]
  _QWORD v35[4]; // [rsp+70h] [rbp-39h] BYREF
  void *v36[4]; // [rsp+90h] [rbp-19h] BYREF

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  *((_DWORD *)a1 + 28) = a5;
  v9 = (*(__int64 (__fastcall **)(Spectre::Engine::FrameBuffer *))(*(_QWORD *)a1 + 32LL))(a1);
  v10 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(v9, &v32);
  v11 = (_QWORD *)((char *)a1 + 136);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)a1 + 17, v10);
  if ( v33 )
    std::_Ref_count_base::_Decref(v33);
  Spectre::Engine::RendererResource::GetName(a1, v36);
  if ( std::string::empty((__int64)v36) )
    std::string::assign(v36, "RenderTargetD3D11", 0x11uLL);
  v12 = *v11;
  v13 = std::string::string(v35, (__int64)v36);
  Spectre::Engine::RendererResource::SetName(v12, v13);
  Spectre::Engine::RendererResource::SetOption(*v11, 1LL);
  Spectre::Engine::RendererResource::SetOption(*v11, (unsigned int)(v14 + 2));
  Spectre::Engine::RendererResource::SetOption(*v11, (unsigned int)(v15 + 4));
  Spectre::Engine::RendererResource::SetOption(*v11, (unsigned int)(v16 + 8));
  v34 = a5 & 0xFFFFFF7C | 3;
  Spectre::Engine::Texture::Create(*v11, v7, v8, 0LL, a4, 0, v34);
  if ( (a5 & 0x80u) != 0 )
  {
    v17 = (_QWORD *)((char *)a1 + 152);
    if ( !*((_QWORD *)a1 + 19) )
    {
      v18 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Texture,>(v9, &v32);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)a1 + 19, v18);
      if ( v33 )
        std::_Ref_count_base::_Decref(v33);
    }
    v19 = *v17;
    v20 = std::operator+<char>((char *)v35, v36, " (staging)");
    Spectre::Engine::RendererResource::SetName(v19, v20);
    Spectre::Engine::RendererResource::SetOption(*v17, 1LL);
    Spectre::Engine::RendererResource::SetOption(*v17, (unsigned int)(v21 + 2));
    Spectre::Engine::RendererResource::SetOption(*v17, (unsigned int)(v22 + 4));
    Spectre::Engine::RendererResource::SetOption(*v17, (unsigned int)(v23 + 8));
    Spectre::Engine::Texture::Create(*v17, v7, v8, 0LL, a4, 3, v34 & 0xFFFFFF7C | 0x80);
  }
  v24 = 0LL;
  v24.m128_f32[0] = (float)(int)v8;
  v25 = 0LL;
  v25.m128_f32[0] = (float)(int)v7;
  Spectre::Engine::FrameBuffer::SetActiveSize(a1, _mm_unpacklo_ps(v25, v24).m128_u64[0]);
  if ( a6 )
    Spectre::Engine::RendererResource::SetOption(a1, 1LL);
  if ( (unsigned __int8)Spectre::Engine::RendererResource::GetOption(a1, 1LL) )
  {
    if ( a6 )
    {
      Spectre::Engine::FrameBuffer::CreateDeviceFrameBufferHelper(v26, a6);
      Spectre::Engine::RendererResource::SetOption(a1, 2LL);
      Spectre::Engine::RendererResource::SetOption(v28, (unsigned int)(v27 + 4));
    }
    else
    {
      Spectre::Engine::Engine::SafeGetDeviceList(v9, v35);
      v29 = (_QWORD *)v35[0];
      v30 = (_QWORD *)v35[1];
      while ( v29 != v30 )
      {
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v32,
          v29);
        Spectre::Engine::FrameBuffer::CreateDeviceFrameBufferHelper(a1, v32);
        if ( v33 )
          std::_Ref_count_base::_Decref(v33);
        v29 += 2;
      }
      std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)v35);
    }
  }
  std::string::_Tidy_deallocate((__int64)v36);
}
