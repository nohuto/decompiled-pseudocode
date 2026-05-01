/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_SmartFillTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@XZ @ 0x1805A78F0
 * Callers:
 *     ?GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@2@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@2@@Z @ 0x1805A4E64 (-GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_SmartFillTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SmartFillTest@@@2@XZ @ 0x1805A7FF4 (-start_and_watch_errors@-$tip_test@U_tip_SmartFillTest@@@tip@@QEAA-AV-$test_watcher@U_tip_SmartF.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@XZ @ 0x1805A0F98 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_SmartFillTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0x110uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SmartFillTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_SmartFillTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
