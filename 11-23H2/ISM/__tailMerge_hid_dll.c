/*
 * XREFs of __tailMerge_hid_dll @ 0x1800571DE
 * Callers:
 *     __imp_load_HidP_GetUsageValue @ 0x1800571D2 (__imp_load_HidP_GetUsageValue.c)
 *     __imp_load_HidP_GetUsages @ 0x18005725D (__imp_load_HidP_GetUsages.c)
 *     __imp_load_HidP_UsageListDifference @ 0x18005726F (__imp_load_HidP_UsageListDifference.c)
 *     __imp_load_HidP_GetSpecificButtonCaps @ 0x180057281 (__imp_load_HidP_GetSpecificButtonCaps.c)
 *     __imp_load_HidP_GetUsagesEx @ 0x180057293 (__imp_load_HidP_GetUsagesEx.c)
 *     __imp_load_HidP_GetSpecificValueCaps @ 0x1800572A5 (__imp_load_HidP_GetSpecificValueCaps.c)
 *     __imp_load_HidP_GetUsageValueArray @ 0x1800572B7 (__imp_load_HidP_GetUsageValueArray.c)
 *     __imp_load_HidP_GetCaps @ 0x1800572C9 (__imp_load_HidP_GetCaps.c)
 *     __imp_load_HidP_GetLinkCollectionNodes @ 0x1800572DB (__imp_load_HidP_GetLinkCollectionNodes.c)
 *     __imp_load_HidD_GetPreparsedData @ 0x1800572ED (__imp_load_HidD_GetPreparsedData.c)
 *     __imp_load_HidD_FreePreparsedData @ 0x1800572FF (__imp_load_HidD_FreePreparsedData.c)
 *     __imp_load_HidD_GetAttributes @ 0x180057311 (__imp_load_HidD_GetAttributes.c)
 *     __imp_load_HidD_GetFeature @ 0x180057323 (__imp_load_HidD_GetFeature.c)
 *     __imp_load_HidD_SetFeature @ 0x180057335 (__imp_load_HidD_SetFeature.c)
 *     __imp_load_HidP_TranslateUsagesToI8042ScanCodes @ 0x180057347 (__imp_load_HidP_TranslateUsagesToI8042ScanCodes.c)
 *     __imp_load_HidP_SetUsageValue @ 0x180057A74 (__imp_load_HidP_SetUsageValue.c)
 *     __imp_load_HidP_GetScaledUsageValue @ 0x180057A86 (__imp_load_HidP_GetScaledUsageValue.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180052880 (__delayLoadHelper2.c)
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
