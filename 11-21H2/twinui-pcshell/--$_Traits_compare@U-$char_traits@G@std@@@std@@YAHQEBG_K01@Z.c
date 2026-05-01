/*
 * XREFs of ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180126B8C
 * Callers:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180126B5C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18022B968 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x1805647E4 (-IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180584CCC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805879AC (-compare@path@filesystem@std@@QEBAHV-$basic_string_view@GU-$char_traits@G@std@@@3@@Z.c)
 *     ?IsTrustedPublisher@ProtocolLauncher@Utils@@CA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1805D0A00 (-IsTrustedPublisher@ProtocolLauncher@Utils@@CA_NAEBV-$basic_string_view@GU-$char_traits@G@std@@@.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180126FC0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

char __fastcall std::_Traits_compare<std::char_traits<unsigned short>>(
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
  v6 = std::_WChar_traits<unsigned short>::compare(a1, a3, v5);
  if ( v6 )
    return v6;
  if ( v8 < v7 )
    return -1;
  return v8 > v7;
}
