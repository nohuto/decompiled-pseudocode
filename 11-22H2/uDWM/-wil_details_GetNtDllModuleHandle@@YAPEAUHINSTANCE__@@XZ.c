/*
 * XREFs of ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180055E00
 * Callers:
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180055D20 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z @ 0x180055D80 (-RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x18005E6F8 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x18005E824 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_NtQueryWnfStateData @ 0x18005E918 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18005E9AC (wil_details_NtUpdateWnfStateData.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x18005EBA4 (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?UnregisterWilFeatureConfigurationChange@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009AC28 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-UnregisterWilFeatureConfigurationChange@.c)
 *     ?FormatNtStatusMsg@details@wil@@YAXJPEAGK@Z @ 0x18009B700 (-FormatNtStatusMsg@details@wil@@YAXJPEAGK@Z.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x18009D850 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 * Callees:
 *     <none>
 */

HINSTANCE wil_details_GetNtDllModuleHandle(void)
{
  HINSTANCE result; // rax

  result = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = result;
  }
  return result;
}
