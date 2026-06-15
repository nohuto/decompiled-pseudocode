/*
 * XREFs of __delayLoadHelper2 @ 0x14002D490
 * Callers:
 *     __tailMerge_oleaut32_dll @ 0x140030A9C (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x140030B27 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x140030BD6 (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x140030C61 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x140030CEC (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x140030D77 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x140030E14 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_3_dll @ 0x140030FF5 (__tailMerge_api_ms_win_core_com_l1_1_3_dll.c)
 *     __tailMerge_avrt_dll @ 0x140031092 (__tailMerge_avrt_dll.c)
 *     __tailMerge_rtworkq_dll @ 0x140031A5B (__tailMerge_rtworkq_dll.c)
 *     __tailMerge_propsys_dll @ 0x140031B64 (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x140031C5A (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
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
