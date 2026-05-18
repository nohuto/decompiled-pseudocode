/*
 * XREFs of ?ReleaseBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXPEAUScreenCapture@34@@Z @ 0x1800C7100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001C144 (--3@YAXPEAX@Z.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::ReleaseBackBufferPixels(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this,
        void **a2)
{
  operator delete(*a2);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
}
