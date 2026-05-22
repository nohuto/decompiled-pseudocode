/*
 * XREFs of ?SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@I@Z @ 0x1800EE5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002E38C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4.c)
 */

__int64 __fastcall DesktopSystemCursorService::SetShapeForInputType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  return 0LL;
}
