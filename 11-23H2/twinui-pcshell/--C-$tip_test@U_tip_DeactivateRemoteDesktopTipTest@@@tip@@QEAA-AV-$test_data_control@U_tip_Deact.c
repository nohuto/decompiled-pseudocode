/*
 * XREFs of ??C?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEAA?AV?$test_data_control@U_tip_DeactivateRemoteDesktopTipTest@@@1@XZ @ 0x18072038C
 * Callers:
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x180721258 (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731930 (-Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?ensure_data@?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@XZ @ 0x18071B148 (-ensure_data@-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>::operator->(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  v3 = tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>::ensure_data(a1);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a2,
    v3);
  tip::details::test_common_data<1>::begin_update(*a2 + 8LL);
  return a2;
}
