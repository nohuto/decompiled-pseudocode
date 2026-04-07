/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18004320C
 * Callers:
 *     ??0?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@_K@1@@Z @ 0x180043078 (--0-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ??0?$_Hash@V?$_Uset_traits@Ubase_class_id@detail@traits@cereal@@V?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@6@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@1@AEBV?$allocator@Ubase_class_id@detail@traits@cereal@@@1@@Z @ 0x180043160 (--0-$_Hash@V-$_Uset_traits@Ubase_class_id@detail@traits@cereal@@V-$_Uhash_compare@Ubase_class_id.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800441F4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::_Assign_grow(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v6; // rbp
  unsigned __int64 size_of; // rax
  unsigned __int64 *v8; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v10; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  v6 = (__int64)(v3 - *(_QWORD *)a1) >> 3;
  if ( v6 >= 0x10 )
  {
    result = 0LL;
    v10 = (v3 - *(_QWORD *)a1 + 7) >> 3;
    if ( *(_QWORD *)a1 > v3 )
      v10 = 0LL;
    if ( v10 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*(void **)a1, a3, v10);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>();
    v8 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    if ( v6 )
      std::_Deallocate<16,0>(*(void **)a1, 8 * v6);
    result = v8 + 16;
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v8 + 16;
    *(_QWORD *)(a1 + 16) = v8 + 16;
    while ( v8 != result )
      *v8++ = a3;
  }
  return result;
}
