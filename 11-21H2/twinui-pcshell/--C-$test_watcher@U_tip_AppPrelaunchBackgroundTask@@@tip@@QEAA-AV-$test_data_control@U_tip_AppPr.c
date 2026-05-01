/*
 * XREFs of ??C?$test_watcher@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA?AV?$test_data_control@U_tip_AppPrelaunchBackgroundTask@@@1@XZ @ 0x1805BCC84
 * Callers:
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801C91E0 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch$6 @ 0x1801C9286 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--NotifyDesktopReady_--_1_--ca.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent$_ResumeCoro$1 @ 0x1801CAA10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--SetStartUpEvent$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent$_ResumeCoro$1_::_1_::catch$10 @ 0x1801CAD00 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--SetStartUpEvent_ea_1801CAD00.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 */

_QWORD *__fastcall tip::test_watcher<_tip_AppPrelaunchBackgroundTask>::operator->(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    a2,
    (_QWORD *)(a1 + 48));
  tip::details::test_common_data<0>::begin_update(*a2 + 8LL);
  return a2;
}
