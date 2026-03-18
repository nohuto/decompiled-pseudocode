/*
 * XREFs of ?Render@CVirtualMonitorCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EE9F0
 * Callers:
 *     ?Render@CVirtualMonitorCaptureRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18011D1E0 (-Render@CVirtualMonitorCaptureRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::Render(
        LARGE_INTEGER *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  return CCaptureRenderTarget::Render(this - 10, a2, a3, a4);
}
