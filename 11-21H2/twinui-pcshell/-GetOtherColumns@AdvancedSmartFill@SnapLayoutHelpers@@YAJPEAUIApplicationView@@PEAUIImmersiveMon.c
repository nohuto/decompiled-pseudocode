/*
 * XREFs of ?GetOtherColumns@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A4284
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059DAE0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x18018A13C (GetThreadUILanguage_0.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     std::for_each_std::reverse_iterator_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_________lambda_1325668b4ce184215da36fe3c3a9a86f___ @ 0x1805A1298 (std--for_each_std--reverse_iterator_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Ge.c)
 *     ?GetOtherRects@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A49E4 (-GetOtherRects@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXPEAUIApplic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLayoutHelpers::AdvancedSmartFill::GetOtherColumns(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  LANGID ThreadUILanguage_0; // ax
  const char *v8; // r9
  __int64 result; // rax
  void **v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v11; // [rsp+38h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v10 = &SnapLayoutHelpers::AdvancedSmartFill::ColumnSmartFillSolver::`vftable';
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
    {
      v12 = 0LL;
      v13 = 0LL;
      SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::GetOtherRects(&v10, a1, a2);
      std::for_each_std::reverse_iterator_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_________lambda_1325668b4ce184215da36fe3c3a9a86f___(
        &v11,
        *((__int64 *)&v12 + 1),
        (_OWORD *)v12,
        a4);
      std::vector<Geometry::CRect>::_Tidy((__int64)&v12);
    }
    else
    {
      SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::GetOtherRects(&v10, a1, a2);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBA0,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
                           v8);
  }
  return result;
}
