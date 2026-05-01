/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180584828
 * Callers:
 *     ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1805840DC (--0-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocato_ea_1805840DC.c)
 *     _std::list_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::list_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________::_1_::dtor$6 @ 0x18058417A (_std--list_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--a_ea_18058417A.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>(
        __int64 a1)
{
  _QWORD *v1; // rdi
  void *v2; // rbx

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0LL;
    **(_QWORD **)(a1 + 16) = 0LL;
    v1 = *(_QWORD **)(a1 + 24);
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      std::wstring::_Tidy_deallocate((__int64)v2 + 16);
      std::_Deallocate<16,0>(v2, 0x30uLL);
    }
  }
}
