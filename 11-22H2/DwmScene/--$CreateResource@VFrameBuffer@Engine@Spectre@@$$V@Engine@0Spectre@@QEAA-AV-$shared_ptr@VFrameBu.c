/*
 * XREFs of ??$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18001085C
 * Callers:
 *     ?CreateRenderTarget@RenderOutputDwm@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800111B0 (-CreateRenderTarget@RenderOutputDwm@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z.c)
 *     ?CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessingConfiguration@23@@Z @ 0x180072BE8 (-CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessi.c)
 *     ?GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073438 (-GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VFrameBuffe.c)
 *     ?RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z @ 0x18008E728 (-RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z.c)
 *     ?UpdateBuffers@ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x180093EC0 (-UpdateBuffers@ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAAXPEAVRenderDevice@23@II.c)
 *     ?UpdateBuffers@ImageProcessingEffectBloom@Engine@Spectre@@UEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x180096430 (-UpdateBuffers@ImageProcessingEffectBloom@Engine@Spectre@@UEAAXPEAVRenderDevice@23@IIW4Format@23.c)
 *     ?UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x18009D410 (-UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@.c)
 *     ?CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9420 (-CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WR.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VFrameBuffer@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@0@XZ @ 0x180010CE4 (--$make_shared@VFrameBuffer@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VFrameBuffer@Engine@Spect.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?push_back@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAAX$$QEAV?$weak_ptr@VRendererResource@Engine@Spectre@@@2@@Z @ 0x180011D0C (-push_back@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z @ 0x180033200 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Spectre::Engine::Engine::CreateResource<Spectre::Engine::FrameBuffer,>(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rdx
  std::_Ref_count_base *v6[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v7[32]; // [rsp+38h] [rbp-20h] BYREF

  std::make_shared<Spectre::Engine::FrameBuffer,>(a2);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(a1 + 808));
  *(_OWORD *)v6 = 0LL;
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    v6[0] = *(std::_Ref_count_base **)a2;
    v6[1] = (std::_Ref_count_base *)v4;
    _InterlockedIncrement(v4 + 3);
  }
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::push_back(a1 + 864, v6);
  if ( v6[1] )
    std::_Ref_count_base::_Decwref(v6[1]);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(v7);
  Spectre::Engine::Engine::CreateResourceInternal(a1, *a2, 0LL);
  return a2;
}
