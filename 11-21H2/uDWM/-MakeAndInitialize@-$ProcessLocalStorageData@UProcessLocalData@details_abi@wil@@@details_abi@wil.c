/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180094AE8
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180009A30 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18001398C (-MemoryFree@@YAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180041F98 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004593C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18009423C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180096698 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        size_t *a1,
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
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // rdx
  int v18[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x78uLL);
  v9 = v6;
  v10 = (void *)v6;
  if ( v6 )
  {
    *(_OWORD *)v18 = 0LL;
    if ( (v6 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v12 = wil::details_abi::SemaphoreValue::CreateFromValueInternal((wil::details **)v18, a1, v8, v6 >> 2);
    v11 = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)v9 = 1;
      *(_QWORD *)(v9 + 8) = *a2;
      v14 = *(_QWORD *)v18;
      *a2 = 0LL;
      *(_QWORD *)v18 = 0LL;
      *(_QWORD *)(v9 + 16) = v14;
      v15 = *(_QWORD *)&v18[2];
      *(_QWORD *)&v18[2] = 0LL;
      *(_QWORD *)(v9 + 24) = v15;
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
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (int)"wil", (const char *)(unsigned int)v12);
    }
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
      (wil::details **)&v18[2],
      v13);
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
      (wil::details **)v18,
      v16);
    if ( v10 )
      MemoryFree(v10);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (int)"wil", (const char *)0x8007000ELL);
  }
  return v11;
}
