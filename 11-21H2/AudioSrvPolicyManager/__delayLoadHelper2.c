/*
 * XREFs of __delayLoadHelper2 @ 0x180044280
 * Callers:
 *     __tailMerge_mmdevapi_dll @ 0x18000368A (__tailMerge_mmdevapi_dll.c)
 *     __tailMerge_ondemandbrokerclient_dll @ 0x180003739 (__tailMerge_ondemandbrokerclient_dll.c)
 *     __tailMerge_powrprof_dll @ 0x1800037C4 (__tailMerge_powrprof_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x180003885 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll @ 0x180003922 (__tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x1800039AD (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x180003A5C (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll @ 0x180003AE7 (__tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x180003B72 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll @ 0x180003C0F (__tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180003C9A (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180003DC7 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180003ECC (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
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
