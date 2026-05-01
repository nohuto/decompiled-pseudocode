/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18038DF1C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18012F690 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800BCBAC (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1801A2020 (-MemoryFree@@YAXPEAX@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18038D6AC (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1803900AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        unsigned __int16 *a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  void *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  void *v13; // rdx
  wil::details *v14; // r14
  wil::details *v15; // rbp
  wil::details *v17[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x78uLL);
  v9 = v6;
  v10 = (void *)v6;
  if ( v6 )
  {
    *(_OWORD *)v17 = 0LL;
    if ( (v6 & 3) != 0 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v7);
    v12 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(v17, a1, v8, v6 >> 2);
    v11 = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)v9 = 1;
      v15 = 0LL;
      *(_QWORD *)(v9 + 8) = *a2;
      *a2 = 0LL;
      v14 = 0LL;
      *(wil::details **)(v9 + 16) = v17[0];
      *(wil::details **)(v9 + 24) = v17[1];
      v17[0] = 0LL;
      v17[1] = 0LL;
      memset_0((void *)(v9 + 34), 0, 0x56uLL);
      *(_WORD *)(v9 + 32) = 88;
      *(_DWORD *)(v9 + 36) = 1;
      memset_0((void *)(v9 + 40), 0, 0x50uLL);
      v10 = 0LL;
      *a3 = v9;
      v11 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x147, (int)"wil", (const char *)(unsigned int)v12);
      v14 = v17[1];
      v15 = v17[0];
    }
    if ( v14 )
      wil::details::CloseHandle(v14, v13);
    if ( v15 )
      wil::details::CloseHandle(v15, v13);
    if ( v10 )
      MemoryFree(v10);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x144, (int)"wil", (const char *)0x8007000ELL);
  }
  return v11;
}
