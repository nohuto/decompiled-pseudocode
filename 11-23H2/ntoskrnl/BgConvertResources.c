/*
 * XREFs of BgConvertResources @ 0x140AF1198
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B6630 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x140384BDC (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140C0E538, a1);
}
