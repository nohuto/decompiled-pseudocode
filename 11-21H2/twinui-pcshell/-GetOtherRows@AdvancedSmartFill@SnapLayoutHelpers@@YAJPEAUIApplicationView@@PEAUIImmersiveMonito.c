/*
 * XREFs of ?GetOtherRows@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A4CD0
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059DAE0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?GetOtherRects@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A49E4 (-GetOtherRects@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXPEAUIApplic.c)
 */

__int64 __fastcall SnapLayoutHelpers::AdvancedSmartFill::GetOtherRows(
        __int64 *a1,
        SnapLayoutHelpers *a2,
        __int64 a3,
        __int64 *a4)
{
  const char *v4; // r9
  __int64 result; // rax
  void **v6; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = &SnapLayoutHelpers::AdvancedSmartFill::RowSmartFillSolver::`vftable';
  try
  {
    SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::GetOtherRects(
      (__int64)&v6,
      a1,
      a2,
      (__int64)a4,
      a4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBA8,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
                           v4);
  }
  return result;
}
