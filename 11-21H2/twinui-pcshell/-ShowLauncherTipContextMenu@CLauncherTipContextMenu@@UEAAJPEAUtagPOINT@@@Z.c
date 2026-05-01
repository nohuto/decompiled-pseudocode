/*
 * XREFs of ?ShowLauncherTipContextMenu@CLauncherTipContextMenu@@UEAAJPEAUtagPOINT@@@Z @ 0x1805DA270
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F628 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind.c)
 */

__int64 __fastcall CLauncherTipContextMenu::ShowLauncherTipContextMenu(
        CLauncherTipContextMenu *this,
        struct tagPOINT *a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TUC>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  return 0LL;
}
