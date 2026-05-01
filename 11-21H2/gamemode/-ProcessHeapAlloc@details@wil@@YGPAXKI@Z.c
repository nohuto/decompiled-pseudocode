/*
 * XREFs of ?ProcessHeapAlloc@details@wil@@YGPAXKI@Z @ 0x10002645
 * Callers:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z @ 0x100037C8 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QAEXABUFailureInfo@3@@Z @ 0x1000392D (-SetLastError@ThreadLocalData@details_abi@wil@@QAEXABUFailureInfo@3@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CGJPB_W$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PAPAV123@@Z @ 0x1000433D (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

LPVOID __fastcall wil::details::ProcessHeapAlloc(DWORD a1, SIZE_T a2)
{
  HANDLE ProcessHeap; // eax
  LPVOID v3; // eax
  void (__thiscall *v4)(_DWORD, HANDLE, LPVOID); // edi
  LPVOID v5; // esi
  HANDLE v6; // eax
  LPVOID v10; // [esp-4h] [ebp-Ch]

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, a1, a2);
  v4 = (void (__thiscall *)(_DWORD, HANDLE, LPVOID))wil::details::g_pfnRtlDisownModuleHeapAllocation;
  v5 = v3;
  if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
  {
    v10 = v3;
    v6 = GetProcessHeap();
    v4(v4, v6, v10);
  }
  return v5;
}
