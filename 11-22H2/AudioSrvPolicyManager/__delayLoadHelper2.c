/*
 * XREFs of __delayLoadHelper2 @ 0x180048950
 * Callers:
 *     __tailMerge_mmdevapi_dll @ 0x1800179DA (__tailMerge_mmdevapi_dll.c)
 *     __tailMerge_ondemandbrokerclient_dll @ 0x180017A89 (__tailMerge_ondemandbrokerclient_dll.c)
 *     __tailMerge_powrprof_dll @ 0x180017B14 (__tailMerge_powrprof_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x180017BD5 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll @ 0x180017C72 (__tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180017CFD (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x180017DAC (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll @ 0x180017E37 (__tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x180017EC2 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll @ 0x180017F5F (__tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180017FEA (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180018117 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x18001821C (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
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
