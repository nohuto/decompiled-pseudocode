/*
 * XREFs of TestCreate @ 0x180121E84
 * Callers:
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121CB4 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18011E1A4 (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

FARPROC __fastcall TestCreate(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r11
  char v8; // di
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  v6 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))`TestCreate'::`2'::s_pfnTestCreate;
  v8 = a3;
  if ( `TestCreate'::`2'::s_pfnTestCreate
    || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
        result = GetProcAddress(KernelBaseModuleHandle, "TestCreate"),
        `TestCreate'::`2'::s_pfnTestCreate = (__int64)result,
        (v6 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))result) != 0LL) )
  {
    LOBYTE(a3) = v8;
    return (FARPROC)v6(a1, 0LL, a3, a4, a5, a6);
  }
  return result;
}
