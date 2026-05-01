/*
 * XREFs of ??1?$unique_ptr@V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@3@@wistd@@QAE@XZ @ 0x10004491
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CGJPB_W$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PAPAV123@@Z @ 0x1000433D (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     <none>
 */

void *__thiscall wistd::unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>::~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>(
        void **this)
{
  void *result; // eax
  HANDLE ProcessHeap; // eax
  void *v3; // [esp-4h] [ebp-4h]

  result = *this;
  *this = 0;
  if ( result )
  {
    v3 = result;
    ProcessHeap = GetProcessHeap();
    return (void *)HeapFree(ProcessHeap, 0, v3);
  }
  return result;
}
