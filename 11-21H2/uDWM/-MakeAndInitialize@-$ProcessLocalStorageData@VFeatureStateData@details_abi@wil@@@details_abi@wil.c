/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180094C38
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18005B498 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18001398C (-MemoryFree@@YAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180041F98 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004593C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x1800939D8 (--0-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV-$u.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18009423C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180096698 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(
        size_t *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r8
  void *v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // rdx
  void *v13; // rax
  void *v14; // rdx
  int v16[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x130uLL);
  v9 = (void *)v6;
  if ( v6 )
  {
    *(_OWORD *)v16 = 0LL;
    if ( (v6 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal((wil::details **)v16, a1, v8, v6 >> 2);
    v10 = v11;
    if ( v11 >= 0 )
    {
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        (__int64)v9,
        a2,
        v16);
      v13 = v9;
      v9 = 0LL;
      v10 = 0;
      *a3 = v13;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (int)"wil", (const char *)(unsigned int)v11);
    }
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
      (wil::details **)&v16[2],
      v12);
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
      (wil::details **)v16,
      v14);
    if ( v9 )
      MemoryFree(v9);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (int)"wil", (const char *)0x8007000ELL);
  }
  return v10;
}
