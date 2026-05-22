/*
 * XREFs of ??0?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@1@0AEBV?$regex_traits@G@1@PEAV_Root_node@1@IW4syntax_option_type@regex_constants@1@W4match_flag_type@61@@Z @ 0x18004241C
 * Callers:
 *     ??$_Regex_search2@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@GV?$regex_traits@G@2@V12@@std@@YA_NV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@0PEAV?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@0@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@0@Z @ 0x1800420A0 (--$_Regex_search2@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V.c)
 * Callees:
 *     ??$_Uninitialized_value_construct_n@V?$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals_t@0@PEAU10@_KAEAV?$allocator@U_Loop_vals_t@std@@@0@@Z @ 0x1800427E4 (--$_Uninitialized_value_construct_n@V-$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180042824 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_val.c)
 */

__int64 __fastcall std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  bool v9; // cl
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx

  v9 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = a3;
  *(_QWORD *)(a1 + 168) = a2;
  *(_DWORD *)(a1 + 184) = a7;
  *(_QWORD *)(a1 + 176) = a5;
  *(_DWORD *)(a1 + 188) = a8;
  *(_BYTE *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = a6;
  if ( (*(_BYTE *)(a5 + 12) & 8) != 0 )
    v9 = (a8 & 0x10) == 0;
  *(_BYTE *)(a1 + 200) = v9;
  *(_QWORD *)(a1 + 208) = a4;
  v10 = *(unsigned int *)(a5 + 36);
  v11 = *(__int64 *)(a1 + 136) >> 4;
  if ( v10 < v11 )
  {
    *(_QWORD *)(a1 + 136) = 16 * v10;
  }
  else if ( v10 > v11 )
  {
    if ( v10 <= *(__int64 *)(a1 + 144) >> 4 )
      *(_QWORD *)(a1 + 136) = std::_Uninitialized_value_construct_n<std::allocator<std::_Loop_vals_t>>(
                                *(_QWORD *)(a1 + 136),
                                v10 - v11);
    else
      std::vector<std::_Loop_vals_t>::_Resize_reallocate<std::_Value_init_tag>(a1 + 128);
  }
  return a1;
}
