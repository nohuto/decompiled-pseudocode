/*
 * XREFs of __tailMerge_netapi32_dll @ 0x180005A6F
 * Callers:
 *     __imp_load_NetGetAadJoinInformation @ 0x180005A63 (__imp_load_NetGetAadJoinInformation.c)
 *     __imp_load_NetFreeAadJoinInformation @ 0x180005AEE (__imp_load_NetFreeAadJoinInformation.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180004A80 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_netapi32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_netapi32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
