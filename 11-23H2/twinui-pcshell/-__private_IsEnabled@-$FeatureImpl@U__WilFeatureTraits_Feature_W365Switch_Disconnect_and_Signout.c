/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@QEAA_NXZ @ 0x18071A844
 * Callers:
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 *     ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x180718844 (-SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x180721258 (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?ShowDisconnectingScreen@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180732704 (-ShowDisconnectingScreen@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180711780 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_an.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180717E60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@detai.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
