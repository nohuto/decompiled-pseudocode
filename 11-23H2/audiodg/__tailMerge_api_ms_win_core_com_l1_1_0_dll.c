/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x14002932E
 * Callers:
 *     __imp_load_CoTaskMemFree @ 0x140029322 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_CoTaskMemAlloc @ 0x140029426 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateInstance @ 0x140029438 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoUninitialize @ 0x140029676 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoRegisterClassObject @ 0x140029737 (__imp_load_CoRegisterClassObject.c)
 *     __imp_load_CoResumeClassObjects @ 0x14002975B (__imp_load_CoResumeClassObjects.c)
 *     __imp_load_CoInitializeSecurity @ 0x14002976D (__imp_load_CoInitializeSecurity.c)
 *     __imp_load_CoInitializeEx @ 0x1400297A3 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoRevokeClassObject @ 0x1400297B5 (__imp_load_CoRevokeClassObject.c)
 *     __imp_load_PropVariantClear @ 0x1400297C7 (__imp_load_PropVariantClear.c)
 *     __imp_load_CoImpersonateClient @ 0x1400297D9 (__imp_load_CoImpersonateClient.c)
 *     __imp_load_CoRevertToSelf @ 0x1400297EB (__imp_load_CoRevertToSelf.c)
 *     __imp_load_CLSIDFromString @ 0x1400298BE (__imp_load_CLSIDFromString.c)
 *     __imp_load_CoCreateGuid @ 0x1400298E2 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoDisconnectObject @ 0x1400298F4 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_StringFromGUID2 @ 0x14002A473 (__imp_load_StringFromGUID2.c)
 *     __imp_load_CoGetApartmentType @ 0x14002A4CC (__imp_load_CoGetApartmentType.c)
 *     __imp_load_CoReleaseMarshalData @ 0x14002A569 (__imp_load_CoReleaseMarshalData.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x14002A57B (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CreateStreamOnHGlobal @ 0x14002A58D (__imp_load_CreateStreamOnHGlobal.c)
 *     __imp_load_CoMarshalInterface @ 0x14002A59F (__imp_load_CoMarshalInterface.c)
 *     __imp_load_CoTaskMemRealloc @ 0x14002A5ED (__imp_load_CoTaskMemRealloc.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1400A0E00 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
