/*
 * XREFs of ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180007860
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180006164 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005410 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180005A30 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _create___semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z(
        wil::details **a1,
        LONG a2,
        LONG a3,
        const WCHAR *a4)
{
  unsigned int v5; // edi
  wil::details *v6; // rcx
  wil::details *Semaphore; // rbp
  wil::details *v8; // rsi
  DWORD LastError; // ebx
  void *v10; // rdx

  v5 = 0;
  Semaphore = (wil::details *)CreateSemaphoreExW(0LL, a2, a3, a4, 0, 0x1F0003u);
  if ( Semaphore )
  {
    v8 = *a1;
    if ( *a1 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v8, v10);
      SetLastError(LastError);
    }
    *a1 = Semaphore;
  }
  else
  {
    return (unsigned int)wil::details::GetLastErrorFailHr(v6);
  }
  return v5;
}
