/*
 * XREFs of ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x180733B70
 * Callers:
 *     _lambda_665315f8e7a3be3e9382c02473f3b139_::operator() @ 0x18027B6B8 (_lambda_665315f8e7a3be3e9382c02473f3b139_--operator().c)
 *     ?ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802813F4 (-ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Int.c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731930 (-Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_.c)
 *     ?ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180736440 (-ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXA.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
        _QWORD *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  *(_QWORD *)a2 = *a1;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  return a2;
}
