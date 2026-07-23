/*
 * XREFs of BgpGxRectangleDestroy @ 0x140AEDA70
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x140384D38 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x140384DBC (BgpGxConvertRectangle.c)
 *     BgpTxtDisplayCharacter @ 0x140385168 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14038542C (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1403854BC (GxpWriteFrameBufferPixels.c)
 *     BgpGxParseBitmap @ 0x140AEC42C (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x140AEC4D8 (BgpGxReadRectangle.c)
 *     BgpTxtDestroyRegion @ 0x140AEC904 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x140AECFB8 (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140AED9C8 (TxtpAddCacheEntry.c)
 *     BgpTxtCreateRegion @ 0x140AEE2AC (BgpTxtCreateRegion.c)
 *     AnFwpDisableProgressTimer @ 0x140AEF610 (AnFwpDisableProgressTimer.c)
 *     ResFwFreeContext @ 0x140AF1EE4 (ResFwFreeContext.c)
 *     BgpGxBlendRectangle @ 0x140AF2440 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140AF2730 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x140AF27B0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140386280 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
