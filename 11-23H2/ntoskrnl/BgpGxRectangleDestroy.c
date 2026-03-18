/*
 * XREFs of BgpGxRectangleDestroy @ 0x140AEDA70
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x140384B58 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x140384BDC (BgpGxConvertRectangle.c)
 *     BgpTxtDisplayCharacter @ 0x140384F88 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14038524C (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1403852DC (GxpWriteFrameBufferPixels.c)
 *     BgpGxParseBitmap @ 0x140AEC42C (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x140AEC4D8 (BgpGxReadRectangle.c)
 *     BgpTxtDestroyRegion @ 0x140AEC904 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x140AECFB8 (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140AED9C8 (TxtpAddCacheEntry.c)
 *     BgpTxtCreateRegion @ 0x140AEE2AC (BgpTxtCreateRegion.c)
 *     AnFwpDisableProgressTimer @ 0x140AEF610 (AnFwpDisableProgressTimer.c)
 *     ResFwFreeContext @ 0x140AF1ED4 (ResFwFreeContext.c)
 *     BgpGxBlendRectangle @ 0x140AF2430 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140AF2720 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x140AF27A0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403860A0 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
