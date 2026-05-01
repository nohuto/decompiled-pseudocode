/*
 * XREFs of ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1805A7DA8
 * Callers:
 *     ?BuildOtherRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A1A64 (-BuildOtherRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXJJJJIKA.c)
 *     ?GetOtherRects@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A49E4 (-GetOtherRects@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXPEAUIApplic.c)
 * Callees:
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     ?_Reallocate_exactly@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K@Z @ 0x1805A7708 (-_Reallocate_exactly@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K.c)
 */

void __fastcall std::vector<Geometry::CRect>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 > (__int64)(a1[2] - *a1) >> 4 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<Geometry::CRect>::_Xlength();
    std::vector<Geometry::CRect>::_Reallocate_exactly((__int64)a1, a2);
  }
}
