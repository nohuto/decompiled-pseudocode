/*
 * XREFs of __delayLoadHelper2 @ 0x1800E7D40
 * Callers:
 *     __tailMerge_cdp_dll @ 0x1800226D2 (__tailMerge_cdp_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll @ 0x180022793 (__tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll @ 0x180022830 (__tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll @ 0x1800228BB (__tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_security_slc_l1_1_0_dll @ 0x180022958 (__tailMerge_ext_ms_win_security_slc_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_storage_exports_internal_l1_1_0_dll @ 0x1800229E3 (__tailMerge_api_ms_win_storage_exports_internal_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x180022A6E (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_propsys_dll @ 0x180022AF9 (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_shell_namespace_l1_1_0_dll @ 0x180022B84 (__tailMerge_api_ms_win_shell_namespace_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll @ 0x180022C21 (__tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll @ 0x180022CAC (__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_registry_l2_1_0_dll @ 0x180022D6D (__tailMerge_api_ms_win_core_registry_l2_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180022DF8 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_sspicli_dll @ 0x180022E83 (__tailMerge_sspicli_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x180022F0E (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180022F99 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x1800233B8 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll @ 0x180023431 (__tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x1800234CE (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_core_iuri_l1_1_0_dll @ 0x18002357D (__tailMerge_ext_ms_win_core_iuri_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_obsolete_l1_1_0_dll @ 0x180023608 (__tailMerge_api_ms_win_shcore_obsolete_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x18002369C (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll @ 0x1800237B4 (__tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll.c)
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
