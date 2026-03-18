/*
 * XREFs of __tailMerge_rpcrt4_dll @ 0x180101DDB
 * Callers:
 *     __imp_load_NdrClientCall3 @ 0x180102CAC (__imp_load_NdrClientCall3.c)
 *     __imp_load_RpcBindingFromStringBindingW @ 0x180102CBE (__imp_load_RpcBindingFromStringBindingW.c)
 *     __imp_load_RpcStringBindingComposeW @ 0x180102CD0 (__imp_load_RpcStringBindingComposeW.c)
 *     __imp_load_RpcStringFreeW @ 0x180102CE2 (__imp_load_RpcStringFreeW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800F39B0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_rpcrt4_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_rpcrt4_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
