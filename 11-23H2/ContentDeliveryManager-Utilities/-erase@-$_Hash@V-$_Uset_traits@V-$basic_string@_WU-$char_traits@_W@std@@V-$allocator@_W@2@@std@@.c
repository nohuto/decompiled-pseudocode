/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V32@@Z @ 0x1800B0318
 * Callers:
 *     _std::_Hash_std::_Uset_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______0___::_Insert_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::_Iterator_base0____::_1_::catch$0 @ 0x1800DADFA (_std--_Hash_std--_Uset_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__s_ea_1800DADFA.c)
 *     _std::_Hash_std::_Uset_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______0___::_Insert_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&_std::_Nil__::_1_::catch$0 @ 0x1800DC5A5 (_std--_Hash_std--_Uset_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__s_ea_1800DC5A5.c)
 * Callees:
 *     ?_Hashval@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEBA_KAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x18006B2B8 (-_Hashval@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@st.c)
 *     ?erase@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@@Z @ 0x1800B03A8 (-erase@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *result; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Hashval(
         (__int64)a1,
         (const unsigned __int8 *)(a3 + 16));
  v7 = a1[2];
  v8 = 2 * v6;
  if ( *(_QWORD *)(v7 + 16 * v6 + 8) == a3 )
  {
    if ( *(_QWORD *)(v7 + 16 * v6) == a3 )
    {
      *(_QWORD *)(v7 + 16 * v6) = *a1;
      v7 = a1[2];
      v9 = *a1;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + 8);
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD *)(v7 + 16 * v6) == a3 )
  {
    *(_QWORD *)(v7 + 16 * v6) = *(_QWORD *)a3;
  }
  v10 = *(_QWORD *)std::list<std::wstring>::erase(a1, &v12, a3);
  result = a2;
  *a2 = v10;
  return result;
}
