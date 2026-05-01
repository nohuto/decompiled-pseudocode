/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180225110
 * Callers:
 *     ??C?$tip_test@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@1@XZ @ 0x180224E4C (--C-$tip_test@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_d.c)
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x180673184 (-GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@.c)
 * Callees:
 *     ??0?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@QEAA@XZ @ 0x180224AE0 (--0-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180224CC4 (--1-$com_ptr_t@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_polic.c)
 *     ?Release@?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@AEAAKXZ @ 0x180224EC4 (-Release@-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1803900AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x140uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>((__int64)v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v4;
    if ( v5 )
      tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>::Release(v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
