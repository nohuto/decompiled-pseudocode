/*
 * XREFs of ??$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@XZ @ 0x180015EE4
 * Callers:
 *     ?CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUISpectreTexture@@@Z @ 0x180018620 (-CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUI.c)
 *     ?CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDevice@23@@Z @ 0x180056368 (-CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDev.c)
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@1II@Z @ 0x1800CB6EC (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11RenderTargetView@@@WRL@Mic.c)
 *     ?CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z @ 0x1800CBF28 (-CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@I@Z @ 0x1800D5C8C (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11DepthStencilView@@@WRL@Micr.c)
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$CreateResource@VDeviceTexture@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@XZ @ 0x180015F5C (--$CreateResource@VDeviceTexture@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA-AV-$share.c)
 *     ?SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800296C0 (-SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 */

__int64 *__fastcall Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceTexture>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-18h]

  Spectre::Engine::ResourceFactory::CreateResource<Spectre::Engine::DeviceTexture>(a1 + 496);
  v4 = *a2;
  v5 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(a1 + 8, &v7);
  Spectre::Engine::DeviceResource::SetDevice(v4, v5);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
