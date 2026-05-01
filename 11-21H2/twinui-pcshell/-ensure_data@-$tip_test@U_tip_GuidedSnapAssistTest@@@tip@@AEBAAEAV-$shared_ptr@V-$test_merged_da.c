/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@@std@@XZ @ 0x18059F0F4
 * Callers:
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18059A7B4 (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 *     ??C?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEAA?AV?$test_data_control@U_tip_GuidedSnapAssistTest@@@1@XZ @ 0x18059B7E4 (--C-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEAA-AV-$test_data_control@U_tip_GuidedSnapAssis.c)
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18059B9C0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@@Z @ 0x18059C15C (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@@Z.c)
 *     ?ItemSelected@CSnapAssistControllerBase@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z @ 0x18059C740 (-ItemSelected@CSnapAssistControllerBase@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@@std@@QEAA@XZ @ 0x18059A390 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@@std@@Q.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_GuidedSnapAssistTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xB8uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_GuidedSnapAssistTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_GuidedSnapAssistTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
