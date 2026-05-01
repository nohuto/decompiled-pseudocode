/*
 * XREFs of __tailMerge_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll @ 0x18018AAAE
 * Callers:
 *     __imp_load_SHPinDllOfCLSID @ 0x18018AAA2 (__imp_load_SHPinDllOfCLSID.c)
 *     __imp_load_SHCreateWorkerWindowW @ 0x18018AD62 (__imp_load_SHCreateWorkerWindowW.c)
 *     __imp_load_SHSetWindowBits @ 0x18018B2B1 (__imp_load_SHSetWindowBits.c)
 *     __imp_load_SHGetFileDescriptionW @ 0x18018B640 (__imp_load_SHGetFileDescriptionW.c)
 *     __imp_load_SHFillRectClr @ 0x18018BC36 (__imp_load_SHFillRectClr.c)
 *     __imp_load_IUnknown_GetWindow @ 0x18018BD99 (__imp_load_IUnknown_GetWindow.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18014D660 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
