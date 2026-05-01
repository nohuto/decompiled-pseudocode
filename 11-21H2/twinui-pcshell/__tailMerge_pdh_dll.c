/*
 * XREFs of __tailMerge_pdh_dll @ 0x18018EAB1
 * Callers:
 *     __imp_load_PdhOpenQueryW @ 0x18018EAA5 (__imp_load_PdhOpenQueryW.c)
 *     __imp_load_PdhAddCounterW @ 0x18018EB30 (__imp_load_PdhAddCounterW.c)
 *     __imp_load_PdhCollectQueryData @ 0x18018EB42 (__imp_load_PdhCollectQueryData.c)
 *     __imp_load_PdhGetRawCounterArrayW @ 0x18018EB54 (__imp_load_PdhGetRawCounterArrayW.c)
 *     __imp_load_PdhCloseQuery @ 0x18018EB66 (__imp_load_PdhCloseQuery.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18014D660 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_pdh_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_pdh_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
