/*
 * XREFs of ?GetOtherColumns@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180671E88
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066CA10 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     std::for_each_std::reverse_iterator_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_________lambda_d777f40927982a931835616b53bffd7a___ @ 0x18067052C (std--for_each_std--reverse_iterator_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Ge.c)
 *     ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1806725E8 (-GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIIm.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLayoutHelpers::GetOtherColumns(__int64 a1, __int64 a2, __int64 a3, char **a4)
{
  LANGID ThreadUILanguage_0; // ax
  const char *v8; // r9
  __int64 result; // rax
  void **v10; // [rsp+30h] [rbp-38h] BYREF
  char **v11; // [rsp+38h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v10 = &SnapLayoutHelpers::ColumnSmartFillSolver::`vftable';
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
    {
      v12 = 0LL;
      v13 = 0LL;
      SnapLayoutHelpers::SpanningSmartFillSolverBase::GetOtherRects(&v10, a1, a2);
      std::for_each_std::reverse_iterator_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_________lambda_d777f40927982a931835616b53bffd7a___(
        &v11,
        *((__int64 *)&v12 + 1),
        (_OWORD *)v12,
        a4);
      std::vector<Geometry::CRect>::_Tidy((__int64)&v12);
    }
    else
    {
      SnapLayoutHelpers::SpanningSmartFillSolverBase::GetOtherRects(&v10, a1, a2);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9F5,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
                           v8);
  }
  return result;
}
