/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x140030B27
 * Callers:
 *     __imp_load_CoTaskMemAlloc @ 0x140030B1B (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateInstance @ 0x140030BA6 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoTaskMemFree @ 0x140030BB8 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_CoUninitialize @ 0x140030DF6 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoRegisterClassObject @ 0x140030EB7 (__imp_load_CoRegisterClassObject.c)
 *     __imp_load_CoResumeClassObjects @ 0x140030EDB (__imp_load_CoResumeClassObjects.c)
 *     __imp_load_CoInitializeSecurity @ 0x140030EED (__imp_load_CoInitializeSecurity.c)
 *     __imp_load_CoInitializeEx @ 0x140030F23 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoRevokeClassObject @ 0x140030F35 (__imp_load_CoRevokeClassObject.c)
 *     __imp_load_PropVariantClear @ 0x140030F47 (__imp_load_PropVariantClear.c)
 *     __imp_load_CoImpersonateClient @ 0x140030F59 (__imp_load_CoImpersonateClient.c)
 *     __imp_load_CoRevertToSelf @ 0x140030F6B (__imp_load_CoRevertToSelf.c)
 *     __imp_load_CLSIDFromString @ 0x140030FB3 (__imp_load_CLSIDFromString.c)
 *     __imp_load_CoCreateGuid @ 0x140030FC5 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoDisconnectObject @ 0x140030FD7 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_StringFromGUID2 @ 0x140031BE3 (__imp_load_StringFromGUID2.c)
 *     __imp_load_CoGetApartmentType @ 0x140031C3C (__imp_load_CoGetApartmentType.c)
 *     __imp_load_CoReleaseMarshalData @ 0x140031CD9 (__imp_load_CoReleaseMarshalData.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x140031CEB (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CreateStreamOnHGlobal @ 0x140031CFD (__imp_load_CreateStreamOnHGlobal.c)
 *     __imp_load_CoMarshalInterface @ 0x140031D0F (__imp_load_CoMarshalInterface.c)
 *     __imp_load_CoTaskMemRealloc @ 0x140031D5D (__imp_load_CoTaskMemRealloc.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x14002D490 (__delayLoadHelper2.c)
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
