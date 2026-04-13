/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180062A5C
 * Callers:
 *     ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180017F50 (-do_get@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_180017F50.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180019B70 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GO@Z @ 0x180019DE0 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_180019DE0.c)
 *     ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x18001BA60 (-do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@.c)
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x18004F644 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@D@std@@@std@@@std@@@-$basic_st.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180063970 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180063970.c)
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18007227C (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800049B4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Chassign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0_W@Z @ 0x1800602AC (-_Chassign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0_W@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x180061A10 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, size_t a2, wchar_t a3)
{
  __int64 v5; // rcx
  size_t v7; // rsi
  _QWORD *v8; // rax

  v5 = a1[2];
  if ( ~v5 <= a2 )
    std::_Xlength_error("string too long");
  if ( a2 )
  {
    v7 = v5 + a2;
    if ( std::wstring::_Grow(a1, v5 + a2, 0) )
    {
      std::wstring::_Chassign(a1, a1[2], a2, a3);
      if ( a1[3] < 8uLL )
        v8 = a1;
      else
        v8 = (_QWORD *)*a1;
      a1[2] = v7;
      *((_WORD *)v8 + v7) = 0;
    }
  }
  return a1;
}
