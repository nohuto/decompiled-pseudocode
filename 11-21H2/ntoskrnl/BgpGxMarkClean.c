/*
 * XREFs of BgpGxMarkClean @ 0x14025E8BC
 * Callers:
 *     BgpGxCopyBitmapToRectangle @ 0x140AABD84 (BgpGxCopyBitmapToRectangle.c)
 *     BgpGxCopyRectangle @ 0x140AB16FC (BgpGxCopyRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall BgpGxMarkClean(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x10u;
}
