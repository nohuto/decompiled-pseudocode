/*
 * XREFs of __tailMerge_coremessaging_dll @ 0x180102BC7
 * Callers:
 *     __imp_load_CoreUICallCreateEndpointHost @ 0x180102BBB (__imp_load_CoreUICallCreateEndpointHost.c)
 *     __imp_load_CoreUICreate @ 0x180102C46 (__imp_load_CoreUICreate.c)
 *     __imp_load_CoreUICreateEx @ 0x180102C58 (__imp_load_CoreUICreateEx.c)
 *     __imp_load_CoreUICallReceive @ 0x180102C6A (__imp_load_CoreUICallReceive.c)
 *     __imp_load_CoreUICallCreateConversationHost @ 0x180102C7C (__imp_load_CoreUICallCreateConversationHost.c)
 *     __imp_load_CoreUICallSend @ 0x180102C8E (__imp_load_CoreUICallSend.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800F39B0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_coremessaging_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_coremessaging_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
