/*
 * XREFs of ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180046C64
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18001CD94 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$sub_match@V-$_String_const_iterator@V-$.c)
 *     ??$_Construct_n@AEBQEAV?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@AEBQEAV12@@?$vector@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBQEAV?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@1@1@Z @ 0x18001E510 (--$_Construct_n@AEBQEAV-$sub_match@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@s.c)
 *     ?CheckForCycle@CompositionBrush@Composition@UI@Windows@@QEBAJPEBV1234@@Z @ 0x18004659C (-CheckForCycle@CompositionBrush@Composition@UI@Windows@@QEBAJPEBV1234@@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<24>(unsigned __int64 a1)
{
  if ( a1 > 0xAAAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  return 24 * a1;
}
