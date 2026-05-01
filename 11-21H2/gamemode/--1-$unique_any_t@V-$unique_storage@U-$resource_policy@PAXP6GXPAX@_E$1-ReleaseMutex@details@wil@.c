/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?ReleaseMutex@details@wil@@YGX0@ZU?$integral_constant@I$01@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@@wil@@QAE@XZ @ 0x100034C7
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 * Callees:
 *     ?ReleaseMutex@details@wil@@YGXPAX@Z @ 0x1000349C (-ReleaseMutex@details@wil@@YGXPAX@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

void __thiscall __1__unique_any_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_ReleaseMutex_details_wil__YGX0_ZU__integral_constant_I_01_wistd__PAXPAX_0A___T_details_wil___details_wil___wil__QAE_XZ(
        wil::details **this)
{
  void *v1; // [esp+0h] [ebp-10h]

  if ( *this )
    wil::details::ReleaseMutex(*this, v1);
}
