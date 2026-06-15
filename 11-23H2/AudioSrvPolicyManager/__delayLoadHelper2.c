/*
 * XREFs of __delayLoadHelper2 @ 0x1800474C0
 * Callers:
 *     __tailMerge_mmdevapi_dll @ 0x1800177EA (__tailMerge_mmdevapi_dll.c)
 *     __tailMerge_ondemandbrokerclient_dll @ 0x180017899 (__tailMerge_ondemandbrokerclient_dll.c)
 *     __tailMerge_powrprof_dll @ 0x180017924 (__tailMerge_powrprof_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x1800179E5 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll @ 0x180017A82 (__tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180017B0D (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x180017BBC (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll @ 0x180017C47 (__tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x180017CD2 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll @ 0x180017D6F (__tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180017DFA (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180017F27 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x18001802C (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
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
