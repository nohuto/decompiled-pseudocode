/*
 * XREFs of ?ReleaseMutex@details@wil@@YGXPAX@Z @ 0x1000349C
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?ReleaseMutex@details@wil@@YGX0@ZU?$integral_constant@I$01@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@@wil@@QAE@XZ @ 0x100034C7 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-ReleaseMutex@details@wil@.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ @ 0x10004163 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YGXPAXIPBD@Z @ 0x100033EE (-_FailFast_GetLastError@in1diag3@details@wil@@YGXPAXIPBD@Z.c)
 */

void __userpurge wil::details::ReleaseMutex(wil::details *this, void *a2)
{
  void *retaddr; // [esp+4h] [ebp+4h]

  if ( !ReleaseMutex(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, 2355);
}
