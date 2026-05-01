/*
 * XREFs of ___delayLoadHelper2@8 @ 0x100067BC
 * Callers:
 *     __tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll @ 0x100072C3 (__tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x10007314 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll @ 0x10007335 (__tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x10007376 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 * Callees:
 *     <none>
 */

int __stdcall __delayLoadHelper2(int a1, int a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, __pfnDliFailureHook2, DelayLoadFailureHook, a2, __pfnDliFailureHook2);
}
