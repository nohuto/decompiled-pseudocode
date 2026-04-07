/*
 * XREFs of __delayLoadHelper2 @ 0x18005E580
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x1800610F6 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x180061181 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x18006128A (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x180061327 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x1800613F4 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll @ 0x1800614A3 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x180061638 (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll @ 0x1800616D5 (__tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll @ 0x180061760 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x1800617EB (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_comctl32_dll @ 0x18006189A (__tailMerge_comctl32_dll.c)
 *     __tailMerge_dwmcore_dll @ 0x180061937 (__tailMerge_dwmcore_dll.c)
 *     __tailMerge_windowscodecs_dll @ 0x1800619D4 (__tailMerge_windowscodecs_dll.c)
 *     __tailMerge_winsta_dll @ 0x180061A5F (__tailMerge_winsta_dll.c)
 *     __tailMerge_dcomp_dll @ 0x180061B20 (__tailMerge_dcomp_dll.c)
 *     __tailMerge_dxgi_dll @ 0x180061BBD (__tailMerge_dxgi_dll.c)
 *     __tailMerge_d2d1_dll @ 0x180061C5A (__tailMerge_d2d1_dll.c)
 *     __tailMerge_d3d11_dll @ 0x180061CE5 (__tailMerge_d3d11_dll.c)
 *     __tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll @ 0x180061DA8 (__tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll.c)
 *     __tailMerge_virtualmonitormanager_dll @ 0x180061E33 (__tailMerge_virtualmonitormanager_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x180061EBE (__tailMerge_wuceffects_dll.c)
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
