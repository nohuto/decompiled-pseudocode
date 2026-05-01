/*
 * XREFs of ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x180582D48
 * Callers:
 *     ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1805840DC (--0-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocato_ea_1805840DC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1801093CC (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  size_t size_of; // rax
  _QWORD *v7; // rsi
  size_t v8; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    if ( a1[1] )
      goto LABEL_5;
    size_of = std::_Get_size_of_n<48>(1uLL);
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    std::wstring::wstring((__int64)(v7 + 2), (__int64)(v4 + 2));
    a1[3] = v7;
    while ( 1 )
    {
      a1[2] = v7;
      ++a1[1];
      v4 = (_QWORD *)*v4;
LABEL_5:
      if ( v4 == a3 )
        break;
      v8 = std::_Get_size_of_n<48>(1uLL);
      v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
      std::wstring::wstring((__int64)(v7 + 2), (__int64)(v4 + 2));
      *(_QWORD *)a1[2] = v7;
      v7[1] = a1[2];
    }
  }
}
