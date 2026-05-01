/*
 * XREFs of __delayLoadHelper2 @ 0x180008CB0
 * Callers:
 *     __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x18000B592 (__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18000B61D (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll @ 0x18000B6CC (__tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x18000B77B (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x18000B82A (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x18000B8B5 (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x18000B940 (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_core_psm_rtimer_l1_1_1_dll @ 0x18000B9EF (__tailMerge_api_ms_win_core_psm_rtimer_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_sysmain_plmapi_l1_1_0_dll @ 0x18000BA9E (__tailMerge_ext_ms_win_sysmain_plmapi_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x18000BBDD (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x18000BC8C (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
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
