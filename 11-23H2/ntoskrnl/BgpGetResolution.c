/*
 * XREFs of BgpGetResolution @ 0x14036EAC8
 * Callers:
 *     LogFwReport @ 0x140AEC0F4 (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x140AEC548 (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x140AEE2AC (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x140AEE6E0 (BgpConsoleInitialize.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall BgpGetResolution(_DWORD *a1)
{
  *a1 = DWORD2(BgInternal);
  a1[1] = DWORD1(BgInternal);
  a1[2] = HIDWORD(BgInternal);
  return a1;
}
