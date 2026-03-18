/*
 * XREFs of ?GetDirtyRects@CDDisplaySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801C86D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  return CRegion::GetRectangles((FastRegion::CRegion *)(a1 + 360), a2);
}
