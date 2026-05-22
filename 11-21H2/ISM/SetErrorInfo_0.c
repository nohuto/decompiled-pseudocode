/*
 * XREFs of SetErrorInfo_0 @ 0x18004C27D
 * Callers:
 *     ??$get_runtime_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18003F638 (--$get_runtime_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Wi.c)
 *     ??$get_runtime_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18003F70C (--$get_runtime_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z @ 0x180083290 (-fallback_RoOriginateLanguageException@hresult_error@winrt@@CAHHPEAX0@Z.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x180083940 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 *     ??$get_runtime_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800C957C (--$get_runtime_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winr.c)
 *     ??$get_runtime_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800EF330 (--$get_runtime_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SetErrorInfo_0(ULONG dwReserved, IErrorInfo *perrinfo)
{
  return SetErrorInfo(dwReserved, perrinfo);
}
