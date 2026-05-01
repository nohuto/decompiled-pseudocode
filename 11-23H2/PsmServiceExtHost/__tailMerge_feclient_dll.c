/*
 * XREFs of __tailMerge_feclient_dll @ 0x18004A7B6
 * Callers:
 *     __imp_load_EdpQueryDplEnforcedPolicyOwnerIds @ 0x18004A7AA (__imp_load_EdpQueryDplEnforcedPolicyOwnerIds.c)
 *     __imp_load_EdpDplPolicyEnabledForUser @ 0x18004A835 (__imp_load_EdpDplPolicyEnabledForUser.c)
 *     __imp_load_EdpFree @ 0x18004A847 (__imp_load_EdpFree.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180013EC0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_feclient_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_feclient_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
