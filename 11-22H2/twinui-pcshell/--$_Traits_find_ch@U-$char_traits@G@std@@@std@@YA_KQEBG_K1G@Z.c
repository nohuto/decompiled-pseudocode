/*
 * XREFs of ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x18045722C
 * Callers:
 *     ?trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801F16BC (-trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV-$basic_string@GU-$char_trait.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1804595F0 (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?TryGetTileIdForApplicationView@JointResize@@AEAA?AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUIApplicationView@@@Z @ 0x1805E4ECC (-TryGetTileIdForApplicationView@JointResize@@AEAA-AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAU.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x180628C94 (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 * Callees:
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x180038744 (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 */

__int64 __fastcall std::_Traits_find_ch<std::char_traits<unsigned short>>(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int16 a4)
{
  _WORD *v4; // rax
  __int64 v5; // r9
  __int16 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = a4;
  if ( a3 < a2 && (v4 = std::_WChar_traits<unsigned short>::find((_WORD *)(a1 + 2 * a3), a2 - a3, &v7)) != 0LL )
    return ((__int64)v4 - v5) >> 1;
  else
    return -1LL;
}
