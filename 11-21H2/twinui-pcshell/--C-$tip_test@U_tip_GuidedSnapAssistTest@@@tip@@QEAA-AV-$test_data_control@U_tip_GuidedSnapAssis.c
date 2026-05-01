/*
 * XREFs of ??C?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEAA?AV?$test_data_control@U_tip_GuidedSnapAssistTest@@@1@XZ @ 0x18059B7E4
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059DAE0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@@std@@XZ @ 0x18059F0F4 (-ensure_data@-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_da.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_GuidedSnapAssistTest>::operator->(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)tip::tip_test<_tip_GuidedSnapAssistTest>::ensure_data(a1);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    a2,
    v3);
  tip::details::test_common_data<0>::begin_update(*a2 + 8LL);
  return a2;
}
