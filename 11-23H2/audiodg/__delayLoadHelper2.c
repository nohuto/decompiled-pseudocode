/*
 * XREFs of __delayLoadHelper2 @ 0x1400A0E00
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x14002932E (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x1400293A7 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x140029456 (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x1400294E1 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x14002956C (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x1400295F7 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x140029694 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_3_dll @ 0x14002983F (__tailMerge_api_ms_win_core_com_l1_1_3_dll.c)
 *     __tailMerge_avrt_dll @ 0x140029912 (__tailMerge_avrt_dll.c)
 *     __tailMerge_rtworkq_dll @ 0x14002A2EB (__tailMerge_rtworkq_dll.c)
 *     __tailMerge_propsys_dll @ 0x14002A3F4 (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x14002A4EA (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
