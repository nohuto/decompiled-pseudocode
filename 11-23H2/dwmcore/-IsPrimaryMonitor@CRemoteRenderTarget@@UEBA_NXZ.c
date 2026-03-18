/*
 * XREFs of ?IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ @ 0x18010A4F0
 * Callers:
 *     ?Present@CRemoteRenderTarget@@UEAAJ_N@Z @ 0x18010A144 (-Present@CRemoteRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18010A1FC (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRemoteRenderTarget::IsPrimaryMonitor(CRemoteRenderTarget *this)
{
  return *((float *)this + 16) == 0.0 && *((float *)this + 17) == 0.0;
}
