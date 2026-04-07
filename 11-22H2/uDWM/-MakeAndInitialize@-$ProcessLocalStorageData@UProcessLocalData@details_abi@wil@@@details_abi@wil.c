/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18009C4FC
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18009B12C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180016A14 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ??1?$unique_ptr@V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@3@@wistd@@QEAA@XZ @ 0x18009ABE4 (--1-$unique_ptr@V-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x18009AED8 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18009B390 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18009E1F8 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        size_t *a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // rdx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x78uLL);
  v18 = v6;
  v9 = v6;
  if ( !v6 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x144, (unsigned int)"wil", (const char *)0x8007000ELL, v16[0]);
LABEL_7:
    wistd::unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>::~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>((void **)&v18);
    return v10;
  }
  *(_OWORD *)v16 = 0LL;
  if ( (v6 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
  v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal((wil::details **)v16, a1, v8, v6 >> 2);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x147,
      (unsigned int)"wil",
      (const char *)(unsigned int)v11,
      v16[0]);
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)v16, v12);
    goto LABEL_7;
  }
  *(_DWORD *)v9 = 1;
  *(_QWORD *)(v9 + 8) = *a2;
  v14 = *(_QWORD *)v16;
  *a2 = 0LL;
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)(v9 + 16) = v14;
  v15 = *(_QWORD *)&v16[2];
  *(_QWORD *)&v16[2] = 0LL;
  *(_QWORD *)(v9 + 24) = v15;
  memset_0((void *)(v9 + 34), 0, 0x56uLL);
  *(_WORD *)(v9 + 32) = 88;
  *(_DWORD *)(v9 + 36) = 1;
  memset_0((void *)(v9 + 40), 0, 0x50uLL);
  result = 0LL;
  *a3 = v9;
  return result;
}
