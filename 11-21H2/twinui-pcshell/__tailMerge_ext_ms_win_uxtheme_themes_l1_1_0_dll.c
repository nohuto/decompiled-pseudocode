/*
 * XREFs of __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x18018D226
 * Callers:
 *     __imp_load_RefreshImmersiveColorPolicyState @ 0x18018D21A (__imp_load_RefreshImmersiveColorPolicyState.c)
 *     __imp_load_GetIsImmersiveColorUsingHighContrast @ 0x18018D2A5 (__imp_load_GetIsImmersiveColorUsingHighContrast.c)
 *     __imp_load_GetColorFromPreference @ 0x18018D2B7 (__imp_load_GetColorFromPreference.c)
 *     __imp_load_GetUserColorPreference @ 0x18018D2C9 (__imp_load_GetUserColorPreference.c)
 *     __imp_load_GetThemeFont @ 0x18018F3EF (__imp_load_GetThemeFont.c)
 *     __imp_load_OpenThemeData @ 0x18018F401 (__imp_load_OpenThemeData.c)
 *     __imp_load_DrawThemeBackground @ 0x18018F413 (__imp_load_DrawThemeBackground.c)
 *     __imp_load_GetThemeColor @ 0x18018F425 (__imp_load_GetThemeColor.c)
 *     __imp_load_CloseThemeData @ 0x18018F437 (__imp_load_CloseThemeData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18014D660 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_uxtheme_themes_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
