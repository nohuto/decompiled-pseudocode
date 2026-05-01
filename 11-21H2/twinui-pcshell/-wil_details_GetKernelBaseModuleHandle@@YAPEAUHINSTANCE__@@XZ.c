/*
 * XREFs of ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18011E1A4
 * Callers:
 *     TestUnlockData @ 0x18008945C (TestUnlockData.c)
 *     TestReport @ 0x180120070 (TestReport.c)
 *     TestQueryData @ 0x1801200D4 (TestQueryData.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     TestCreate @ 0x180121E84 (TestCreate.c)
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180351548 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 *     TestClose @ 0x1803521FC (TestClose.c)
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
