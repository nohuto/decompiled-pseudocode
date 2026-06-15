/*
 * XREFs of ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18001ACC4
 * Callers:
 *     ?FormatNtStatusMsg@details@wil@@YAXJPEAGK@Z @ 0x180018D60 (-FormatNtStatusMsg@details@wil@@YAXJPEAGK@Z.c)
 *     ?RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z @ 0x180019BF0 (-RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180019C70 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x180019CD0 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x18003AA18 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_NtQueryWnfStateData @ 0x18003AA90 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18003AB24 (wil_details_NtUpdateWnfStateData.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x18003ABC8 (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 *     wil_details_RtlUnregisterFeatureConfigurationChangeNotification @ 0x18003AC50 (wil_details_RtlUnregisterFeatureConfigurationChangeNotification.c)
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
