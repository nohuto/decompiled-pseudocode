/*
 * XREFs of __delayLoadHelper2 @ 0x1800577A0
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18005D4F6 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x18005D581 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x18005D68A (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x18005D727 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x18005D7F4 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll @ 0x18005D8A3 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x18005DA38 (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll @ 0x18005DAD5 (__tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll @ 0x18005DB60 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x18005DBEB (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_comctl32_dll @ 0x18005DC9A (__tailMerge_comctl32_dll.c)
 *     __tailMerge_windowscodecs_dll @ 0x18005DD37 (__tailMerge_windowscodecs_dll.c)
 *     __tailMerge_winsta_dll @ 0x18005DDC2 (__tailMerge_winsta_dll.c)
 *     __tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll @ 0x18005DEC8 (__tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll.c)
 *     __tailMerge_virtualmonitormanager_dll @ 0x18005DF53 (__tailMerge_virtualmonitormanager_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x18005DFCC (__tailMerge_wuceffects_dll.c)
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
