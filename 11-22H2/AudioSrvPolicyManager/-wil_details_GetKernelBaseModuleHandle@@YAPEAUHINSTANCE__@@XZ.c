/*
 * XREFs of ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18001AE7C
 * Callers:
 *     ?MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z @ 0x180019950 (-MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z.c)
 *     ?wil_StagingConfig_LogStagedFeatureUsage@@YAXIIE@Z @ 0x18003B6D0 (-wil_StagingConfig_LogStagedFeatureUsage@@YAXIIE@Z.c)
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
