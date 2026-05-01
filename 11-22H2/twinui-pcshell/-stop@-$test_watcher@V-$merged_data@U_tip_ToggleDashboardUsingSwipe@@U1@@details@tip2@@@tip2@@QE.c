/*
 * XREFs of ?stop@?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18024C138
 * Callers:
 *     ?StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x180697FE0 (-StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::stop(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder *v1; // rcx

  v1 = (wil::details::ThreadFailureCallbackHolder *)(a1 + 8);
  if ( *((_DWORD *)v1 + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v1);
}
