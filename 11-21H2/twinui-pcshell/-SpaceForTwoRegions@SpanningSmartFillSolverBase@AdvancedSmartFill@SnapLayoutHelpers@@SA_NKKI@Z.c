/*
 * XREFs of ?SpaceForTwoRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@SA_NKKI@Z @ 0x1805A74EC
 * Callers:
 *     ?BuildOtherRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A1A64 (-BuildOtherRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXJJJJIKA.c)
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x1805A5C18 (-GetSmartFillRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAJJ_NPEAUI.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::SpaceForTwoRegions(
        __int64 a1,
        int a2,
        int a3)
{
  return (unsigned int)MulDiv(a2, 96, a3) >= 0x4D0;
}
