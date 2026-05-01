/*
 * XREFs of ?split@stringutils@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1805DEAA8
 * Callers:
 *     api_alchemy_config::_anonymous_namespace_::specifiers::specifiers_0 @ 0x1805DD254 (api_alchemy_config--_anonymous_namespace_--specifiers--specifiers_0.c)
 *     ?safeSplitPair@stringutils@@YA?AV?$optional@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1805DE7AC (-safeSplitPair@stringutils@@YA-AV-$optional@U-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 * Callees:
 *     ??$split@V?$back_insert_iterator@V?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@std@@@stringutils@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@GV?$back_insert_iterator@V?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@2@@Z @ 0x1805DCD7C (--$split@V-$back_insert_iterator@V-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall stringutils::split(_QWORD *a1, _QWORD *a2, unsigned __int16 a3)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  stringutils::split<std::back_insert_iterator<std::vector<std::wstring>>>(a2, a3, a1);
  return a1;
}
