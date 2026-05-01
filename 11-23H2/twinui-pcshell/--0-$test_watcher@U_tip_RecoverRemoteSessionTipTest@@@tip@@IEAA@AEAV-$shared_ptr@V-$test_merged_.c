/*
 * XREFs of ??0?$test_watcher@U_tip_RecoverRemoteSessionTipTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@std@@@Z @ 0x18008D2A4
 * Callers:
 *     ?RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18008CD68 (-RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18008D098 (--$open_and_watch_errors@V-$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::test_watcher<_tip_RecoverRemoteSessionTipTest>::test_watcher<_tip_RecoverRemoteSessionTipTest>(
        struct wil::details::IFailureCallback *a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &tip::test_watcher<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    *a2 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    (char *)a1 + 48,
    a2);
  return a1;
}
