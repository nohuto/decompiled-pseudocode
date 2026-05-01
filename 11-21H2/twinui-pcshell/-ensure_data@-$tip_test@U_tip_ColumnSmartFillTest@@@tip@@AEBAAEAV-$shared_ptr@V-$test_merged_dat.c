/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_ColumnSmartFillTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ColumnSmartFillTest@@@details@tip@@@std@@XZ @ 0x1805A78A4
 * Callers:
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x1805A5C18 (-GetSmartFillRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAJJ_NPEAUI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ColumnSmartFillTest@@@details@tip@@@std@@QEAA@XZ @ 0x1805A0EE4 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_ColumnSmartFillTest@@@details@tip@@@std@@QE.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_ColumnSmartFillTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xD8uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_ColumnSmartFillTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_ColumnSmartFillTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
