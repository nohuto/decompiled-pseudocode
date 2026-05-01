/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@@std@@XZ @ 0x180040350
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180018214 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?watch_errors@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAA?AV?$test_watcher@U_tip_NotificationCenterShowTest@@@2@XZ @ 0x1800401AC (-watch_errors@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAA-AV-$test_watcher@U_tip_Not.c)
 *     ?StartNotificationCenterShowTest@CActionCenterExperienceManager@@AEAAXW4InvokeMethod@NotificationCenterUITelemetry@@W4InputType@3@@Z @ 0x180040204 (-StartNotificationCenterShowTest@CActionCenterExperienceManager@@AEAAXW4InvokeMethod@Notificatio.c)
 *     ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180418A50 (-HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windo.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180419B80 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@@std@@QEAA@XZ @ 0x1800406A4 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data(_QWORD *a1)
{
  void *v3; // rax
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rcx

  if ( !*a1 )
  {
    v3 = operator new(0xE0uLL);
    v4 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>(v3);
    *a1 = v4 + 16;
    v5 = (std::_Ref_count_base *)a1[1];
    a1[1] = v4;
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  return a1;
}
