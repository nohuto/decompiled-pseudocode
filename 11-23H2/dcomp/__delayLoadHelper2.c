/*
 * XREFs of __delayLoadHelper2 @ 0x18008BB00
 * Callers:
 *     __tailMerge_coremessaging_dll @ 0x180096BB2 (__tailMerge_coremessaging_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x180096CA9 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180096D6A (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_bcrypt_dll @ 0x180096DF5 (__tailMerge_bcrypt_dll.c)
 *     __tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll @ 0x180096EEC (__tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x180096F89 (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_1_dll @ 0x180097068 (__tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_1_dll.c)
 *     __tailMerge_d2d1_dll @ 0x1800970E1 (__tailMerge_d2d1_dll.c)
 *     __tailMerge_d3d11_dll @ 0x18009717E (__tailMerge_d3d11_dll.c)
 *     __tailMerge_dxgi_dll @ 0x180097209 (__tailMerge_dxgi_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x1800972A6 (__tailMerge_wuceffects_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x180097343 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
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
