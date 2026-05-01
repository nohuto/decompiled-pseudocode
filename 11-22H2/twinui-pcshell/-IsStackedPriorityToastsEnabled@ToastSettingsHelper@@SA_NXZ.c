/*
 * XREFs of ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x1804369D0
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438748 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsPlatformDesktop@ToastSettingsHelper@@SA_NXZ @ 0x1804367F8 (-IsPlatformDesktop@ToastSettingsHelper@@SA_NXZ.c)
 *     ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x180436880 (-IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StackedPriorityToasts@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180439618 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StackedPriorityToasts@@@details@wil@@QEAA.c)
 */

char __fastcall ToastSettingsHelper::IsStackedPriorityToastsEnabled(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 1;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StackedPriorityToasts>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_StackedPriorityToasts>::GetImpl'::`2'::impl,
    a2);
  if ( !ToastSettingsHelper::IsPlatformDesktop()
    || ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride() )
  {
    return 0;
  }
  return v2;
}
