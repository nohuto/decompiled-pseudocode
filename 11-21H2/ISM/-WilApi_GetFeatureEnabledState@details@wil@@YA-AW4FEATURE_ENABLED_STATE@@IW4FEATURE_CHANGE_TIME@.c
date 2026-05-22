/*
 * XREFs of ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18007FCF0
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShellContent@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009D7F0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_OnlyShowCursorInOverlay.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009D8C0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A6D24 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DIntera.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DockInputProcessing@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B4B88 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DockInputProcessing@@@d.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputInMinQueue@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800DFE64 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputInMinQueue.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HandUpdatesIgnoreRenderingReports@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800F3758 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HandUpdatesIgnoreRender.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputVirtualization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180151A94 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InputVirtualization@@@d.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputVirtualization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180151B64 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputVirtualiza.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoteTextIntegration_Perf_Vail@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18015519C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoteTextIntegration_P.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180171A18 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigation.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HotkeyContextualProcessor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18019A770 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HotkeyContextualProcess.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801C84B8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMod.c)
 * Callees:
 *     <none>
 */

enum FEATURE_ENABLED_STATE (*__fastcall wil::details::WilApi_GetFeatureEnabledState(
        wil::details *this,
        __int64 a2,
        __int64 a3,
        int *a4))(unsigned int, enum FEATURE_CHANGE_TIME, int *)
{
  enum FEATURE_ENABLED_STATE (*result)(unsigned int, enum FEATURE_CHANGE_TIME, int *); // rax

  result = g_wil_details_internalGetFeatureEnabledState;
  if ( g_wil_details_internalGetFeatureEnabledState )
    return (enum FEATURE_ENABLED_STATE (*)(unsigned int, enum FEATURE_CHANGE_TIME, int *))((__int64 (__fastcall *)(wil::details *, __int64, __int64, int *))result)(
                                                                                            this,
                                                                                            a2,
                                                                                            a3,
                                                                                            a4);
  result = g_wil_details_apiGetFeatureEnabledState;
  if ( g_wil_details_apiGetFeatureEnabledState )
    return (enum FEATURE_ENABLED_STATE (*)(unsigned int, enum FEATURE_CHANGE_TIME, int *))((__int64 (__fastcall *)(wil::details *, __int64, __int64, int *))result)(
                                                                                            this,
                                                                                            a2,
                                                                                            a3,
                                                                                            a4);
  return result;
}
