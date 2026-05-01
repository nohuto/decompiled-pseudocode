/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CGJPB_W$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PAPAV123@@Z @ 0x1000433D
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YGPAXKI@Z @ 0x10002645 (-ProcessHeapAlloc@details@wil@@YGPAXKI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ @ 0x10003465 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z @ 0x10003513 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z.c)
 *     ??1SemaphoreValue@details_abi@wil@@QAE@XZ @ 0x100042D4 (--1SemaphoreValue@details_abi@wil@@QAE@XZ.c)
 *     ??1?$unique_ptr@V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@3@@wistd@@QAE@XZ @ 0x10004491 (--1-$unique_ptr@V-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@.c)
 *     ??0?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QAVSemaphoreValue@12@@Z @ 0x100044B1 (--0-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@$$QAV-$uni.c)
 */

int __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        size_t cchDest,
        int a2,
        unsigned int *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v6; // esi
  void *v7; // eax
  wil::details::in1diag3 *v9; // [esp+0h] [ebp-1Ch]
  const char *v10; // [esp+4h] [ebp-18h]
  int v11; // [esp+8h] [ebp-14h]
  size_t pcchNewDestLength[2]; // [esp+Ch] [ebp-10h] BYREF
  int v13; // [esp+14h] [ebp-8h]
  unsigned int v14; // [esp+18h] [ebp-4h] BYREF
  int retaddr; // [esp+20h] [ebp+4h]

  v13 = a2;
  *a3 = 0;
  v4 = (unsigned int)wil::details::ProcessHeapAlloc(8u, 0x40u);
  v5 = v4;
  v14 = v4;
  if ( v4 )
  {
    pcchNewDestLength[0] = 0;
    pcchNewDestLength[1] = 0;
    if ( (v4 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v9);
    v7 = wil::details_abi::SemaphoreValue::CreateFromValueInternal((wchar_t *)pcchNewDestLength, cchDest, 0, v4 >> 2);
    v6 = (int)v7;
    if ( (int)v7 >= 0 )
    {
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        v13,
        pcchNewDestLength);
      v14 = 0;
      v6 = 0;
      *a3 = v5;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (wil::details::in1diag3 *)"wil", v7, (unsigned int)v9, v10, v11);
    }
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)pcchNewDestLength);
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (wil::details::in1diag3 *)"wil",
      (void *)0x8007000E,
      (unsigned int)v9,
      v10,
      v11);
  }
  wistd::unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>::~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>(&v14);
  return v6;
}
