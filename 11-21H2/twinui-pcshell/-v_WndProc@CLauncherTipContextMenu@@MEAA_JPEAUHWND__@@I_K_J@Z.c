/*
 * XREFs of ?v_WndProc@CLauncherTipContextMenu@@MEAA_JPEAUHWND__@@I_K_J@Z @ 0x180239F40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F628 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind.c)
 */

__int64 __fastcall CLauncherTipContextMenu::v_WndProc(CLauncherTipContextMenu *this, HWND a2, __int64 a3, __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TUC>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  return 0LL;
}
