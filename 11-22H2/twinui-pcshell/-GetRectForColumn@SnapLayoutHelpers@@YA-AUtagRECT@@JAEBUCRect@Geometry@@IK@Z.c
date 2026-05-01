/*
 * XREFs of ?GetRectForColumn@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x180672A08
 * Callers:
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x180675E58 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 *     ?CalculateSnapRegion@ColumnSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067EC50 (-CalculateSnapRegion@ColumnSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnap.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetDefaultRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AUtagRECT@@JIKAEBUCRect@Geometry@@@Z @ 0x18067160C (-GetDefaultRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA-AUtagRECT@@JIKAEBUCRect@Geom.c)
 */

struct tagRECT *__fastcall SnapLayoutHelpers::GetRectForColumn(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        const struct Geometry::CRect *a3,
        const struct Geometry::CRect *a4)
{
  struct tagRECT v5; // xmm0
  struct tagRECT *result; // rax
  unsigned int v7; // [rsp+20h] [rbp-38h]
  void **v8; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v9; // [rsp+38h] [rbp-20h] BYREF

  v8 = &SnapLayoutHelpers::ColumnSmartFillSolver::`vftable';
  v5 = *SnapLayoutHelpers::SpanningSmartFillSolverBase::GetDefaultRect(
          (SnapLayoutHelpers::SpanningSmartFillSolverBase *)&v8,
          &v9,
          (unsigned int)retstr,
          (unsigned int)a4,
          v7,
          a3);
  result = this;
  *this = v5;
  return result;
}
