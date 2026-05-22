/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals_t@0@PEAU10@_KAEAV?$allocator@U_Loop_vals_t@std@@@0@@Z @ 0x1800427E4
 * Callers:
 *     ??0?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@1@0AEBV?$regex_traits@G@1@PEAV_Root_node@1@IW4syntax_option_type@regex_constants@1@W4match_flag_type@61@@Z @ 0x18004241C (--0-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@GV-$r.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180042824 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_val.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<std::_Loop_vals_t>>(char *a1, __int64 a2)
{
  char *v3; // rdi

  v3 = a1;
  if ( a2 )
  {
    memset_0(a1, 0, 16 * a2);
    v3 += 16 * a2;
  }
  return v3;
}
