/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements@@@details@wil@@QEAA_NXZ @ 0x1801158DC
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008A48C (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180113570 (--0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _lambda_1b883f708510332cacc7ae6dcbc72df7_::operator() @ 0x180705438 (_lambda_1b883f708510332cacc7ae6dcbc72df7_--operator().c)
 *     ?SubscribeToLogon@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180707744 (-SubscribeToLogon@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801128A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements@@@detai.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180115918 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_Engineering_Imp.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements>::__private_IsEnabled(
        _DWORD *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  char v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
