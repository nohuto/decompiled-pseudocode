/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x180067F0A
 * Callers:
 *     __imp_load_CoTaskMemFree @ 0x180067EFE (__imp_load_CoTaskMemFree.c)
 *     __imp_load_CoTaskMemAlloc @ 0x180067F89 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateInstance @ 0x180067F9B (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoGetMalloc @ 0x180067FAD (__imp_load_CoGetMalloc.c)
 *     __imp_load_CoCreateGuid @ 0x18006804A (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoRevertToSelf @ 0x18006805C (__imp_load_CoRevertToSelf.c)
 *     __imp_load_CoInitializeEx @ 0x180068184 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x180068196 (__imp_load_CoUninitialize.c)
 *     __imp_load_StringFromCLSID @ 0x1800682B2 (__imp_load_StringFromCLSID.c)
 *     __imp_load_CLSIDFromString @ 0x1800682D6 (__imp_load_CLSIDFromString.c)
 *     __imp_load_CoGetPSClsid @ 0x1800682E8 (__imp_load_CoGetPSClsid.c)
 *     __imp_load_PropVariantClear @ 0x1800682FA (__imp_load_PropVariantClear.c)
 *     __imp_load_CoDisconnectContext @ 0x180068573 (__imp_load_CoDisconnectContext.c)
 *     __imp_load_CoResumeClassObjects @ 0x18006874A (__imp_load_CoResumeClassObjects.c)
 *     __imp_load_CoReleaseServerProcess @ 0x18006875C (__imp_load_CoReleaseServerProcess.c)
 *     __imp_load_CoAddRefServerProcess @ 0x18006876E (__imp_load_CoAddRefServerProcess.c)
 *     __imp_load_CoRevokeClassObject @ 0x180068780 (__imp_load_CoRevokeClassObject.c)
 *     __imp_load_CoRegisterClassObject @ 0x180068792 (__imp_load_CoRegisterClassObject.c)
 *     __imp_load_CoDecrementMTAUsage @ 0x1800687A4 (__imp_load_CoDecrementMTAUsage.c)
 *     __imp_load_CoIncrementMTAUsage @ 0x1800687B6 (__imp_load_CoIncrementMTAUsage.c)
 *     __imp_load_CoSetProxyBlanket @ 0x1800689C8 (__imp_load_CoSetProxyBlanket.c)
 *     __imp_load_StringFromGUID2 @ 0x180068A22 (__imp_load_StringFromGUID2.c)
 *     __imp_load_CoDisconnectObject @ 0x180068AE8 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x180068B0C (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_IIDFromString @ 0x180068CE8 (__imp_load_IIDFromString.c)
 *     __imp_load_CoGetApartmentType @ 0x18006A34C (__imp_load_CoGetApartmentType.c)
 *     __imp_load_CoDisableCallCancellation @ 0x18006A35E (__imp_load_CoDisableCallCancellation.c)
 *     __imp_load_CoCancelCall @ 0x18006A3FB (__imp_load_CoCancelCall.c)
 *     __imp_load_CoEnableCallCancellation @ 0x18006A431 (__imp_load_CoEnableCallCancellation.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054F90 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
