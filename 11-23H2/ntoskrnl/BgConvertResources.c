/*
 * XREFs of BgConvertResources @ 0x140AF11A8
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B6810 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x140384DBC (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_140C0E538, a1);
}
