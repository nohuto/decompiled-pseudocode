/*
 * XREFs of ??C?$test_data_control@U_tip_BootToCloudPCTest@@@tip@@QEBAPEAU_tip_BootToCloudPCTest@@XZ @ 0x18070541C
 * Callers:
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18072DD20 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 *     ?Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072F300 (-Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::test_data_control<_tip_BootToCloudPCTest>::operator->(_QWORD *a1)
{
  return (*a1 + 176LL) & -(__int64)(*a1 != 0LL);
}
