/*
 * XREFs of ??1SemaphoreValue@details_abi@wil@@QAE@XZ @ 0x100042D4
 * Callers:
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ @ 0x10004272 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CGJPB_W$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PAPAV123@@Z @ 0x1000433D (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YGXPAX@Z @ 0x10003471 (-CloseHandle@details@wil@@YGXPAX@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

void __thiscall wil::details_abi::SemaphoreValue::~SemaphoreValue(wil::details **this)
{
  void *v2; // [esp+0h] [ebp-14h]

  if ( this[1] )
    wil::details::CloseHandle(this[1], v2);
  if ( *this )
    wil::details::CloseHandle(*this, v2);
}
