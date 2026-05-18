/*
 * XREFs of ??$CreateResource@VDeviceFrameBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@XZ @ 0x18001071C
 * Callers:
 *     ?CreateRenderTarget@RenderOutputDwm@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800111B0 (-CreateRenderTarget@RenderOutputDwm@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z.c)
 *     ?CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x180028690 (-CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 *     ?CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHAEBV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800CBB7C (-CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceFrameBuffer.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateResource@VDeviceFrameBuffer@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@XZ @ 0x180010794 (--$CreateResource@VDeviceFrameBuffer@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA-AV-$s.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ?SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800296C0 (-SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceFrameBuffer>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-18h]

  Spectre::Engine::ResourceFactory::CreateResource<Spectre::Engine::DeviceFrameBuffer>(a1 + 496);
  v4 = *a2;
  v5 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(a1 + 8, v7);
  Spectre::Engine::DeviceResource::SetDevice(v4, v5);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
