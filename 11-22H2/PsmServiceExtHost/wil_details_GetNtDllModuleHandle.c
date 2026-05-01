/*
 * XREFs of wil_details_GetNtDllModuleHandle @ 0x18006DC0C
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x18006D5FC (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x18006D728 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 * Callees:
 *     <none>
 */

HMODULE wil_details_GetNtDllModuleHandle()
{
  HMODULE result; // rax

  result = (HMODULE)g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = (__int64)result;
  }
  return result;
}
