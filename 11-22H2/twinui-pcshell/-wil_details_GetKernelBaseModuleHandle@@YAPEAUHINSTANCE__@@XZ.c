/*
 * XREFs of ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180182AE4
 * Callers:
 *     TestOpen @ 0x180092678 (TestOpen.c)
 *     TestCreate @ 0x180098EA4 (TestCreate.c)
 *     TestReport @ 0x1800BCD68 (TestReport.c)
 *     TestQueryData @ 0x1800BCEA0 (TestQueryData.c)
 *     TestUnlockData @ 0x1800BD200 (TestUnlockData.c)
 *     ?MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z @ 0x1801829A0 (-MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z.c)
 *     TestClose @ 0x180182A80 (TestClose.c)
 *     wil_StagingConfig_LogStagedFeatureUsage @ 0x1801CF1C0 (wil_StagingConfig_LogStagedFeatureUsage.c)
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 *     _lambda_665315f8e7a3be3e9382c02473f3b139_::operator() @ 0x18027B6B8 (_lambda_665315f8e7a3be3e9382c02473f3b139_--operator().c)
 *     ?ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802813F4 (-ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Int.c)
 *     TestControlReporting @ 0x18041B3A0 (TestControlReporting.c)
 *     _lambda_1b883f708510332cacc7ae6dcbc72df7_::operator() @ 0x180705438 (_lambda_1b883f708510332cacc7ae6dcbc72df7_--operator().c)
 *     ?persist_cached_test_results@tip@@YAXXZ @ 0x180708364 (-persist_cached_test_results@tip@@YAXXZ.c)
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?OnTransitionScreenRendered@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUTransitionScreen@7CloudDesktop@3456@@Z @ 0x18072E210 (-OnTransitionScreenRendered@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@U.c)
 *     ?Execute@BootConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072EF70 (-Execute@BootConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr@U.c)
 *     ?Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072F300 (-Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 *     ?ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18072F870 (-ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     <none>
 */

HINSTANCE wil_details_GetKernelBaseModuleHandle(void)
{
  HINSTANCE result; // rax

  result = g_wil_details_kernelbaseModuleHandle;
  if ( !g_wil_details_kernelbaseModuleHandle )
  {
    result = GetModuleHandleW(L"kernelbase.dll");
    g_wil_details_kernelbaseModuleHandle = result;
  }
  return result;
}
