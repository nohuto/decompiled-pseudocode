/*
 * XREFs of ?NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@BLI@EAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180120830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::NotifyRenderedRect(__int64 a1, int *a2)
{
  CLegacySwapChain::NotifyRenderedRect(a1 - *(int *)(a1 - 4) - 440, a2);
}
