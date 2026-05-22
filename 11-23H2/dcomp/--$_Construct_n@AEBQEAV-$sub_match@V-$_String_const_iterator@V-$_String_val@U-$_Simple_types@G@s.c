/*
 * XREFs of ??$_Construct_n@AEBQEAV?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@AEBQEAV12@@?$vector@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBQEAV?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@1@1@Z @ 0x18001E510
 * Callers:
 *     ??0?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18001E5B8 (--0-$match_results@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180046C64 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall std::vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>>::_Construct_n<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>> * const &,std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>> * const &>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  SIZE_T size_of; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 i; // rcx

  if ( a2 )
  {
    if ( a2 > 0xAAAAAAAAAAAAAAALL )
      std::_Dwm_Xlength_error((const char *)a1);
    size_of = std::_Get_size_of_n<24>(a2);
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v9 + 24 * a2;
    v10 = *a4;
    for ( i = *a3; i != v10; i += 24LL )
    {
      *(_OWORD *)v9 = *(_OWORD *)i;
      *(_QWORD *)(v9 + 16) = *(_QWORD *)(i + 16);
      v9 += 24LL;
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
}
