/*
 * XREFs of ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4
 * Callers:
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C (-Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033170 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@V-$shared_ptr@VRenderDevice@.c)
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z @ 0x180033200 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z.c)
 *     ?AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180047E90 (-AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?Render@Mesh@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x180048C04 (-Render@Mesh@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180055980 (-AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18006F640 (-Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360 (-Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?AttachDevice@ArrayBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800888F0 (-AttachDevice@ArrayBuffer@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?NotifyModified@ArrayBuffer@Engine@Spectre@@UEAAXXZ @ 0x180088C00 (-NotifyModified@ArrayBuffer@Engine@Spectre@@UEAAXXZ.c)
 *     ?Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008C1B0 (-Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV-$shared_ptr.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::RendererResource::GetOption(__int64 a1, int a2)
{
  return (a2 & *(_DWORD *)(a1 + 40)) != 0;
}
