/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@QAEXPAX@Z @ 0x10003F96
 * Callers:
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QAEJJJPB_WKPAU_SECURITY_ATTRIBUTES@@@Z @ 0x10003F52 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@details@w.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ @ 0x10004163 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YGXPAX@Z @ 0x10003471 (-CloseHandle@details@wil@@YGXPAX@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

wil::details *__thiscall _reset___unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__QAEXPAX_Z(
        wil::details **this,
        wil::details *a2)
{
  wil::details *v3; // ebx
  DWORD LastError; // esi
  wil::details *result; // eax
  void *v6; // [esp+0h] [ebp-1Ch]

  v3 = *this;
  if ( *this )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v3, v6);
    SetLastError(LastError);
  }
  result = a2;
  *this = a2;
  return result;
}
