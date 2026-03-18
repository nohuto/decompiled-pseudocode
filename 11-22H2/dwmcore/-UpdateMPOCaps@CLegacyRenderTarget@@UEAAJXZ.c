/*
 * XREFs of ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C9790
 * Callers:
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C94BC (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800C9B60 (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1801E7B10 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x1800C97B8 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 */

__int64 __fastcall CLegacyRenderTarget::UpdateMPOCaps(CLegacyRenderTarget *this)
{
  int updated; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  updated = COverlayContext::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 56));
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, updated, 0xECu, 0LL);
  return v3;
}
