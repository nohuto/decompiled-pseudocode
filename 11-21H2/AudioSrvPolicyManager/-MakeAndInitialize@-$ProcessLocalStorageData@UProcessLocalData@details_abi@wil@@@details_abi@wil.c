/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180006164
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800051DC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005410 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800063CC (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180007294 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180007834 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180007860 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *v7; // rcx
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int16 *v11; // rcx
  __int64 v12; // rdi
  unsigned __int16 v13; // ax
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // r14
  unsigned int v16; // esi
  __int64 v17; // r8
  int semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z; // eax
  unsigned __int64 v19; // rdx
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // r8
  void *v23; // rdx
  HANDLE ProcessHeap; // rax
  int v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+20h] [rbp-E0h]
  wil::details *v28[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v29[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x78uLL, (unsigned __int64)a3);
  v8 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_OWORD *)v28 = 0LL;
    if ( (v6 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v9 = v6 >> 2;
    v10 = 260LL;
    v11 = v29;
    v12 = a1 - (_QWORD)v29;
    do
    {
      if ( v10 == -2147483386LL )
        break;
      v13 = *(unsigned __int16 *)((char *)v11 + v12);
      if ( !v13 )
        break;
      *v11++ = v13;
      --v10;
    }
    while ( v10 );
    v14 = v11 - 1;
    if ( v10 )
      v14 = v11;
    *v14 = 0;
    StringCchCatW(v29, v10, L"_p0");
    v15 = v9 >> 31;
    v16 = v9 & 0x7FFFFFFF;
    v17 = 1LL;
    if ( v16 )
      v17 = v16;
    semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z = _create___semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z(v28, v16, v17, v29);
    v20 = semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z;
    if ( semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z >= 0 )
    {
      StringCchCatW(v29, v19, L"h");
      v22 = 1LL;
      if ( (_DWORD)v15 )
        v22 = (unsigned int)v15;
      semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z = _create___semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z(&v28[1], (unsigned int)v15, v22, v29);
      v20 = semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z;
      if ( semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z >= 0 )
      {
        *(_DWORD *)v8 = 1;
        v8[1] = *a2;
        *a2 = 0LL;
        v8[2] = v28[0];
        v28[0] = 0LL;
        v8[3] = v28[1];
        v28[1] = 0LL;
        memset_0((char *)v8 + 34, 0, 0x56uLL);
        *((_WORD *)v8 + 16) = 88;
        *((_DWORD *)v8 + 9) = 1;
        memset_0(v8 + 5, 0, 0x50uLL);
        *a3 = v8;
        return 0LL;
      }
      v21 = 137LL;
    }
    else
    {
      v21 = 133LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"wil",
      (const char *)(unsigned int)semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z,
      v26);
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (unsigned int)"wil", (const char *)v20, v27);
    if ( v28[1] )
      wil::details::CloseHandle(v28[1], v23);
    if ( v28[0] )
      wil::details::CloseHandle(v28[0], v23);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
    return v20;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (unsigned int)"wil", (const char *)0x8007000ELL, v26);
    return 2147942414LL;
  }
}
