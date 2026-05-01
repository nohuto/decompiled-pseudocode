/*
 * XREFs of ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QAE@XZ @ 0x10004226
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YGXPAX@Z @ 0x10003471 (-CloseHandle@details@wil@@YGXPAX@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

void __thiscall __1__unique_any_t_V__mutex_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QAE_XZ(
        wil::details **this)
{
  void *v1; // [esp+0h] [ebp-10h]

  if ( *this )
    wil::details::CloseHandle(*this, v1);
}
