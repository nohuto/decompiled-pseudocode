/*
 * XREFs of ?start@?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEAA?AU_GUID@@XZ @ 0x180724D6C
 * Callers:
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x180721258 (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731930 (-Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_.c)
 * Callees:
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18008D6C8 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@XZ @ 0x18071B148 (-ensure_data@-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test.c)
 */

_OWORD *__fastcall tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>::start(__int64 *a1, _OWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v4 = *a1;
  if ( v4 && tip::details::test_common_data<1>::has_ever_started(v4 + 8) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(a1);
  v5 = tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>::ensure_data(a1);
  tip::details::test_common_data<1>::start(*v5 + 8LL, a2);
  return a2;
}
