/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@QEAA_NXZ @ 0x180072358
 * Callers:
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180151040 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801A361C (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x1801A50B0 (-OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x1801A6348 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800717F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180071FEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@QE.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
