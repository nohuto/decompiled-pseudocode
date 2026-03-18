/*
 * XREFs of ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180255B8C
 * Callers:
 *     ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x180255BD4 (-CheckOcclusionState@CVisualCapture@@UEAAJXZ.c)
 *     ?Present@CVisualCapture@@UEAAJ_N@Z @ 0x180256188 (-Present@CVisualCapture@@UEAAJ_N@Z.c)
 *     ?Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1802561E0 (-Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1802562D0 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

void __fastcall CVisualCapture::CheckForCaptureCompleted(CVisualCapture *this)
{
  void *v2; // rcx

  if ( !*((_BYTE *)this + 1913) )
  {
    v2 = (void *)*((_QWORD *)this + 238);
    if ( v2 )
    {
      if ( !WaitForSingleObject(v2, 0) )
        CVisualCapture::SendCaptureCompleted(this);
    }
  }
}
