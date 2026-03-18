/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C01394F4
 * Callers:
 *     Feature_3578843448__private_IsEnabledFallback @ 0x1C0138D20 (Feature_3578843448__private_IsEnabledFallback.c)
 *     Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledFallback @ 0x1C0139678 (Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledFallback.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback @ 0x1C01396CC (Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback @ 0x1C0139AD8 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback.c)
 *     Feature_Backport_MitRitReliability__private_IsEnabledFallback @ 0x1C0139B7C (Feature_Backport_MitRitReliability__private_IsEnabledFallback.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledFallback @ 0x1C0139CD8 (Feature_Backport_UserModeTooltips__private_IsEnabledFallback.c)
 *     Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledFallback @ 0x1C0139D2C (Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledFallback.c)
 *     Feature_YieldToHAM2__private_IsEnabledFallback @ 0x1C0139D80 (Feature_YieldToHAM2__private_IsEnabledFallback.c)
 *     Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback @ 0x1C013A070 (Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback.c)
 *     Feature_AlwaysWakeTargetThread_2__private_IsEnabledFallback @ 0x1C013A0C4 (Feature_AlwaysWakeTargetThread_2__private_IsEnabledFallback.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledFallback @ 0x1C013A118 (Feature_IMRespectWTDToggle__private_IsEnabledFallback.c)
 *     Feature_LParamOlmapi32CompatTweak__private_IsEnabledFallback @ 0x1C013A16C (Feature_LParamOlmapi32CompatTweak__private_IsEnabledFallback.c)
 *     Feature_MTestAbSh1__private_IsEnabledFallback @ 0x1C013A1C0 (Feature_MTestAbSh1__private_IsEnabledFallback.c)
 *     Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback @ 0x1C013A214 (Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledFallback @ 0x1C013A268 (Feature_WebThreatDefenseToggle__private_IsEnabledFallback.c)
 *     Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback @ 0x1C013A624 (Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback.c)
 *     Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledFallback @ 0x1C013BAD4 (Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledFallback.c)
 *     Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback @ 0x1C013C4F4 (Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback.c)
 *     Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback @ 0x1C013C548 (Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback.c)
 *     Feature_MissingShowWinEventOnUnGhost__private_IsEnabledFallback @ 0x1C013C738 (Feature_MissingShowWinEventOnUnGhost__private_IsEnabledFallback.c)
 *     Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledFallback @ 0x1C013CB10 (Feature_Backport_ScrollbarApiCallsOnServerWindows__private_IsEnabledFallback.c)
 *     Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledFallback @ 0x1C013CB64 (Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledFallback.c)
 *     Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback @ 0x1C013CBB8 (Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback.c)
 *     Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledFallback @ 0x1C013D0A8 (Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledFallback.c)
 *     Feature_1992616251__private_IsEnabledFallback @ 0x1C013E414 (Feature_1992616251__private_IsEnabledFallback.c)
 *     Feature_1519700280__private_IsEnabledFallback @ 0x1C013EAAC (Feature_1519700280__private_IsEnabledFallback.c)
 *     Feature_2020657467__private_IsEnabledFallback @ 0x1C0140584 (Feature_2020657467__private_IsEnabledFallback.c)
 *     Feature_2193942840__private_IsEnabledFallback @ 0x1C01405D8 (Feature_2193942840__private_IsEnabledFallback.c)
 *     Feature_2461047098__private_IsEnabledFallback @ 0x1C0140A00 (Feature_2461047098__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C01390CC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0139244 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0139344 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
