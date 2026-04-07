/*
 * XREFs of ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800583DC
 * Callers:
 *     wil_StagingConfig_LogStagedFeatureUsage @ 0x18005E8A0 (wil_StagingConfig_LogStagedFeatureUsage.c)
 *     ?MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z @ 0x18009C820 (-MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x1800F2E48 (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x1800F3B04 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     TestClose @ 0x1800F45D4 (TestClose.c)
 *     TestQueryData @ 0x1800F4630 (TestQueryData.c)
 *     TestUnlockData @ 0x1800F46BC (TestUnlockData.c)
 * Callees:
 *     <none>
 */

HINSTANCE wil_details_GetKernelBaseModuleHandle(void)
{
  HINSTANCE result; // rax

  result = g_wil_details_kernelbaseModuleHandle;
  if ( !g_wil_details_kernelbaseModuleHandle )
  {
    result = GetModuleHandleW(L"kernelbase.dll");
    g_wil_details_kernelbaseModuleHandle = result;
  }
  return result;
}
