/*
 * XREFs of ?IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ @ 0x1800BBE00
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800BBBD8 (-CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsPrimaryMonitor(CLegacyRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( *((float *)this + 4505) == 0.0 && *((float *)this + 4506) == 0.0 )
    return *((_BYTE *)this + 18465) != 0;
  return result;
}
