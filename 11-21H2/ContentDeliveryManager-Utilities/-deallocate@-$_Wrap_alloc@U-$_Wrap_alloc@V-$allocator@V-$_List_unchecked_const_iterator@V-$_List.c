/*
 * XREFs of ?deallocate@?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@@std@@QEAAXPEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1800C2750
 * Callers:
 *     _std::vector_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::_Iterator_base0__std::_Wrap_alloc_std::allocator_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::_Iterator_base0_______::_Insert_n_::_1_::catch$0 @ 0x1800F507E (_std--vector_std--_List_unchecked_const_iterator_std--_List_val_std--_List_simple_t_ea_1800F507E.c)
 *     _std::vector_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::_Iterator_base0__std::_Wrap_alloc_std::allocator_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::_Iterator_base0_______::_Reallocate_::_1_::catch$0 @ 0x1800F50A4 (_std--vector_std--_List_unchecked_const_iterator_std--_List_val_std--_List_simple_t_ea_1800F50A4.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2);
}
