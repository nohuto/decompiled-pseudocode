/*
 * XREFs of __tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll @ 0x18005D8A3
 * Callers:
 *     __imp_load_GetThemeStream @ 0x18005D897 (__imp_load_GetThemeStream.c)
 *     __imp_load_GetCurrentThemeName @ 0x18005D9AE (__imp_load_GetCurrentThemeName.c)
 *     __imp_load_GetThemeRect @ 0x18005DA1A (__imp_load_GetThemeRect.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800577A0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_uxtheme_themes_l1_1_2_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
