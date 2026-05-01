/*
 * XREFs of __tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll @ 0x18004BB63
 * Callers:
 *     __imp_load_RmGameModeInitializeResourceRequest @ 0x18004BB57 (__imp_load_RmGameModeInitializeResourceRequest.c)
 *     __imp_load_RmGameModeGetLargestValidResourceRequest @ 0x18004BBE2 (__imp_load_RmGameModeGetLargestValidResourceRequest.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18004A150 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
