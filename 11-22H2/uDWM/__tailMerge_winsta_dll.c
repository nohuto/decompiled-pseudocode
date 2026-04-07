/*
 * XREFs of __tailMerge_winsta_dll @ 0x18005DDC2
 * Callers:
 *     __imp_load_WinStationIsSessionRemoteable @ 0x18005DDB6 (__imp_load_WinStationIsSessionRemoteable.c)
 *     __imp_load_WinStationQueryInformationW @ 0x18005DE41 (__imp_load_WinStationQueryInformationW.c)
 *     __imp_load_WinStationGetConnectionProperty @ 0x18005DE53 (__imp_load_WinStationGetConnectionProperty.c)
 *     __imp_load_WinStationFreePropertyValue @ 0x18005DE65 (__imp_load_WinStationFreePropertyValue.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800577A0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_winsta_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_winsta_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
