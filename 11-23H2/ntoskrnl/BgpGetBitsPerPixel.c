/*
 * XREFs of BgpGetBitsPerPixel @ 0x140385500
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x140384B58 (BgpGxProcessQrCodeBitmap.c)
 *     BgpTxtDisplayCharacter @ 0x140384F88 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14038524C (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1403852DC (GxpWriteFrameBufferPixels.c)
 *     BgpClearScreen @ 0x140671AF0 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1406730C4 (BgpFwDisplayBugCheckScreen.c)
 *     LogFwReport @ 0x140AEC0F4 (LogFwReport.c)
 *     BgpGxReadRectangle @ 0x140AEC4D8 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x140AEC548 (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x140AED110 (AnFwpFadeAnimationTimer.c)
 *     AnFwConfigureProgressResources @ 0x140AEE920 (AnFwConfigureProgressResources.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140C0E450 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140C0E450 == 5 )
    return 32LL;
  return result;
}
