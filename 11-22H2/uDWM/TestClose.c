/*
 * XREFs of TestClose @ 0x1800F45D4
 * Callers:
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x1800F13DC (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x1800F3B04 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800583DC (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
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
