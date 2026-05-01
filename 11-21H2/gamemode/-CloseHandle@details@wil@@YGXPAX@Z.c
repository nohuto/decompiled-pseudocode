/*
 * XREFs of ?CloseHandle@details@wil@@YGXPAX@Z @ 0x10003471
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z @ 0x100036DA (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@QAEXPAX@Z @ 0x10003F96 (-reset@-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@details@wil@@YGX0@ZU-$int.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 *     ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QAE@XZ @ 0x10004226 (--1-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@de.c)
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ @ 0x10004272 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QAE@XZ @ 0x100042D4 (--1SemaphoreValue@details_abi@wil@@QAE@XZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YGXPAXIPBD@Z @ 0x100033EE (-_FailFast_GetLastError@in1diag3@details@wil@@YGXPAXIPBD@Z.c)
 */

void __userpurge wil::details::CloseHandle(wil::details *this, void *a2)
{
  void *retaddr; // [esp+4h] [ebp+4h]

  if ( !CloseHandle(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, 2345);
}
