/*
 * XREFs of ?_Tidy@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18007D4A0
 * Callers:
 *     ?GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180021934 (-GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PE.c)
 *     ??$?0U?$char_traits@G@std@@V?$allocator@G@1@@?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@W4syntax_option_type@regex_constants@1@@Z @ 0x18007D000 (--$-0U-$char_traits@G@std@@V-$allocator@G@1@@-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@AE.c)
 * Callees:
 *     ?_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z @ 0x18007D530 (-_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z.c)
 */

void __fastcall std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Tidy(struct std::_Node_base **a1)
{
  struct std::_Node_base *v2; // rcx

  v2 = *a1;
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)v2 + 11, 0xFFFFFFFF) == 1 )
    std::_Destroy_node(*a1, 0LL);
  *a1 = 0LL;
}
