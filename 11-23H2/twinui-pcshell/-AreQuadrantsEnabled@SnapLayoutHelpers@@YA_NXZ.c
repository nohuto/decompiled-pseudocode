/*
 * XREFs of ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x180670608
 * Callers:
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x1802E949C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1802E96F8 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     ?DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCPoint@Geometry@@AEBUCRect@5@HHHH@Z @ 0x1806713C0 (-DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCPoint@Geom.c)
 *     ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@@Z @ 0x180675D34 (-DetermineNewSnapState@HotkeyHandler@@AEBA-AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAU.c)
 * Callees:
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x1800F43D8 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801145FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows@@@detai.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool __fastcall SnapLayoutHelpers::AreQuadrantsEnabled(SnapLayoutHelpers *this, __int64 a2, __int64 a3, __int64 a4)
{
  enum _TABLETMODESTATE *v4; // rdx
  int TabletMode; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( byte_18098D528 )
    return 0;
  TabletMode = TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v8, v4);
  if ( TabletMode >= 0 )
    return v8 != 1;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x87,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)TabletMode);
  return 1;
}
