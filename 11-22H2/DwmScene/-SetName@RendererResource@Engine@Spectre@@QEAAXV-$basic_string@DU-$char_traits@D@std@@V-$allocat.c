/*
 * XREFs of ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4
 * Callers:
 *     ?CreateRenderTarget@RenderOutputDwm@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800111B0 (-CreateRenderTarget@RenderOutputDwm@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z.c)
 *     ?CreateCommandList@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBVState@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18002612C (-CreateCommandList@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_ptr@VCommandList@Engine@Spectre@.c)
 *     ??0FrameBuffer@Engine@Spectre@@QEAA@XZ @ 0x180027E0C (--0FrameBuffer@Engine@Spectre@@QEAA@XZ.c)
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C (-Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x180028690 (-CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 *     ?CreateResources@LightProbe@Engine@Spectre@@UEAAXXZ @ 0x180051A50 (-CreateResources@LightProbe@Engine@Spectre@@UEAAXXZ.c)
 *     ?AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180054610 (-AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDevice@23@@Z @ 0x180056368 (-CreateDeviceTextureHelper@Texture@Engine@Spectre@@AEAAXAEBUTextureImageSetView@23@PEAVRenderDev.c)
 *     ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170 (-AttachDevice@Camera@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ??0DepthBuffer@Engine@Spectre@@QEAA@XZ @ 0x18006EF84 (--0DepthBuffer@Engine@Spectre@@QEAA@XZ.c)
 *     ?AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18006F500 (-AttachDevice@DepthBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18006F640 (-Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ?CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessingConfiguration@23@@Z @ 0x180072BE8 (-CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessi.c)
 *     ?GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073438 (-GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VFrameBuffe.c)
 *     ??$LoadInternalHelper@VDeviceDomainShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A1BC (--$LoadInternalHelper@VDeviceDomainShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$share.c)
 *     ??$LoadInternalHelper@VDeviceGeometryShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A274 (--$LoadInternalHelper@VDeviceGeometryShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$sha.c)
 *     ??$LoadInternalHelper@VDeviceHullShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A32C (--$LoadInternalHelper@VDeviceHullShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$shared_.c)
 *     ??$LoadInternalHelper@VDevicePixelShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A3E4 (--$LoadInternalHelper@VDevicePixelShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$shared.c)
 *     ??$LoadInternalHelper@VDeviceVertexShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A49C (--$LoadInternalHelper@VDeviceVertexShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$share.c)
 *     ?SetName@Shader@Engine@Spectre@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18008B2A0 (-SetName@Shader@Engine@Spectre@@IEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ?CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ @ 0x18008E0E0 (-CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ.c)
 *     ?RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z @ 0x18008E728 (-RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z.c)
 *     ?RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E838 (-RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 *     ?RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E8DC (-RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 *     ?CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ @ 0x18008F910 (-CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ.c)
 *     ?CreateReflectionResources@ImageProcessingEffectPlanarReflection@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180093CF0 (-CreateReflectionResources@ImageProcessingEffectPlanarReflection@Engine@Spectre@@MEAAXPEAVRender.c)
 *     ?UpdateBuffers@ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x180093EC0 (-UpdateBuffers@ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAAXPEAVRenderDevice@23@II.c)
 *     ?CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180096160 (-CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z.c)
 *     ?UpdateBuffers@ImageProcessingEffectBloom@Engine@Spectre@@UEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x180096430 (-UpdateBuffers@ImageProcessingEffectBloom@Engine@Spectre@@UEAAXPEAVRenderDevice@23@IIW4Format@23.c)
 *     ?DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAVRenderDevice@23@PEBUSamplerDefinition@Framework@3@@Z @ 0x18009A1BC (-DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA-AV-$shared_ptr@VSampler@Engine@Spectr.c)
 *     ?CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x18009CAD4 (-CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 *     ?UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x18009D410 (-UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@1II@Z @ 0x1800CB6EC (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11RenderTargetView@@@WRL@Mic.c)
 *     ?CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHAEBV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800CBB7C (-CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceFrameBuffer.c)
 *     ?CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z @ 0x1800CBF28 (-CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z.c)
 *     _lambda_5efd0f16faa6f6439fdb99826dc3e8ab_::operator() @ 0x1800D5AEC (_lambda_5efd0f16faa6f6439fdb99826dc3e8ab_--operator().c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@I@Z @ 0x1800D5C8C (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11DepthStencilView@@@WRL@Micr.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800134DC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RendererResource::SetName(__int64 a1, void **a2)
{
  std::string::operator=((void **)(a1 + 8), a2);
  std::string::_Tidy_deallocate((__int64)a2);
}
