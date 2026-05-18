/*
 * XREFs of ?PrepareScreenCaptureBuffer@RenderDevice@Engine@Spectre@@IEAAPEAEAEAUScreenCapture@23@AEBVFrameBuffer@23@_K@Z @ 0x180026F00
 * Callers:
 *     ?CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@@Z @ 0x1800C4CE0 (-CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRe.c)
 *     ?CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@AEAVFrameBuffer@34@@Z @ 0x1800C5080 (-CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVI.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001C144 (--3@YAXPEAX@Z.c)
 *     ?GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18002648C (-GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 */

unsigned __int8 *__fastcall Spectre::Engine::RenderDevice::PrepareScreenCaptureBuffer(
        Spectre::Engine::RenderDevice *this,
        void **a2,
        const struct Spectre::Engine::FrameBuffer *a3,
        unsigned __int64 a4)
{
  __int64 v6; // r9
  int v7; // esi
  int v8; // ebp
  Spectre::Engine::RenderDevice *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  Spectre::Engine::FrameBuffer::GetActiveSize((__int64)a3, &v10);
  v7 = (int)*(float *)&v10;
  v8 = (int)*((float *)&v10 + 1);
  if ( !*a2
    || v6 != *((_DWORD *)a2 + 4)
    || v7 != *((_DWORD *)a2 + 2)
    || v8 != *((_DWORD *)a2 + 3)
    || *((_DWORD *)a2 + 5) != 1 )
  {
    operator delete(*a2);
    *a2 = operator new(a4);
    *((_DWORD *)a2 + 2) = v7;
    *((_DWORD *)a2 + 3) = v8;
    *((_DWORD *)a2 + 4) = a4;
    *((_DWORD *)a2 + 5) = 1;
  }
  return (unsigned __int8 *)*a2;
}
