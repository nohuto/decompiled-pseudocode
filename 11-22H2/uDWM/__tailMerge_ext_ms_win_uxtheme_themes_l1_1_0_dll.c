/*
 * XREFs of __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x18005D7F4
 * Callers:
 *     __imp_load_GetThemeAnimationProperty @ 0x18005D7E8 (__imp_load_GetThemeAnimationProperty.c)
 *     __imp_load_GetThemeAnimationTransform @ 0x18005D873 (__imp_load_GetThemeAnimationTransform.c)
 *     __imp_load_GetThemeTimingFunction @ 0x18005D885 (__imp_load_GetThemeTimingFunction.c)
 *     __imp_load_GetColorFromPreference @ 0x18005D922 (__imp_load_GetColorFromPreference.c)
 *     __imp_load_GetUserColorPreference @ 0x18005D934 (__imp_load_GetUserColorPreference.c)
 *     __imp_load_OpenThemeData @ 0x18005D99C (__imp_load_OpenThemeData.c)
 *     __imp_load_GetThemeInt @ 0x18005D9C0 (__imp_load_GetThemeInt.c)
 *     __imp_load_GetIsImmersiveColorUsingHighContrast @ 0x18005D9D2 (__imp_load_GetIsImmersiveColorUsingHighContrast.c)
 *     __imp_load_CloseThemeData @ 0x18005D9E4 (__imp_load_CloseThemeData.c)
 *     __imp_load_GetThemeColor @ 0x18005D9F6 (__imp_load_GetThemeColor.c)
 *     __imp_load_GetThemeMargins @ 0x18005DA08 (__imp_load_GetThemeMargins.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800577A0 (__delayLoadHelper2.c)
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
