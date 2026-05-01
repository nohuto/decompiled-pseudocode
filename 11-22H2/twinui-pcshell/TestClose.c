/*
 * XREFs of TestClose @ 0x180182A80
 * Callers:
 *     ??1?$shared_data@$0A@$0A@$00@details@tip2@@QEAA@XZ @ 0x180084FE4 (--1-$shared_data@$0A@$0A@$00@details@tip2@@QEAA@XZ.c)
 *     ??1?$test_common_data@$00@details@tip@@QEAA@XZ @ 0x180093D4C (--1-$test_common_data@$00@details@tip@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHTIPTEST__@@@Z @ 0x1800983B8 (-reset@-$unique_storage@U-$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1-TestClose@@YAX0@ZU-$in.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098DD0 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x180183458 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180182AE4 (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 */

FARPROC __fastcall TestClose(__int64 a1)
{
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  result = (FARPROC)`TestClose'::`2'::s_pfnTestClose;
  if ( `TestClose'::`2'::s_pfnTestClose )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle();
  result = GetProcAddress(KernelBaseModuleHandle, "TestClose");
  `TestClose'::`2'::s_pfnTestClose = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  return result;
}
