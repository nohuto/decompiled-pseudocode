/*
 * XREFs of wil_details_GetNtDllModuleHandle @ 0x18006DC88
 * Callers:
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x18006DA3C (wil_RtlStagingConfig_RecordFeatureUsage.c)
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
