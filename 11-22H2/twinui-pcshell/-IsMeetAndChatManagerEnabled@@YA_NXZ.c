/*
 * XREFs of ?IsMeetAndChatManagerEnabled@@YA_NXZ @ 0x18014EA70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014EAA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z @ 0x1801511D4 (-IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z.c)
 */

bool __fastcall IsMeetAndChatManagerEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
    a2,
    a3);
  return IsComponentEnabledInProfile((GUID *)&stru_18081A3C0);
}
