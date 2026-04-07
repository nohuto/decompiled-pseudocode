/*
 * XREFs of ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800138DC
 * Callers:
 *     TestQueryData @ 0x180013850 (TestQueryData.c)
 *     TestUnlockData @ 0x180042354 (TestUnlockData.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x1800444CC (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x18004462C (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     TestClose @ 0x1800F7054 (TestClose.c)
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
