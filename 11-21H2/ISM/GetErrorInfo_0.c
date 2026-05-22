/*
 * XREFs of GetErrorInfo_0 @ 0x18004C265
 * Callers:
 *     ??$get_runtime_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18003F638 (--$get_runtime_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Wi.c)
 *     ??$get_runtime_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18003F70C (--$get_runtime_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x180081648 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1800834DC (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 *     ??$get_runtime_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800C957C (--$get_runtime_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winr.c)
 *     ??$get_runtime_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800EF330 (--$get_runtime_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall GetErrorInfo_0(ULONG dwReserved, IErrorInfo **pperrinfo)
{
  return GetErrorInfo(dwReserved, pperrinfo);
}
