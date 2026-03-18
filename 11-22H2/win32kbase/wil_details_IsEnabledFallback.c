/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C00D009C
 * Callers:
 *     Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback @ 0x1C00CFFD8 (Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledFallback @ 0x1C00D002C (Feature_WebThreatDefenseToggle__private_IsEnabledFallback.c)
 *     Feature_ClipboardCredentialMonitor__private_IsEnabledFallback @ 0x1C00D0168 (Feature_ClipboardCredentialMonitor__private_IsEnabledFallback.c)
 *     Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_IsEnabledFallback @ 0x1C00D0C68 (Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_IsEnabledFallback.c)
 *     Feature_1746721083__private_IsEnabledFallback @ 0x1C00D2884 (Feature_1746721083__private_IsEnabledFallback.c)
 *     Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback @ 0x1C00D3F2C (Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback.c)
 *     Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledFallback @ 0x1C00D4698 (Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledFallback.c)
 *     Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback @ 0x1C00D4F78 (Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledFallback.c)
 *     Feature_EndInertiaOnKeyPress__private_IsEnabledFallback @ 0x1C00D5424 (Feature_EndInertiaOnKeyPress__private_IsEnabledFallback.c)
 *     Feature_FocusEndpointInitialization__private_IsEnabledFallback @ 0x1C00D551C (Feature_FocusEndpointInitialization__private_IsEnabledFallback.c)
 *     Feature_BackportReverseMouseWheelDirection__private_IsEnabledFallback @ 0x1C00D5634 (Feature_BackportReverseMouseWheelDirection__private_IsEnabledFallback.c)
 *     Feature_1349830969__private_IsEnabledFallback @ 0x1C00D5C74 (Feature_1349830969__private_IsEnabledFallback.c)
 *     Feature_29159638__private_IsEnabledFallback @ 0x1C00D5CC8 (Feature_29159638__private_IsEnabledFallback.c)
 *     Feature_DcompK_MarshalerReleaseFix__private_IsEnabledFallback @ 0x1C00D6098 (Feature_DcompK_MarshalerReleaseFix__private_IsEnabledFallback.c)
 *     Feature_3071079736__private_IsEnabledFallback @ 0x1C00D6644 (Feature_3071079736__private_IsEnabledFallback.c)
 *     Feature_Ni_FixCitInputDelegationAV__private_IsEnabledFallback @ 0x1C00D6698 (Feature_Ni_FixCitInputDelegationAV__private_IsEnabledFallback.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledFallback @ 0x1C00D6720 (Feature_IMRespectWTDToggle__private_IsEnabledFallback.c)
 *     Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledFallback @ 0x1C00D6774 (Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00D0048 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C012DA74 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C012DBA0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, _QWORD *a3)
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
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
