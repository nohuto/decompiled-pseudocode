/*
 * XREFs of ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x180736C60
 * Callers:
 *     ?Execute@BootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x1802813B0 (-Execute@BootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$s.c)
 *     ?Execute@BootConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072EF70 (-Execute@BootConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr@U.c)
 *     ?Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072F140 (-Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr@.c)
 *     ?Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072F300 (-Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 *     ?Execute@BootRecoveringState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072F650 (-Execute@BootRecoveringState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr@.c)
 *     ?Execute@BootUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072F680 (-Execute@BootUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared.c)
 *     ?Execute@SwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x1807316A0 (-Execute@SwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr.c)
 *     ?Execute@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731880 (-Execute@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 *     ?Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731930 (-Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_.c)
 *     ?Execute@SwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731B70 (-Execute@SwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 *     ?Execute@SwitchUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731C10 (-Execute@SwitchUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shar.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     wprintf @ 0x1801C7524 (wprintf.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x18038CD88 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x180731318 (--$open_and_watch_errors@V-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@@tip@@YA-A_.c)
 *     ??$hstring_convert@H@impl@winrt@@YA?AUhstring@1@H@Z @ 0x180735910 (--$hstring_convert@H@impl@winrt@@YA-AUhstring@1@H@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall __noreturn winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(
        struct winrt::impl::hstring_header *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v5; // eax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-88h] BYREF
  struct winrt::impl::hstring_header *v7; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v8[72]; // [rsp+60h] [rbp-48h] BYREF
  struct winrt::impl::hstring_header *v9; // [rsp+B0h] [rbp+8h] BYREF

  v9 = a1;
  tip::open_and_watch_errors<tip::tip_test<_tip_RemoteSessionOnStateChangedTipTest>>((__int64)v8);
  v5 = wprintf(L"Tried illegal state change from %d to %d.", a2, a3);
  winrt::impl::hstring_convert<int>(&v9, v5);
  v7 = v9;
  winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_state_change, &v7);
  throw (winrt::hresult_illegal_state_change *)pExceptionObject;
}
