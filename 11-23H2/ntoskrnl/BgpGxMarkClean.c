/*
 * XREFs of BgpGxMarkClean @ 0x14036F36C
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x140AEC388 (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x140AF2664 (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
