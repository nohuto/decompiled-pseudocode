/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800390B0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18002F484 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ??0?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x18002A5A8 (--0-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV-$u.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x18002C71C (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800307C4 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180031884 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180032E00 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180039E14 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        unsigned __int16 *a1,
        _QWORD *a2,
        wil::details **a3)
{
  wil::details *v6; // rax
  wil::details::in1diag3 *v7; // rcx
  size_t *v8; // r8
  wil::details *v9; // rbx
  int v11; // eax
  unsigned int v12; // edi
  void *v13; // rdx
  void *v14; // rdx
  void *v15; // rdx
  int v16[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (wil::details *)wil::details::ProcessHeapAlloc(8u, 0x78uLL, (unsigned __int64)a3);
  v9 = v6;
  if ( v6 )
  {
    *(_OWORD *)v16 = 0LL;
    if ( ((unsigned __int8)v6 & 3) != 0 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v7);
    v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v16,
            a1,
            v8,
            (unsigned __int64)v6 >> 2);
    v12 = v11;
    if ( v11 >= 0 )
    {
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        (__int64)v9,
        a2,
        v16);
      *a3 = v9;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)v16, v15);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x147,
        (unsigned int)"wil",
        (const char *)(unsigned int)v11,
        v16[0]);
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)v16, v13);
      wil::details::FreeProcessHeap(v9, v14);
      return v12;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x144, (unsigned int)"wil", (const char *)0x8007000ELL, v16[0]);
    return 2147942414LL;
  }
}
