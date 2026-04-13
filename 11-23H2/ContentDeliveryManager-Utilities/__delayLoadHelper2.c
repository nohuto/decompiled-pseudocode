/*
 * XREFs of __delayLoadHelper2 @ 0x1800CFDA0
 * Callers:
 *     __tailMerge_cdp_dll @ 0x180022EE2 (__tailMerge_cdp_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll @ 0x180022FA3 (__tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll @ 0x180023040 (__tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll @ 0x1800230CB (__tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_security_slc_l1_1_0_dll @ 0x180023168 (__tailMerge_ext_ms_win_security_slc_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_storage_exports_internal_l1_1_0_dll @ 0x1800231F3 (__tailMerge_api_ms_win_storage_exports_internal_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x18002327E (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_propsys_dll @ 0x180023309 (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_shell_namespace_l1_1_0_dll @ 0x180023394 (__tailMerge_api_ms_win_shell_namespace_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll @ 0x180023431 (__tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll @ 0x1800234BC (__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_registry_l2_1_0_dll @ 0x18002357D (__tailMerge_api_ms_win_core_registry_l2_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180023608 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_sspicli_dll @ 0x180023693 (__tailMerge_sspicli_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x18002371E (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x1800237A9 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x180023898 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll @ 0x180023911 (__tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x1800239AE (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_core_iuri_l1_1_0_dll @ 0x180023A5D (__tailMerge_ext_ms_win_core_iuri_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x180023AFA (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_obsolete_l1_1_0_dll @ 0x180023B97 (__tailMerge_api_ms_win_shcore_obsolete_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll @ 0x180023C88 (__tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll.c)
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
