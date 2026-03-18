/*
 * XREFs of ?GetDirtyRects@CConversionSwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180292AA8
 * Callers:
 *     ?GetDirtyRects@CConversionSwapChain@@$4PPPPPPPM@A@EBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18010A490 (-GetDirtyRects@CConversionSwapChain@@$4PPPPPPPM@A@EBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  return CRegion::GetRectangles((FastRegion::CRegion *)(a1 - 184), a2);
}
