/*
 * XREFs of ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C
 * Callers:
 *     ?CreateRenderTarget@RenderOutputDwm@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800111B0 (-CreateRenderTarget@RenderOutputDwm@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z.c)
 *     ?CheckMultisamplingResolveSupport@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAA_NXZ @ 0x1800C4BFC (-CheckMultisamplingResolveSupport@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAA_NXZ.c)
 *     ?GetAntialiasingSettings@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXAEAI0@Z @ 0x1800C56D0 (-GetAntialiasingSettings@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXAEAI0@Z.c)
 *     ?GetFramePresentationMaximumLatency@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEBAIXZ @ 0x1800C58D0 (-GetFramePresentationMaximumLatency@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEBAIXZ.c)
 *     ?Suspend@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800C7630 (-Suspend@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?GetDevice@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C9D80 (-GetDevice@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800CB930 (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 *     ?CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHAEBV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800CBB7C (-CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceFrameBuffer.c)
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 *     ?CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture2D@@II@Z @ 0x1800CDBD8 (-CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 *     ?CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture3D@@II@Z @ 0x1800CDE10 (-CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 *     ?GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@II@Z @ 0x1800CEC40 (-GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     ?Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z @ 0x1800CFED0 (-Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z.c)
 *     ?Internal_WaitForOperationHelper@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800D0624 (-Internal_WaitForOperationHelper@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 *     ?Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT_DESC@@IAEBVShaderProgram@34@@Z @ 0x1800D3A4C (-Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT.c)
 *     ?Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D46B0 (-Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?CreateSampler@SamplerD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@USamplerStateDesc@Engine@Spectre@@@std@@@Z @ 0x1800D4950 (-CreateSampler@SamplerD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@USamplerStateDesc@Engine@Sp.c)
 *     ?Create@RenderStateD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@URenderStateDesc@Engine@Spectre@@@std@@@Z @ 0x1800D4D50 (-Create@RenderStateD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@URenderStateDesc@Engine@Spectr.c)
 *     ?Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D5540 (-Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 *     ?CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800D62DC (-CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceDepthBuffer@E.c)
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 *     ?Create@ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA_NPEBXIW4Usage@34@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800D7170 (-Create@ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA_NPEBXIW4Usage@34@AEBV-$basic_string@DU-$c.c)
 *     ?Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7400 (-Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D76A0 (-Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7950 (-Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Create@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAA_NAEAVRenderDevice@34@W4QueryType@GpuQuery@34@@Z @ 0x1800D7D30 (-Create@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAA_NAEAVRenderDevice@34@W4QueryType@GpuQuery@34@@Z.c)
 *     ?CreateBuffer@D3DBufferUtils@D3D11@Engine@Spectre@@SA?AV?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@PEBDAEAVRenderDeviceD3D11@234@AEAUArrayBufferDesc@34@PEBXW4D3D11_BIND_FLAG@@@Z @ 0x1800D8568 (-CreateBuffer@D3DBufferUtils@D3D11@Engine@Spectre@@SA-AV-$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@.c)
 *     ?RecoverBufferData@D3DBufferUtils@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@X@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@6@V?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@I@Z @ 0x1800D86DC (-RecoverBufferData@D3DBufferUtils@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@X@std@@AEBV-$shared_pt.c)
 *     ?CreateHolographicResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@EEAAXXZ @ 0x1800D9200 (-CreateHolographicResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@EEAAX.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 4256);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
