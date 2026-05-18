/*
 * XREFs of ??$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x18001FC04
 * Callers:
 *     ?CreateWithDefaultProviders@PerformanceLogger@Utils@Spectre@@SA?AV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@XZ @ 0x1800201A0 (-CreateWithDefaultProviders@PerformanceLogger@Utils@Spectre@@SA-AV-$shared_ptr@VPerformanceLogge.c)
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 *     ?CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture2D@@II@Z @ 0x1800CDBD8 (-CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 *     ?CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture3D@@II@Z @ 0x1800CDE10 (-CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 *     ?GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@II@Z @ 0x1800CEC40 (-GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 *     ?Create@ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA_NPEBXIW4Usage@34@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800D7170 (-Create@ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA_NPEBXIW4Usage@34@AEBV-$basic_string@DU-$c.c)
 *     ?GetRendererD3D11@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800D9750 (-GetRendererD3D11@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEBA-AV-$shared.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *a2;
  *a2 = 0LL;
  *a1 = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  a1[1] = v3;
  return a1;
}
