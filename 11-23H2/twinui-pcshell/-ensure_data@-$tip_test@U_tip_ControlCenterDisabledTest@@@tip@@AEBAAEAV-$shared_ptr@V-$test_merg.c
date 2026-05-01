/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_ControlCenterDisabledTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ControlCenterDisabledTest@@@details@tip@@@std@@XZ @ 0x180426AC8
 * Callers:
 *     ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804236E4 (-ShowExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ControlCenterDisabledTest@@@details@tip@@@std@@QEAA@XZ @ 0x18041B484 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_ControlCenterDisabledTest@@@details@tip@@@s.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_ControlCenterDisabledTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xD0uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_ControlCenterDisabledTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_ControlCenterDisabledTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
