/*
 * XREFs of ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x180038744
 * Callers:
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180038680 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x18045722C (--$_Traits_find_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_WChar_traits<unsigned short>::find(_WORD *a1, __int64 a2, __int16 *a3)
{
  _WORD *result; // rax
  __int16 v4; // r8

  result = 0LL;
  if ( a2 )
  {
    v4 = *a3;
    while ( *a1 != v4 )
    {
      if ( a2 == 1 )
        return result;
      --a2;
      ++a1;
    }
    return a1;
  }
  return result;
}
