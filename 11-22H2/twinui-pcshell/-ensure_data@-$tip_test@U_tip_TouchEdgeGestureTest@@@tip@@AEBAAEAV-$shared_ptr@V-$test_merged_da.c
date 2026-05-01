/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_TouchEdgeGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchEdgeGestureTest@@@details@tip@@@std@@XZ @ 0x180656004
 * Callers:
 *     _lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const_&_ @ 0x180652A40 (_lambda_e144cef1f387178a308841941c02025f_--operator()_enum_winrt--Windows--Foundation--AsyncStat.c)
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x180654770 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch$62 @ 0x180654BFB (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--catch$62.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_TouchEdgeGestureTest@@@details@tip@@@std@@QEAA@XZ @ 0x18065288C (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_TouchEdgeGestureTest@@@details@tip@@@std@@Q.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_TouchEdgeGestureTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xF8uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchEdgeGestureTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchEdgeGestureTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
