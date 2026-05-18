/*
 * XREFs of ?GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18002648C
 * Callers:
 *     ?PrepareScreenCaptureBuffer@RenderDevice@Engine@Spectre@@IEAAPEAEAEAUScreenCapture@23@AEBVFrameBuffer@23@_K@Z @ 0x180026F00 (-PrepareScreenCaptureBuffer@RenderDevice@Engine@Spectre@@IEAAPEAEAEAUScreenCapture@23@AEBVFrameB.c)
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@@Z @ 0x1800C4CE0 (-CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRe.c)
 *     ?CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@AEAVFrameBuffer@34@@Z @ 0x1800C5080 (-CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVI.c)
 *     ?SetAntialiasingQuality@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXW4AntialiasingQuality@34@@Z @ 0x1800C7260 (-SetAntialiasingQuality@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXW4AntialiasingQuality@34@@Z.c)
 * Callees:
 *     ?GetActiveSize@Texture@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x180056618 (-GetActiveSize@Texture@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 */

_QWORD *__fastcall Spectre::Engine::FrameBuffer::GetActiveSize(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 *ActiveSize; // rax
  __int64 v5; // xmm0_8
  _QWORD *result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v2 = *(_QWORD *)(a1 + 136);
  v3 = a2;
  if ( v2 )
  {
    ActiveSize = (__int64 *)Spectre::Engine::Texture::GetActiveSize(v2, &v7, a2);
  }
  else
  {
    v7 = 0;
    ActiveSize = (__int64 *)&v7;
    v8 = 0;
  }
  v5 = *ActiveSize;
  result = v3;
  *v3 = v5;
  return result;
}
