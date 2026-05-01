/*
 * XREFs of TestOpen @ 0x180092678
 * Callers:
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x1800925D4 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x1802033A0 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180182AE4 (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

FARPROC __fastcall TestOpen(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 (__fastcall *v5)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r11
  char v7; // di
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  v5 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))`TestOpen'::`2'::s_pfnTestOpen;
  v7 = a3;
  if ( `TestOpen'::`2'::s_pfnTestOpen
    || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
        result = GetProcAddress(KernelBaseModuleHandle, "TestOpen"),
        `TestOpen'::`2'::s_pfnTestOpen = (__int64)result,
        (v5 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))result) != 0LL) )
  {
    LOBYTE(a3) = v7;
    return (FARPROC)v5(a1, a2, a3, a4, a5);
  }
  return result;
}
