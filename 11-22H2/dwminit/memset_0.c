/*
 * XREFs of memset_0 @ 0x180002638
 * Callers:
 *     __scrt_fastfail @ 0x1800023DC (__scrt_fastfail.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180003F90 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180005BCC (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180006438 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memcpy_s @ 0x1800065E8 (memcpy_s.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180006774 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180006AE0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x18000713C (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     DllMain @ 0x180008194 (DllMain.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x180009150 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180009644 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000B7C4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
