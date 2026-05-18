/*
 * XREFs of ?GetTextureStaging@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x1800C5A5C
 * Callers:
 *     ?CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@@Z @ 0x1800C4CE0 (-CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRe.c)
 *     ?CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@AEAVFrameBuffer@34@@Z @ 0x1800C5080 (-CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVI.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::FrameBuffer::GetTextureStaging(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 152));
  return v2;
}
