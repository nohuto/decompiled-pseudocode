/*
 * XREFs of _memset @ 0x10007471
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z @ 0x10002C3F (-SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z.c)
 *     ?WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z @ 0x1000326D (-WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z @ 0x100037C8 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z.c)
 *     ??0?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QAVSemaphoreValue@12@@Z @ 0x100044B1 (--0-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@$$QAV-$uni.c)
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z @ 0x100062F5 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YGJPAXPA_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return _memset(a1, Val, Size);
}
