/*
 * XREFs of ?TryGetUndockedShellAppId@@YAJPEBGPEAPEAUHSTRING__@@@Z @ 0x1800A60B4
 * Callers:
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A5450 (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A59D0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800DB1F8 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellUndockedPackage@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A60D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellUndockedPackage@@@details@wil@@QEAAX.c)
 */

__int64 __fastcall TryGetUndockedShellAppId(const unsigned __int16 *a1, HSTRING *a2)
{
  *a2 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellUndockedPackage>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ShellUndockedPackage>::GetImpl'::`2'::impl,
    0LL);
  return 0LL;
}
