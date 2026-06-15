/*
 * XREFs of __tailMerge_hid_dll @ 0x1800688ED
 * Callers:
 *     __imp_load_HidD_GetHidGuid @ 0x1800688E1 (__imp_load_HidD_GetHidGuid.c)
 *     __imp_load_HidD_GetAttributes @ 0x180068990 (__imp_load_HidD_GetAttributes.c)
 *     __imp_load_HidD_GetPreparsedData @ 0x1800689A2 (__imp_load_HidD_GetPreparsedData.c)
 *     __imp_load_HidP_GetCaps @ 0x1800689B4 (__imp_load_HidP_GetCaps.c)
 *     __imp_load_HidD_FreePreparsedData @ 0x1800689C6 (__imp_load_HidD_FreePreparsedData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054FA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_hid_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_hid_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
