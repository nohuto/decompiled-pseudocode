/*
 * XREFs of __tailMerge_hid_dll @ 0x180057F6E
 * Callers:
 *     __imp_load_HidP_GetUsageValue @ 0x180057F62 (__imp_load_HidP_GetUsageValue.c)
 *     __imp_load_HidP_GetUsages @ 0x180057FED (__imp_load_HidP_GetUsages.c)
 *     __imp_load_HidP_UsageListDifference @ 0x180057FFF (__imp_load_HidP_UsageListDifference.c)
 *     __imp_load_HidP_GetSpecificButtonCaps @ 0x180058011 (__imp_load_HidP_GetSpecificButtonCaps.c)
 *     __imp_load_HidP_GetUsagesEx @ 0x180058023 (__imp_load_HidP_GetUsagesEx.c)
 *     __imp_load_HidP_GetSpecificValueCaps @ 0x180058035 (__imp_load_HidP_GetSpecificValueCaps.c)
 *     __imp_load_HidP_GetUsageValueArray @ 0x180058047 (__imp_load_HidP_GetUsageValueArray.c)
 *     __imp_load_HidP_GetCaps @ 0x180058059 (__imp_load_HidP_GetCaps.c)
 *     __imp_load_HidP_GetLinkCollectionNodes @ 0x18005806B (__imp_load_HidP_GetLinkCollectionNodes.c)
 *     __imp_load_HidD_GetPreparsedData @ 0x18005807D (__imp_load_HidD_GetPreparsedData.c)
 *     __imp_load_HidD_FreePreparsedData @ 0x18005808F (__imp_load_HidD_FreePreparsedData.c)
 *     __imp_load_HidD_GetAttributes @ 0x1800580A1 (__imp_load_HidD_GetAttributes.c)
 *     __imp_load_HidD_GetFeature @ 0x1800580B3 (__imp_load_HidD_GetFeature.c)
 *     __imp_load_HidD_SetFeature @ 0x1800580C5 (__imp_load_HidD_SetFeature.c)
 *     __imp_load_HidP_TranslateUsagesToI8042ScanCodes @ 0x1800580D7 (__imp_load_HidP_TranslateUsagesToI8042ScanCodes.c)
 *     __imp_load_HidP_SetUsageValue @ 0x180058892 (__imp_load_HidP_SetUsageValue.c)
 *     __imp_load_HidP_GetScaledUsageValue @ 0x1800588A4 (__imp_load_HidP_GetScaledUsageValue.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180053540 (__delayLoadHelper2.c)
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
