/*
 * XREFs of ?GetMode@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAIXZ @ 0x18002F850
 * Callers:
 *     ?StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x18002F754 (-StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QE.c)
 *     ?StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4InvokeMethod@3@W4InputType@3@W4StateOnInvoke@3@@Z @ 0x18034F8F0 (-StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEA.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180149610 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

__int64 __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::GetMode(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    a2);
  return 2LL;
}
