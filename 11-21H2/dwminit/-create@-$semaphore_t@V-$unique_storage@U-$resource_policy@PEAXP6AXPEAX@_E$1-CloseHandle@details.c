/*
 * XREFs of ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18000D9C4
 * Callers:
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x18000A9A4 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 * Callees:
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x18000401C (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180008A30 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall _create___semaphore_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES___Z(
        __int64 *a1,
        LONG a2,
        LONG a3,
        const WCHAR *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // edi
  wil::details *v8; // rcx
  HANDLE Semaphore; // rbp
  DWORD LastError; // ebx
  void (__fastcall *v12)(wil::details *, void *); // [rsp+30h] [rbp-18h] BYREF

  v7 = 0;
  Semaphore = CreateSemaphoreExW(0LL, a2, a3, a4, 0, 0x1F0003u);
  if ( Semaphore )
  {
    if ( *a1 )
    {
      a6 = *a1;
      LastError = GetLastError();
      v12 = wil::details::CloseHandle;
      ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v12, &a6);
      SetLastError(LastError);
    }
    *a1 = (__int64)Semaphore;
  }
  else
  {
    return (unsigned int)wil::details::GetLastErrorFailHr(v8);
  }
  return v7;
}
