/*
 * XREFs of ??C?$test_watcher@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@1@XZ @ 0x180235C5C
 * Callers:
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180697554 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch$9 @ 0x18069764D (_winrt--Windows--Internal--Shell--implementation--DashboardManager--NotifyDesktopReady_--_1_--ca.c)
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 */

_QWORD *__fastcall tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::operator->(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 48);
  *a2 = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 304));
  tip2::details::shared_data<0,0,1>::begin_update(*a2 + 8LL);
  return a2;
}
