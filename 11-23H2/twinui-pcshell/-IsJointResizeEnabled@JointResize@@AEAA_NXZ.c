/*
 * XREFs of ?IsJointResizeEnabled@JointResize@@AEAA_NXZ @ 0x1801B8E80
 * Callers:
 *     ?SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F7170 (-SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x1805E40F0 (-OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultitaskingSettingsSimplification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801188AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultitaskingSettingsSimplification@@@deta.c)
 */

char __fastcall JointResize::IsJointResizeEnabled(JointResize *this, __int64 a2, __int64 a3, __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultitaskingSettingsSimplification>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MultitaskingSettingsSimplification>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return 1;
}
