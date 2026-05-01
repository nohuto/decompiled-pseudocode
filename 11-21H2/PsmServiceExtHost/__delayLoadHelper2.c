/*
 * XREFs of __delayLoadHelper2 @ 0x18003E9E0
 * Callers:
 *     __tailMerge_ext_ms_win_session_usermgr_l1_1_0_dll @ 0x18004E978 (__tailMerge_ext_ms_win_session_usermgr_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll @ 0x18004EA6C (__tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_storelicensing_l1_2_0_dll @ 0x18004EB4C (__tailMerge_ext_ms_win_core_storelicensing_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll @ 0x18004EC62 (__tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_xbrm_l1_1_1_dll @ 0x18004ED98 (__tailMerge_ext_ms_win_core_xbrm_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll @ 0x18004EE7D (__tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_security_efswrt_l1_1_2_dll @ 0x18004EF2C (__tailMerge_ext_ms_win_security_efswrt_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x18004EFB7 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x18004F058 (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll @ 0x18004F107 (__tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll @ 0x18004F26C (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll.c)
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll @ 0x18004F2F7 (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll @ 0x18004F3CA (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll @ 0x18004F4BE (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_2_dll @ 0x18004F549 (__tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_2_dll.c)
 *     __tailMerge_feclient_dll @ 0x18004F5E6 (__tailMerge_feclient_dll.c)
 *     __tailMerge_ext_ms_win_sysmain_plmapi_l1_1_0_dll @ 0x18004F695 (__tailMerge_ext_ms_win_sysmain_plmapi_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_sysmain_plmapi_l1_1_1_dll @ 0x18004F720 (__tailMerge_ext_ms_win_sysmain_plmapi_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll @ 0x18004F8F8 (__tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll @ 0x18004F9D8 (__tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll @ 0x18004FAB8 (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x18004FB55 (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
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
