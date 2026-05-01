/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KG_K@Z @ 0x180384D3C
 * Callers:
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1801B7BFC (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 * Callees:
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x180384D10 (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 */

__int64 __fastcall std::wstring::find(_QWORD *a1, __int16 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdx
  _QWORD *v5; // r9
  _WORD *v6; // rax
  __int64 v7; // r9
  __int16 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = a1[2];
  v5 = a1;
  if ( a1[3] >= 8uLL )
    v5 = (_QWORD *)*a1;
  v9 = a2;
  if ( a3 < v4 && (v6 = std::_WChar_traits<unsigned short>::find((_WORD *)v5 + a3, v4 - a3, &v9)) != 0LL )
    return ((__int64)v6 - v7) >> 1;
  else
    return -1LL;
}
