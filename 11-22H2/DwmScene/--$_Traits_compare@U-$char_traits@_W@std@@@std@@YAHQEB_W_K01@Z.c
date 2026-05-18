/*
 * XREFs of ??$_Traits_compare@U?$char_traits@_W@std@@@std@@YAHQEB_W_K01@Z @ 0x18001ED8C
 * Callers:
 *     ??$?M_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x18003F048 (--$-M_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 * Callees:
 *     ?compare@?$_WChar_traits@_W@std@@SAHQEB_W0_K@Z @ 0x18001F790 (-compare@-$_WChar_traits@_W@std@@SAHQEB_W0_K@Z.c)
 */

char __fastcall std::_Traits_compare<std::char_traits<wchar_t>>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // r8
  int v6; // ecx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r11

  v5 = a4;
  if ( a4 >= a2 )
    v5 = a2;
  v6 = std::_WChar_traits<wchar_t>::compare(a1, a3, v5);
  if ( v6 )
    return v6;
  if ( v8 >= v7 )
    return v8 > v7;
  return -1;
}
