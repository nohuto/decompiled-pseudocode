/*
 * XREFs of ??0SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1801C518C
 * Callers:
 *     ??0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18009E8C8 (--0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr@UR.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SwitchConnectStateBase(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r8

  *a1 = 0LL;
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a1 + 1,
    a2);
  *(_QWORD *)(v2 + 24) = 0LL;
  return v2;
}
