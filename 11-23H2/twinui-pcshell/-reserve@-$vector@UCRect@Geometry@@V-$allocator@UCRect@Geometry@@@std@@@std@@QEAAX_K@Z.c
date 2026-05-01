/*
 * XREFs of ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1806747A4
 * Callers:
 *     ?BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180670668 (-BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV-$vector@UCRect.c)
 *     ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1806725E8 (-GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIIm.c)
 * Callees:
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Reallocate_exactly@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K@Z @ 0x180674400 (-_Reallocate_exactly@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K.c)
 */

void __fastcall std::vector<Geometry::CRect>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 > (__int64)(a1[2] - *a1) >> 4 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    std::vector<Geometry::CRect>::_Reallocate_exactly(a1, a2);
  }
}
