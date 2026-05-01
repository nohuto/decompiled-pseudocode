/*
 * XREFs of TestReport @ 0x180120070
 * Callers:
 *     ?evaluate_and_report@?$test_common_data@$00@details@tip@@AEAAX_J@Z @ 0x18011FBE0 (-evaluate_and_report@-$test_common_data@$00@details@tip@@AEAAX_J@Z.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x18011FE9C (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18011E1A4 (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 */

FARPROC __fastcall TestReport(__int64 a1)
{
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  result = (FARPROC)`TestReport'::`2'::s_pfnTestReport;
  if ( `TestReport'::`2'::s_pfnTestReport )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle();
  result = GetProcAddress(KernelBaseModuleHandle, "TestReport");
  `TestReport'::`2'::s_pfnTestReport = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  return result;
}
