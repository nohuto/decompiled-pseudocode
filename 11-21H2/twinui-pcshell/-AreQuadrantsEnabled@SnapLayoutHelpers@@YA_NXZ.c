/*
 * XREFs of ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x1805A1A04
 * Callers:
 *     ?ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PEAUIImmersiveMonitor@@_NPEAUSNAP_TARGET_DATA@1@@Z @ 0x1805A20F8 (-ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PE.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x1805A3200 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCPoint@Geometry@@AEBUCRect@5@HHHH@Z @ 0x1805A3460 (-DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCPoint@Geom.c)
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A71E8 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@@Z @ 0x1805A9444 (-DetermineNewSnapState@HotkeyHandler@@AEBA-AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAU.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180068E30 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingLimitSnappedWindows@@@detai.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x180069428 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  if ( byte_1807B38F0 )
    return 0;
  TabletMode = TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v8, v4);
  if ( TabletMode >= 0 )
    return v8 != 1;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x7E,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)TabletMode);
  return 1;
}
