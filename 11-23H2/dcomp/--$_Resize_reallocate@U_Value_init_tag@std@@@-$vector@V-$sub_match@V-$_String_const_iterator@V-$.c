/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18001CD94
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18001CCE0 (--$_Resize@U_Value_init_tag@std@@@-$vector@V-$sub_match@V-$_String_const_iterator@V-$_String_val.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180046C64 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  SIZE_T size_of; // rax
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  _OWORD *v13; // rdx
  __int64 i; // rcx
  __int64 result; // rax
  __int64 v16; // xmm1_8

  v2 = 0xAAAAAAAAAAAAAAALL;
  if ( a2 > 0xAAAAAAAAAAAAAAALL )
    std::_Dwm_Xlength_error((const char *)a1);
  v5 = (a1[1] - *a1) / 24;
  v6 = (a1[2] - *a1) / 24;
  v7 = v6 >> 1;
  if ( v6 <= 0xAAAAAAAAAAAAAAALL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<24>(v2);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v10 = v9 + 24 * v5;
  v11 = a2 - v5;
  if ( a2 != v5 )
  {
    do
    {
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_BYTE *)(v10 + 16) = 0;
      v10 += 24LL;
      --v11;
    }
    while ( v11 );
  }
  v12 = a1[1];
  v13 = (_OWORD *)v9;
  for ( i = *a1; i != v12; i += 24LL )
  {
    *v13 = *(_OWORD *)i;
    v13 = (_OWORD *)((char *)v13 + 24);
    v16 = *(_QWORD *)(i + 16);
    *((_QWORD *)v13 - 1) = v16;
  }
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, 24 * ((a1[2] - *a1) / 24));
  result = 3 * v2;
  *a1 = v9;
  a1[1] = v9 + 24 * a2;
  a1[2] = v9 + 24 * v2;
  return result;
}
