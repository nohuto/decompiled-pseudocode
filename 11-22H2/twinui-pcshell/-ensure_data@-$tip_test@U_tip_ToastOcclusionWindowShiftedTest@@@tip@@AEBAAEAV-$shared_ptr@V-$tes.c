/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_ToastOcclusionWindowShiftedTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ToastOcclusionWindowShiftedTest@@@details@tip@@@std@@XZ @ 0x18043D2C4
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438748 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ToastOcclusionWindowShiftedTest@@@details@tip@@@std@@QEAA@XZ @ 0x180433E0C (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_ToastOcclusionWindowShiftedTest@@@details@t.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_ToastOcclusionWindowShiftedTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xD0uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_ToastOcclusionWindowShiftedTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_ToastOcclusionWindowShiftedTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
