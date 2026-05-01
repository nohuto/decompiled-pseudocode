/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z @ 0x10003513
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CGJPB_W$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PAPAV123@@Z @ 0x1000433D (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?StringCchCatW@@YGJPA_WIPB_W@Z @ 0x100021E9 (-StringCchCatW@@YGJPA_WIPB_W@Z.c)
 *     StringCopyWorkerW @ 0x10002293 (StringCopyWorkerW.c)
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ @ 0x10003465 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QAEJJJPB_WKPAU_SECURITY_ATTRIBUTES@@@Z @ 0x10003F52 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@details@w.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

void *__thiscall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wchar_t *pcchNewDestLength,
        size_t cchDest,
        bool a3,
        unsigned __int64 a4)
{
  int v5; // ecx
  int v6; // eax
  void *semaphore_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QAEJJJPB_WKPAU_SECURITY_ATTRIBUTES___Z; // eax
  void *v8; // esi
  wil::details::in1diag3 *v10; // [esp+0h] [ebp-214h]
  unsigned int v11; // [esp+0h] [ebp-214h]
  unsigned int v12; // [esp+0h] [ebp-214h]
  size_t v13; // [esp+4h] [ebp-210h]
  const wchar_t *v14; // [esp+4h] [ebp-210h]
  const char *v15; // [esp+4h] [ebp-210h]
  int v16[130]; // [esp+8h] [ebp-20Ch] BYREF
  int retaddr; // [esp+218h] [ebp+4h]

  if ( HIDWORD(a4) | a4 & 0x80000000 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v10);
  StringCopyWorkerW(pcchNewDestLength, cchDest, (size_t *)pcchNewDestLength, (STRSAFE_PCNZWCH)v10, v13);
  StringCchCatW(v16, (wchar_t *)L"_p0", v11, v14);
  if ( (a4 & 0x7FFFFFFF) != 0 )
    v6 = a4 & 0x7FFFFFFF;
  else
    v6 = 1;
  semaphore_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QAEJJJPB_WKPAU_SECURITY_ATTRIBUTES___Z = (void *)_create___semaphore_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QAEJJJPB_WKPAU_SECURITY_ATTRIBUTES___Z(pcchNewDestLength, a4 & 0x7FFFFFFF, v6, v16, v5, v5);
  v8 = semaphore_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QAEJJJPB_WKPAU_SECURITY_ATTRIBUTES___Z;
  if ( (int)semaphore_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QAEJJJPB_WKPAU_SECURITY_ATTRIBUTES___Z >= 0 )
    return 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (wil::details::in1diag3 *)"wil",
    semaphore_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QAEJJJPB_WKPAU_SECURITY_ATTRIBUTES___Z,
    v12,
    v15,
    v16[0]);
  return v8;
}
